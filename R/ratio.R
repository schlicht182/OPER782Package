#' Takes the ratio of two numbers
#'
#' @description Takes two numeric scalar arguments and returns their ratio rounded to a specified numner of digits
#'
#' @param x A numeric representing the numerator of the ratio
#' @param y A numeric representing the denominator of the ratio
#' @param n An integer specifying the number of digits the result will be rounded to
#' 
#' @return A scalar
#' @export

ratio <- function(x, y, digits) {
  round(x  /  y, digits = digits)
}

