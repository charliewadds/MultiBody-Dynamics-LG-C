#include <assert.h>
#include "Matrices.h"

matrix *matrix_new(uint8_t num_rows, uint8_t num_cols){


    assert(num_rows != 0);
    assert(num_cols != 0);

    matrix *m = malloc(sizeof(matrix));
    m->numCols = num_cols;
    m->numRows = num_rows;
    if(num_cols == num_rows){
        m->square = 1;
    }else{
        m->square = 0;
    }

    //allocate a pointer for each row
    
    m->data = calloc(m->numRows, sizeof(*(m->data)));
    //NP_CHECK(m->data);

    for(int i = num_rows; i>=0; i--){
        
        m->data[i]= calloc(num_cols, sizeof(**m->data));;
        //NP_CHECK(m->data[i]);
    }

    return m;
}

void matrix_free(matrix *m){
    for(int i = m->numRows; i>=0; i--){
        free(m->data[i]);
        
    }

    free(m->data);

    free(m);

}


int *matrix_shape(matrix *m){
    int *shape = malloc(sizeof(int) * 2);

    // if (shape == NULL) {
    //     // Handle memory allocation failure
    //     return NULL;
    // }

    shape[0] = m->numCols;
    shape[1] = m->numRows;

    return shape;
}