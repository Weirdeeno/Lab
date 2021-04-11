//1. ��������� �� ���������� ��������� ������� ��������� �������� ����� � ������ ������� �������
//(����� ������ ������� ������ �������� � ������ �������) :
//	1) ��������� ��������� �����; +
//	2) ��������� ��������; +
//	3) ����� ��������;+
//	4) ��������� ��������; +
//	5) ���������� ������� ��������.
//	���������������� � ������� ������ ��������� �������.
//7.	�������������� ������ ������, �� ������ ���� �����.


#include <iostream>
using namespace std;

class Node
{
public:
    int number;
    Node* next;
    Node* last;
};

int choose_case(float mark)
{
    int mark_key;
    if (mark == 0)
        mark_key = 0;
    else if (mark == 1)
        mark_key = 1;
    else if (mark == 2)
        mark_key = 2;
    else if (mark == 3)
        mark_key = 3;
    else if (mark == 4)
        mark_key = 4;
    else if (mark == 5)
        mark_key = 5;
    else if (mark == 6)
        mark_key = 6;
    else if (mark == 7)
        mark_key = 7;
    return mark_key;
}

int main()
{
    setlocale(LC_ALL, "rus");
    short action = -1;
    Node* head = NULL;
    Node* tail = NULL;
    Node* ptrLast = NULL;

    int mark;
    int a = 1;


    do
    {
        system("cls");
        cout << "1. �������� �������\n" << endl;
        cout << "2. �������� ������ ����� �������\n" << endl;
        cout << "3. �������� ������ ������ ������\n" << endl;
        cout << "4. ������� ������\n" << endl;
        cout << "5. ������� �����\n" << endl;
        cout << "6. ����� ��������\n" << endl;
        cout << "7. ������ ���������� ���������\n" << endl;
        cout << "0. �����\n\n" << endl;
        cout << "��� �����: " << endl;
        cin >> mark;
        if (mark > 7)
        {
            system("CLS");
            cout << "\t!!! �������� �����. ��������� ���� !!!\n\n";
            system("PAUSE");
            system("CLS");
        }
        switch (choose_case(mark))
        {

            case 0:
            {
                system("CLS");
                break;
                a = 0;
            }

            case 1:
            {
                system("CLS");
                int numb = -1;
                cout << "������� �����: ";
                cin >> numb;
                Node* ptr = new Node;
                ptr->number = numb;
                ptr->next = NULL;
                tail = ptr;
                if (head == NULL)
                {
                    head = ptr;
                    ptrLast = ptr;
                    ptr->last = NULL;
                    system("CLS");
                    continue;
                }
                ptr->last = ptrLast;
                ptrLast->next = ptr;
                ptrLast = ptr;
                system("CLS");
                continue;
                a = 0;
            }

            case 2:
            {
                system("CLS");
                Node* ptr = NULL;
                if (head == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                cout << "* * * * * ������: ����� ������� * * * * *\n\n";
                ptr = head;
                while (1)
                {
                    cout << ptr->number << " ";
                    if (ptr->next == 0)
                        break;
                    ptr = ptr->next;
                }
                cout << "\n\n";
                system("PAUSE");
                system("CLS");
                continue;
                a = 0;
            }

            case 3:
            {
                system("CLS");
                Node* ptr = NULL;
                if (head == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                cout << "* * * * * ������: ������ ������ * * * * *\n\n";
                ptr = tail;
                while (1)
                {
                    cout << ptr->number << " ";
                    if (ptr->last == 0)
                        break;
                    ptr = ptr->last;
                }
                cout << "\n\n";
                system("PAUSE");
                system("CLS");
                continue;
                a = 0;
            }

            case 4:
            {
                system("CLS");
                Node* ptrDelete = NULL;
                if (head == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                if (head->next == NULL)
                {
                    head = NULL;
                    tail = NULL;
                    delete head;
                    continue;
                }
                ptrDelete = head;
                head = ptrDelete->next;
                head->last = NULL;
                delete ptrDelete;
                continue;
                a = 0;
            }

            case 5:
            {
                system("CLS");
                Node* ptrDelete = NULL;
                if (tail == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                if (tail->last == NULL)
                {
                    head = NULL;
                    tail = NULL;
                    delete tail;
                    continue;
                }
                ptrDelete = tail;
                tail = ptrDelete->last;
                tail->next = NULL;
                ptrLast = tail;
                delete ptrDelete;
                continue;
                a = 0;
            }

            case 6:
            {
                system("CLS");
                Node* ptr = NULL;
                int key = -1;
                if (head == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                cout << "������� ������� ��� ������: ";
                cin >> key;
                ptr = head;
                while (1)
                {
                    if (key == ptr->number)
                    {
                        cout << "\n\t!!! ������� ������ !!!\n";
                        break;
                    }
                    if (ptr->next == NULL)
                    {
                        cout << "\n\t!!! ������� �� ������ !!!\n";
                        break;
                    }
                    ptr = ptr->next;
                }
                system("PAUSE");
                system("CLS");
                continue;
                a = 0;
            }
            case 7:
            {
                system("CLS");
                Node* ptr = NULL;
                int z = 1;
                if (head == NULL)
                {
                    cout << "\t!!! ������ ���� !!!\n\n";
                    system("PAUSE");
                    system("CLS");
                    continue;
                }
                ptr = head;
                while (1)
                {
                    if (ptr->next == 0)
                        break;
                    ptr = ptr->next;
                    z++;
                }
                cout << "\t!!! � ������ - " << z << " ���������!!!\n\n";
                cout << "\n\n";
                system("PAUSE");
                system("CLS");
                continue;
                a = 0;
            }
        }
    }while (a == 1 || a == 0);

    return 0;
}