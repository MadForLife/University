#include <iostream>
#include <ctime>

using namespace std;

bool is_vowel(char ch);
void set_data(char* randomArr, int length);
char* filter_vowels(char* randomArr, int length);


int main()
{
	srand(time(NULL));

	int length = 0;
	cout << "Vuvedete duljina na masiva: ";
	cin >> length;

	char* randArr = new char[length];

	set_data(randArr, length);

	char* filtered = filter_vowels(randArr, length);

	cout << endl << filtered;

	return 0;
}

bool is_vowel(char ch)
{
	ch = toupper(ch);

	return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void set_data(char* randomArr, int length)
{
	for (int i = 0; i < length; i++)
	{
		randomArr[i] = rand() % 26 + 'a';
		cout << randomArr[i];
	}
}

char* filter_vowels(char* randomArr, int length)
{
	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (is_vowel(randomArr[i]))
		{
			counter++;
		}
	}

	char* temp = new char[counter + 1];
	counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (is_vowel(randomArr[i]))
		{
			temp[counter++] = randomArr[i];
		}
	}

	temp[counter++] = '\0';

	return temp;
}