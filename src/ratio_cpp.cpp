#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//' @export
// [[Rcpp::export]]
NumericVector ratio_cpp(NumericVector x, NumericVector y) {

  int n_x = x.size();
  int n_y = y.size();
  
  if(n_y != n_x) Rcpp::stop("Length of x != length of y");
  
  NumericVector res = NumericVector(n_x);
  
  for(int i = 0; i < n_x; i++){
    
    res.at(i) = x.at(i) / y.at(i);
    
  }
  
  return(res);
  
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
ratio_cpp(x = 1:10, y = 11:20)
*/
