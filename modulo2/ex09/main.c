#include <stdio.h>
#include "asm.h"

int main()
{
	long res = sum_and_subtract();
	printf("%ld\n", res);
	return 0;
}

