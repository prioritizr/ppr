#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _ppr_rcpp_add_raw_data(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _ppr_rcpp_apply_decisions(SEXP, SEXP, SEXP, SEXP);
extern SEXP _ppr_rcpp_apply_max_phylo_objective(SEXP, SEXP, SEXP);
extern SEXP _ppr_rcpp_apply_min_set_objective(SEXP, SEXP, SEXP);
extern SEXP _ppr_rcpp_branch_matrix(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_A(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_col_ids(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_lb(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_modelsense(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_ncell(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_ncol(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_nrow(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_number_of_actions(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_number_of_branches(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_number_of_features(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_number_of_projects(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_obj(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_pwlobj(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_rhs(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_row_ids(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_sense(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_ub(SEXP);
extern SEXP _ppr_rcpp_get_optimization_problem_vtype(SEXP);
extern SEXP _ppr_rcpp_new_optimization_problem(SEXP, SEXP, SEXP);
extern SEXP _ppr_rcpp_optimization_problem_as_list(SEXP);
extern SEXP _ppr_rcpp_predefined_optimization_problem(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_ppr_rcpp_add_raw_data",                                (DL_FUNC) &_ppr_rcpp_add_raw_data,                                6},
    {"_ppr_rcpp_apply_decisions",                             (DL_FUNC) &_ppr_rcpp_apply_decisions,                             4},
    {"_ppr_rcpp_apply_max_phylo_objective",                   (DL_FUNC) &_ppr_rcpp_apply_max_phylo_objective,                   3},
    {"_ppr_rcpp_apply_min_set_objective",                     (DL_FUNC) &_ppr_rcpp_apply_min_set_objective,                     3},
    {"_ppr_rcpp_branch_matrix",                               (DL_FUNC) &_ppr_rcpp_branch_matrix,                               1},
    {"_ppr_rcpp_get_optimization_problem_A",                  (DL_FUNC) &_ppr_rcpp_get_optimization_problem_A,                  1},
    {"_ppr_rcpp_get_optimization_problem_col_ids",            (DL_FUNC) &_ppr_rcpp_get_optimization_problem_col_ids,            1},
    {"_ppr_rcpp_get_optimization_problem_lb",                 (DL_FUNC) &_ppr_rcpp_get_optimization_problem_lb,                 1},
    {"_ppr_rcpp_get_optimization_problem_modelsense",         (DL_FUNC) &_ppr_rcpp_get_optimization_problem_modelsense,         1},
    {"_ppr_rcpp_get_optimization_problem_ncell",              (DL_FUNC) &_ppr_rcpp_get_optimization_problem_ncell,              1},
    {"_ppr_rcpp_get_optimization_problem_ncol",               (DL_FUNC) &_ppr_rcpp_get_optimization_problem_ncol,               1},
    {"_ppr_rcpp_get_optimization_problem_nrow",               (DL_FUNC) &_ppr_rcpp_get_optimization_problem_nrow,               1},
    {"_ppr_rcpp_get_optimization_problem_number_of_actions",  (DL_FUNC) &_ppr_rcpp_get_optimization_problem_number_of_actions,  1},
    {"_ppr_rcpp_get_optimization_problem_number_of_branches", (DL_FUNC) &_ppr_rcpp_get_optimization_problem_number_of_branches, 1},
    {"_ppr_rcpp_get_optimization_problem_number_of_features", (DL_FUNC) &_ppr_rcpp_get_optimization_problem_number_of_features, 1},
    {"_ppr_rcpp_get_optimization_problem_number_of_projects", (DL_FUNC) &_ppr_rcpp_get_optimization_problem_number_of_projects, 1},
    {"_ppr_rcpp_get_optimization_problem_obj",                (DL_FUNC) &_ppr_rcpp_get_optimization_problem_obj,                1},
    {"_ppr_rcpp_get_optimization_problem_pwlobj",             (DL_FUNC) &_ppr_rcpp_get_optimization_problem_pwlobj,             1},
    {"_ppr_rcpp_get_optimization_problem_rhs",                (DL_FUNC) &_ppr_rcpp_get_optimization_problem_rhs,                1},
    {"_ppr_rcpp_get_optimization_problem_row_ids",            (DL_FUNC) &_ppr_rcpp_get_optimization_problem_row_ids,            1},
    {"_ppr_rcpp_get_optimization_problem_sense",              (DL_FUNC) &_ppr_rcpp_get_optimization_problem_sense,              1},
    {"_ppr_rcpp_get_optimization_problem_ub",                 (DL_FUNC) &_ppr_rcpp_get_optimization_problem_ub,                 1},
    {"_ppr_rcpp_get_optimization_problem_vtype",              (DL_FUNC) &_ppr_rcpp_get_optimization_problem_vtype,              1},
    {"_ppr_rcpp_new_optimization_problem",                    (DL_FUNC) &_ppr_rcpp_new_optimization_problem,                    3},
    {"_ppr_rcpp_optimization_problem_as_list",                (DL_FUNC) &_ppr_rcpp_optimization_problem_as_list,                1},
    {"_ppr_rcpp_predefined_optimization_problem",             (DL_FUNC) &_ppr_rcpp_predefined_optimization_problem,             1},
    {NULL, NULL, 0}
};

void R_init_ppr(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
