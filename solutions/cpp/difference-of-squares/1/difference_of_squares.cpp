#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {

    int square_of_sum(int n){
        int sum = n*(n+1) / 2;
        return sum * sum;
    }

    int sum_of_squares(int n){
        return (n + 3*n*n + 2*n*n*n)/6;
    }

    int difference(int n){
        return square_of_sum(n) - sum_of_squares(n);
    }
    
}  // namespace difference_of_squares
