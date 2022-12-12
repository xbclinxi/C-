#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char c1 = -1, c2 = 255;
	unsigned char uc1 = -1, uc2 = 255;

	short int si1, si2, si3, si4;
	unsigned short int usi1, usi2, usi3, usi4;

	si1 = c1; si2 = c2; si3 = uc1; si4 = uc2;
	usi1 = c1; usi2 = c2; usi3 = uc1; usi4 = uc2;

	printf("%d %d %d %d\n", si1, si2, si3, si4);
	printf("%u %u %u %u\n", si1, si2, si3, si4);
	printf("%d %d %d %d\n", usi1, usi2, usi3, usi4);
	printf("%u %u %u %u\n", usi1, usi2, usi3, usi4);
	return 0;
}