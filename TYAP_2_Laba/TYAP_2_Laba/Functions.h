#pragma once

using namespace System;
using namespace System::Windows::Forms;

int getNum(int, TextBox^, int&);
void fillArray(int*, int, int, TextBox^);
void getNumOfElements(int&, int, TextBox^);

void changeSort(int*, int);
void quickSort(int*, int, int);
