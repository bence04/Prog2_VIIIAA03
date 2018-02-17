//
//  main.cpp
//  hftest2
//
//  Created by Tóth Bence on 2018. 02. 17..
//  Copyright © 2018. Tóth Bence. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    double x;
    while (std::cin >> x) {
        if(x <= 19) {
            double tag1 = 0.456*pow(x,4);
            double tag2 = 0.912*pow(x,3);
            double tag3 = 58.38*pow(x,2);
            double tag4 = 3*x;
            
            double fin = tag1 - tag2 + tag3 + tag4 - 19;
            
            std::cout.precision(4);
            std::cout << std::fixed << fin << std::endl;
        } else {
            double fin = x/116.90;
            
            std::cout.precision(4);
            std::cout << fin << std::endl;
            
        }
    }
    return 0;
}
