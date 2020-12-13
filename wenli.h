#pragma once
#include <math.h>

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void swap(double* a, double* b) {
	double c = *a;
	*a = *b;
	*b = c;
}
void swap(unsigned* a, unsigned* b) {
	unsigned c = *a;
	*a = *b;
	*b = c;
}
void swap(char* a, char* b) {
	char c = *a;
	*a = *b;
	*b = c;
}
void bubblesort(int* in, int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; i++) {
			if (in[j] < in[j + 1]) {
				swap((in + j), (in + j + 1));
			}
		}
	}

}

int isPrimeNum(unsigned in) {
	if (in < 2) { 
		return 0;
	}
	else if (!(in - 2)) {
		return 1;
	}
	else if (!(in % 2)) {
		return 0;
	}
	else {
		for (int i = 3; i <= sqrt(in); ++i) {
			if (!(in % i)) {
				return 0;
			}
		}
		return 1;
	}
}