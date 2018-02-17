// F‡jl: fuggvenyeim.cpp
// Ebben val—s’tom meg a gyakran haszn‡lt fŸggvnyeket.

#include "fuggvenyeim.h"

// Két int adat felcserélése
void csere(int& a, int& b) {
   int tmp =  a;
   a =  b;
   b = tmp;
}
// ....

int polinom(double x, double a[], int n) {
    
    double y = 0;
    for(int i = n; i >= 0; i--) {
        y = y * x + a[i];
    }
    return y;
}
