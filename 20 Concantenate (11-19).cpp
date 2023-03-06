#include<iostream>
#include<conio.h>
using namespace std;

void P11()
{
	int arr1[5], arr2[5], i, j;
	cout << "Enter values for arr1" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr1[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr1[i] << endl;
	}
	cout << "Enter values for arr2" << endl;
	for (j = 0; j < 5; j++)
	{
		cout << "Enter the Number ";
		cin >> arr2[j];
	}
	for (j = 0; j < 5; j++)
	{
		cout << "The number is " << arr2[j] << endl;
	}
	for (i = 0; i < 5; i++)
	{
		if (arr1[i] % 2 != 0)
		{
			cout << arr1[i] << " is odd number" << endl;
		}
		if (arr1[i] % 2 == 0)
		{
			cout << arr1[i] << " is even number" << endl;
		}
	}
	for (j = 0; j < 5; j++)
	{
		if (arr2[j] % 2 != 0)
		{
			cout << arr2[j] << " is odd number" << endl;
		}
		if (arr2[j] % 2 == 0)
		{
			cout << arr2[j] << " is even number" << endl;
		}
	}
	cout << "\n";
}

void P12()
{
	int arr[5], i;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	int flag = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			flag++;
		}
	}
	cout << flag << " Odd number present" << endl;
	flag = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			flag++;
		}
	}
	cout << flag << " Even Number present" << endl;
	cout << "\n";
}

void P13()
{

	int arr[5], i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	cout << "Elements in ascending order" << endl;
	int count;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				count = arr[i];
				arr[i] = arr[j];
				arr[j] = count;
			}
		}
		cout << "The number is " << arr[i] << endl;
	}
}

void P14()
{
	int arr[5], i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	cout << "Elements in descending order" << endl;
	int count;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				count = arr[i];
				arr[i] = arr[j];
				arr[j] = count;
			}
		}
		cout << "The number is " << arr[i] << endl;
	}
	cout << "\n";
}

void P15()
{
	int arr[5], i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	int count;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				count = arr[i];
				arr[i] = arr[j];
				arr[j] = count;
			}
		}
	}
	i = 1;
	cout << "The second smallest element is " << arr[i];
	cout << "\n";
}

void P16()
{
	int arr[5], i, j;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	int count;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] < arr[j])
			{
				count = arr[i];
				arr[i] = arr[j];
				arr[j] = count;
			}
		}
	}
	i = 1;
	cout << "The second largest number is " << arr[i] << endl;
	cout << "\n";
}

void P17()
{
	int arr1[5], arr2[5], i;
	cout << "Enter values for arr1" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr1[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr1[i] << endl;
	}
	cout << "Enter values for arr2" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr2[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr2[i] << endl;
	}
	int flag = 0;
	for (i = 0; i < 5; i++)
	{
		if (arr1[i] != arr2[i])
		{
			flag++;
		}
	}
	if (flag != 0)
	{
		cout << "arrays are not same" << endl;
	}
	else
	{
		cout << "arrays are same" << endl;
	}
}

void P18()
{
	int i, j;
	int arr1[5], arr2[5], arr3[5];
	cout << "Enter values for first array" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr1[i];
		arr3[i] = arr1[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr1[i] << endl;
	}
	j = i;
	cout << "Enter values for second array" << endl;
	for (i = 0; i < 5; i++)
	{
		for (i = 0; i < 5; i++)
		{
			cout << "Enter the Number ";
			cin >> arr2[i];
			arr3[j] = arr2[i];
			j++;
		}
		cout << "The merge array is ";
		for (i = 0; i < j; i++)
		{
			cout << arr3[i] << " ";
		}
	}
	cout << "\n";
}

void P19()
{
	int arr[5], i, j, MD;
	cout << "Enter values for arr" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter the Number ";
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		cout << "The number is " << arr[i] << endl;
	}
	int count;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				count = arr[i];
				arr[i] = arr[j];
				arr[j] = count;
			}
		}
	}
	i = 0, j = 4;
	MD = arr[j] - arr[i];
	cout << "Maximum difference between array is : " << MD << endl;
}


int main()
{
	int Press;

	//Menu
	cout << "1) Separate odd and even integers" << endl;
	cout << "2) Count odd and even integers" << endl;
	cout << "3) Sort elements in ascending order" << endl;
	cout << "4) Sort elements in descending order" << endl;
	cout << "5) Find 2nd smallest element" << endl;
	cout << "6) Find 2nd largest element" << endl;
	cout << "7) Check two arrays are same or not" << endl;
	cout << "8) Merge two unsorted array of different lengths" << endl;
	cout << "9) Find maximum difference between two arrays" << endl;
	cout << "10) Exit" << endl;
	cout << "Enter command\n";
	cin >> Press;
	//now for the main switch statements
	switch (Press) {
	case 1:
		P11();
		break;
	case 2:
		P12();
		break;
	case 3:
		P13();
		break;
	case 4:
		P14();
		break;
	case 5:
		P15();
		break;
	case 6:
		P16();
		break;
	case 7:
		P17();
		break;
	case 8:
		P18();
		break;
	case 9:
		P19();
		break;
	default:
		// operator is doesn't match any case constant (1,2,3,4,5,6,7,8,9)
		cout << "Error! the command is not correct" << endl;
		break;
	}
}