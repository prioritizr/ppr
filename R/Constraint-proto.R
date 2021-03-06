#' @include internal.R Parameters-proto.R ProjectModifier-proto.R
NULL

#' @export
if (!methods::isClass("Constraint")) methods::setOldClass("Constraint")
NULL

#' Constraint prototype
#'
#' This prototype is used to represent the constraints used when making a
#' prioritization. **This prototype represents a recipe, to actually
#' add constraints to a planning problem, see the help page on
#' [constraints]. Only experts should use this class directly.** This
#' prototype inherits from the [ProjectModifier-class].
#'
#' @seealso [ProjectModifier-class].
#'
#' @name Constraint-class
#'
#' @aliases Constraint
NULL

#' @export
Constraint <- pproto("Constraint", ProjectModifier)
