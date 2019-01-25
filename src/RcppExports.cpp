// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_new_optimization_problem
SEXP rcpp_new_optimization_problem(std::size_t nrow, std::size_t ncol, std::size_t ncell);
RcppExport SEXP _ppr_rcpp_new_optimization_problem(SEXP nrowSEXP, SEXP ncolSEXP, SEXP ncellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type ncell(ncellSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_new_optimization_problem(nrow, ncol, ncell));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_predefined_optimization_problem
SEXP rcpp_predefined_optimization_problem(Rcpp::List l);
RcppExport SEXP _ppr_rcpp_predefined_optimization_problem(SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_predefined_optimization_problem(l));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_optimization_problem_as_list
Rcpp::List rcpp_optimization_problem_as_list(SEXP x);
RcppExport SEXP _ppr_rcpp_optimization_problem_as_list(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_optimization_problem_as_list(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncol
std::size_t rcpp_get_optimization_problem_ncol(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_ncol(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncol(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_nrow
std::size_t rcpp_get_optimization_problem_nrow(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_nrow(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_nrow(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ncell
std::size_t rcpp_get_optimization_problem_ncell(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_ncell(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ncell(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_A
Rcpp::List rcpp_get_optimization_problem_A(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_A(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_A(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_modelsense
std::string rcpp_get_optimization_problem_modelsense(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_modelsense(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_modelsense(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_projects
std::size_t rcpp_get_optimization_problem_number_of_projects(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_number_of_projects(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_projects(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_actions
std::size_t rcpp_get_optimization_problem_number_of_actions(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_number_of_actions(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_actions(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_features
std::size_t rcpp_get_optimization_problem_number_of_features(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_number_of_features(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_features(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_number_of_branches
std::size_t rcpp_get_optimization_problem_number_of_branches(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_number_of_branches(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_number_of_branches(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_vtype
std::vector<std::string> rcpp_get_optimization_problem_vtype(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_vtype(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_vtype(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_obj
std::vector<double> rcpp_get_optimization_problem_obj(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_obj(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_obj(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_pwlobj
Rcpp::List rcpp_get_optimization_problem_pwlobj(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_pwlobj(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_pwlobj(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_rhs
std::vector<double> rcpp_get_optimization_problem_rhs(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_rhs(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_rhs(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_sense
std::vector<std::string> rcpp_get_optimization_problem_sense(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_sense(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_sense(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_lb
std::vector<double> rcpp_get_optimization_problem_lb(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_lb(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_lb(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_ub
std::vector<double> rcpp_get_optimization_problem_ub(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_ub(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_ub(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_col_ids
std::vector<std::string> rcpp_get_optimization_problem_col_ids(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_col_ids(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_col_ids(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_optimization_problem_row_ids
std::vector<std::string> rcpp_get_optimization_problem_row_ids(SEXP x);
RcppExport SEXP _ppr_rcpp_get_optimization_problem_row_ids(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_optimization_problem_row_ids(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_add_raw_data
bool rcpp_add_raw_data(SEXP x, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, Rcpp::NumericVector branch_lengths, std::size_t n_approx_points);
RcppExport SEXP _ppr_rcpp_add_raw_data(SEXP xSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP, SEXP n_approx_pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_points(n_approx_pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_add_raw_data(x, pa_matrix, pf_matrix, branch_matrix, branch_lengths, n_approx_points));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_decisions
bool rcpp_apply_decisions(SEXP x, std::string vtype, double default_lower, double default_upper);
RcppExport SEXP _ppr_rcpp_apply_decisions(SEXP xSEXP, SEXP vtypeSEXP, SEXP default_lowerSEXP, SEXP default_upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type vtype(vtypeSEXP);
    Rcpp::traits::input_parameter< double >::type default_lower(default_lowerSEXP);
    Rcpp::traits::input_parameter< double >::type default_upper(default_upperSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_decisions(x, vtype, default_lower, default_upper));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_feature_weights
bool rcpp_apply_feature_weights(SEXP x, Rcpp::NumericVector weights, bool replace);
RcppExport SEXP _ppr_rcpp_apply_feature_weights(SEXP xSEXP, SEXP weightsSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_feature_weights(x, weights, replace));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_locked_constraints
bool rcpp_apply_locked_constraints(SEXP x, Rcpp::IntegerVector actions, Rcpp::NumericVector status);
RcppExport SEXP _ppr_rcpp_apply_locked_constraints(SEXP xSEXP, SEXP actionsSEXP, SEXP statusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type actions(actionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type status(statusSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_locked_constraints(x, actions, status));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_phylo_div_objective
bool rcpp_apply_max_phylo_div_objective(SEXP x, Rcpp::NumericVector costs, double budget, Rcpp::NumericVector feature_weights);
RcppExport SEXP _ppr_rcpp_apply_max_phylo_div_objective(SEXP xSEXP, SEXP costsSEXP, SEXP budgetSEXP, SEXP feature_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type feature_weights(feature_weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_phylo_div_objective(x, costs, budget, feature_weights));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_max_targets_met_objective
bool rcpp_apply_max_targets_met_objective(SEXP x, Rcpp::List targets_list, Rcpp::NumericVector costs, double budget, Rcpp::NumericVector feature_weights);
RcppExport SEXP _ppr_rcpp_apply_max_targets_met_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP, SEXP budgetSEXP, SEXP feature_weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type feature_weights(feature_weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_max_targets_met_objective(x, targets_list, costs, budget, feature_weights));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_apply_min_set_objective
bool rcpp_apply_min_set_objective(SEXP x, Rcpp::List targets_list, Rcpp::NumericVector costs);
RcppExport SEXP _ppr_rcpp_apply_min_set_objective(SEXP xSEXP, SEXP targets_listSEXP, SEXP costsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_apply_min_set_objective(x, targets_list, costs));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_branch_matrix
arma::sp_mat rcpp_branch_matrix(Rcpp::List x);
RcppExport SEXP _ppr_rcpp_branch_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_branch_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_branch_order
Rcpp::IntegerVector rcpp_branch_order(arma::sp_mat x);
RcppExport SEXP _ppr_rcpp_branch_order(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_branch_order(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_evaluate_max_phylo_div_objective
Rcpp::NumericVector rcpp_evaluate_max_phylo_div_objective(Rcpp::NumericVector costs, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, Rcpp::NumericVector branch_lengths, Rcpp::NumericVector targets, Rcpp::NumericVector weights, arma::sp_mat solutions);
RcppExport SEXP _ppr_rcpp_evaluate_max_phylo_div_objective(SEXP costsSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP, SEXP targetsSEXP, SEXP weightsSEXP, SEXP solutionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type solutions(solutionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_evaluate_max_phylo_div_objective(costs, pa_matrix, pf_matrix, branch_matrix, branch_lengths, targets, weights, solutions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_evaluate_min_set_objective
Rcpp::NumericVector rcpp_evaluate_min_set_objective(Rcpp::NumericVector costs, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, Rcpp::NumericVector branch_lengths, Rcpp::NumericVector targets, Rcpp::NumericVector weights, arma::sp_mat solutions);
RcppExport SEXP _ppr_rcpp_evaluate_min_set_objective(SEXP costsSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP, SEXP targetsSEXP, SEXP weightsSEXP, SEXP solutionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type solutions(solutionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_evaluate_min_set_objective(costs, pa_matrix, pf_matrix, branch_matrix, branch_lengths, targets, weights, solutions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_evaluate_max_targets_met_objective
Rcpp::NumericVector rcpp_evaluate_max_targets_met_objective(Rcpp::NumericVector costs, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, Rcpp::NumericVector branch_lengths, Rcpp::NumericVector targets, Rcpp::NumericVector weights, arma::sp_mat solutions);
RcppExport SEXP _ppr_rcpp_evaluate_max_targets_met_objective(SEXP costsSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP, SEXP targetsSEXP, SEXP weightsSEXP, SEXP solutionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type solutions(solutionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_evaluate_max_targets_met_objective(costs, pa_matrix, pf_matrix, branch_matrix, branch_lengths, targets, weights, solutions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_persistences
Rcpp::NumericMatrix rcpp_expected_persistences(arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, arma::sp_mat solutions);
RcppExport SEXP _ppr_rcpp_expected_persistences(SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP solutionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type solutions(solutionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_persistences(pa_matrix, pf_matrix, branch_matrix, solutions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_funded_projects
Rcpp::NumericMatrix rcpp_funded_projects(arma::sp_mat pa_matrix, arma::sp_mat solutions);
RcppExport SEXP _ppr_rcpp_funded_projects(SEXP pa_matrixSEXP, SEXP solutionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type solutions(solutionsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_funded_projects(pa_matrix, solutions));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_heuristic_solution
Rcpp::LogicalMatrix rcpp_heuristic_solution(Rcpp::NumericVector costs, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, arma::sp_mat branch_matrix, Rcpp::NumericVector branch_lengths, Rcpp::NumericVector targets, Rcpp::NumericVector weights, double budget, Rcpp::IntegerVector locked_in, Rcpp::IntegerVector locked_out, std::size_t number_solutions, bool verbose, const std::string obj_name);
RcppExport SEXP _ppr_rcpp_heuristic_solution(SEXP costsSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP branch_matrixSEXP, SEXP branch_lengthsSEXP, SEXP targetsSEXP, SEXP weightsSEXP, SEXP budgetSEXP, SEXP locked_inSEXP, SEXP locked_outSEXP, SEXP number_solutionsSEXP, SEXP verboseSEXP, SEXP obj_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type branch_matrix(branch_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type branch_lengths(branch_lengthsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type targets(targetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_in(locked_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_out(locked_outSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type number_solutions(number_solutionsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const std::string >::type obj_name(obj_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_heuristic_solution(costs, pa_matrix, pf_matrix, branch_matrix, branch_lengths, targets, weights, budget, locked_in, locked_out, number_solutions, verbose, obj_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_random_max_benefit_solution
Rcpp::LogicalMatrix rcpp_random_max_benefit_solution(Rcpp::NumericVector costs, Rcpp::IntegerVector locked_in, Rcpp::IntegerVector locked_out, double budget, std::size_t n_solutions, bool verbose);
RcppExport SEXP _ppr_rcpp_random_max_benefit_solution(SEXP costsSEXP, SEXP locked_inSEXP, SEXP locked_outSEXP, SEXP budgetSEXP, SEXP n_solutionsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_in(locked_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_out(locked_outSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_solutions(n_solutionsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_random_max_benefit_solution(costs, locked_in, locked_out, budget, n_solutions, verbose));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_random_min_set_solution
Rcpp::LogicalMatrix rcpp_random_min_set_solution(Rcpp::NumericVector costs, arma::sp_mat pa_matrix, arma::sp_mat pf_matrix, Rcpp::List targets_list, Rcpp::IntegerVector locked_in, Rcpp::IntegerVector locked_out, std::size_t n_solutions, bool verbose);
RcppExport SEXP _ppr_rcpp_random_min_set_solution(SEXP costsSEXP, SEXP pa_matrixSEXP, SEXP pf_matrixSEXP, SEXP targets_listSEXP, SEXP locked_inSEXP, SEXP locked_outSEXP, SEXP n_solutionsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pa_matrix(pa_matrixSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type pf_matrix(pf_matrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type targets_list(targets_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_in(locked_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type locked_out(locked_outSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_solutions(n_solutionsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_random_min_set_solution(costs, pa_matrix, pf_matrix, targets_list, locked_in, locked_out, n_solutions, verbose));
    return rcpp_result_gen;
END_RCPP
}
