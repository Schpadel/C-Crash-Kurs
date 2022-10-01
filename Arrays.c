#include <stdio.h>

int main()
 {
    int procstate[1024];

    procstate[0] = 2;
    procstate[1] = 3;
    procstate[2] = 9991;
    procstate[599] = 2000;
    

    for (int i = 0; i < 1024; i++) 
    {
        printf("%i entry: %d\n", i , procstate[i]);
    }
    
}

