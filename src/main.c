#include <stdio.h>
#include "map-double.h"
#include "map-double.c"

int main(void)
{
	int src[1000] = {1, 2, 3, 4, 5};
	int dest[1000];
	mapDouble(src, dest);
	for ( int i = 0; i < 5; i++ ) {
		fprintf(stdout, "%d -> mapDouble(n) -> %d\n", *(src + i), *(dest + i));
	}
	return 0;
}