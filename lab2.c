#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int n = 2;
	int L = 133;
	int k = 3;
	int m = 7;
	printf("Дано:\n %11d\n%12d\n       ______________\nОтвет:\n%+11.2d%.7f\n", n, L, n/L, n*1./L);
}