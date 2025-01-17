###  2022 

2022-12-13  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.11 
 
        * vignettes/introduction.md: Microedit 
 
2022-12-12  Dirk Eddelbuettel  <edd@debian.org> 
 
        * src/interface.cpp (log_filesetup): Setup (simple) file-based logger 
        * R/RcppExports.R: R accessor 
        * src/RcppExports.cpp: Autogenerated export for C level access 
        * inst/include/RcppSpdlog_RcppExports.h: Idem 
        * inst/include/rcpp_sink.h: Added #include 
        * man/log_setup.Rd: Added documentation 
        * inst/include/spdl.h: Added in spdl namespace 
 
2022-12-02  Dirk Eddelbuettel  <edd@debian.org> 
 
        * README.md: Mention the new spdl package 
 
2022-11-18  Dirk Eddelbuettel  <edd@debian.org> 
 
        * src/formatter.cpp: Export to C++ to make formatter() callable 
        * src/RcppExports.cpp: Autogenerated export for C level access 
        * inst/include/RcppSpdlog_RcppExports.h: Idem 
 
2022-11-17  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.10 
 
        * vignettes/introduction.md: More edits 
 
2022-11-15  Dirk Eddelbuettel  <edd@debian.org> 
 
         * src/formatter.cpp (formatter): Add formatting helper which passes 
        logging string to fmt::format() enable fmt's "format" from R 
        * src/RcppExports.cpp: Ditto 
        * R/RcppExports.R (formatter): Ditto 
        * man/formatter.Rd: Docs 
 
        * inst/include/spdl.h: Include fmtlib::fmt via spdlog 
 
2022-11-14  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll micro release version 
 
        * inst/include/spdl.h: Use variadic templates to fmt::format 
 
2022-11-04  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.9 
 
2022-11-03  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll micro release version 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.11.0 
 
         * vignettes/introduction.md: Small edits 
 
2022-11-02  Dirk Eddelbuettel  <edd@debian.org> 
 
        * vignettes/introduction.md: New sections for access from R and C++ 
 
2022-11-01  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll micro release version 
 
        * inst/include/RcppSpdlog: Ad second shorter namespace 'spdl' with 
        shorter (inlined) function names as simpler accessors 
 
         * vignettes/introduction.md: Two new sections on access from R and 
        C++, respectively 
 
2022-10-31  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll micro release version 
 
2022-10-30  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll micro release version 
 
        * src/interface.cpp: Add R interface to spdlog 
        * man/log_setup.Rd: Documentation 
 
        * .github/workflows/ci.yaml (jobs): Update to actions/checkout@v3 
 
        * src/interface.cpp: Activate R and C++ interface generation 
        * R/RcppExports.R: Updated accordingly 
        * src/RcppExports.cpp: Idem 
        * inst/include/RcppSpdlog.h: Generated 
        * inst/include/RcppSpdlog_RcppExports.h: Idem 
 
2022-04-04  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.8 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.10.0 
 
###  2021 

2021-12-05  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.7 
 
2021-11-20  Dirk Eddelbuettel  <edd@debian.org> 
 
        * vignettes/water.css: Added css file 
 
2021-11-19  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll minor version 
 
        * vignettes/introduction.md: Converted from Rmd to simplermarkdown 
        * DESCRIPTION: Switched VignetteBuilder: to simplermarkdown 
 
2021-08-12  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll minor version 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.9.2 
 
2021-07-27  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Roll minor version 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.9.1 
 
