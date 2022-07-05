#pragma once
#include "pch.h"
#include "CalcForm.h"

System::Void CostCalculator::CalcForm::CheckBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked == true)
	{
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;

		textBox4->Text = "";

		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox5->Enabled = true;
		textBox5->Visible = false;
		textBox6->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;

		button2->Enabled = true;
		button2->Visible = false;

		label2->Enabled = true;
		label3->Enabled = true;
		label4->Enabled = true;
		label5->Enabled = true;
		label5->Visible = false;
		label6->Enabled = true;
		label6->Visible = true;
		label7->Enabled = true;
		label8->Enabled = true;
		label8->Visible = false;
		label9->Enabled = true;
		label10->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;

		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
	}
	else if (checkBox1->Checked == false)
	{
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;

		textBox4->Text = "";

		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox5->Enabled = false;
		textBox5->Visible = true;
		textBox6->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;

		button2->Enabled = false;
		button2->Visible = true;

		label2->Enabled = false;
		label3->Enabled = false;
		label4->Enabled = false;
		label5->Enabled = false;
		label5->Visible = true;
		label6->Enabled = false;
		label6->Visible = false;
		label7->Enabled = false;
		label8->Enabled = false;
		label8->Visible = true;
		label9->Enabled = false;
		label10->Enabled = false;
		label19->Enabled = false;
		label20->Enabled = false;

		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;

	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::CheckBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox2->Checked == true)
	{
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;

		textBox4->Text = "";

		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		textBox5->Enabled = true;
		textBox5->Visible = true;
		textBox6->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;

		label2->Enabled = true;
		label3->Enabled = true;
		label4->Enabled = true;
		label4->Visible = true;
		label5->Enabled = true;
		label5->Visible = true;
		label6->Enabled = false;
		label6->Visible = false;
		label7->Enabled = true;
		label8->Enabled = true;
		label8->Visible = true;
		label9->Enabled = true;
		label10->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;

		button2->Enabled = true;
		button2->Visible = true;


		checkBox3->Enabled = true;
		checkBox4->Enabled = true;
		checkBox5->Enabled = true;
	}
	else if (checkBox2->Checked == false)
	{
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;

		textBox4->Text = "";

		textBox1->Enabled = false;
		textBox2->Enabled = false;
		textBox3->Enabled = false;
		textBox5->Enabled = false;
		textBox5->Visible = false;
		textBox6->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;

		label2->Enabled = false;
		label3->Enabled = false;
		label4->Enabled = false;
		label4->Visible = true;
		label5->Enabled = false;
		label5->Visible = false;
		label6->Enabled = false;
		label6->Visible = true;
		label7->Enabled = false;
		label8->Enabled = false;
		label8->Visible = false;
		label9->Enabled = false;
		label10->Enabled = false;
		label19->Enabled = false;
		label20->Enabled = false;

		button2->Enabled = false;
		button2->Visible = false;


		checkBox3->Enabled = false;
		checkBox4->Enabled = false;
		checkBox5->Enabled = false;



	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	double length;


	try
	{
		length = System::Convert::ToDouble(textBox1->Text);
	}
	catch (FormatException^)
	{
		textBox1->BackColor = Color::FromArgb(255, 192, 192);
	}

	textBox5->Text = System::Convert::ToString(length);
	return System::Void();
}

