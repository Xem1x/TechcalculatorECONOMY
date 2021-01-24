#include "pch.h"

#include "EntryForm.h"
#include "OptionFromh.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

using namespace System::Windows::Forms;
using namespace CppCLR_WinformsProjekt3;


[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt3::CalcForm());
	return 0;
}