// Classwork 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main() {
	cout << "";

	char  s[500];
	cout << "" << endl;
	cin.getline(s, 256);
	/////////////////////-----------------------///////////////////////////////
	int count = 1;
	if (s[0] == 32)count = 0;
	if (s[0] != 32)count = 1;
	for (int i = 1; i < strlen(s) - 1; i++) {
		if (isalpha(s[i]) && isspace(s[i - 1])) count++;
	}
	cout << "There are  " << count << " words\n";
	///////////////////--------------------//////////////////////////////////
	int d = count;
	char* d = new char[20];
	int** z = new int* [d];

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < strlen(s); j++) {
			if (isspace(s[j]))i++;
			d[j] = s[j];
		}


	}
}
