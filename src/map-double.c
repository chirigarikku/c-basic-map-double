#include "map.h"
#include "map.c"

int mapDoubleCb(int value, int key) {
	return value * 2;
}

void mapDouble(int *src, int *dest)
{
	map(src, dest, mapDoubleCb);
}