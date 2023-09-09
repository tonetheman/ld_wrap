#include <stdio.h>
#include "tonylib.h"

int __wrap_tony_is_cool(int a) {
	printf("inside the function __wrap_tony_is_cool\n");

	__real_tony_is_cool(a); // should go back to tony_is_cool defined
				// in tonylib
	printf("__wrap_tony_is_cool is returning 43\n");
	return 43;
}

int main() {

	printf("testwrap binary is called\n");

	int a = 10;
	printf("about to call tony_is_cool\n");
	int res = tony_is_cool(a);

	printf("res from tony_is_cool %d\n", res);

	return 0;
}
