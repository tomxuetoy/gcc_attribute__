#include <stdio.h>
 
void foo(void)
{
    printf("%s\n", __FUNCTION__);
}
 
void bar(void) __attribute__((alias("foo")));
 
void gazonk(void)
{
    bar(); // calls foo
}
 
main()
{
    gazonk();
}
