// Classwork 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <stdio.h>

#include <iostream>



using namespace std;



bool IsCap(char t) {

	if (t >= 65 && t <= 90)return true;

	return false;

}



bool IsSml(char t) {

	if (t >= 97 && t <= 122)return true;

	return false;

}



void classwork7()

{

	cout << "Enter your string:\n";

	char* text = new char[256];

	int count = 0, curIter = 0, iterI = 0, I = 0;

	char temp = '\0';

	char** words = new char* [256];

	for (int i = 0; i < 256; ++i) {

		words[i] = new char[256];

	}

	char** words1 = new char* [256];

	for (int i = 0; i < 256; ++i) {

		words1[i] = new char[256];

	}

	int j = 0;

	cin.getline(text, 256);

	for (int i = 0; text[i - 1] != '\0'; i++)

	{

		if (temp == '\0' && text[i] != ' ')

		{

			curIter = i;

			temp = text[i];

		}



		if (text[i + 1] == ' ' || text[i + 1] == '\0')

		{

			if (curIter <= i && temp != '\0')

			{

				for (int j = curIter, g = 0; j <= i; j++)

				{

					words[iterI][g++] = text[j];

				}

				iterI++;

			}

			temp = '\0';

		}

	}

	for (int i = 0; text[i - 1] != '\0'; i++)

	{

		if (temp == '\0' && text[i] != ' ')

		{

			curIter = i;

			temp = text[i];

		}



		if (text[i + 1] == ' ' || text[i + 1] == '\0')

		{

			if (curIter <= i && temp != '\0')

			{

				for (int j = curIter, g = 0; j <= i; j++)

				{

					words1[I][g++] = text[j];

				}

				I++;

			}

			temp = '\0';

		}

	}

	cout << endl;

	cout << "Words: \n";

	for (int i = 0; i < iterI; i++)

	{

		for (int k = 0; words[i][k] > 0; k++)

			cout << words[i][k];

		cout << endl;

	}

	cout << endl;



	int* countletters = new int[iterI];

	for (int i = 0; i < iterI; ++i) {

		countletters[i] = 0;

	}

	for (int i = 0; i < iterI; ++i) {

		for (int k = 0; words[i][k] > 0; k++) {

			countletters[i]++;

		}

	}



	cout << "How many letters in every word:\n";

	for (int i = 0; i < iterI; ++i) {

		cout << i + 1 << "---->" << countletters[i] << endl;

	}





	cout << endl;

	cout << "Which order do you prefer?\n";

	cout << "1----->from smallest to biggest word.\n";

	cout << "2----->from biggest to smallest word.\n";

	cout << endl;

	int choose;

	do cin >> choose; while (choose < 1 || choose>2);

	switch (choose) {

	case 1: {cout << "Text from smallest to biggest word: \n";

		for (int i = 0; i < iterI; ++i) {

			for (int j = i; j < iterI; ++j) {

				if (countletters[j] < countletters[i]) {

					char* temp = new char[256];

					for (int k = 0; k < countletters[i]; ++k) {

						temp[k] = words[i][k];

					}

					for (int k = 0; k < countletters[i]; ++k) {

						words[i][k] = ' ';

					}

					for (int k = 0; k < countletters[j]; ++k) {

						words[i][k] = words[j][k];

					}

					words[i][countletters[j]] = '\0';

					for (int k = 0; k < countletters[i]; ++k) {

						words[j][k] = temp[k];

					}

					int t = countletters[i];

					countletters[i] = countletters[j];

					countletters[j] = t;

					delete[] temp;

				}

			}

		}

		for (int i = 0; i < iterI; i++)

		{

			for (int k = 0; words[i][k] > 0; k++)

				cout << words[i][k];

			cout << " ";

		}

		cout << endl; }; break;

	case 2: {cout << "Text from smallest to biggest word: \n";

		for (int i = 0; i < iterI; ++i) {

			for (int j = i; j < iterI; ++j) {

				if (countletters[j] > countletters[i]) {

					char* temp = new char[256];

					for (int k = 0; k < countletters[i]; ++k) {

						temp[k] = words[i][k];

					}

					for (int k = 0; k < countletters[i]; ++k) {

						words[i][k] = ' ';

					}

					for (int k = 0; k < countletters[j]; ++k) {

						words[i][k] = words[j][k];

					}

					words[i][countletters[j]] = '\0';

					for (int k = 0; k < countletters[i]; ++k) {

						words[j][k] = temp[k];

					}

					int t = countletters[i];

					countletters[i] = countletters[j];

					countletters[j] = t;

					delete[] temp;

				}

			}

		}

		for (int i = 0; i < iterI; i++)

		{

			for (int k = 0; words[i][k] > 0; k++)

				cout << words[i][k];

			cout << " ";

		}

		cout << endl; }; break;

	}







	for (int i = 0; i < I; ++i) {

		for (int j = i; j < I; ++j) {

			if (words1[j][0] < words1[i][0]) {

				char* temp = new char[256];

				for (int k = 0; k < countletters[i]; ++k) {

					temp[k] = words1[i][k];

				}

				for (int k = 0; k < countletters[i]; ++k) {

					words1[i][k] = ' ';

				}

				for (int k = 0; k < countletters[j]; ++k) {

					words1[i][k] = words1[j][k];

				}

				words1[i][countletters[j]] = '\0';

				for (int k = 0; k < countletters[i]; ++k) {

					words1[j][k] = temp[k];

				}

				int t = countletters[i];

				countletters[i] = countletters[j];

				countletters[j] = t;

				delete[] temp;

			}

			if (words1[j][0] == words1[i][0] && words1[j][1] < words1[i][1]) {

				char* temp = new char[256];

				for (int k = 0; k < countletters[i]; ++k) {

					temp[k] = words1[i][k];

				}

				for (int k = 0; k < countletters[i]; ++k) {

					words1[i][k] = ' ';

				}

				for (int k = 0; k < countletters[j]; ++k) {

					words1[i][k] = words1[j][k];

				}

				words1[i][countletters[j]] = '\0';

				for (int k = 0; k < countletters[i]; ++k) {

					words1[j][k] = temp[k];

				}

				int t = countletters[i];

				countletters[i] = countletters[j];

				countletters[j] = t;

				delete[] temp;

			}

			if (words1[j][0] == words1[i][0] && words1[j][1] == words1[i][1] && words1[j][2] < words1[i][2]) {

				char* temp = new char[256];

				for (int k = 0; k < countletters[i]; ++k) {

					temp[k] = words1[i][k];

				}

				for (int k = 0; k < countletters[i]; ++k) {

					words1[i][k] = ' ';

				}

				for (int k = 0; k < countletters[j]; ++k) {

					words1[i][k] = words1[j][k];

				}

				words1[i][countletters[j]] = '\0';

				for (int k = 0; k < countletters[i]; ++k) {

					words1[j][k] = temp[k];

				}

				int t = countletters[i];

				countletters[i] = countletters[j];

				countletters[j] = t;

				delete[] temp;

			}

			if (words1[j][0] == words1[i][0] && words1[j][1] == words1[i][1] && words1[j][2] == words1[i][2] && words1[j][3] < words1[i][2]) {

				char* temp = new char[256];

				for (int k = 0; k < countletters[i]; ++k) {

					temp[k] = words1[i][k];

				}

				for (int k = 0; k < countletters[i]; ++k) {

					words1[i][k] = ' ';

				}

				for (int k = 0; k < countletters[j]; ++k) {

					words1[i][k] = words1[j][k];

				}

				words1[i][countletters[j]] = '\0';

				for (int k = 0; k < countletters[i]; ++k) {

					words1[j][k] = temp[k];

				}

				int t = countletters[i];

				countletters[i] = countletters[j];

				countletters[j] = t;

				delete[] temp;

			}

		}

	}

	cout << "Words in alphabetical order: \n";

	for (int i = 0; i < I; i++)

	{

		for (int k = 0; words1[i][k] > 0; k++)

			cout << words1[i][k];

		cout << " ";

	}

	cout << endl;

	delete[] text;

	for (int i = 0; i < iterI; ++i) delete[] words[i];

	for (int i = 0; i < iterI; ++i) delete[] words1[i];

	delete[] words;

	delete[] words1;

	delete[] countletters;

	return 0;

}
void DgtAlphCounter(char* s)

