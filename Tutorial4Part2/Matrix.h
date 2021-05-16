/** \File Matrix.h
    \Brief Header File for a Matrix Library
    \Details Library which can...
    \Author Phoebe Zizirou
    \Version 0.1
    \Date 15/05/2021
    \Copyright UNIC*/

#ifndef MATRIX_H
#define MATRIX_H

const int MAX_COL = 10;

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow);
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow);
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow);

#endif
