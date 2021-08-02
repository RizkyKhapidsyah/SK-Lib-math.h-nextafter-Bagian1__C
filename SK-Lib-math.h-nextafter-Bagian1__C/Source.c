#include <stdio.h>      /* printf */
#include <math.h>       /* nextafter */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("nilai representable pertama lebih besar dari nol: %e\n", nextafter(0.0, 1.0));
	printf("nilai representable pertama kurang dari nol: %e\n", nextafter(0.0, -1.0));
	_getch();
	return 0;
}