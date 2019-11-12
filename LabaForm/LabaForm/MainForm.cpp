#include "MainForm.h"

using namespace LabaForm;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MainForm mainForm;
	Application::Run(% mainForm);
	return 0;
}