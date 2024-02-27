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

// Dot product
matrix *dot(matrix *m1, matrix *m2);

// Cross product
matrix *cross(matrix *m1, matrix *m2);

// Transpose
matrix *matrix_transpose(matrix *m);

// Addition
matrix *matrix_add(matrix *m1, matrix *m2);

// Subtraction
matrix *matrix_sub(matrix *m1, matrix *m2);

// Scalar multiplication
matrix *matrix_scalar_mul(matrix *m, double scalar);

// Identity matrix of size nxn
matrix *eye(uint8_t n);

matrix *diag(double *d, uint8_t n);

// Destructor-like
// De-allocates the memory for the matrix
void matrix_free(matrix *m);
 #endif