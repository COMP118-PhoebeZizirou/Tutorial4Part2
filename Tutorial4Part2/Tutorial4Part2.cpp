/** \File Tutorial4Part2.cpp
    \Brief Matrix manipulation program, Part of Lab 4 Part 2 COMP-118
    \Details Program which we can
    \Author Phoebe Zizirou
    \Version 0.1
    \Date 15/05/2021
    \Copyright UNIC*/

#include<iostream>

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
    int choice;

    do
    {
        choice = menu();

        if (choice == 1)    //Sum of Row
        {

        }

        else if (choice == 2)   //Sum of Column
        {

        }

        else if (choice == 3)   //Fill Random
        {

        }

        else if (choice == 4)   //Print Matrix
        {

        }

        else if (choice == 5)   //Option 1
        {

        }

        else if (choice == 6)   //Option 2
        {

        }

        else if (choice == 7)   //Option 3
        {

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
        cout << "5. Option 1" << endl;
        cout << "6. Option 2" << endl;
        cout << "7. Option 3" << endl;
        cout << "8. Exit" << endl;
     
        cout << endl;
        cout << "Enter your choice:";

        cin >> choice;

     return choice;
}