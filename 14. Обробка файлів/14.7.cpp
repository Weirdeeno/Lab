//7.	���� ����, � ������� ����� ����� ������ ������ ���������� �����.���� �����, ���� ������ ������ ���������� ����� � ����� ����������.
//�������� ����� ����, � ���� ���������� �� ������ ���������� �����, �� ���������� �� ���� ����������.������� ������� ����� ��������� �����.


#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream Fin("mail1.txt");
    fstream f("mail2.txt", ios::out);

    string slovo = "ysouz@meta.ua";

    char buff[16];
    int i = 0;

    while (!Fin.eof())
    {
        Fin.getline(buff, 16); // ������� ������ �� �����
        if (buff == slovo)
        {
            f << buff << '\n';
            i++;
        }
    }
    cout << "�������� ����������: " << i << endl;
    Fin.close();
    f.close();
    return 0;
}