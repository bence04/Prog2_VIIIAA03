// F‡jl: fuggvenyeim.cpp
// Ebben tal‡lhat—k a fŸggvŽnyek protot’pusai,
// t’pusok, konstansok, egyŽb deklar‡ci—k

#ifndef FUGGVENYEIM_H
#define FUGGVENYEIM_H
/*
 * csere
 * KŽt int adat felcserŽlŽse
 * @param a - egyik adat
 * @param b - m‡sik adat
 */
void csere(int& a, int& b);

int polinom(double a, double arr[], int b);

/*
 * max
 * KŽt int adat kšzŸl a nagyobb
 * @param a - egyik adat
 * @param b - m‡sik adat
 */
// Ez egy inline fŸggvŽny, amit minden ford’t‡si
// egysŽgben defin‡lni kell.
inline int max(int a, int b) { return a > b ? a : b; }

#endif // FUGGVENYEIM_H
