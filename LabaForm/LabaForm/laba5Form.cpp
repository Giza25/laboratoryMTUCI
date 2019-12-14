#include "laba5Form.h"
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