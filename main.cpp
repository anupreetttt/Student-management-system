#include <iostream>
#include <stdlib.h>
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
        float myMarks;

        cout << "Enter Roll number of the student: " << endl;
        cin >> myRoll;
        cout << "Enter Name of the student: " << endl;
        cin >> myName;
        cout << "Enter Marks of the student: " << endl;
        cin >> myMarks;

        Node *newNode = new Node;
        newNode->rollNum = myRoll;
        newNode->name = myName;
        newNode->marks = myMarks;
        newNode->percetnage = myMarks / 100 * 100;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        cout << "Newn entry was inserted successfully" << endl;
    }

    void Search()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int myRoll, found = 0;
            cout << "Enter roll number you want to search: ";
            cin >> myRoll;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (myRoll == ptr->rollNum)
                {
                    cout << "Roll number: " << ptr->rollNum << endl;
                    cout << "Name: " << ptr->name << endl;
                    cout << "Marks: " << ptr->marks << endl;
                    cout << "Percenatge: " << ptr->percetnage << endl;
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
            {
                cout << "Roll number " << myRoll << " does not exist " << endl;
            }
        }
    }
    void count()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int c = 0;
            Node *ptr = head;
            while (ptr != NULL)
            {
                c++;
                ptr = ptr->next;
            }
            cout << "Total number of nodes: " << c << endl;
        }
    }

    void Updation()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int myRoll, found = 0;
            cout << "Enter roll number you want to update: ";
            cin >> myRoll;
            Node *ptr = head;
            while (ptr != NULL)
            {
                if (myRoll == ptr->rollNum)
                {
                    cout << "Enter new roll number of the student: " << endl;
                    cin >> ptr->rollNum;
                    cout << "Enter Name of the student: " << endl;
                    cin >> ptr->name;
                    cout << "Enter Marks of the student: " << endl;
                    cin >> ptr->marks;
                    ptr->percetnage = ptr->marks / 100 * 100;
                    cout << "Record was updated successfully" << endl;
                    found++;
                }
                ptr = ptr->next;
            }
            if (found == 0)
            {
                cout << "Roll number " << myRoll << " does not exist " << endl;
            }
        }
    }
    void Deletion()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            int myRoll, found = 0;
            cout << "Enter roll number you want to Delete: ";
            cin >> myRoll;

            if (myRoll == head->rollNum)
            {
                Node *ptr = head;
                head = head->next;
                cout << "Record deleted successfully." << endl;
                found++;
                delete ptr;
            } else {
                Node *pre = head;
                Node *ptr = head->next;
                while (ptr != NULL)
                {
                    if (myRoll = ptr->rollNum)
                    {
                        pre->next = ptr->next;
                        cout << "Record deleted successfully." << endl;
                        found++;
                        delete ptr;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr->next;
                }
            }  
            if (found == 0)
            {
                cout << "Roll number " << myRoll << " does not exist " << endl;
            }
            
        }
    }
};

int main()
{
    LinkedList object;
    system("clear");
p:

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
        system("clear");
        object.Insert();
        break;
    case 2:
        system("clear");
        object.Search();
        break;
    case 3:
        system("clear");
        object.count();
        break;
    case 4:
        system("clear");
        break;
    case 5:
        system("clear");
        break;
    case 6:
        system("clear");
        break;
    case 7:
        exit(0);
    default:
        cout << "Invalid choice" << endl;
    }
    getchar();
    goto p;
}