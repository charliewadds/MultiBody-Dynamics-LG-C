#include <stdlib.h>

#ifndef _MATRICES_H_
#define _MARTRICES_H_
 


//Define a matrix of doubles
//max number of rows or columns is 255
typedef struct matrix_double_s {
    uint8_t numRows;
    uint8_t numCols;
    double **data;
    uint8_t square;



} matrix;


// Constructor-like 
// Allocates memory for a new matrix
// All elements in the matrix are 0.0
matrix *matrix_new(uint8_t num_rows, uint8_t num_cols);


int *matrix_shape(matrix *m);

// Destructor-like
// De-allocates the memory for the matrix
void matrix_free(matrix *m);
 #endif