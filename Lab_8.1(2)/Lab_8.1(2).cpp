#include <iostream>
#include <Windows.h>

using namespace std;

bool perevirka(const char* lit_r, const char* para, const char* para1, int j, int k, int i);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char lit_r[20] = "sfSQWfs";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	char para[] = "SQ";
	char para1[] = "QS";

	if (perevirka(lit_r, para, para1, 0, 0, 0))
		cout << "Так є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;
	else
		cout << "Ні не є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;

	return 0;
}

bool perevirka(const char* lit_r, const char* para, const char* para1, int j, int k, int i)
{
	j = 0;
	k = i;
	while (para[j] != '\0')
	{
		if ((lit_r[k] == para[j]) || (lit_r[k] == para1[j]) && lit_r[k] != '\0')
		{
			j++;
			k++;
		}
		else
			break;
	}
	if (para[j] == '\0')
		return true;
	if (lit_r[i] != '\0')
		return perevirka(lit_r, para, para1, j, k, i + 1);
	else
		return false;

}
