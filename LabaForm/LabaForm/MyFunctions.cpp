#include "laba4Form.h"
#include "laba5Form.h"
#include "Laba6Form.h"
#include "MyFunctions.h"
#include <cmath>

using namespace LabaForm;

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

double laba4Func(double X, double Y)
{
	return pow(5.2, 3) * log10(X + Y) / (X - 1 / (0.45 * sin(X - 8 * Y))) + 0.5;
}
void laba4Func(double X, double Y, double& res)
{
	res = pow(5.2, 3) * log10(X + Y) / (X - 1 / (0.45 * sin(X - 8 * Y))) + 0.5;
}

double MIN(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}
double MAX(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}
double laba5Func(double a, double b, double x, double y)
{
	if (x < y)
	{
		return MIN(MIN(a - cos(x), a / (b + y)), pow(sin(x), 2));
	}
	else if (x < y + 5)
	{
		return MAX(pow(a, 3), log(pow(x, 2) + pow(y, 2)));
	}
	else
	{
		return a + pow(cos(x - y), 3);
	}
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