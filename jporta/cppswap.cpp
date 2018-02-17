//
//  main.cpp
//  cppswap
//
//  Created by Tóth Bence on 2018. 02. 17..
//  Copyright © 2018. Tóth Bence. All rights reserved.
//

#include <iostream>
#include "swap.h"

/**
 * swap
 * Két bool adat felcserélése
 * @param a - egyik adat
 * @param b - másik adat
 */
void swap(bool& a, bool& b) {
    bool tmp = a;
    a = b;
    b = tmp;
}

/**
 * swap
 * Két int adat felcserélése
 * @param a - egyik adat
 * @param b - másik adat
 */
void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}


/**
 * swap
 * Két char adat felcserélése
 * @param a - egyik adat
 * @param b - másik adat
 */
void swap(char& a, char& b) {
    char tmp = a;
    a = b;
    b = tmp;
}

/**
 * swap
 * Két double adat felcserélése
 * @param a - egyik adat
 * @param b - másik adat
 */
void swap(double& a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}

/**
 * swap
 * Két const char* adat (pointer) felcserélése
 * @param a - egyik pointer
 * @param b - másik pointer
 */
void swap(const char*& a, const char*& b) {
    const char* tmp = a;
    a = b;
    b = tmp;
}  /// Figyelje meg a ref. típus jelölését!