System::Void CostCalculator::CalcForm::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	cost = 0;

	try
	{
		index = System::Convert::ToDouble(textBox4->Text);
	}
	catch (FormatException^)
	{
		textBox4->BackColor = Color::FromArgb(255, 192, 192);
	}



	const double pi = 3.14159;
	ArrN1 = 0;
	ArrNAdd = 0;
	double materials[30] = {};
	double materialsFlange[30] = {};
	double materialsAddOutside[15] = {};
	double materialsAddInside[15] = {};
	TotalSpendingMaterials = 0;
	TotalSpendingMaterialsAdd = 0;


	CountPNodes = treeView1->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView1->Nodes[i]->Checked == true)
		{
			CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
				{

					if (treeView1->Nodes[i]->Nodes[n]->ToolTipText != "")
					{

						materials[ArrN1] = System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->Tag) * System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->ToolTipText);

						++ArrN1;


					}
					else if (treeView1->Nodes[i]->Nodes[n]->ToolTipText == "")
					{

						materials[ArrN1] = System::Convert::ToDouble(treeView1->Nodes[i]->Nodes[n]->Tag);

						++ArrN1;

					}

				}


			}


		}

	}
	ArrN2 = 0;
	CountPNodes = treeView3->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView3->Nodes[i]->Checked == true)
		{
			CountNodes = treeView3->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView3->Nodes[i]->Nodes[n]->Checked == true)
				{
					if (treeView3->Nodes[i]->Nodes[n]->ToolTipText != "")
					{
						materialsFlange[ArrN2] = System::Convert::ToDouble(treeView3->Nodes[i]->Nodes[n]->Tag);


					}
					else
					{
						materialsFlange[ArrN2] = System::Convert::ToDouble(treeView3->Nodes[i]->Nodes[n]->Tag);


					}
					++ArrN2;
				}


			}


		}

	}



	if (checkBox1->Checked == true)
	{



		double  diameter, width, widthflange;

		try
		{
			diameter = System::Convert::ToDouble(textBox1->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox1->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			width = System::Convert::ToDouble(textBox3->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox3->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			widthflange = System::Convert::ToDouble(textBox2->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox2->BackColor = Color::FromArgb(255, 192, 192);
		}











		if (checkBox3->Checked == true)
		{

			S1 = diameter * pi * (width + 2 * widthflange);
			Sflange = diameter * pi * 2 * 2 * widthflange;

		}
		if (checkBox4->Checked == true)
		{
			S1 = diameter * pi * width;
			Sflange = diameter * pi * 2 * 2 * widthflange;
		}





		for (a = 0; a < ArrN1; ++a)
		{
			TotalSpendingMaterials += materials[a] * S1 * index;

		}
		for (p = 0; p < ArrN2; ++p)
		{
			TotalSpendingMaterials += Sflange * materialsFlange[p];
		}
		 outputSize = System::Convert::ToString(diameter + "*" + width);
	}
	//  /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//																														//						
	//																														//
	//																														//
	//																														//
	//																														//
	//  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (checkBox2->Checked == true)
	{



		double  length1, length2, width, widthflange;
		try
		{
			length1 = System::Convert::ToDouble(textBox1->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox1->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			length2 = System::Convert::ToDouble(textBox5->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox5->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			width = System::Convert::ToDouble(textBox3->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox3->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			widthflange = System::Convert::ToDouble(textBox2->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox2->BackColor = Color::FromArgb(255, 192, 192);
		}



		if (checkBox3->Checked == true)
		{
			S1 = (length1 + length2) * 2 * (width + 2 * widthflange);
			Sflange = ((length1 + 2 * widthflange) + length2) * 2 * 2 * widthflange;
		}
		if (checkBox4->Checked == true)
		{
			S1 = (length1 + length2) * 2 * width;
			Sflange = ((length1 + 2 * widthflange) + length2) * 2 * 2 * widthflange;
		}
		for (a = 0; a < ArrN1; ++a)
		{
			TotalSpendingMaterials += materials[a] * S1 * index;

		}
		for (p = 0; p < ArrN2; ++p)
		{
			TotalSpendingMaterials += Sflange * materialsFlange[p];
		}
		outputSize = System::Convert::ToString(length1 + "*" + length2 + "*" + width);

	};


	if (checkBox6->Checked == true)

	{
		double workadd, widthadd, lengthadd1, height, lengthAddEars, SAdd, VAdd;

		try
		{
			lengthadd1 = System::Convert::ToDouble(textBox8->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox8->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			height = System::Convert::ToDouble(textBox10->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox10->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			widthadd = System::Convert::ToDouble(textBox9->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox9->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			workadd = System::Convert::ToDouble(textBox13->Text);
		}
		catch (FormatException^)
		{
			textBox13->BackColor = Color::FromArgb(255, 192, 192);;
		}



		try
		{
			lengthAddEars = System::Convert::ToDouble(textBox11->Text) / 1000;
		}
		catch (FormatException^)
		{
			textBox11->BackColor = Color::FromArgb(255, 224, 192);
			lengthAddEars = 0;
		}

		ArrNAdd = 0;
		SAdd = (lengthadd1 * 2 + height * 2 + lengthAddEars * 4) * widthadd;
		VAdd = lengthadd1 * height * widthadd;

		CountNodes = treeView2->Nodes[0]->Nodes[0]->GetNodeCount(false);
		for (iAdd = 0; iAdd < CountNodes; ++iAdd)
		{
			if (treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Checked == true)
			{
				materialsAddInside[ArrNAdd] = System::Convert::ToDouble(treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Tag);
				++ArrNAdd;
			}
		}

		ArrNAdd = 0;
		CountNodes = treeView2->Nodes[1]->Nodes[0]->GetNodeCount(false);
		for (iAdd2 = 0; iAdd2 < CountNodes; ++iAdd2)
		{
			if (treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Checked == true)
			{
				materialsAddOutside[ArrNAdd] = System::Convert::ToDouble(treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Tag);

				++ArrNAdd;
			}
		}



		for (a = 0; a < ArrNAdd; ++a)
		{
			TotalSpendingMaterialsAdd += materialsAddInside[a] * SAdd + VAdd * materialsAddOutside[a];
		}


	}
	else if (checkBox6->Checked == false)
	{
		TotalSpendingMaterialsAdd = 0;
		workadd = 0;
	}



	try
	{
		silicone = System::Convert::ToDouble(textBox6->Text) * 130;
	}
	catch (FormatException^)
	{
		textBox6->BackColor = Color::FromArgb(255, 192, 192);
	}

	try
	{
		work = System::Convert::ToDouble(textBox12->Text);
	}
	catch (FormatException^)
	{
		textBox12->BackColor = Color::FromArgb(255, 192, 192);
	}

	if (textBox1->Text != "")
	{
		textBox1->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox2->Text != "")
	{
		textBox2->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox3->Text != "")
	{
		textBox3->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox4->Text != "")
	{
		textBox4->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox5->Text != "")
	{
		textBox5->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox6->Text != "")
	{
		textBox6->BackColor = Color::FromArgb(192, 255, 192);
	}

	if (textBox8->Text != "")
	{
		textBox8->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox9->Text != "")
	{
		textBox9->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox10->Text != "")
	{
		textBox10->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox11->Text != "")
	{
		textBox11->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox12->Text != "")
	{
		textBox12->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox13->Text != "")
	{
		textBox13->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox14->Text != "")
	{
		textBox14->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (textBox15->Text != "")
	{
		textBox15->BackColor = Color::FromArgb(192, 255, 192);
	}







	cost = work + silicone + TotalSpendingMaterials + TotalSpendingMaterialsAdd + workadd;
	cost = (ceil(cost / 100)) * 100;

	textBox7->Text = System::Convert::ToString(cost);
	return System::Void();
}

System::Void CostCalculator::CalcForm::CheckBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox5->Checked == true)
	{
		textBox4->Enabled = true;
	}
	else if (checkBox5->Checked == false)
	{
		textBox4->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::CheckBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox3->Checked == true)
	{

		double index;

		checkBox4->Checked = false;
		checkBox6->Enabled = false;
		checkBox6->Checked = false;

		label16->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;
		label22->Enabled = true;

		textBox12->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;
		textBox16->Enabled = true;

		button4->Enabled = true;
		button6->Enabled = true;

		treeView1->Enabled = true;
		treeView3->Enabled = true;

		if (checkBox1->Checked == true)
		{
			index = 1.2;
			textBox4->Text = System::Convert::ToString(index);
		}
		else if (checkBox2->Checked == true)
		{
			index = 1.1;
			textBox4->Text = System::Convert::ToString(index);
		}
	}
	else if (checkBox3->Checked == false)
	{

		label19->Enabled = false;
		label20->Enabled = false;
		label22->Enabled = false;

		textBox12->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;
		textBox16->Enabled = false;

		button4->Enabled = false;
		button6->Enabled = false;

		treeView1->Enabled = false;
		treeView3->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::CheckBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox4->Checked == true)
	{

		double index;

		checkBox3->Checked = false;

		checkBox6->Enabled = true;

		label16->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;
		label22->Enabled = true;

		textBox12->Enabled = true;
		textBox14->Enabled = true;
		textBox15->Enabled = true;
		textBox16->Enabled = true;

		button4->Enabled = true;
		button6->Enabled = true;

		treeView1->Enabled = true;
		treeView3->Enabled = true;

		if (checkBox1->Checked == true)
		{
			index = 1.15;
			textBox4->Text = System::Convert::ToString(index);
		}
		else if (checkBox2->Checked == true)
		{
			index = 1.15;
			textBox4->Text = System::Convert::ToString(index);
		}
	}
	else if (checkBox4->Checked == false)
	{


		label19->Enabled = false;
		label20->Enabled = false;
		label22->Enabled = false;

		textBox12->Enabled = false;
		textBox14->Enabled = false;
		textBox15->Enabled = false;
		textBox16->Enabled = false;

		button4->Enabled = false;
		button6->Enabled = false;

		treeView1->Enabled = false;
		treeView3->Enabled = false;


	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::CheckBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox6->Checked == true)
	{

		label11->Enabled = true;
		label12->Enabled = true;
		label13->Enabled = true;
		label14->Enabled = true;
		label15->Enabled = true;
		label17->Enabled = true;

		textBox8->Enabled = true;
		textBox9->Enabled = true;
		textBox10->Enabled = true;
		textBox11->Enabled = true;
		textBox13->Enabled = true;

		treeView2->Enabled = true;
	}
	else if (checkBox6->Checked == false)
	{
		label11->Enabled = false;
		label12->Enabled = false;
		label13->Enabled = false;
		label14->Enabled = false;
		label15->Enabled = false;
		label17->Enabled = false;

		textBox8->Enabled = false;
		textBox9->Enabled = false;
		textBox10->Enabled = false;
		textBox11->Enabled = false;
		textBox13->Enabled = false;
		treeView2->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	String^ temperature = textBox14->Text;
	string temperatureNew = msclr::interop::marshal_as<std::string>(temperature);


	String^ Onumber = textBox15->Text;
	string OnumberNew = msclr::interop::marshal_as<std::string>(Onumber);
	String^ outputSize;
	if (checkBox1->Checked == true) {
		
		int diameter = System::Convert::ToDouble(textBox1->Text) / 1000;
		int width = System::Convert::ToDouble(textBox3->Text) / 1000;
		outputSize = System::Convert::ToString(diameter + "*" + width);
	}
	
	if (checkBox2->Checked == true) {

		int length1 = System::Convert::ToDouble(textBox1->Text) / 1000;
		int length2 = length2 = System::Convert::ToDouble(textBox5->Text) / 1000;
		int width = System::Convert::ToDouble(textBox3->Text) / 1000;
		outputSize = System::Convert::ToString(length1 + "*" + length2 + "*" + width);
	}
	
	string outputSizeNew = msclr::interop::marshal_as<std::string>(outputSize);

	ofstream wordpass;
	time_t t = time(0);
	tm* now = localtime(&t);

	String^ currentDesktop = System::Environment::GetEnvironmentVariable("USERPROFILE") + "\\Desktop" + "\\" + (now->tm_year + 1900) + "." + (now->tm_mon + 1) + "." + Onumber + ".txt";
	string currentDesktopNew = msclr::interop::marshal_as<std::string>(currentDesktop);

	wordpass.open(currentDesktopNew, ios::out, ios_base::binary);
	wordpass << "Order/Заказ  #" << (now->tm_year + 1900) << "/" << (now->tm_mon + 1) << "/" << OnumberNew << endl;
	wordpass << "_________________________________________________________________" << endl;
	wordpass << "Teperature/Температура: " << temperatureNew << "С" << endl;
	wordpass << "_________________________________________________________________" << endl;
	wordpass << "Size/Размеры " << outputSizeNew << endl;

	int ArrN;
	ArrN = 1;
	wordpass << "Main Part Materials/Материалы основной части:" << endl;
	CountPNodes = treeView1->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView1->Nodes[i]->Checked == true)
		{
			CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
				{

					String^ material = treeView1->Nodes[i]->Nodes[n]->Text;
					string newMaterials = msclr::interop::marshal_as<std::string>(material);
					if (treeView1->Nodes[i]->Nodes[n]->ToolTipText != "")
					{

						String^ layer = treeView1->Nodes[i]->Nodes[n]->ToolTipText;
						string newlayer = msclr::interop::marshal_as<std::string>(layer);
						wordpass << " " << ArrN << ". " << newMaterials << "    Number of layers/Количество слоёв: " << newlayer << endl;
					}
					else
					{
						string newlayer = "1";
						wordpass << " " << ArrN << ". " << newMaterials << "    Number of layers/Количество слоёв: " << newlayer << endl;
					}
					++ArrN;




				}
			}
		}
	}

	wordpass << "Flange Materials/Материалы Фланца:" << endl;
	ArrN = 1;
	CountPNodes = treeView3->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView3->Nodes[i]->Checked == true)
		{
			CountNodes = treeView3->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView3->Nodes[i]->Nodes[n]->Checked == true)
				{

					String^ material = treeView3->Nodes[i]->Nodes[n]->Text;
					string newMaterials = msclr::interop::marshal_as<std::string>(material);
					wordpass << " " << ArrN << ". " << newMaterials << endl;
					++ArrN;




				}
			}
		}
	}

	if (checkBox6->Checked == true)
	{
		ArrN = 1;
		wordpass << "Inner side materials/Материалы внутренней части:" << endl;
		CountNodes = treeView2->Nodes[0]->Nodes[0]->GetNodeCount(false);
		for (iAdd = 0; iAdd < CountNodes; ++iAdd)
		{
			if (treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Checked == true)
			{
				String^ materialAdd = treeView2->Nodes[0]->Nodes[0]->Nodes[iAdd]->Text;
				string newMaterialsAdd = msclr::interop::marshal_as<std::string>(materialAdd);
				wordpass << " " << ArrN << ". " << newMaterialsAdd << endl;
				++ArrN;
			}
		}
		wordpass << "External side materials/Материалы внешней части:" << endl;
		ArrN = 1;
		CountNodes = treeView2->Nodes[1]->Nodes[0]->GetNodeCount(false);
		for (iAdd2 = 0; iAdd2 < CountNodes; ++iAdd2)
		{
			if (treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd2]->Checked == true)
			{
				String^ materialAdd = treeView2->Nodes[1]->Nodes[0]->Nodes[iAdd]->Text;
				string newMaterialsAdd = msclr::interop::marshal_as<std::string>(materialAdd);
				wordpass << " " << ArrN << ". " << newMaterialsAdd << endl;
				++ArrN;
			}
		}
	}
	String^ WorkMain = textBox12->Text;
	string WorkMainNew = msclr::interop::marshal_as<std::string>(WorkMain);
	String^ WorkAdd = textBox13->Text;
	string WorkAddNew = msclr::interop::marshal_as<std::string>(WorkAdd);
	wordpass << "_______________________________________________________________________" << endl;
	if (checkBox6->Checked == true)
	{
		wordpass << "Work/Работа\n" << "					 Main part: " << WorkMainNew << " UAH\n" << "					     Insert part: " << WorkAddNew << " UAH\n" << endl;
	}
	else
	{
		wordpass << "Work/Работа\n" << "					 Main part: " << WorkMainNew << " UAH\n" << endl;
	}
	wordpass << "					_____________________________________" << endl;
	String^ Total = textBox7->Text;
	string TotalNew = msclr::interop::marshal_as<std::string>(Total);
	wordpass << "					Total cost/Общая стоимость: " << TotalNew << " UAH\n" << endl;






	wordpass.close();
	return System::Void();
}

System::Void CostCalculator::CalcForm::TreeView1_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	for (tvN = 0; tvN < 5; ++tvN)
	{
		treeView1->BeginUpdate();
		if (treeView1->Nodes[tvN]->Checked == true)
		{

			treeView1->Nodes[tvN]->Expand();

		}
		else if (treeView1->Nodes[tvN]->Checked == false)
		{
			treeView1->Nodes[tvN]->Collapse();
		}
		treeView1->EndUpdate();
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::TreeView2_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	for (tvN = 0; tvN < 2; ++tvN)
	{
		treeView2->BeginUpdate();
		if (treeView2->Nodes[tvN]->Checked == true)
		{

			treeView2->Nodes[tvN]->Expand();

			treeView2->Nodes[tvN]->Nodes[0]->Expand();

		}
		else if (treeView1->Nodes[tvN]->Checked == false)
		{
			treeView2->Nodes[tvN]->Collapse();
			treeView2->Nodes[tvN]->Nodes[0]->Collapse();

		}
		treeView2->EndUpdate();
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	treeView4->Nodes->Clear();
	treeView1->Visible = false;
	treeView4->Visible = true;
	button4->Visible = false;
	button5->Visible = true;

	int ArrN = 0;
	String^ materials;

	CountPNodes = treeView1->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView1->Nodes[i]->Checked == true)
		{
			CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
				{

					materials = treeView1->Nodes[i]->Nodes[n]->Text;


					TreeNode^ newNode = gcnew TreeNode(materials);
					treeView4->Nodes->Add(newNode);

				}


			}


		}

	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	treeView1->Visible = true;
	treeView4->Visible = false;
	button4->Visible = true;
	button5->Visible = false;
	return System::Void();
}

