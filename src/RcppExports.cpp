// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppSpdlog.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// exampleRsink
void exampleRsink();
RcppExport SEXP _RcppSpdlog_exampleRsink() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    exampleRsink();
    return R_NilValue;
END_RCPP
}
// setLogLevel
void setLogLevel(const std::string& name);
RcppExport SEXP _RcppSpdlog_setLogLevel(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    setLogLevel(name);
    return R_NilValue;
END_RCPP
}
// log_setup
void log_setup(const std::string& name, const std::string& level);
static SEXP _RcppSpdlog_log_setup_try(SEXP nameSEXP, SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type level(levelSEXP);
    log_setup(name, level);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_setup(SEXP nameSEXP, SEXP levelSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_setup_try(nameSEXP, levelSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_drop
void log_drop(const std::string& name);
static SEXP _RcppSpdlog_log_drop_try(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    log_drop(name);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_drop(SEXP nameSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_drop_try(nameSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_set_pattern
void log_set_pattern(const std::string& s);
static SEXP _RcppSpdlog_log_set_pattern_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_set_pattern(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_set_pattern(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_set_pattern_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_set_level
void log_set_level(const std::string& s);
static SEXP _RcppSpdlog_log_set_level_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_set_level(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_set_level(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_set_level_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_trace
void log_trace(const std::string& s);
static SEXP _RcppSpdlog_log_trace_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_trace(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_trace(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_trace_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_debug
void log_debug(const std::string& s);
static SEXP _RcppSpdlog_log_debug_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_debug(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_debug(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_debug_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_info
void log_info(const std::string& s);
static SEXP _RcppSpdlog_log_info_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_info(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_info(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_info_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_warn
void log_warn(const std::string& s);
static SEXP _RcppSpdlog_log_warn_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_warn(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_warn(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_warn_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_error
void log_error(const std::string& s);
static SEXP _RcppSpdlog_log_error_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_error(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_error(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_error_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// log_critical
void log_critical(const std::string& s);
static SEXP _RcppSpdlog_log_critical_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const std::string& >::type s(sSEXP);
    log_critical(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppSpdlog_log_critical(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppSpdlog_log_critical_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _RcppSpdlog_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("void(*log_setup)(const std::string&,const std::string&)");
        signatures.insert("void(*log_drop)(const std::string&)");
        signatures.insert("void(*log_set_pattern)(const std::string&)");
        signatures.insert("void(*log_set_level)(const std::string&)");
        signatures.insert("void(*log_trace)(const std::string&)");
        signatures.insert("void(*log_debug)(const std::string&)");
        signatures.insert("void(*log_info)(const std::string&)");
        signatures.insert("void(*log_warn)(const std::string&)");
        signatures.insert("void(*log_error)(const std::string&)");
        signatures.insert("void(*log_critical)(const std::string&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _RcppSpdlog_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_setup", (DL_FUNC)_RcppSpdlog_log_setup_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_drop", (DL_FUNC)_RcppSpdlog_log_drop_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_set_pattern", (DL_FUNC)_RcppSpdlog_log_set_pattern_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_set_level", (DL_FUNC)_RcppSpdlog_log_set_level_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_trace", (DL_FUNC)_RcppSpdlog_log_trace_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_debug", (DL_FUNC)_RcppSpdlog_log_debug_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_info", (DL_FUNC)_RcppSpdlog_log_info_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_warn", (DL_FUNC)_RcppSpdlog_log_warn_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_error", (DL_FUNC)_RcppSpdlog_log_error_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_log_critical", (DL_FUNC)_RcppSpdlog_log_critical_try);
    R_RegisterCCallable("RcppSpdlog", "_RcppSpdlog_RcppExport_validate", (DL_FUNC)_RcppSpdlog_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppSpdlog_exampleRsink", (DL_FUNC) &_RcppSpdlog_exampleRsink, 0},
    {"_RcppSpdlog_setLogLevel", (DL_FUNC) &_RcppSpdlog_setLogLevel, 1},
    {"_RcppSpdlog_log_setup", (DL_FUNC) &_RcppSpdlog_log_setup, 2},
    {"_RcppSpdlog_log_drop", (DL_FUNC) &_RcppSpdlog_log_drop, 1},
    {"_RcppSpdlog_log_set_pattern", (DL_FUNC) &_RcppSpdlog_log_set_pattern, 1},
    {"_RcppSpdlog_log_set_level", (DL_FUNC) &_RcppSpdlog_log_set_level, 1},
    {"_RcppSpdlog_log_trace", (DL_FUNC) &_RcppSpdlog_log_trace, 1},
    {"_RcppSpdlog_log_debug", (DL_FUNC) &_RcppSpdlog_log_debug, 1},
    {"_RcppSpdlog_log_info", (DL_FUNC) &_RcppSpdlog_log_info, 1},
    {"_RcppSpdlog_log_warn", (DL_FUNC) &_RcppSpdlog_log_warn, 1},
    {"_RcppSpdlog_log_error", (DL_FUNC) &_RcppSpdlog_log_error, 1},
    {"_RcppSpdlog_log_critical", (DL_FUNC) &_RcppSpdlog_log_critical, 1},
    {"_RcppSpdlog_RcppExport_registerCCallable", (DL_FUNC) &_RcppSpdlog_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppSpdlog(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
