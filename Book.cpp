// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
struct book
{
    char Name[100];
    char author[100];
    int year;
    float price;

};

int main()
{
    book b[100];
    int n, i;
    
    
    cout << "Enter number of books you want to store: ";
    cin >> n;
    cout << endl;

    
    for (i = 0; i < n; i++) {
        cout << "________Enter Details_______" << endl;
        cout << "Enter title: ";
        cin >> b[i].Name;
        cout << "Enter author: ";
        cin >> b[i].author;
        cout << "Enter year: ";
        cin >> b[i].year;
        cout << "Enter price: ";
        cin >> b[i].price;

    }

    cout << "\n\nNumber Of Books are: " << n << endl;

    // Printing details
    cout << "=======================================================================\n";
    cout << "Book Title \t|Author \t|Year \t\t|price \t\t|status \n";
    cout << "=======================================================================\n";
    
    for (i = 0; i < n; i++)
    {
        cout << "\n" << b[i].Name << "\t\t|" << b[i].author << "\t\t|" << b[i].year << "\t\t|" << b[i].price << "\t\t|";
        if (b[i].year <= 1990)
        {
            cout << "Outdated";
        }
        else if (b[i].year >= 1991 && b[i].year <= 2000)
        {
            cout << "Medium";
        }
        else
        {
            cout << "Latest";
        }
    }
    cout << "\n\n=================================================";

    return 0;
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
