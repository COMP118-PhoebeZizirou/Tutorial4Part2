/** \File Tutorial4Part2.cpp
    \Brief Matrix manipulation program, Part of Lab 4 Part 2 COMP-118
    \Details Program which can...
    \Author Phoebe Zizirou
    \Version 0.1
    \Date 15/05/2021
    \Copyright UNIC*/

#include<iostream>
#include "Matrix.h"

using namespace std;

//Function Prototypes

int menu();

/** 
* The <code>main</code> function is the driver of the program
* <BR> 
* @returns Returns <code>0</code>
*/

int main()
{
    const int MAX_ROW = 10;
    double matrix[MAX_ROW][MAX_COL] = { 1,2,3,4,5,6,7 }; 
    int choice;
    int row;
    double* sums;

    do
    {
        choice = menu();

        if (choice == 1)    //Sum of Row
        {
            int row;
            cout << "\nEnter the row you want to sum: ";
            cin >> row;

            cout << "\nSum of row is: " << sumOfRow(matrix, row, MAX_ROW);
        }

        else if (choice == 2)   //Sum of Column
        {
            sums = sumOfRows(matrix, MAX_ROW);

            for (int i = 0; i < MAX_ROW; ++i)
                cout << "\nSum of row " << i << ": " << sums[i];

            delete[] sums;
        }

        else if (choice == 3)   //Fill Random
        {

            fillWithRandomNum(matrix, MAX_ROW);
        }

        else if (choice == 4)   //Print Matrix
        {
            printMatrix(matrix, -1);    //MAX_ROW
        }

        else if (choice == 5)   //Is Identity Matrix
        {
            if (isIdentityMatrix(matrix, MAX_ROW))
                cout << "\nMatrix is an identity matrix";
            else
                cout << "\nMatrix is NOT an identity matrix";
        }

        else if (choice == 6)   //Make Identity Matrix
        {
            if (!makeIdentityMatrix(matrix, MAX_ROW))
                cerr << "\nNot a square matrix, cannot apply function";
        }

        else if (choice == 7)   //Sum of Diagonal
        {
            cout << "\nSum of diagonal is: " << sumOfDiagonal(matrix, MAX_ROW);
        }

        else if (choice == 8)   //Exit
        {
            ; //No action Needed
        }

        else
        {
            cerr << "Wrong choice, try again!";
        }

    } while (choice != 8);
    
    cout << "Have a nice day :)";

    return 0;
}

/**
* Function <code>menu</code> shows the menu options to the user
* <BR>
* Returns users input
*/

    int menu()
    {
        int choice;

        cout << "1. Sum of Row" << endl;
        cout << "2. Sum of Column" << endl;
        cout << "3. Fill random" << endl;
        cout << "4. Print Matrix" << endl;
        cout << "5. Check if Identity Matrix" << endl;
        cout << "6. Make Identity Matrix " << endl;
        cout << "7. Sum og Diagonal" << endl;
        cout << "8. Exit" << endl;
     
        cout << endl;
        cout << "Enter your choice:";

        cin >> choice;

     return choice;
}