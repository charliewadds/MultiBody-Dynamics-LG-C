

#include <stdio.h>
#include "Matrices.c"



int main(void){


    printf("HELLO");
    matrix *m = matrix_new(10,10);   

    printf("%d", matrix_shape(m)[0]);

}
