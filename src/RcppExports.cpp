// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fmatch
IntegerVector fmatch(std::vector< std::string > x, std::vector< std::string > y);
RcppExport SEXP fmatch_fmatch(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::vector< std::string > >::type y(ySEXP );
        IntegerVector __result = fmatch(x, y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}