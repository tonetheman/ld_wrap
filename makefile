

all: libtony.so testwrap


testwrap  : testwrap.c
	gcc -o testwrap testwrap.c -L. -ltony -Wl,--wrap=tony_is_cool

libtony.so : tonylib.c tonylib.h
	gcc -o libtony.so -shared tonylib.c

run:
	LD_LIBRARY_PATH=. ./testwrap

clean :
	rm -f libtony.so
	rm -f testwrap
