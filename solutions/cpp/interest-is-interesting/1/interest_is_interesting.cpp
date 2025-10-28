#include <cmath>
double interest_rate(double balance) {
    if (balance < 0){
        return 3.213;
    }
    else if (balance < 1000){
        return 0.5;
    }
    else if (balance < 5000){
        return 1.621;
    }
    return 2.475;
}

double yearly_interest(double balance) {
    return balance * interest_rate(balance)/100;
}

double annual_balance_update(double balance) {
    return balance + yearly_interest(balance);
}

int years_until_desired_balance(double balance, double target_balance) { 
    if ( interest_rate(balance) == interest_rate(target_balance) ){
        return ceil( (-1)*(std::log(balance/target_balance) / std::log( interest_rate(balance)/100 + 1 ) ) );
    }
    else{
        int output_years = 0;
        while (balance < target_balance){
            balance = annual_balance_update(balance);
            output_years += 1;
        }
        return output_years;
    }
}