2021-07-21  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.6 
 
        * inst/include/spdlog/*: New upstream spdlog 1.9.0 (with fmt 8.x) 
 
2021-03-28  Dirk Eddelbuettel  <edd@debian.org> 
 
        * docs/mkdmt-src/: Moved mkdocs-material input 
 
2021-03-27  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.5 
 
2021-03-25  Dirk Eddelbuettel  <edd@debian.org> 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.8.4 + 1.8.5 
 
2021-03-24  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Description): Mention Gabi explicitly 
        (URL): List GitHub repo and package pages 
        (BugReports): List GitHub issues pages 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.8.3 
 
###  2020 

2020-12-25  Dirk Eddelbuettel  <edd@debian.org> 
 
        * .github/workflows/ci.yaml: Small tweaks to CI YAML file 
 
2020-12-11  Dirk Eddelbuettel  <edd@debian.org> 
 
        * DESCRIPTION (Version, Date): Version 0.0.4 
 
        * inst/include/spdlog/*: New upstream release spdlog 1.8.2 
 
        * .github/workflows/ci.yaml: Add CI runner using r-ci 
 
2020-10-23  Dirk Eddelbuettel  <edd@debian.org> 
 
         * DESCRIPTION (Version, Date): Version 0.0.3 
 
        * docs/: Added package website 
        * docs-src/: Added package website inputs 
 
2020-10-19  Dirk Eddelbuettel  <edd@debian.org> 
 
        * README.md: Updated example 
 
2020-10-08  Dirk Eddelbuettel  <edd@debian.org> 
 
        * vignettes/introduction.Rmd (vignette): Compile-time example added 
 
2020-10-04  Dirk Eddelbuettel  <edd@debian.org> 
 
        * vignettes/introduction.Rmd (vignette): New (draft) vignette 
 
        * DESCRIPTION (VignetteBuilder): Add knitr 
        (Suggests): Add knitr, rmarkdown, minidown 
 
        * inst/examples/exampleTwo.cpp (exampleTwo): Added cleanup at end 
        with logger removal to permit multiple calls to example function 
        * inst/examples/exampleThree.cpp (exampleThree): Idem 
 
2020-10-01  Dirk Eddelbuettel  <edd@debian.org> 
 
        * inst/include/spdlog/*: Upgraded to upstream release 1.8.1 
 
2020-09-30  Dirk Eddelbuettel  <edd@debian.org> 
 
        * src/exampleRsink.cpp (exampleRsink): Use default logger instance 
 
2020-09-29  Dirk Eddelbuettel  <edd@debian.org> 
 
        * src/exampleRsink.cpp (setLogLevel): New function 
        * R/RcppExports.R (exampleRsink): R accessor 
        * man/setLogLevel.Rd: Documentation 
 
2020-09-28  Dirk Eddelbuettel  <edd@debian.org> 
 
        * inst/include/spdlog/logger-inl.h: Synchronised with our PR #1685 
        switching to REprintf() if R_R_H and USING_R defined 
 
        * inst/include/RcppSpdlog: Include R.h so that R_R_H and USING_R 
        defined, define SPDLOG_DISABLE_DEFAULT_LOGGER here 
        * src/exampleRsink.cpp: Removed SPDLOG_DISABLE_DEFAULT_LOGGER def. 
 
2020-09-17  Dirk Eddelbuettel  <edd@debian.org> 
 
         * DESCRIPTION (Version, Date): Version 0.0.2 
 
        * inst/include/spdlog/*: Upgraded to upstream release 1.8.0 
        * inst/include/spdlog/logger-inl.h: Switch to REprintf as before 
 
        * .travis.yml: Use BSPM, turn os macOS 
 
        * src/exampleRsink.cpp (exampleRsink): Add 'stopwatch' demo 
 
2020-09-08  Dirk Eddelbuettel  <edd@debian.org> 
 
         * DESCRIPTION (Version, Date): Version 0.0.1 
 
2020-08-21  Dirk Eddelbuettel  <edd@debian.org> 
 
        * src/exampleRsink.cpp: Renamed from exampleFour() 
        * man/exampleRsink.Rd: Idem 
        * src/RcppExports.cpp: Updated 
        * R/RcppExports.R: Idem 
 
        * README.md: Some more edits 
 
2020-08-20  Dirk Eddelbuettel  <edd@debian.org> 
 
        * inst/include/RcppSpdlog: Easy wrapper for spdlog and R sink 
        * inst/include/rcpp_sink.h: A sink for R using Rcpp::Rcout 
 
        * src/exampleFour.cpp: Rewritten and now R CMD check clean 
        * inst/examples/examplesFour.cpp: Now in src/, R sink in its header 
 
        * README.md: Edited, added two badges 
 
        * cleanup: Added 
        * .editorconfig: Idem 
 
2020-08-19  Dirk Eddelbuettel  <edd@debian.org> 
 
        * inst/include/spdlog/*: Using spdlog version 1.7 
        * inst/examples/*: Four simple usage examples 
 
        * .travis.yml: Added though no real tests present 
 
        * src/exampleFour.cpp (exampleFour): Simple wrapper around simple 
        Rcpp logger class which still triggers R warnings 
        * man/exampleFour.Rd: Basic help page 
        * src/RcppExports.cpp: Generated 
        * src/Makevars: Added 
        * R/RcppExports.R: Idem 
        * NAMESPACE: Added 
        * DESCRIPTION: Added Imports: and LinkingTo: for Rcpp 
