//7.	Дано файл, у кожному рядку якого вказані адреси електронної пошти.Дано рядок, який містить адресу електронної пошти з певної організації.
//Створити новий файл, у який переписати всі адреси електронної пошти, що відносяться до даної організації.Вивести кількість різних знайдених адрес.


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
        Fin.getline(buff, 16); // считали строку из файла
        if (buff == slovo)
        {
            f << buff << '\n';
            i++;
        }
    }
    cout << "Найденно совпадений: " << i << endl;
    Fin.close();
    f.close();
    return 0;
}