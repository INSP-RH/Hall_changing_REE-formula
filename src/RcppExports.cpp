

#include <Rcpp.h>

using namespace Rcpp;

// adult_weight_wrapper
List adult_weight_wrapper(NumericVector bw, NumericVector ht, NumericVector age, NumericVector sex, NumericMatrix EIchange, NumericMatrix NAchange, NumericVector PAL, NumericVector pcarb_base, NumericVector pcarb, double dt, double REE_formula, double days, bool checkValues);
RcppExport SEXP _bw_adult_weight_wrapper(SEXP bwSEXP, SEXP htSEXP, SEXP ageSEXP, SEXP sexSEXP, SEXP EIchangeSEXP, SEXP NAchangeSEXP, SEXP PALSEXP, SEXP pcarb_baseSEXP, SEXP pcarbSEXP, SEXP dtSEXP, SEXP REE_formulaSEXP, SEXP daysSEXP, SEXP checkValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ht(htSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type EIchange(EIchangeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NAchange(NAchangeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PAL(PALSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb_base(pcarb_baseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb(pcarbSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type REE_formula(REE_formulaSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< bool >::type checkValues(checkValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(adult_weight_wrapper(bw, ht, age, sex, EIchange, NAchange, PAL, pcarb_base, pcarb, dt, REE_formula, days, checkValues));
    return rcpp_result_gen;
END_RCPP
}
// adult_weight_wrapper_EI
List adult_weight_wrapper_EI(NumericVector bw, NumericVector ht, NumericVector age, NumericVector sex, NumericMatrix EIchange, NumericMatrix NAchange, NumericVector PAL, NumericVector pcarb_base, NumericVector pcarb, double dt, double REE_formula, NumericVector extradata, double days, bool checkValues, bool isEnergy);
RcppExport SEXP _bw_adult_weight_wrapper_EI(SEXP bwSEXP, SEXP htSEXP, SEXP ageSEXP, SEXP sexSEXP, SEXP EIchangeSEXP, SEXP NAchangeSEXP, SEXP PALSEXP, SEXP pcarb_baseSEXP, SEXP pcarbSEXP, SEXP dtSEXP, SEXP REE_formulaSEXP, SEXP extradataSEXP, SEXP daysSEXP, SEXP checkValuesSEXP, SEXP isEnergySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ht(htSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type EIchange(EIchangeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NAchange(NAchangeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PAL(PALSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb_base(pcarb_baseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb(pcarbSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type REE_formula(REE_formulaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type extradata(extradataSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< bool >::type checkValues(checkValuesSEXP);
    Rcpp::traits::input_parameter< bool >::type isEnergy(isEnergySEXP);
    rcpp_result_gen = Rcpp::wrap(adult_weight_wrapper_EI(bw, ht, age, sex, EIchange, NAchange, PAL, pcarb_base, pcarb, dt, REE_formula, extradata, days, checkValues, isEnergy));
    return rcpp_result_gen;
END_RCPP
}
// adult_weight_wrapper_EI_fat
List adult_weight_wrapper_EI_fat(NumericVector bw, NumericVector ht, NumericVector age, NumericVector sex, NumericMatrix EIchange, NumericMatrix NAchange, NumericVector PAL, NumericVector pcarb_base, NumericVector pcarb, double dt, double REE_formula, NumericVector input_EI, NumericVector input_fat, double days, bool checkValues);
RcppExport SEXP _bw_adult_weight_wrapper_EI_fat(SEXP bwSEXP, SEXP htSEXP, SEXP ageSEXP, SEXP sexSEXP, SEXP EIchangeSEXP, SEXP NAchangeSEXP, SEXP PALSEXP, SEXP pcarb_baseSEXP, SEXP pcarbSEXP, SEXP dtSEXP, SEXP REE_formulaSEXP, SEXP input_EISEXP, SEXP input_fatSEXP, SEXP daysSEXP, SEXP checkValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ht(htSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type EIchange(EIchangeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type NAchange(NAchangeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type PAL(PALSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb_base(pcarb_baseSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pcarb(pcarbSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< double >::type REE_formula(REE_formulaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type input_EI(input_EISEXP);
    Rcpp::traits::input_parameter< NumericVector >::type input_fat(input_fatSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< bool >::type checkValues(checkValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(adult_weight_wrapper_EI_fat(bw, ht, age, sex, EIchange, NAchange, PAL, pcarb_base, pcarb, dt, REE_formula, input_EI, input_fat, days, checkValues));
    return rcpp_result_gen;
END_RCPP
}
// child_weight_wrapper
List child_weight_wrapper(NumericVector age, NumericVector sex, NumericVector bmiCat, NumericVector FFM, NumericVector FM, NumericMatrix input_EIntake, double days, double dt, bool checkValues);
RcppExport SEXP _bw_child_weight_wrapper(SEXP ageSEXP, SEXP sexSEXP, SEXP bmiCatSEXP, SEXP FFMSEXP, SEXP FMSEXP, SEXP input_EIntakeSEXP, SEXP daysSEXP, SEXP dtSEXP, SEXP checkValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bmiCat(bmiCatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FFM(FFMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FM(FMSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type input_EIntake(input_EIntakeSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< bool >::type checkValues(checkValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(child_weight_wrapper(age, sex, bmiCat, FFM, FM, input_EIntake, days, dt, checkValues));
    return rcpp_result_gen;
END_RCPP
}
// child_weight_wrapper_richardson
List child_weight_wrapper_richardson(NumericVector age, NumericVector sex, NumericVector bmiCat, NumericVector FFM, NumericVector FM, double K, double Q, double A, double B, double nu, double C, double days, double dt, bool checkValues);
RcppExport SEXP _bw_child_weight_wrapper_richardson(SEXP ageSEXP, SEXP sexSEXP,  SEXP bmiCatSEXP, SEXP FFMSEXP, SEXP FMSEXP, SEXP KSEXP, SEXP QSEXP, SEXP ASEXP, SEXP BSEXP, SEXP nuSEXP, SEXP CSEXP, SEXP daysSEXP, SEXP dtSEXP, SEXP checkValuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bmiCat(bmiCatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FFM(FFMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FM(FMSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type Q(QSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    Rcpp::traits::input_parameter< bool >::type checkValues(checkValuesSEXP);
    rcpp_result_gen = Rcpp::wrap(child_weight_wrapper_richardson(age, sex, bmiCat, FFM, FM, K, Q, A, B, nu, C, days, dt, checkValues));
    return rcpp_result_gen;
END_RCPP
}
// intake_reference_wrapper
NumericMatrix intake_reference_wrapper(NumericVector age, NumericVector sex, NumericVector bmiCat, NumericVector FFM, NumericVector FM, double days, double dt);
RcppExport SEXP _bw_intake_reference_wrapper(SEXP ageSEXP, SEXP sexSEXP, SEXP bmiCatSEXP, SEXP FFMSEXP, SEXP FMSEXP, SEXP daysSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bmiCat(bmiCatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FFM(FFMSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type FM(FMSEXP);
    Rcpp::traits::input_parameter< double >::type days(daysSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(intake_reference_wrapper(age, sex, bmiCat, FFM, FM, days, dt));
    return rcpp_result_gen;
END_RCPP
}
// mass_reference_wrapper
List mass_reference_wrapper(NumericVector age, NumericVector sex, NumericVector bmiCat);
RcppExport SEXP _bw_mass_reference_wrapper(SEXP ageSEXP, SEXP sexSEXP, SEXP bmiCatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type age(ageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sex(sexSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bmiCat(bmiCatSEXP);
    rcpp_result_gen = Rcpp::wrap(mass_reference_wrapper(age, sex, bmiCat));
    return rcpp_result_gen;
END_RCPP
}
// EnergyBuilder
NumericMatrix EnergyBuilder(NumericMatrix Energy, NumericVector Time, std::string interpol);
RcppExport SEXP _bw_EnergyBuilder(SEXP EnergySEXP, SEXP TimeSEXP, SEXP interpolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Energy(EnergySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Time(TimeSEXP);
    Rcpp::traits::input_parameter< std::string >::type interpol(interpolSEXP);
    rcpp_result_gen = Rcpp::wrap(EnergyBuilder(Energy, Time, interpol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bw_adult_weight_wrapper", (DL_FUNC) &_bw_adult_weight_wrapper, 13},
    {"_bw_adult_weight_wrapper_EI", (DL_FUNC) &_bw_adult_weight_wrapper_EI, 15},
    {"_bw_adult_weight_wrapper_EI_fat", (DL_FUNC) &_bw_adult_weight_wrapper_EI_fat, 16},
    {"_bw_child_weight_wrapper", (DL_FUNC) &_bw_child_weight_wrapper, 9},
    {"_bw_child_weight_wrapper_richardson", (DL_FUNC) &_bw_child_weight_wrapper_richardson, 14},
    {"_bw_intake_reference_wrapper", (DL_FUNC) &_bw_intake_reference_wrapper, 7},
    {"_bw_mass_reference_wrapper", (DL_FUNC) &_bw_mass_reference_wrapper, 3},
    {"_bw_EnergyBuilder", (DL_FUNC) &_bw_EnergyBuilder, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bw(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
