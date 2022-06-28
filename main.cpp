#include <iostream>
// #include <conio.h>
using namespace std;

class Node
{

public:
    int rollNum;
    string name;
    float marks;
    float percetnage;
    Node *next;
};

class LinkedList
{

public:
    Node *head = NULL;
};

int main()
{
    LinkedList object;
    p:
    system("cls")

    int choice;
    cout << "1. Insert record: " << endl;
    cout << "2. Search record: " << endl;
    cout << "3. Count nodes: " << endl;
    cout << "4. Update nodes: " << endl;
    cout << "5. Delete record: " << endl;
    cout << "6. Show all records: " << endl;
    cout << "7. Exit: " << endl;
    ;
    cout << "Enter your selection: " << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        break;
    case 2:
        system("cls");
        break;
    case 3:
        system("cls");
        break;
    case 4:
        system("cls");
        break;
    case 5:
        system("cls");
        break;
    case 6:
        system("cls");
        break;
    case 7:
        exit(0);
    default:
    cout << "Invalid choice" << endl;
    }
    getch();
    goto p;
}