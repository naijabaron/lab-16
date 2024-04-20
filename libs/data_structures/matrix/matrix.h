#ifndef INC_MATRIX_H
#define INC_MATRIX_H

#include <stdio.h>
#include <stdbool.h>

typedef struct matrix {
    int** values;
    int rows;
    int cols;
} matrix;

typedef struct position {
    int rowIndex;
    int colIndex;
} position;

matrix getMemMatrix(int rows, int cols);

matrix *getMemArrayOfMatrices(int matrices_amount, int rows, int cols);

void freeMemMatrix(matrix *m);

void freeMemMatrices(matrix *ms, int matrices_amount);

void inputMatrix(matrix *m);

void inputMatrices(matrix *ms, int matrices_amount);

void outputMatrix(matrix m);

void outputMatrices(matrix *ms, int matrices_amount);

void swapRows(matrix m, int i1, int i2);

void swapColumns(matrix m, int j1, int j2);

void insertionSortRowsMatrixByRowCriteria(matrix m, int (*criteria)(int*, int));

void selectionSortColsMatrixByColCriteria(matrix m, int (*criteria)(int*, int));

bool isSquareMatrix(matrix *m);

bool areTwoMatricesEqual(matrix *m1, matrix *m2);

bool isEMatrix(matrix *m);

bool isSymmetricMatrix(matrix *m);

void transposeSquareMatrix(matrix *m);

void transposeMatrix(matrix *m);

position getMinValuePos(matrix m);

position getMaxValuePos(matrix m);

matrix createMatrixFromArray(const int *a, size_t rows, size_t cols);

matrix *createArrayOfMatrixFromArray(const int *values, size_t matrices_amount, size_t rows, size_t cols);

int countZeroRows(matrix m);

matrix multiplyMatrices(matrix left, matrix right);

#endif