#include <stdio.h>

long reset_bits(long a, char left, char right){
	long another_a = 0;
	for(int i = right; i <= left; i++){
		another_a |= a & (1L << i);
	}
	return another_a;
}

