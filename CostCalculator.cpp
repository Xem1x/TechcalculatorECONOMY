#include "pch.h"

#include "CalcForm.h"


using namespace System;


using namespace System::Windows::Forms;
using namespace CostCalculator;


[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CostCalculator::CalcForm());
	return 0;
}