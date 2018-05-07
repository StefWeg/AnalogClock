// cw_31.cpp : main project file.

#include "stdafx.h"
#include "ClockForm.h""

using namespace cw_31;

[STAThread]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ClockForm());
	return 0;
}
