

// [[Rcpp::interfaces(r, cpp)]]

// This portmanteau include also defines the r_sink we use below, and which
// diverts all logging to R via the Rcpp::Rcout replacement for std::cout
#include <RcppSpdlog>

static std::shared_ptr<spdlog::logger> logger_ = nullptr;

// See eg https://spdlog.docsforge.com/v1.x/3.custom-formatting/#pattern-flags or
// https://github.com/gabime/spdlog/wiki/3.-Custom-formatting
const std::string default_log_pattern = "[%Y-%m-%d %H:%M:%S.%e] [%n] [Process: %P] [%l] %v";

//' R Accessor Functions for spdlog Logger
//'
//' Several R-level functions can access the \code{spdlog} logging facilties. As \code{spdlog}
//' is a C++-level logging library, these are R function permit concurrent logging from both
//' R and C++.
//'
//' Several functions are provided:
//' \describe{
//'    \item{\code{log_setup}}{Initializes a logger (which becomes the default logger).}
//'    \item{\code{log_filesetup}}{Initializes a file-based logger (which becomes the default).}
//'    \item{\code{log_drop}}{Removes logger (which in general should not be needed).}
//'    \item{\code{log_set_pattern}}{Changes the default logging message pattern.}
//'    \item{\code{log_set_level}}{Sets the logging level threshold.}
//'    \item{\code{log_trace}}{Logs a trace-level message.}
//'    \item{\code{log_debug}}{Logs a debug-level message.}
//'    \item{\code{log_info}}{Logs a info-level message.}
//'    \item{\code{log_warn}}{Logs a warn-level message.}
//'    \item{\code{log_error}}{Logs a error-level message.}
//'    \item{\code{log_critical}}{Logs a critical-level message.}
//' }
//'
//' Supported logging levels are, in order of increasing threshold values, \sQuote{trace},
//' \sQuote{debug}, \sQuote{warn}, \sQuote{info}, \sQuote{warn}, \sQuote{error}, and
//' \sQuote{critical}.  A message issued below the current threshold is not displayed whereas
//' a message at or above the current threshold is displayed.  The default level is \sQuote{warn}.
//'
//' @seealso The logging pattern format is described in at the repo in the page
//' \url{https://github.com/gabime/spdlog/wiki/3.-Custom-formatting}.
//'
//' @param name A character variable with the logging instance name, default value is \sQuote{default}.
//' @param level A character variable with the default logging level, default value is \sQuote{warn}.
//' @param s A character variable with the logging pattern, level or message.
//' @param filename A character variable with the logging filename if a file-based logger is
//' instantiated.
//'
//' @return Nothing is returned from these functions as they are invoked for their side-effects.
//'
//' @examples
//' log_setup("demo")
//' log_info("this message is NOT seen")
//' log_set_level("debug")
//' log_info("this message is seen")
//' log_warn("as is this message")
//'
// [[Rcpp::export]]
void log_setup(const std::string& name = "default", const std::string& level = "warn") {
    // If a logger exists and has non-default name, remove it
    if (logger_ != nullptr && name != "default") {
        spdlog::drop(name);
    }

    // Get the named logger, creating it if needed
    logger_ = spdlog::get(name);
    if (logger_ == nullptr) {
        logger_ = spdlog::r_sink_mt(name);
        spdlog::set_default_logger(logger_);
    }

    // Setting default pattern and chosen (or default) level
    spdlog::set_pattern(default_log_pattern);
    spdlog::set_level(spdlog::level::from_str(level));
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_filesetup(const std::string& filename, const std::string &name = "default", const std::string& level = "warn") {
    // If a logger exists and has non-default name, remove it
    if (logger_ != nullptr && name != "default") {
        spdlog::drop(name);
    }

    // Get the named logger, creating it if needed
    logger_ = spdlog::get(name);
    if (logger_ == nullptr) {
        logger_ = spdlog::basic_logger_mt(name, filename);
        spdlog::set_default_logger(logger_);
    }

    // Setting default pattern and chosen (or default) level
    spdlog::set_pattern(default_log_pattern);
    spdlog::set_level(spdlog::level::from_str(level));
}

void assert_and_setup_if_needed(void) {
    if (logger_ == nullptr)
        log_setup();
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_drop(const std::string &name) {
    assert_and_setup_if_needed();
    spdlog::drop(name);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_set_pattern(const std::string &s) {
    assert_and_setup_if_needed();
    spdlog::set_pattern(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_set_level(const std::string &s) {
    assert_and_setup_if_needed();
    spdlog::set_level(spdlog::level::from_str(s));
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_trace(const std::string &s) {
    assert_and_setup_if_needed();
    spdlog::trace(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_debug(const std::string &s) {
    assert_and_setup_if_needed();
    spdlog::debug(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_info(const std::string& s) {
    assert_and_setup_if_needed();
    spdlog::info(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_warn(const std::string& s) {
    assert_and_setup_if_needed();
    spdlog::warn(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_error(const std::string& s) {
    assert_and_setup_if_needed();
    spdlog::error(s);
}

//' @rdname log_setup
// [[Rcpp::export]]
void log_critical(const std::string& s) {
    assert_and_setup_if_needed();
    spdlog::critical(s);
}

template <typename T> Rcpp::XPtr<T> make_xptr(T* p) {
    return Rcpp::XPtr<T>(p);
}

//' R Accessor Functions for spdlog Stopwatch
//'
//' A set of functions provides access to the \code{spdlog} stopwatch facilty. As \code{stopwatch}
//' object is a simple container around a C++ \code{std::chrono} object which (essentially) reports
//' elapsed-time since creation. The object is exported to R via an external pointer permitting use
//' from both R and C++.
//'
//' Several functions are provided:
//' \describe{
//'    \item{\code{get_stopwatch}}{Returns a stopwatch object (as an S3 object).}
//'    \item{\code{elapsed_stopwatch}}{Returns elapsed time for stopwatch in seconds.}
//'    \item{\code{format_stopwatch}}{Returns elapsed time for stopwatch as character variable.}
//' }
//' The \code{stopwatch} object has \code{print} and \code{format} methods.
//'
//' @param sw An S3 object of type \code{stopwatch}.
//' @param x An S3 object of type \code{stopwatch}.
//' @param ... Dotted argument required by generic, unused here.
//'
//' @return The desired object is returned: respectively, a stopwatch object as an external pointer
//' in an S3 class, the elapsed time in seconds as a double, or formatted as a character variable.
//'
//' @examples
//' w <- get_stopwatch()
//' Sys.sleep(0.2)
//' elapsed_stopwatch(w)
//' format_stopwatch(w)
//' @rdname get_stopwatch
// [[Rcpp::export]]
Rcpp::XPtr<spdlog::stopwatch> get_stopwatch() {
    auto sw = make_xptr(new spdlog::stopwatch());
    sw.attr("class") = Rcpp::CharacterVector::create("stopwatch", "externalptr");
    return sw;
}

//' @rdname get_stopwatch
// [[Rcpp::export]]
double elapsed_stopwatch(Rcpp::XPtr<spdlog::stopwatch> sw) {
    return sw->elapsed().count();
}

//' @rdname get_stopwatch
// [[Rcpp::export]]
std::string format_stopwatch(Rcpp::XPtr<spdlog::stopwatch> sw) {
    return std::to_string(elapsed_stopwatch(sw));
}
