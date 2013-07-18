// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// redisConnect
SEXP redisConnect(std::string host = "localhost", int port = 6379);
RcppExport SEXP Rhiredis_redisConnect(SEXP hostSEXP, SEXP portSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string host = Rcpp::as<std::string >(hostSEXP);
        int port = Rcpp::as<int >(portSEXP);
        SEXP __result = redisConnect(host, port);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// redisLPush
SEXP redisLPush(CharacterVector key, CharacterVector value, SEXP Rc);
RcppExport SEXP Rhiredis_redisLPush(SEXP keySEXP, SEXP valueSEXP, SEXP RcSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        CharacterVector key = Rcpp::as<CharacterVector >(keySEXP);
        CharacterVector value = Rcpp::as<CharacterVector >(valueSEXP);
        SEXP Rc = Rcpp::as<SEXP >(RcSEXP);
        SEXP __result = redisLPush(key, value, Rc);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}