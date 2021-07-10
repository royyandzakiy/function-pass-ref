#include <stdio.h>

void doSomething(int *, int *, void (*)(int *, int *));
void swap(int *, int *);
void addByEachOther(int *, int *);
void addByTen(int *, int *);

int main()
{
    /* local variable definition */
    int a = 100;
    int b = 200;

    printf("initial value of a : %d\n", a);
    printf("initial value of b : %d\n", b);

    /* calling a function to addByTen the values */
    doSomething(&a, &b, addByTen);

    printf("After addByTen, value of a : %d\n", a);
    printf("After addByTen, value of b : %d\n", b);

    /* calling a function to swap the values */
    doSomething(&a, &b, swap);

    printf("After swap, value of a : %d\n", a);
    printf("After swap, value of b : %d\n", b);

    return 0;
}

void doSomething(int *x, int *y, void (*func)(int *, int *))
{
    (*func)(x, y);
}
void swap(int *x, int *y)
{
    int temp;

    temp = *x; /* save the value of x */
    *x = *y;   /* put y into x */
    *y = temp; /* put temp into y */

    return;
}
void addByEachOther(int *x, int *y)
{
    int temp;

    temp = *y;
    *y += *x;   /* put y into x */
    *x += temp; /* put temp into y */

    return;
}
void addByTen(int *x, int *y)
{
    *x += 10; /* put temp into y */
    *y += 10; /* put y into x */

    return;
}