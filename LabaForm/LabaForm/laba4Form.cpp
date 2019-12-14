#include "laba4Form.h"
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
double laba4Func(double X, double Y)
{
	return pow(5.2, 3) * log10(X + Y) / (X - 1 / (0.45 * sin(X - 8 * Y))) + 0.5;
}
void laba4Func(double X, double Y, double& res)
{
	res = pow(5.2, 3) * log10(X + Y) / (X - 1 / (0.45 * sin(X - 8 * Y))) + 0.5;
}