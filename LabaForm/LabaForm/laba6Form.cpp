#include "laba6Form.h"
#include "MyFunctions.h"
#include <cmath>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

double toDouble(TextBox^ textBox)
{
	return Convert::ToDouble(textBox->Text);
}
void inTextBox(TextBox^ textBox, double a)
{
	textBox->Text = "" + a;
}
void fillInDGV(DataGridView^ DGV, double x, double y)
{
	DGV->Rows->Add(x, y);
}
double laba6Func(double x)
{
	return x * exp(-1 * x);
}
void tabulation(double a, double b, double step, DataGridView^ DGV, double& max)
{
	double x, y;
	int N = Int32(round((b - a) / step) + 1);
	for (int i = 0; i < N; i++)
	{
		x = a + i * step;
		y = laba6Func(x);
		fillInDGV(DGV, x, y);
		if (max < y)
			max = y;
	}
}