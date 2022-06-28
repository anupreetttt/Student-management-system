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
    void Insert()
    {
        int myRoll;
        string myName;
        float mymarks;

        cout << "Enter Roll number of the student: " << endl;
        cin >> myRoll;
        cout << "Enter Name of the student: " << endl;
        cin >> myName;
        cout << "Enter Marks of the student: " << endl;
        cin >> mymarks;

        Node *newNode = new Node;
        newNode->rollNum = myRoll;
        newNode->name = myName;
        newNode->marks = mymarks;
        newNode->percetnage = mymarks / 100 * 100;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next !=)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        cout << "newnode inserted successfully" << endl;
    }

    void Search()
    {
        if (headh == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int myRoll, found;
            cout << "Enter roll number you want to search: ";
            cin >> myRoll;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (myRoll = ptr->rollNum)
                {
                    cout << "Roll number: " << ptr->rollNum << endl;
                    cout << "Name: " << ptr->name << endl;
                    cout << "Marks: " << ptr->marks << endl;
                    cout << "Percenatge: " << ptr->percetnage << endl;
                }
                ptr = ptr->next;
            }
            if (found == 0){
                cout << "Roll number does not exist " << endl;
            }
        }
    }
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