#include <stdio.h>
#include <stddef.h>

void printbits(int v) {
    for (int i = 31; i >= 0; i--) {
        int bit = (v >> i) & 1;
        putchar('0' + bit);
        if (i % 8 == 0) putchar(' ');
    }
    putchar('\n');
}

void swap_int(int* a, int* b)
{
}

int main(int argc, char *argv[])
{
	int a = 13; int b = 7;
	int *a_t = &a; int *b_t = &b;
	
	printbits(a); printbits(b); printf("\n");

	*a_t ^= *b_t;

	printbits(a); printbits(b); printf("\n");

	*b_t ^= *a_t;

	printbits(a); printbits(b); printf("\n");

	*a_t ^= *b_t;

	printbits(a); printbits(b); printf("\n");


	printf("---End of the program---\n");
	return 0;
}
