#include <stdio.h>

int main()
{
   int x;
   int *x_ptr;
   int **x_ptr_ptr;
   
    x = 5;
    x_ptr = &x;
    x_ptr_ptr = &x_ptr;

    printf("x = %d\n", x);
    printf("&x_ptr = %p\n", x_ptr);
    printf("&x_ptr_prt = %p\n", x_ptr_ptr);

    int y;
    int *y_ptr;

    y = 6;
    y_ptr = &y;
    *x_ptr = y;

    printf("x = %d\n", *x_ptr);
    printf("&x_ptr = %p\n", x_ptr);

    *y_ptr = 7;

    printf("y = %d\n", *y_ptr);
    printf("&y_ptr = %p\n", y_ptr);
}