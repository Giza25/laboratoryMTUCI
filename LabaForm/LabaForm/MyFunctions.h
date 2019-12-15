#pragma once

using namespace System::Windows::Forms;

double toDouble(TextBox^);
void inTextBox(TextBox^, double);
void fillInDGV(DataGridView^, double, double);

double laba4Func(double, double);
void laba4Func(double, double, double&);

double MIN(double, double);
double MAX(double, double);
double laba5Func(double, double, double, double);

double laba6Func(double);
void tabulation(double, double, double, DataGridView^, double&);
