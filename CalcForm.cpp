#pragma once
#include "pch.h"
#include "CalcForm.h"

System::Void CostCalculator::CalcForm::Circle_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Circle_Check_box->Checked == true)
	{
		Rectangle_Check_box->Checked = false;
		Flange_Check_box->Checked = false;
		Tape_Check_box->Checked = false;

		coefficient_textBox->Text = "";

		Length1_textBox->Enabled = true;
		Flange_width_textBox->Enabled = true;
		Width_textBox->Enabled = true;
		Length2_textBox->Enabled = true;
		Length2_textBox->Visible = false;
		Silicone_textBox->Enabled = true;
		Temperature_textBox->Enabled = true;
		Order_number_textBox->Enabled = true;

		Set_second_length_same_button->Enabled = true;
		Set_second_length_same_button->Visible = false;

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

		Flange_Check_box->Enabled = true;
		Tape_Check_box->Enabled = true;
		Index_Check_box->Enabled = true;
	}
	else if (Circle_Check_box->Checked == false)
	{
		Rectangle_Check_box->Checked = false;
		Flange_Check_box->Checked = false;
		Tape_Check_box->Checked = false;

		coefficient_textBox->Text = "";

		Length1_textBox->Enabled = false;
		Flange_width_textBox->Enabled = false;
		Width_textBox->Enabled = false;
		Length2_textBox->Enabled = false;
		Length2_textBox->Visible = true;
		Silicone_textBox->Enabled = false;
		Temperature_textBox->Enabled = false;
		Order_number_textBox->Enabled = false;

		Set_second_length_same_button->Enabled = false;
		Set_second_length_same_button->Visible = true;

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

		Flange_Check_box->Enabled = false;
		Tape_Check_box->Enabled = false;
		Index_Check_box->Enabled = false;

	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Rectangle_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Rectangle_Check_box->Checked == true)
	{
		Circle_Check_box->Checked = false;
		Flange_Check_box->Checked = false;
		Tape_Check_box->Checked = false;

		coefficient_textBox->Text = "";

		Length1_textBox->Enabled = true;
		Flange_width_textBox->Enabled = true;
		Width_textBox->Enabled = true;
		Length2_textBox->Enabled = true;
		Length2_textBox->Visible = true;
		Silicone_textBox->Enabled = true;
		Temperature_textBox->Enabled = true;
		Order_number_textBox->Enabled = true;

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

		Set_second_length_same_button->Enabled = true;
		Set_second_length_same_button->Visible = true;


		Flange_Check_box->Enabled = true;
		Tape_Check_box->Enabled = true;
		Index_Check_box->Enabled = true;
	}
	else if (Rectangle_Check_box->Checked == false)
	{
		Circle_Check_box->Checked = false;
		Flange_Check_box->Checked = false;
		Tape_Check_box->Checked = false;

		coefficient_textBox->Text = "";

		Length1_textBox->Enabled = false;
		Flange_width_textBox->Enabled = false;
		Width_textBox->Enabled = false;
		Length2_textBox->Enabled = false;
		Length2_textBox->Visible = false;
		Silicone_textBox->Enabled = false;
		Temperature_textBox->Enabled = false;
		Order_number_textBox->Enabled = false;

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

		Set_second_length_same_button->Enabled = false;
		Set_second_length_same_button->Visible = false;


		Flange_Check_box->Enabled = false;
		Tape_Check_box->Enabled = false;
		Index_Check_box->Enabled = false;



	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Set_second_length_same_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	double length;


	try
	{
		length = System::Convert::ToDouble(Length1_textBox->Text);
	}
	catch (FormatException^)
	{
		Length1_textBox->BackColor = Color::FromArgb(255, 192, 192);
	}

	Length2_textBox->Text = System::Convert::ToString(length);
	return System::Void();
}

