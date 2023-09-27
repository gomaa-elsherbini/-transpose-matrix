#include <iostream>
using namespace std;



void arrayWithOrderedNumbers(int arr[3][3], int Rows, int Colos)
{
	int counter = 1;
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = counter++;
		}
	}
}
void printMatrix(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout<<"  " << arr[i][x] << "  ";
		}
		cout << endl;
	}
}

void transposeMatrix(int arr[3][3],int transposedMatrix[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++) //{ {1, 2, 3}, { 4,5,6 }, {7,8,9} }
	{
		for (int x = 0; x < Colos; x++)
		{
			transposedMatrix[i][x]= arr[x][i];
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][3], transposedMatrix[3][3];

	arrayWithOrderedNumbers(arr, 3, 3);
	printMatrix(arr, 3, 3);
	cout << "Transport Matrix:\n";

	cout << "=======================\n";
	transposeMatrix(arr, transposedMatrix, 3, 3);
	printMatrix(transposedMatrix, 3, 3);


	return 0;
}