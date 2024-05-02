#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	bool alreadyHere;

	for (int i = 0; i < SIZE;)
	{
		alreadyHere = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandomValue)
			{
				alreadyHere = true;
				break;
			}
		}

		if (!alreadyHere)
		{
			arr[i] = newRandomValue;
			i++;
		}
	}

	int minValue = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if(arr[i] < minValue)
		{
			minValue = arr[i];
		}
	}

	cout << "Наименьшее число в массиве = " << minValue << endl;
}
