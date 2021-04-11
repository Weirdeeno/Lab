/*
9.	������� ���������� ������� Palindrome (S) �������� ����, ��� ������� True, ���� ���� S � ���������� (�������� �������� ���� ������� � ������ �����),
� False � ������ �������. �������� ����� � �� ������� �� ���������������. 
������� �������� ������� Palindrome ��� �'��� ����� �����.
*/


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	const int startSize = 256;
	char s[startSize];
	char s_1[startSize];
	cin.getline(s, 256);
	int j = 0;
	for (int i = 0; i < startSize; i++)
	{
		if (s[i] == ' ') continue;

		s_1[j] = s[i];
		j++;
	}
	int resSize = strlen(s_1);
	char* s_2 = new char[resSize + 1];
	for (int i = 0; i < resSize; i++)
	{
		s_2[i] = s_1[resSize - 1 - i];
	}
	s_2[resSize] = '\0';
	if (!strcmp(s_1, s_2))
	{
		cout << "TRUE\n";
	}
	else
	{
		cout << "FALSE\n";
	}
	return 0;
}