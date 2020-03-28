#include "Functions.h"

using namespace System;
using namespace System::Windows::Forms;

int getNum(int i, TextBox^ TB, int& len)
{
	int Num = 0;
	wchar_t c;
	len = 0;
	do
	{
		c = TB->Text[i];
		switch (c)
		{
		case '1':
			Num = Num * 10 + 1;
			break;
		case '2':
			Num = Num * 10 + 2;
			break;
		case '3':
			Num = Num * 10 + 3;
			break;
		case '4':
			Num = Num * 10 + 4;
			break;
		case '5':
			Num = Num * 10 + 5;
			break;
		case '6':
			Num = Num * 10 + 6;
			break;
		case '7':
			Num = Num * 10 + 7;
			break;
		case '8':
			Num = Num * 10 + 8;
			break;
		case '9':
			Num = Num * 10 + 9;
			break;
		case '0':
			Num = Num * 10 + 0;
			break;
		}
		if (i >= TB->Text->Length - 1)
			break;
		else
		{
			i++;
			len++;
		}
	} while (TB->Text[i] == '1' || TB->Text[i] == '2' || TB->Text[i] == '3'
		|| TB->Text[i] == '4' || TB->Text[i] == '5' || TB->Text[i] == '6'
		|| TB->Text[i] == '7' || TB->Text[i] == '8' || TB->Text[i] == '9' || TB->Text[i] == '0');
	return Num;
}

void fillArray(int* arr, int N, int len, TextBox^ TB)
{
	int c = 0;
	for (int i = 0; i < N; i++)
	{
		if (TB->Text[i] == '1' || TB->Text[i] == '2' || TB->Text[i] == '3'
			|| TB->Text[i] == '4' || TB->Text[i] == '5' || TB->Text[i] == '6'
			|| TB->Text[i] == '7' || TB->Text[i] == '8' || TB->Text[i] == '9' || TB->Text[i] == '0')
		{
			arr[c] = getNum(i, TB, len);
			c++;
			i += len;
		}
	}
}

void getNumOfElements(int& num, int N, TextBox^ TB)
{
	for (int i = 0; i < N; i++)
	{
		if (TB->Text[i] == ' ')
			num++;
	}
	if (TB->Text[N - 1] != ' ')
		num++;
}

void changeSort(int* arr, int N)
{
	int c;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				c = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = c;
			}
		}
	}
}

void quickSort(int* arr, int left, int right)
{
	int pivot; 
	int l_hold = left; 
	int r_hold = right; 
	pivot = arr[left];
	while (left < right) 
	{
		while ((arr[right] >= pivot) && (left < right))
			right--; 
		if (left != right) 
		{
			arr[left] = arr[right];
			left++;
		}
		while ((arr[left] <= pivot) && (left < right))
			left++;
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
	}
	arr[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		quickSort(arr, left, pivot - 1);
	if (right > pivot)
		quickSort(arr, pivot + 1, right);
}