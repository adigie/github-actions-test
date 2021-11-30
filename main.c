#include <stdio.h>

/**
 * Foo
 * @param a A
 * @param b B
 * @return a * 2 - b
 */
int foo(int a, int b)
{
   return a * 2 - b;
}

/**
 * This is main function
 * @return
 */
int main() {
    printf("Hello, World!\n");
    int f = foo(1, 2);
    return f;
}
