

#include <stdio.h>
#include "Matrices.c"



int main(void){



    matrix *m = matrix_new(10,11);

    printf("[%d, %d]", matrix_shape(m)[0], matrix_shape(m)[1]);

}
