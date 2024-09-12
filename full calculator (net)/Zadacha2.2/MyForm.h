#pragma once

namespace Zadacha22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnNum1;
	protected:
	private: System::Windows::Forms::Button^ btnNum2;
	private: System::Windows::Forms::Button^ btnNum3;
	private: System::Windows::Forms::Button^ btnNum4;
	private: System::Windows::Forms::Button^ btnNum5;
	private: System::Windows::Forms::Button^ btnNum6;
	private: System::Windows::Forms::Button^ btnNum7;
	private: System::Windows::Forms::Button^ btnNum8;
	private: System::Windows::Forms::Button^ btnNum9;
	private: System::Windows::Forms::Button^ btnPoint;
	private: System::Windows::Forms::Button^ btnNum0;
	private: System::Windows::Forms::Button^ btnEquals;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Button^ btnBS;
	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnSignCh;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnClear;

	private: System::Windows::Forms::TextBox^ txtDispl;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnNum1 = (gcnew System::Windows::Forms::Button());
			this->btnNum2 = (gcnew System::Windows::Forms::Button());
			this->btnNum3 = (gcnew System::Windows::Forms::Button());
			this->btnNum4 = (gcnew System::Windows::Forms::Button());
			this->btnNum5 = (gcnew System::Windows::Forms::Button());
			this->btnNum6 = (gcnew System::Windows::Forms::Button());
			this->btnNum7 = (gcnew System::Windows::Forms::Button());
			this->btnNum8 = (gcnew System::Windows::Forms::Button());
			this->btnNum9 = (gcnew System::Windows::Forms::Button());
			this->btnPoint = (gcnew System::Windows::Forms::Button());
			this->btnNum0 = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnBS = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnSignCh = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtDispl = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnNum1
			// 
			this->btnNum1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum1->Location = System::Drawing::Point(12, 118);
			this->btnNum1->Name = L"btnNum1";
			this->btnNum1->Size = System::Drawing::Size(55, 55);
			this->btnNum1->TabIndex = 0;
			this->btnNum1->Text = L"1";
			this->btnNum1->UseVisualStyleBackColor = true;
			this->btnNum1->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum2
			// 
			this->btnNum2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum2->Location = System::Drawing::Point(73, 118);
			this->btnNum2->Name = L"btnNum2";
			this->btnNum2->Size = System::Drawing::Size(55, 55);
			this->btnNum2->TabIndex = 1;
			this->btnNum2->Text = L"2";
			this->btnNum2->UseVisualStyleBackColor = true;
			this->btnNum2->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum3
			// 
			this->btnNum3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum3->Location = System::Drawing::Point(134, 118);
			this->btnNum3->Name = L"btnNum3";
			this->btnNum3->Size = System::Drawing::Size(55, 55);
			this->btnNum3->TabIndex = 2;
			this->btnNum3->Text = L"3";
			this->btnNum3->UseVisualStyleBackColor = true;
			this->btnNum3->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum4
			// 
			this->btnNum4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum4->Location = System::Drawing::Point(12, 179);
			this->btnNum4->Name = L"btnNum4";
			this->btnNum4->Size = System::Drawing::Size(55, 55);
			this->btnNum4->TabIndex = 3;
			this->btnNum4->Text = L"4";
			this->btnNum4->UseVisualStyleBackColor = true;
			this->btnNum4->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum5
			// 
			this->btnNum5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum5->Location = System::Drawing::Point(73, 179);
			this->btnNum5->Name = L"btnNum5";
			this->btnNum5->Size = System::Drawing::Size(55, 55);
			this->btnNum5->TabIndex = 4;
			this->btnNum5->Text = L"5";
			this->btnNum5->UseVisualStyleBackColor = true;
			this->btnNum5->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum6
			// 
			this->btnNum6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum6->Location = System::Drawing::Point(134, 179);
			this->btnNum6->Name = L"btnNum6";
			this->btnNum6->Size = System::Drawing::Size(55, 55);
			this->btnNum6->TabIndex = 5;
			this->btnNum6->Text = L"6";
			this->btnNum6->UseVisualStyleBackColor = true;
			this->btnNum6->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum7
			// 
			this->btnNum7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum7->Location = System::Drawing::Point(12, 240);
			this->btnNum7->Name = L"btnNum7";
			this->btnNum7->Size = System::Drawing::Size(55, 55);
			this->btnNum7->TabIndex = 6;
			this->btnNum7->Text = L"7";
			this->btnNum7->UseVisualStyleBackColor = true;
			this->btnNum7->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum8
			// 
			this->btnNum8->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum8->Location = System::Drawing::Point(73, 240);
			this->btnNum8->Name = L"btnNum8";
			this->btnNum8->Size = System::Drawing::Size(55, 55);
			this->btnNum8->TabIndex = 7;
			this->btnNum8->Text = L"8";
			this->btnNum8->UseVisualStyleBackColor = true;
			this->btnNum8->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnNum9
			// 
			this->btnNum9->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum9->Location = System::Drawing::Point(134, 240);
			this->btnNum9->Name = L"btnNum9";
			this->btnNum9->Size = System::Drawing::Size(55, 55);
			this->btnNum9->TabIndex = 8;
			this->btnNum9->Text = L"9";
			this->btnNum9->UseVisualStyleBackColor = true;
			this->btnNum9->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnPoint
			// 
			this->btnPoint->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPoint->Location = System::Drawing::Point(12, 301);
			this->btnPoint->Name = L"btnPoint";
			this->btnPoint->Size = System::Drawing::Size(55, 55);
			this->btnPoint->TabIndex = 9;
			this->btnPoint->Text = L".";
			this->btnPoint->UseVisualStyleBackColor = true;
			this->btnPoint->Click += gcnew System::EventHandler(this, &MyForm::BtnPoint_Click);
			// 
			// btnNum0
			// 
			this->btnNum0->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNum0->Location = System::Drawing::Point(73, 301);
			this->btnNum0->Name = L"btnNum0";
			this->btnNum0->Size = System::Drawing::Size(55, 55);
			this->btnNum0->TabIndex = 10;
			this->btnNum0->Text = L"0";
			this->btnNum0->UseVisualStyleBackColor = true;
			this->btnNum0->Click += gcnew System::EventHandler(this, &MyForm::btn_clk);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEquals->Location = System::Drawing::Point(134, 301);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(55, 55);
			this->btnEquals->TabIndex = 11;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::Calc);
			// 
			// btnDivide
			// 
			this->btnDivide->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivide->Location = System::Drawing::Point(256, 179);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(55, 55);
			this->btnDivide->TabIndex = 12;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::ArSym);
			// 
			// btnBS
			// 
			this->btnBS->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBS->Location = System::Drawing::Point(256, 118);
			this->btnBS->Name = L"btnBS";
			this->btnBS->Size = System::Drawing::Size(55, 55);
			this->btnBS->TabIndex = 13;
			this->btnBS->Text = L"BS";
			this->btnBS->UseVisualStyleBackColor = true;
			this->btnBS->Click += gcnew System::EventHandler(this, &MyForm::BtnBS_Click);
			// 
			// btnMult
			// 
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMult->Location = System::Drawing::Point(195, 179);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(55, 55);
			this->btnMult->TabIndex = 14;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::ArSym);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(195, 240);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(55, 55);
			this->btnMinus->TabIndex = 15;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::ArSym);
			// 
			// btnSignCh
			// 
			this->btnSignCh->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSignCh->Location = System::Drawing::Point(256, 301);
			this->btnSignCh->Name = L"btnSignCh";
			this->btnSignCh->Size = System::Drawing::Size(55, 55);
			this->btnSignCh->TabIndex = 16;
			this->btnSignCh->Text = L"+/-";
			this->btnSignCh->UseVisualStyleBackColor = true;
			this->btnSignCh->Click += gcnew System::EventHandler(this, &MyForm::BtnSignCh_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(256, 240);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(55, 55);
			this->btnPlus->TabIndex = 17;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::ArSym);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->Location = System::Drawing::Point(195, 301);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(55, 55);
			this->btnExit->TabIndex = 18;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::BtnExit_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(195, 118);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(55, 55);
			this->btnClear->TabIndex = 19;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::BtnClear_Click);
			// 
			// txtDispl
			// 
			this->txtDispl->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDispl->Location = System::Drawing::Point(12, 36);
			this->txtDispl->Multiline = true;
			this->txtDispl->Name = L"txtDispl";
			this->txtDispl->ReadOnly = true;
			this->txtDispl->Size = System::Drawing::Size(299, 53);
			this->txtDispl->TabIndex = 20;
			this->txtDispl->Text = L"0";
			this->txtDispl->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 436);
			this->Controls->Add(this->txtDispl);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnSignCh);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnBS);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnNum0);
			this->Controls->Add(this->btnPoint);
			this->Controls->Add(this->btnNum9);
			this->Controls->Add(this->btnNum8);
			this->Controls->Add(this->btnNum7);
			this->Controls->Add(this->btnNum6);
			this->Controls->Add(this->btnNum5);
			this->Controls->Add(this->btnNum4);
			this->Controls->Add(this->btnNum3);
			this->Controls->Add(this->btnNum2);
			this->Controls->Add(this->btnNum1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calcultor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double x, y, z;
		String^ dei = "";
	private: System::Void BtnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void BtnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		txtDispl->Text = "0";
		dei = "";
		x = 0;
		y = 0;
		z = 0;
	}
	private: System::Void BtnBS_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtDispl->Text->Length > 0)
		{
			txtDispl->Text = txtDispl->Text->Remove(txtDispl->Text->Length - 1);
		}
	}
	private: System::Void BtnPoint_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtDispl->Text->Contains(","))
		{
			txtDispl->Text = txtDispl->Text + ",";
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtDispl->Text == "")
		{
			txtDispl->Text = "0";
		}
	}
	private: System::Void BtnSignCh_Click(System::Object^ sender, System::EventArgs^ e) {
		double r;
		r = Convert::ToDouble(txtDispl->Text);
		r = r * (-1);
		txtDispl->Text = Convert::ToString(r);
	}
	private: System::Void btn_clk(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (txtDispl->Text == "0")
		{
				txtDispl->Text = Numbers->Text;
		}
		else if (txtDispl->Text == "на ноль делить нельз€") {
				txtDispl->Text = "0";
		}
		else
		{
				txtDispl->Text = txtDispl->Text + Numbers->Text;
		}
	}
	private: System::Void ArSym(System::Object^ sender, System::EventArgs^ e) {
		if (dei != "") {
			y = Convert::ToDouble(txtDispl->Text);
			if (dei == "+") {
				z = x + y;
			}
			else if (dei == "-") {
				z = x - y;
			}
			else if (dei == "*") {
				z = x * y;
			}
			else if (dei == "/") {
				z = x / y;
			}
			x = z;
			Button^ op = safe_cast<Button^>(sender);
			dei = op->Text;
			txtDispl->Text = "";
		}
		else {
			x = Convert::ToDouble(txtDispl->Text);
			if (dei == "+") {
				z = x + y;
			}
			else if (dei == "-") {
				z = x - y;
			}
			else if (dei == "*") {
				z = x * y;
			}
			else if (dei == "/") {
				z = x / y;
			}
			Button^ op = safe_cast<Button^>(sender);
			dei = op->Text;
			txtDispl->Text = "";
		}
	}
	private: System::Void Calc (System::Object^ sender, System::EventArgs^ e) {
		y = Convert::ToDouble(txtDispl->Text);
		if (dei == "+") {
			z = x + y;
			txtDispl->Text = System::Convert::ToString(z);
		}
		else if (dei == "-") {
			z = x - y;
			txtDispl->Text = System::Convert::ToString(z);
		}
		else if (dei == "*") {
			z = x * y;
			txtDispl->Text = System::Convert::ToString(z);
		}
		else if (dei == "/") {
			if (y == 0) {
				txtDispl->Text = "на ноль делить нельз€";
			}
			else {
				z = x / y;
				txtDispl->Text = System::Convert::ToString(z);
			}
		}
		else {
			txtDispl->Text = "0";
		}
	}
};
}
