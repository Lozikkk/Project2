#include <iostream>
#include <time.h>
#include <cmath>
#include <iomanip>
#include <cstring>
using namespace std;













void main()
{
	srand(time(0));


	/*int rows = 0, cols = 0;
	cout << "Enter rows" << endl;
	cin >> rows;
	cout << "Enter cols" << endl;
	cin >> cols;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0;i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 100;
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;*/



	/*char arr[] = { 'H','i','\0' };*/
	/*char arr[] = "Hi";*/
	/*for (int i = 0; arr[i] != '\0'; i++)
	{
		cout << arr[i];
	}*/
	/*cout<<sizeof(arr)<<endl;
	cout << strlen(arr) << endl;
	
	cout << arr << endl;*/

	//char arr[255];
	//cin.getline(arr, 255);

	//cout << sizeof(arr) << endl;
	//cout << strlen(arr) << endl;

	//cout << arr << endl;

	/*Kop[ijuvatu stroku masivu*/

	/*char arr[255];
	char arr2[] = "Word";
	strcpy_s(arr, arr2);

	cout << arr << endl;*/

	/*Perepusue pevnu kilkist' eleventiv u masiv*/

	/*char arr[255];
	char arr2[] = "123456789";

	strncpy_s(arr, arr2, 5);

	cout << arr << endl;*/

	/*Dopushe druguj maswiv u pershuj*/

	/*char arr[255] = "Hi ";
	char arr2[] = "123456789";

	strcat_s(arr, arr2);

	cout << arr << endl;*/

	/*Dopushe druguj masiv u pershuj pevnu kilkist' elementiv*/

	/*char arr[255]="Hi ";
	char arr2[] = "123456789";

	strncat_s (arr, arr2, 5);

	cout << arr << endl;
	*/

	
	char arr[255];
	cout << "Enter symbols-->" << endl;
	cin.getline(arr, 255);

	int count=0, count1=0, count2=0, count3=0;
		
	
	for (int i = 0; i < strlen (arr); i++)
	{
		if (isspace(arr[i]))
		{
			
			count++;
		}
		if (isupper(arr[i]))
		{
			
			count1++;
		}
		if (islower(arr[i]))
		{
			
			count2++;
		}
		if (isdigit(arr[i]))
		{
			
			count3++;
		}
	}
	cout << "Spacebar ----- " << count << endl;
	cout << "Big letter ----- " << count1 << endl;
	cout << "Small letter ----- " << count2 << endl;
	cout << "Digits ----- " << count3 << endl;




	







	system("pause");
}