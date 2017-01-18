#pragma once

#include <math.h>
#include <cstdio>
#include <cstdlib>

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainScreen
	/// </summary>
	public ref class mainScreen : public System::Windows::Forms::Form
	{
	public:
		mainScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_number_1;
	private: System::Windows::Forms::Button^  btn_number_2;
	private: System::Windows::Forms::Button^  btn_number_3;
	private: System::Windows::Forms::Button^  btn_number_4;
	private: System::Windows::Forms::Button^  btn_number_5;
	private: System::Windows::Forms::Button^  btn_number_6;
	private: System::Windows::Forms::Button^  btn_number_7;
	private: System::Windows::Forms::Button^  btn_number_8;
	private: System::Windows::Forms::Button^  btn_number_9;
	private: System::Windows::Forms::Button^  btn_number_0;
	private: System::Windows::Forms::Button^  btn_operatorAdd;
	private: System::Windows::Forms::Button^  btn_operatorDifference;
	private: System::Windows::Forms::Button^  btn_operatorMultiply;
	private: System::Windows::Forms::Button^  btn_operatorDivision;
	protected:

	protected:













	private: System::Windows::Forms::Button^  btn_char_dot;
	private: System::Windows::Forms::Button^  btn_operatorEquals;
	private: System::Windows::Forms::TextBox^  txtBox_answer;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_number_1 = (gcnew System::Windows::Forms::Button());
			this->btn_number_2 = (gcnew System::Windows::Forms::Button());
			this->btn_number_3 = (gcnew System::Windows::Forms::Button());
			this->btn_number_4 = (gcnew System::Windows::Forms::Button());
			this->btn_number_5 = (gcnew System::Windows::Forms::Button());
			this->btn_number_6 = (gcnew System::Windows::Forms::Button());
			this->btn_number_7 = (gcnew System::Windows::Forms::Button());
			this->btn_number_8 = (gcnew System::Windows::Forms::Button());
			this->btn_number_9 = (gcnew System::Windows::Forms::Button());
			this->btn_number_0 = (gcnew System::Windows::Forms::Button());
			this->btn_operatorAdd = (gcnew System::Windows::Forms::Button());
			this->btn_operatorDifference = (gcnew System::Windows::Forms::Button());
			this->btn_operatorMultiply = (gcnew System::Windows::Forms::Button());
			this->btn_operatorDivision = (gcnew System::Windows::Forms::Button());
			this->btn_char_dot = (gcnew System::Windows::Forms::Button());
			this->btn_operatorEquals = (gcnew System::Windows::Forms::Button());
			this->txtBox_answer = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_number_1
			// 
			this->btn_number_1->Location = System::Drawing::Point(12, 187);
			this->btn_number_1->Name = L"btn_number_1";
			this->btn_number_1->Size = System::Drawing::Size(78, 73);
			this->btn_number_1->TabIndex = 0;
			this->btn_number_1->Text = L"1";
			this->btn_number_1->UseVisualStyleBackColor = true;
			this->btn_number_1->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_2
			// 
			this->btn_number_2->Location = System::Drawing::Point(116, 187);
			this->btn_number_2->Name = L"btn_number_2";
			this->btn_number_2->Size = System::Drawing::Size(78, 73);
			this->btn_number_2->TabIndex = 1;
			this->btn_number_2->Text = L"2";
			this->btn_number_2->UseVisualStyleBackColor = true;
			this->btn_number_2->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_3
			// 
			this->btn_number_3->Location = System::Drawing::Point(220, 187);
			this->btn_number_3->Name = L"btn_number_3";
			this->btn_number_3->Size = System::Drawing::Size(78, 73);
			this->btn_number_3->TabIndex = 2;
			this->btn_number_3->Text = L"3";
			this->btn_number_3->UseVisualStyleBackColor = true;
			this->btn_number_3->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_4
			// 
			this->btn_number_4->Location = System::Drawing::Point(12, 278);
			this->btn_number_4->Name = L"btn_number_4";
			this->btn_number_4->Size = System::Drawing::Size(78, 73);
			this->btn_number_4->TabIndex = 3;
			this->btn_number_4->Text = L"4";
			this->btn_number_4->UseVisualStyleBackColor = true;
			this->btn_number_4->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_5
			// 
			this->btn_number_5->Location = System::Drawing::Point(116, 278);
			this->btn_number_5->Name = L"btn_number_5";
			this->btn_number_5->Size = System::Drawing::Size(78, 73);
			this->btn_number_5->TabIndex = 4;
			this->btn_number_5->Text = L"5";
			this->btn_number_5->UseVisualStyleBackColor = true;
			this->btn_number_5->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_6
			// 
			this->btn_number_6->Location = System::Drawing::Point(220, 278);
			this->btn_number_6->Name = L"btn_number_6";
			this->btn_number_6->Size = System::Drawing::Size(78, 73);
			this->btn_number_6->TabIndex = 5;
			this->btn_number_6->Text = L"6";
			this->btn_number_6->UseVisualStyleBackColor = true;
			this->btn_number_6->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_7
			// 
			this->btn_number_7->Location = System::Drawing::Point(12, 369);
			this->btn_number_7->Name = L"btn_number_7";
			this->btn_number_7->Size = System::Drawing::Size(78, 73);
			this->btn_number_7->TabIndex = 6;
			this->btn_number_7->Text = L"7";
			this->btn_number_7->UseVisualStyleBackColor = true;
			this->btn_number_7->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_8
			// 
			this->btn_number_8->Location = System::Drawing::Point(116, 369);
			this->btn_number_8->Name = L"btn_number_8";
			this->btn_number_8->Size = System::Drawing::Size(78, 73);
			this->btn_number_8->TabIndex = 7;
			this->btn_number_8->Text = L"8";
			this->btn_number_8->UseVisualStyleBackColor = true;
			this->btn_number_8->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_9
			// 
			this->btn_number_9->Location = System::Drawing::Point(220, 369);
			this->btn_number_9->Name = L"btn_number_9";
			this->btn_number_9->Size = System::Drawing::Size(78, 73);
			this->btn_number_9->TabIndex = 8;
			this->btn_number_9->Text = L"9";
			this->btn_number_9->UseVisualStyleBackColor = true;
			this->btn_number_9->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_number_0
			// 
			this->btn_number_0->Location = System::Drawing::Point(116, 460);
			this->btn_number_0->Name = L"btn_number_0";
			this->btn_number_0->Size = System::Drawing::Size(78, 73);
			this->btn_number_0->TabIndex = 9;
			this->btn_number_0->Text = L"0";
			this->btn_number_0->UseVisualStyleBackColor = true;
			this->btn_number_0->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_operatorAdd
			// 
			this->btn_operatorAdd->Location = System::Drawing::Point(324, 187);
			this->btn_operatorAdd->Name = L"btn_operatorAdd";
			this->btn_operatorAdd->Size = System::Drawing::Size(78, 73);
			this->btn_operatorAdd->TabIndex = 10;
			this->btn_operatorAdd->Text = L"+";
			this->btn_operatorAdd->UseVisualStyleBackColor = true;
			this->btn_operatorAdd->Click += gcnew System::EventHandler(this, &mainScreen::btn_runOperation);
			// 
			// btn_operatorDifference
			// 
			this->btn_operatorDifference->Location = System::Drawing::Point(324, 278);
			this->btn_operatorDifference->Name = L"btn_operatorDifference";
			this->btn_operatorDifference->Size = System::Drawing::Size(78, 73);
			this->btn_operatorDifference->TabIndex = 11;
			this->btn_operatorDifference->Text = L"-";
			this->btn_operatorDifference->UseVisualStyleBackColor = true;
			this->btn_operatorDifference->Click += gcnew System::EventHandler(this, &mainScreen::btn_runOperation);
			// 
			// btn_operatorMultiply
			// 
			this->btn_operatorMultiply->Location = System::Drawing::Point(324, 369);
			this->btn_operatorMultiply->Name = L"btn_operatorMultiply";
			this->btn_operatorMultiply->Size = System::Drawing::Size(78, 73);
			this->btn_operatorMultiply->TabIndex = 12;
			this->btn_operatorMultiply->Text = L"*";
			this->btn_operatorMultiply->UseVisualStyleBackColor = true;
			this->btn_operatorMultiply->Click += gcnew System::EventHandler(this, &mainScreen::btn_runOperation);
			// 
			// btn_operatorDivision
			// 
			this->btn_operatorDivision->Location = System::Drawing::Point(324, 460);
			this->btn_operatorDivision->Name = L"btn_operatorDivision";
			this->btn_operatorDivision->Size = System::Drawing::Size(78, 73);
			this->btn_operatorDivision->TabIndex = 13;
			this->btn_operatorDivision->Text = L"/";
			this->btn_operatorDivision->UseVisualStyleBackColor = true;
			this->btn_operatorDivision->Click += gcnew System::EventHandler(this, &mainScreen::btn_runOperation);
			// 
			// btn_char_dot
			// 
			this->btn_char_dot->Location = System::Drawing::Point(12, 460);
			this->btn_char_dot->Name = L"btn_char_dot";
			this->btn_char_dot->Size = System::Drawing::Size(78, 73);
			this->btn_char_dot->TabIndex = 14;
			this->btn_char_dot->Text = L".";
			this->btn_char_dot->UseVisualStyleBackColor = true;
			this->btn_char_dot->Click += gcnew System::EventHandler(this, &mainScreen::btn_number_Click);
			// 
			// btn_operatorEquals
			// 
			this->btn_operatorEquals->Location = System::Drawing::Point(220, 460);
			this->btn_operatorEquals->Name = L"btn_operatorEquals";
			this->btn_operatorEquals->Size = System::Drawing::Size(78, 73);
			this->btn_operatorEquals->TabIndex = 15;
			this->btn_operatorEquals->Text = L"=";
			this->btn_operatorEquals->UseVisualStyleBackColor = true;
			this->btn_operatorEquals->Click += gcnew System::EventHandler(this, &mainScreen::btn_runOperation);
			// 
			// txtBox_answer
			// 
			this->txtBox_answer->Location = System::Drawing::Point(13, 13);
			this->txtBox_answer->Multiline = true;
			this->txtBox_answer->Name = L"txtBox_answer";
			this->txtBox_answer->ReadOnly = true;
			this->txtBox_answer->Size = System::Drawing::Size(389, 157);
			this->txtBox_answer->TabIndex = 16;
			this->txtBox_answer->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtBox_answer->WordWrap = false;
			// 
			// mainScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(168, 168);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(416, 546);
			this->Controls->Add(this->txtBox_answer);
			this->Controls->Add(this->btn_operatorEquals);
			this->Controls->Add(this->btn_char_dot);
			this->Controls->Add(this->btn_operatorDivision);
			this->Controls->Add(this->btn_operatorMultiply);
			this->Controls->Add(this->btn_operatorDifference);
			this->Controls->Add(this->btn_operatorAdd);
			this->Controls->Add(this->btn_number_0);
			this->Controls->Add(this->btn_number_9);
			this->Controls->Add(this->btn_number_8);
			this->Controls->Add(this->btn_number_7);
			this->Controls->Add(this->btn_number_6);
			this->Controls->Add(this->btn_number_5);
			this->Controls->Add(this->btn_number_4);
			this->Controls->Add(this->btn_number_3);
			this->Controls->Add(this->btn_number_2);
			this->Controls->Add(this->btn_number_1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"mainScreen";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		int flag = 0;
	private: System::Void btn_number_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ btnPressedValue = safe_cast<Button ^>(sender)->Text;
		if (btnPressedValue == "." && flag == 0) {
			flag = 1;
			txtBox_answer->Text += btnPressedValue;
		}
		else if(btnPressedValue != ".")
			txtBox_answer->Text += btnPressedValue;
		
	}

int operation;
private: System::Void btn_runOperation(System::Object^  sender, System::EventArgs^  e) {
	String^ btnPressedValue = safe_cast<Button ^>(sender)->Text;
	double x, y, answer;
	
	x = Double::Parse(txtBox_answer->Text);
	if (btnPressedValue == "+") {
		txtBox_answer->Text = "";
		operation = 1;
	}
	else if (btnPressedValue == "-") {
		txtBox_answer->Text = "";
		operation = 2;
	}
	else if (btnPressedValue == "*") {
		txtBox_answer->Text = "";
		operation = 3;
	}
	else if (btnPressedValue == "/") {
		txtBox_answer->Text = "";
		operation = 4;
	}
	else {
		y = Double::Parse(txtBox_answer->Text);
		printf("%d", operation);
		switch (operation){
		default:
			break;
		case 1:
			answer = x + y;
			break;
		case 2:
			answer = x - y;
			break;
		case 3:
			answer = x*y;
			break;
		case 4:
			if (y != 0) {
				answer = x / y;
			}
			else
				txtBox_answer->Text = "CANNOT DIVIDE BY ZERO";
		}
		txtBox_answer->Text=(answer).ToString();
		x = answer;
	}
}
};
}
