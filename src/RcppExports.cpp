// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// slice_sample_gamma
NumericVector slice_sample_gamma(double alpha, double beta, double lower, double upper);
RcppExport SEXP BTYDplus_slice_sample_gamma(SEXP alphaSEXP, SEXP betaSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    __result = Rcpp::wrap(slice_sample_gamma(alpha, beta, lower, upper));
    return __result;
END_RCPP
}
// slice_sample_mvnorm
NumericVector slice_sample_mvnorm(NumericVector sigma);
RcppExport SEXP BTYDplus_slice_sample_mvnorm(SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type sigma(sigmaSEXP);
    __result = Rcpp::wrap(slice_sample_mvnorm(sigma));
    return __result;
END_RCPP
}
// slice_sample_gamma_parameters
NumericVector slice_sample_gamma_parameters(NumericVector data, NumericVector init, NumericVector hyper, double steps, double w);
RcppExport SEXP BTYDplus_slice_sample_gamma_parameters(SEXP dataSEXP, SEXP initSEXP, SEXP hyperSEXP, SEXP stepsSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type init(initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type hyper(hyperSEXP);
    Rcpp::traits::input_parameter< double >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< double >::type w(wSEXP);
    __result = Rcpp::wrap(slice_sample_gamma_parameters(data, init, hyper, steps, w));
    return __result;
END_RCPP
}
// slice_sample_ma_liu
NumericVector slice_sample_ma_liu(String what, NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector lambda, NumericVector mu, double r, double alpha, double s, double beta);
RcppExport SEXP BTYDplus_slice_sample_ma_liu(SEXP whatSEXP, SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP lambdaSEXP, SEXP muSEXP, SEXP rSEXP, SEXP alphaSEXP, SEXP sSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< String >::type what(whatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    __result = Rcpp::wrap(slice_sample_ma_liu(what, x, tx, Tcal, lambda, mu, r, alpha, s, beta));
    return __result;
END_RCPP
}
// pggg_palive
NumericVector pggg_palive(NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector k, NumericVector lambda, NumericVector mu);
RcppExport SEXP BTYDplus_pggg_palive(SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    __result = Rcpp::wrap(pggg_palive(x, tx, Tcal, k, lambda, mu));
    return __result;
END_RCPP
}
// pggg_slice_sample
NumericVector pggg_slice_sample(String what, NumericVector x, NumericVector tx, NumericVector Tcal, NumericVector litt, NumericVector k, NumericVector lambda, NumericVector mu, NumericVector tau, double t, double gamma, double r, double alpha, double s, double beta);
RcppExport SEXP BTYDplus_pggg_slice_sample(SEXP whatSEXP, SEXP xSEXP, SEXP txSEXP, SEXP TcalSEXP, SEXP littSEXP, SEXP kSEXP, SEXP lambdaSEXP, SEXP muSEXP, SEXP tauSEXP, SEXP tSEXP, SEXP gammaSEXP, SEXP rSEXP, SEXP alphaSEXP, SEXP sSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< String >::type what(whatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tx(txSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Tcal(TcalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type litt(littSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    __result = Rcpp::wrap(pggg_slice_sample(what, x, tx, Tcal, litt, k, lambda, mu, tau, t, gamma, r, alpha, s, beta));
    return __result;
END_RCPP
}
// bgcnbd_pmf_cpp
double bgcnbd_pmf_cpp(NumericVector params, double t, int x, bool dropout_at_zero);
RcppExport SEXP BTYDplus_bgcnbd_pmf_cpp(SEXP paramsSEXP, SEXP tSEXP, SEXP xSEXP, SEXP dropout_at_zeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type dropout_at_zero(dropout_at_zeroSEXP);
    __result = Rcpp::wrap(bgcnbd_pmf_cpp(params, t, x, dropout_at_zero));
    return __result;
END_RCPP
}
// bgcnbd_exp_cpp
double bgcnbd_exp_cpp(NumericVector params, double t, bool dropout_at_zero);
RcppExport SEXP BTYDplus_bgcnbd_exp_cpp(SEXP paramsSEXP, SEXP tSEXP, SEXP dropout_at_zeroSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< bool >::type dropout_at_zero(dropout_at_zeroSEXP);
    __result = Rcpp::wrap(bgcnbd_exp_cpp(params, t, dropout_at_zero));
    return __result;
END_RCPP
}
