#pragma once
#include <iostream>
#include "pch.h"
#include <math.h>
#ifndef AreaSource_H
#define AreaSource_H

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


class Area
{

public:
	double outerdiameter, innerdiameter, materialsheetsquare;
	
	int productcount ,c =1,n;
	double productArea;
	double innerArea, totalArea;
	double materialsheetsizes[100][3] = {};
	bool IsMainAreaChanged;

public:
	const double pi = 3.14159;
public: void sizes()

{
		materialsheetsizes[c][0] = productArea;
		materialsheetsizes[c][1] = innerdiameter-0.002;
		c++;
};

public: double ceiling(double x)
{
	return (ceil(x / 100)) * 100;
};
	   
public: void roundarea()
{
	productArea = 0;
	productArea = ((pow(outerdiameter,2)- pow(innerdiameter, 2))/ 4)*pi;
	innerArea = (pi * (innerdiameter) * (innerdiameter)) / 4;
	totalArea = materialsheetsquare - productArea - innerArea;
	materialsheetsizes[0][2] = 1;
	for (n = 0; n < productcount; ++n)
	{
		sizes();
	}
	CheckAreaCapibility();
	  /*
	  item	  1m  |    |	|
			  ____|____|____|____
	  count	   1  |    |    |
				  |    |    |
	  */
	  
}


public: void CheckAreaCapibility()
{

	for (n = 1; n < sizeof(materialsheetsizes); ++n) {
		if ((outerdiameter <= materialsheetsizes[n][1]))
		{
			materialsheetsizes[n][1] -= outerdiameter;
			break;
		}
		else
		{
			IsMainAreaChanged = true;
			continue;
		}
	}
		
	if (IsMainAreaChanged == true)
	{
		materialsheetsizes[0][1] -= outerdiameter;
	}

};
};
#endif // !AreaSource_H
