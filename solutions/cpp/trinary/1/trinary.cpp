#include "trinary.h"
#include <string>
#include <cmath>

namespace trinary {

    int to_decimal(std::string str){//
        int lenght = str.length();
        int i = 0;
        int k = lenght-1;
        int result = 0;
        while (i < lenght){
            if (str[i] - '0' > 10){
                return 0;
            }
            int m = str[i] - '0';
            //std::cout << "m=" << m << std::endl;
            //std::cout << "k=" << k << std::endl;
            //std::cout << m*pow(3, k) << std::endl;
            result += m*pow(3, k);
            i +=1;
            k -=1;
        }
        return result;
    }

}