{

	int digitcount = 0, alphacount = 0;

	for (int i = 0; i < strlen(s); ++i) {

		if (isalpha(s[i]))alphacount++;

		if (isdigit(s[i]))digitcount++;

	}

	cout << "There are " << digitcount << " digits in this string.\n";

	cout << "There are " << alphacount << " letters in this string.\n";

}



void SmlrWrds(char* s)

{

	char temp = '\0';

	int count = 0, curIter = 0, iterI = 0;



	char** matrix = new char* [1000];

	for (int i = 0; i < 1000; i++)

		matrix[i] = new char[1000];



	for (int i = 0; s[i - 1] != '\0'; i++)

	{

		if (temp == '\0' && s[i] != ' ')

		{

			curIter = i;

			temp = s[i];

		}



		if (s[i + 1] == ' ' || s[i + 1] == '\0')

		{

			if (curIter < i && temp != '\0')

			{

				for (int j = curIter, g = 0; j <= i; j++)

				{

					matrix[iterI][g++] = s[j];

				}

				iterI++;

			}

			temp = '\0';

		}

	}



	bool flag = false;

	for (int j = 0; j < iterI; j++)

	{

		for (int q = 0; q < iterI; q++)

		{

			for (int g = 0; matrix[j][g - 1] > 0 || g == 0; g++)

			{

				if (matrix[j][g] < 0 && j != q)

				{

					flag = true;

					break;

				}



				if (matrix[j][g] != matrix[q][g])

					break;

			}

			if (flag) break;

		}

		if (flag) break;

	}



	if (flag) cout << "Yes, some words in text are equal" << endl;

	else cout << "No, there are no equal words in text" << endl;

	for (int i = 0; i < 1000; ++i) delete[] matrix[i];

	delete[] matrix;

}



void WordCounter(char* s)

{

	int count = 0;

	for (int i = 0; i < strlen(s); ++i) {

		if (isalpha(s[i]) && isspace(s[i + 1]))count++;

	}

	if (isspace(s[strlen(s) - 1]) == 0)count++;

	cout << "There are " << count << " words.\n";

}



void classwork6()

{

	cout << "There is a string.\n";

	cout << "Enter the string:\n";

	char* s = new char[1000];

	cin.getline(s, 1000);

	WordCounter(s);

	DgtAlphCounter(s);

	cout << "Are there any equal words?\n";

	SmlrWrds(s);

	delete[] s;

	return 0;

}
int main{
	classwork6();
}