System::Void CostCalculator::CalcForm::TreeView4_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	label21->Text = treeView4->SelectedNode->Text;
	return System::Void();
}

System::Void CostCalculator::CalcForm::TextBox16_Enter(System::Object^ sender, System::EventArgs^ e)
{
	String^ Layoutname = label21->Text;
	CountPNodes = treeView1->GetNodeCount(false);
	for (i = 0; i < CountPNodes; ++i)
	{
		if (treeView1->Nodes[i]->Checked == true)
		{
			CountNodes = treeView1->Nodes[i]->GetNodeCount(true);
			for (n = 0; n < CountNodes; ++n)
			{
				if (treeView1->Nodes[i]->Nodes[n]->Checked == true)
				{
					if (treeView1->Nodes[i]->Nodes[n]->Text == Layoutname)
					{
						treeView1->Nodes[i]->Nodes[n]->ToolTipText = System::Convert::ToString(textBox16->Text);

					}
				}
			}

		}
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::TreeView3_AfterCheck(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	for (tvN = 0; tvN < 2; ++tvN)
	{
		treeView3->BeginUpdate();
		if (treeView3->Nodes[tvN]->Checked == true)
		{

			treeView3->Nodes[tvN]->Expand();



		}
		else if (treeView3->Nodes[tvN]->Checked == false)
		{
			treeView3->Nodes[tvN]->Collapse();

		}
		treeView3->EndUpdate();
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::label21_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	textBox16->Text = "";
	return System::Void();
}

System::Void CostCalculator::CalcForm::загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	openFileDialog1->Filter = "Config File|*.cfg";
	openFileDialog1->Title = "Open Config";
	openFileDialog1->ShowDialog();
	this->Text = openFileDialog1->FileName + " - Calculator";
	return System::Void();
}

System::Void CostCalculator::CalcForm::сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	saveFileDialog1->CreatePrompt = true;
	saveFileDialog1->OverwritePrompt = true;
	saveFileDialog1->Filter = "Config File|*.cfg";
	saveFileDialog1->Title = "Save New Config";



	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filename = saveFileDialog1->FileName;
		StreamWriter^ sw = gcnew StreamWriter(filename);
		sw->WriteLine("");
		sw->Close();
		this->Text = saveFileDialog1->FileName + " - Calculator";

	}
	return System::Void();
}