System::Void CostCalculator::CalcForm::Calculate_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	cost = 0;

	try
	{
		index = System::Convert::ToDouble(coefficient_textBox->Text);
	}
	catch (FormatException^)
	{
		coefficient_textBox->BackColor = Color::FromArgb(255, 192, 192);
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



	if (Circle_Check_box->Checked == true)
	{



		double  diameter, width, widthflange;

		try
		{
			diameter = System::Convert::ToDouble(Length1_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Length1_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			width = System::Convert::ToDouble(Width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Width_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			widthflange = System::Convert::ToDouble(Flange_width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Flange_width_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}











		if (Flange_Check_box->Checked == true)
		{

			S1 = diameter * pi * (width + 2 * widthflange);
			Sflange = diameter * pi * 2 * 2 * widthflange;

		}
		if (Tape_Check_box->Checked == true)
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
	if (Rectangle_Check_box->Checked == true)
	{



		double  length1, length2, width, widthflange;
		try
		{
			length1 = System::Convert::ToDouble(Length1_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Length1_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			length2 = System::Convert::ToDouble(Length2_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Length2_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			width = System::Convert::ToDouble(Width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Width_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}

		try
		{
			widthflange = System::Convert::ToDouble(Flange_width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Flange_width_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}



		if (Flange_Check_box->Checked == true)
		{
			S1 = (length1 + length2) * 2 * (width + 2 * widthflange);
			Sflange = ((length1 + 2 * widthflange) + length2) * 2 * 2 * widthflange;
		}
		if (Tape_Check_box->Checked == true)
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


	if (Insert_Check_box->Checked == true)

	{
		double workadd, widthadd, lengthadd1, height, lengthAddEars, SAdd, VAdd;

		try
		{
			lengthadd1 = System::Convert::ToDouble(Insert_Length1_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Insert_Length1_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			height = System::Convert::ToDouble(Insert_height_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Insert_height_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			widthadd = System::Convert::ToDouble(Insert_width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Insert_width_textBox->BackColor = Color::FromArgb(255, 192, 192);
		}


		try
		{
			workadd = System::Convert::ToDouble(Length1_Width_textBox->Text);
		}
		catch (FormatException^)
		{
			Length1_Width_textBox->BackColor = Color::FromArgb(255, 192, 192);;
		}



		try
		{
			lengthAddEars = System::Convert::ToDouble(Insert_binding_width_textBox->Text) / 1000;
		}
		catch (FormatException^)
		{
			Insert_binding_width_textBox->BackColor = Color::FromArgb(255, 224, 192);
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
	else if (Insert_Check_box->Checked == false)
	{
		TotalSpendingMaterialsAdd = 0;
		workadd = 0;
	}



	try
	{
		silicone = System::Convert::ToDouble(Silicone_textBox->Text) * 130;
	}
	catch (FormatException^)
	{
		Silicone_textBox->BackColor = Color::FromArgb(255, 192, 192);
	}

	try
	{
		work = System::Convert::ToDouble(Work_cost_main_part_textBox->Text);
	}
	catch (FormatException^)
	{
		Work_cost_main_part_textBox->BackColor = Color::FromArgb(255, 192, 192);
	}

	if (Length1_textBox->Text != "")
	{
		Length1_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Flange_width_textBox->Text != "")
	{
		Flange_width_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Width_textBox->Text != "")
	{
		Width_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (coefficient_textBox->Text != "")
	{
		coefficient_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Length2_textBox->Text != "")
	{
		Length2_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Silicone_textBox->Text != "")
	{
		Silicone_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}

	if (Insert_Length1_textBox->Text != "")
	{
		Insert_Length1_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Insert_width_textBox->Text != "")
	{
		Insert_width_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Insert_height_textBox->Text != "")
	{
		Insert_height_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Insert_binding_width_textBox->Text != "")
	{
		Insert_binding_width_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Work_cost_main_part_textBox->Text != "")
	{
		Work_cost_main_part_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Length1_Width_textBox->Text != "")
	{
		Length1_Width_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Temperature_textBox->Text != "")
	{
		Temperature_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}
	if (Order_number_textBox->Text != "")
	{
		Order_number_textBox->BackColor = Color::FromArgb(192, 255, 192);
	}







	cost = work + silicone + TotalSpendingMaterials + TotalSpendingMaterialsAdd + workadd;
	cost = (ceil(cost / 100)) * 100;

	textBox7->Text = System::Convert::ToString(cost);
	return System::Void();
}

System::Void CostCalculator::CalcForm::Index_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Index_Check_box->Checked == true)
	{
		coefficient_textBox->Enabled = true;
	}
	else if (Index_Check_box->Checked == false)
	{
		coefficient_textBox->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Flange_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Flange_Check_box->Checked == true)
	{

		double index;

		Tape_Check_box->Checked = false;
		Insert_Check_box->Enabled = false;
		Insert_Check_box->Checked = false;

		label16->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;
		label22->Enabled = true;

		Work_cost_main_part_textBox->Enabled = true;
		Temperature_textBox->Enabled = true;
		Order_number_textBox->Enabled = true;
		Length1_Silicone_textBox->Enabled = true;

		Select_layer_count_button->Enabled = true;
		Input_count_button->Enabled = true;

		treeView1->Enabled = true;
		treeView3->Enabled = true;

		if (Circle_Check_box->Checked == true)
		{
			index = 1.2;
			coefficient_textBox->Text = System::Convert::ToString(index);
		}
		else if (Rectangle_Check_box->Checked == true)
		{
			index = 1.1;
			coefficient_textBox->Text = System::Convert::ToString(index);
		}
	}
	else if (Flange_Check_box->Checked == false)
	{

		label19->Enabled = false;
		label20->Enabled = false;
		label22->Enabled = false;

		Work_cost_main_part_textBox->Enabled = false;
		Temperature_textBox->Enabled = false;
		Order_number_textBox->Enabled = false;
		Length1_Silicone_textBox->Enabled = false;

		Select_layer_count_button->Enabled = false;
		Input_count_button->Enabled = false;

		treeView1->Enabled = false;
		treeView3->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Tape_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Tape_Check_box->Checked == true)
	{

		double index;

		Flange_Check_box->Checked = false;

		Insert_Check_box->Enabled = true;

		label16->Enabled = true;
		label19->Enabled = true;
		label20->Enabled = true;
		label22->Enabled = true;

		Work_cost_main_part_textBox->Enabled = true;
		Temperature_textBox->Enabled = true;
		Order_number_textBox->Enabled = true;
		Length1_Silicone_textBox->Enabled = true;

		Select_layer_count_button->Enabled = true;
		Input_count_button->Enabled = true;

		treeView1->Enabled = true;
		treeView3->Enabled = true;

		if (Circle_Check_box->Checked == true)
		{
			index = 1.15;
			coefficient_textBox->Text = System::Convert::ToString(index);
		}
		else if (Rectangle_Check_box->Checked == true)
		{
			index = 1.15;
			coefficient_textBox->Text = System::Convert::ToString(index);
		}
	}
	else if (Tape_Check_box->Checked == false)
	{


		label19->Enabled = false;
		label20->Enabled = false;
		label22->Enabled = false;

		Work_cost_main_part_textBox->Enabled = false;
		Temperature_textBox->Enabled = false;
		Order_number_textBox->Enabled = false;
		Length1_Silicone_textBox->Enabled = false;

		Select_layer_count_button->Enabled = false;
		Input_count_button->Enabled = false;

		treeView1->Enabled = false;
		treeView3->Enabled = false;


	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Insert_Check_box_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (Insert_Check_box->Checked == true)
	{

		label11->Enabled = true;
		label12->Enabled = true;
		label13->Enabled = true;
		label14->Enabled = true;
		label15->Enabled = true;
		label17->Enabled = true;

		Insert_Length1_textBox->Enabled = true;
		Insert_width_textBox->Enabled = true;
		Insert_height_textBox->Enabled = true;
		Insert_binding_width_textBox->Enabled = true;
		Length1_Width_textBox->Enabled = true;

		treeView2->Enabled = true;
	}
	else if (Insert_Check_box->Checked == false)
	{
		label11->Enabled = false;
		label12->Enabled = false;
		label13->Enabled = false;
		label14->Enabled = false;
		label15->Enabled = false;
		label17->Enabled = false;

		Insert_Length1_textBox->Enabled = false;
		Insert_width_textBox->Enabled = false;
		Insert_height_textBox->Enabled = false;
		Insert_binding_width_textBox->Enabled = false;
		Length1_Width_textBox->Enabled = false;
		treeView2->Enabled = false;
	}
	return System::Void();
}

System::Void CostCalculator::CalcForm::Create_print_file_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	String^ temperature = Temperature_textBox->Text;
	string temperatureNew = msclr::interop::marshal_as<std::string>(temperature);


	String^ Onumber = Order_number_textBox->Text;
	string OnumberNew = msclr::interop::marshal_as<std::string>(Onumber);
	String^ outputSize;
	if (Circle_Check_box->Checked == true) {
		
		int diameter = System::Convert::ToDouble(Length1_textBox->Text) / 1000;
		int width = System::Convert::ToDouble(Width_textBox->Text) / 1000;
		outputSize = System::Convert::ToString(diameter + "*" + width);
	}
	
	if (Rectangle_Check_box->Checked == true) {

		int length1 = System::Convert::ToDouble(Length1_textBox->Text) / 1000;
		int length2 = length2 = System::Convert::ToDouble(Length2_textBox->Text) / 1000;
		int width = System::Convert::ToDouble(Width_textBox->Text) / 1000;
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

	if (Insert_Check_box->Checked == true)
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
	String^ WorkMain = Work_cost_main_part_textBox->Text;
	string WorkMainNew = msclr::interop::marshal_as<std::string>(WorkMain);
	String^ WorkAdd = Length1_Width_textBox->Text;
	string WorkAddNew = msclr::interop::marshal_as<std::string>(WorkAdd);
	wordpass << "_______________________________________________________________________" << endl;
	if (Insert_Check_box->Checked == true)
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

System::Void CostCalculator::CalcForm::Select_layer_count_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	treeView4->Nodes->Clear();
	treeView1->Visible = false;
	treeView4->Visible = true;
	Select_layer_count_button->Visible = false;
	Select_layer_button->Visible = true;

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

System::Void CostCalculator::CalcForm::Select_layer_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	treeView1->Visible = true;
	treeView4->Visible = false;
	Select_layer_count_button->Visible = true;
	Select_layer_button->Visible = false;
	return System::Void();
}

System::Void CostCalculator::CalcForm::TreeView4_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e)
{
	label21->Text = treeView4->SelectedNode->Text;
	return System::Void();
}

System::Void CostCalculator::CalcForm::Length1_Silicone_textBox_Enter(System::Object^ sender, System::EventArgs^ e)
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
						treeView1->Nodes[i]->Nodes[n]->ToolTipText = System::Convert::ToString(Length1_Silicone_textBox->Text);

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
	Length1_Silicone_textBox->Text = "";
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
