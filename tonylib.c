#include <stdio.h>
#include "tonylib.h"

int tony_is_cool(int a) {
	printf("REAL shared library: tony_is_cool is called %d\n",a);
	return a + 10;
}

