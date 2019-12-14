#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

inline double toDouble(TextBox^);
inline void inTextBox(TextBox^, double);
inline void fillInDGV(DataGridView^, double, double);


double laba4Func(double, double);
void laba4Func(double, double, double&);

double MIN(double, double);
double MAX(double, double);
double laba5Func(double, double, double, double);

double laba6Func(double);
void tabulation(double, double, double, DataGridView^, double&);
