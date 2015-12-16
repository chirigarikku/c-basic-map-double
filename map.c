void map(int *src, int *dest, int (*callback)(int, int))
{
	for ( int i = 0; i < sizeof(src); i++ ) {
		dest[i] = callback(*(src + i), i);
	}
}