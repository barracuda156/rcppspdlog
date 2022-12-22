// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_RcppSpdlog_RCPPEXPORTS_H_GEN_
#define RCPP_RcppSpdlog_RCPPEXPORTS_H_GEN_

#include "RcppSpdlog_types.h"
#include <Rcpp.h>

namespace RcppSpdlog {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("RcppSpdlog", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("RcppSpdlog", "_RcppSpdlog_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in RcppSpdlog");
            }
        }
    }

    inline std::string formatter(const std::string s, std::vector<std::string> v) {
        typedef SEXP(*Ptr_formatter)(SEXP,SEXP);
        static Ptr_formatter p_formatter = NULL;
        if (p_formatter == NULL) {
            validateSignature("std::string(*formatter)(const std::string,std::vector<std::string>)");
            p_formatter = (Ptr_formatter)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_formatter");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_formatter(Shield<SEXP>(Rcpp::wrap(s)), Shield<SEXP>(Rcpp::wrap(v)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::string >(rcpp_result_gen);
    }

    inline void log_setup(const std::string& name = "default", const std::string& level = "warn") {
        typedef SEXP(*Ptr_log_setup)(SEXP,SEXP);
        static Ptr_log_setup p_log_setup = NULL;
        if (p_log_setup == NULL) {
            validateSignature("void(*log_setup)(const std::string&,const std::string&)");
            p_log_setup = (Ptr_log_setup)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_setup");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_setup(Shield<SEXP>(Rcpp::wrap(name)), Shield<SEXP>(Rcpp::wrap(level)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_filesetup(const std::string& filename, const std::string& name = "default", const std::string& level = "warn") {
        typedef SEXP(*Ptr_log_filesetup)(SEXP,SEXP,SEXP);
        static Ptr_log_filesetup p_log_filesetup = NULL;
        if (p_log_filesetup == NULL) {
            validateSignature("void(*log_filesetup)(const std::string&,const std::string&,const std::string&)");
            p_log_filesetup = (Ptr_log_filesetup)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_filesetup");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_filesetup(Shield<SEXP>(Rcpp::wrap(filename)), Shield<SEXP>(Rcpp::wrap(name)), Shield<SEXP>(Rcpp::wrap(level)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_drop(const std::string& name) {
        typedef SEXP(*Ptr_log_drop)(SEXP);
        static Ptr_log_drop p_log_drop = NULL;
        if (p_log_drop == NULL) {
            validateSignature("void(*log_drop)(const std::string&)");
            p_log_drop = (Ptr_log_drop)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_drop");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_drop(Shield<SEXP>(Rcpp::wrap(name)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_set_pattern(const std::string& s) {
        typedef SEXP(*Ptr_log_set_pattern)(SEXP);
        static Ptr_log_set_pattern p_log_set_pattern = NULL;
        if (p_log_set_pattern == NULL) {
            validateSignature("void(*log_set_pattern)(const std::string&)");
            p_log_set_pattern = (Ptr_log_set_pattern)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_set_pattern");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_set_pattern(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_set_level(const std::string& s) {
        typedef SEXP(*Ptr_log_set_level)(SEXP);
        static Ptr_log_set_level p_log_set_level = NULL;
        if (p_log_set_level == NULL) {
            validateSignature("void(*log_set_level)(const std::string&)");
            p_log_set_level = (Ptr_log_set_level)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_set_level");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_set_level(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_trace(const std::string& s) {
        typedef SEXP(*Ptr_log_trace)(SEXP);
        static Ptr_log_trace p_log_trace = NULL;
        if (p_log_trace == NULL) {
            validateSignature("void(*log_trace)(const std::string&)");
            p_log_trace = (Ptr_log_trace)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_trace");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_trace(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_debug(const std::string& s) {
        typedef SEXP(*Ptr_log_debug)(SEXP);
        static Ptr_log_debug p_log_debug = NULL;
        if (p_log_debug == NULL) {
            validateSignature("void(*log_debug)(const std::string&)");
            p_log_debug = (Ptr_log_debug)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_debug");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_debug(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_info(const std::string& s) {
        typedef SEXP(*Ptr_log_info)(SEXP);
        static Ptr_log_info p_log_info = NULL;
        if (p_log_info == NULL) {
            validateSignature("void(*log_info)(const std::string&)");
            p_log_info = (Ptr_log_info)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_info");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_info(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_warn(const std::string& s) {
        typedef SEXP(*Ptr_log_warn)(SEXP);
        static Ptr_log_warn p_log_warn = NULL;
        if (p_log_warn == NULL) {
            validateSignature("void(*log_warn)(const std::string&)");
            p_log_warn = (Ptr_log_warn)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_warn");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_warn(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_error(const std::string& s) {
        typedef SEXP(*Ptr_log_error)(SEXP);
        static Ptr_log_error p_log_error = NULL;
        if (p_log_error == NULL) {
            validateSignature("void(*log_error)(const std::string&)");
            p_log_error = (Ptr_log_error)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_error");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_error(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline void log_critical(const std::string& s) {
        typedef SEXP(*Ptr_log_critical)(SEXP);
        static Ptr_log_critical p_log_critical = NULL;
        if (p_log_critical == NULL) {
            validateSignature("void(*log_critical)(const std::string&)");
            p_log_critical = (Ptr_log_critical)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_log_critical");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_log_critical(Shield<SEXP>(Rcpp::wrap(s)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
    }

    inline Rcpp::XPtr<spdlog::stopwatch> get_stopwatch() {
        typedef SEXP(*Ptr_get_stopwatch)();
        static Ptr_get_stopwatch p_get_stopwatch = NULL;
        if (p_get_stopwatch == NULL) {
            validateSignature("Rcpp::XPtr<spdlog::stopwatch>(*get_stopwatch)()");
            p_get_stopwatch = (Ptr_get_stopwatch)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_get_stopwatch");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_stopwatch();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::XPtr<spdlog::stopwatch> >(rcpp_result_gen);
    }

    inline double elapsed_stopwatch(Rcpp::XPtr<spdlog::stopwatch> sw) {
        typedef SEXP(*Ptr_elapsed_stopwatch)(SEXP);
        static Ptr_elapsed_stopwatch p_elapsed_stopwatch = NULL;
        if (p_elapsed_stopwatch == NULL) {
            validateSignature("double(*elapsed_stopwatch)(Rcpp::XPtr<spdlog::stopwatch>)");
            p_elapsed_stopwatch = (Ptr_elapsed_stopwatch)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_elapsed_stopwatch");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_elapsed_stopwatch(Shield<SEXP>(Rcpp::wrap(sw)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::string format_stopwatch(Rcpp::XPtr<spdlog::stopwatch> sw) {
        typedef SEXP(*Ptr_format_stopwatch)(SEXP);
        static Ptr_format_stopwatch p_format_stopwatch = NULL;
        if (p_format_stopwatch == NULL) {
            validateSignature("std::string(*format_stopwatch)(Rcpp::XPtr<spdlog::stopwatch>)");
            p_format_stopwatch = (Ptr_format_stopwatch)R_GetCCallable("RcppSpdlog", "_RcppSpdlog_format_stopwatch");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_format_stopwatch(Shield<SEXP>(Rcpp::wrap(sw)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::string >(rcpp_result_gen);
    }

}

#endif // RCPP_RcppSpdlog_RCPPEXPORTS_H_GEN_
