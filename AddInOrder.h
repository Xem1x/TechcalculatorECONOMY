#pragma once
#include <iostream>
#include "pch.h"
#include <iostream>
#include <fstream>


#ifndef AddInOrder_H
#define AddInOrder_H

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;

//public ref 
class AddInOrder {
	
public:
	/*CountForm^ obj;
	AddInOrder(CountForm^ CountFormObj1)
	{

		obj = CountFormObj1;
		InitializeComponent();

	};*/
public:
	std::string outerdiameter, innerdiameter;
	std::string	productcount;
	std::string line[3] = {};
	std::string row1[3] = {};

public: void GetRequest()
{

	line[0] = outerdiameter;
	line[1] = innerdiameter;
	line[2] = productcount;
	std::string row1[] = { line[0],line[1], line[2] };

}
};


#endif // !AddInOrder_H