# playing with wrap
with ld

## libtony.so

Made a shared library called libtony.so
tonylib.c and tonylib.h

to create the library
run `make libtony.so`

## testwrap
Next create an exe called testwrap
testwrap.c
run `make testwrap`

this is the line that makes the magic
`gcc -o testwrap testwrap.c -L. -ltony -Wl,--wrap=tony_is_cool`

The --wrap=tony_is_cool causes ld to find a symbol that matches that name
And instead calls `__wrap_<SYMBOL>`
in this case `__wrap_tony_is_cool`

You can also refer back to the original symbol with `__real_<SYMBOL>`

When you compile you will get a warning about and implicit declaration
of the __real_tony_is_cool function but this is just a warning.

type
`make run`

to see it work.


