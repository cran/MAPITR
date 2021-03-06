// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// GetLinearKernel
arma::mat GetLinearKernel(arma::mat X);
RcppExport SEXP _MAPITR_GetLinearKernel(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(GetLinearKernel(X));
    return rcpp_result_gen;
END_RCPP
}
// MAPITRBase
List MAPITRBase(arma::mat X, arma::mat Y, List regions, int cores);
RcppExport SEXP _MAPITR_MAPITRBase(SEXP XSEXP, SEXP YSEXP, SEXP regionsSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(MAPITRBase(X, Y, regions, cores));
    return rcpp_result_gen;
END_RCPP
}
// MAPITRBaseCovs
List MAPITRBaseCovs(arma::mat X, arma::mat Y, arma::mat Z, List regions, int cores);
RcppExport SEXP _MAPITR_MAPITRBaseCovs(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP regionsSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< List >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(MAPITRBaseCovs(X, Y, Z, regions, cores));
    return rcpp_result_gen;
END_RCPP
}
// MAPITRBase_noOpenMP
List MAPITRBase_noOpenMP(arma::mat X, arma::mat Y, List regions);
RcppExport SEXP _MAPITR_MAPITRBase_noOpenMP(SEXP XSEXP, SEXP YSEXP, SEXP regionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type regions(regionsSEXP);
    rcpp_result_gen = Rcpp::wrap(MAPITRBase_noOpenMP(X, Y, regions));
    return rcpp_result_gen;
END_RCPP
}
// MAPITRBaseCovs_noOpenMP
List MAPITRBaseCovs_noOpenMP(arma::mat X, arma::mat Y, arma::mat Z, List regions);
RcppExport SEXP _MAPITR_MAPITRBaseCovs_noOpenMP(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP regionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< List >::type regions(regionsSEXP);
    rcpp_result_gen = Rcpp::wrap(MAPITRBaseCovs_noOpenMP(X, Y, Z, regions));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MAPITR_GetLinearKernel", (DL_FUNC) &_MAPITR_GetLinearKernel, 1},
    {"_MAPITR_MAPITRBase", (DL_FUNC) &_MAPITR_MAPITRBase, 4},
    {"_MAPITR_MAPITRBaseCovs", (DL_FUNC) &_MAPITR_MAPITRBaseCovs, 5},
    {"_MAPITR_MAPITRBase_noOpenMP", (DL_FUNC) &_MAPITR_MAPITRBase_noOpenMP, 3},
    {"_MAPITR_MAPITRBaseCovs_noOpenMP", (DL_FUNC) &_MAPITR_MAPITRBaseCovs_noOpenMP, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_MAPITR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
