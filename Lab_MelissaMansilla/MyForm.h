#pragma once
#include "Cuadrado.h"
#include "TrianguloE.h"
#include "PRegulares.h"
namespace LabMelissaMansilla {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TBCuadroL;
	private: System::Windows::Forms::TextBox^  TBTrianL;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TBPolL;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TBPolNL;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  BtnCalcCua;
	private: System::Windows::Forms::Button^  BtnCalcTrian;
	private: System::Windows::Forms::Button^  btnCalcPoli;
	private: System::Windows::Forms::TextBox^  TBApotema;
	private: System::Windows::Forms::Label^  label5;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBCuadroL = (gcnew System::Windows::Forms::TextBox());
			this->TBTrianL = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBPolL = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBPolNL = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BtnCalcCua = (gcnew System::Windows::Forms::Button());
			this->BtnCalcTrian = (gcnew System::Windows::Forms::Button());
			this->btnCalcPoli = (gcnew System::Windows::Forms::Button());
			this->TBApotema = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Location = System::Drawing::Point(44, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 211);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(276, 37);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(226, 211);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->Location = System::Drawing::Point(528, 37);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(265, 211);
			this->panel3->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Medida de lados:";
			// 
			// TBCuadroL
			// 
			this->TBCuadroL->Location = System::Drawing::Point(95, 311);
			this->TBCuadroL->Name = L"TBCuadroL";
			this->TBCuadroL->Size = System::Drawing::Size(100, 26);
			this->TBCuadroL->TabIndex = 3;
			// 
			// TBTrianL
			// 
			this->TBTrianL->Location = System::Drawing::Point(339, 311);
			this->TBTrianL->Name = L"TBTrianL";
			this->TBTrianL->Size = System::Drawing::Size(100, 26);
			this->TBTrianL->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(324, 288);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Medida de lados:";
			// 
			// TBPolL
			// 
			this->TBPolL->Location = System::Drawing::Point(605, 311);
			this->TBPolL->Name = L"TBPolL";
			this->TBPolL->Size = System::Drawing::Size(100, 26);
			this->TBPolL->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(590, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Medida de lados:";
			// 
			// TBPolNL
			// 
			this->TBPolNL->Location = System::Drawing::Point(605, 375);
			this->TBPolNL->Name = L"TBPolNL";
			this->TBPolNL->Size = System::Drawing::Size(100, 26);
			this->TBPolNL->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(590, 352);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Número de Lados:";
			// 
			// BtnCalcCua
			// 
			this->BtnCalcCua->Location = System::Drawing::Point(95, 349);
			this->BtnCalcCua->Name = L"BtnCalcCua";
			this->BtnCalcCua->Size = System::Drawing::Size(100, 40);
			this->BtnCalcCua->TabIndex = 10;
			this->BtnCalcCua->Text = L"Calcular";
			this->BtnCalcCua->UseVisualStyleBackColor = true;
			this->BtnCalcCua->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcCua_Click);
			// 
			// BtnCalcTrian
			// 
			this->BtnCalcTrian->Location = System::Drawing::Point(339, 349);
			this->BtnCalcTrian->Name = L"BtnCalcTrian";
			this->BtnCalcTrian->Size = System::Drawing::Size(100, 40);
			this->BtnCalcTrian->TabIndex = 11;
			this->BtnCalcTrian->Text = L"Calcular";
			this->BtnCalcTrian->UseVisualStyleBackColor = true;
			this->BtnCalcTrian->Click += gcnew System::EventHandler(this, &MyForm::BtnCalcTrian_Click);
			// 
			// btnCalcPoli
			// 
			this->btnCalcPoli->Location = System::Drawing::Point(605, 419);
			this->btnCalcPoli->Name = L"btnCalcPoli";
			this->btnCalcPoli->Size = System::Drawing::Size(100, 40);
			this->btnCalcPoli->TabIndex = 12;
			this->btnCalcPoli->Text = L"Calcular";
			this->btnCalcPoli->UseVisualStyleBackColor = true;
			this->btnCalcPoli->Click += gcnew System::EventHandler(this, &MyForm::btnCalcPoli_Click);
			// 
			// TBApotema
			// 
			this->TBApotema->Location = System::Drawing::Point(735, 311);
			this->TBApotema->Name = L"TBApotema";
			this->TBApotema->Size = System::Drawing::Size(100, 26);
			this->TBApotema->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(731, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Apotema:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 471);
			this->Controls->Add(this->TBApotema);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnCalcPoli);
			this->Controls->Add(this->BtnCalcTrian);
			this->Controls->Add(this->BtnCalcCua);
			this->Controls->Add(this->TBPolNL);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TBPolL);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBTrianL);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TBCuadroL);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnCalcTrian_Click(System::Object^  sender, System::EventArgs^  e) {
		TrianguloE *obj = new TrianguloE();
		double largo =  Convert::ToDouble(TBTrianL->Text);
		MessageBox::Show("Área del triángulo: " + obj->ObArea(largo).ToString() + "\nPerímetro del triángulo: " + obj->ObPerimetro(largo).ToString());
	
	}
private: System::Void BtnCalcCua_Click(System::Object^  sender, System::EventArgs^  e) {
		Cuadrado *obj = new Cuadrado();
		double largo = Convert::ToDouble(TBCuadroL->Text);
		MessageBox::Show("Área del triángulo: " + obj->ObArea(largo).ToString() + "\nPerímetro del triángulo: " + obj->ObPerimetro(largo).ToString());
}
private: System::Void btnCalcPoli_Click(System::Object^  sender, System::EventArgs^  e) {
	PRegulares* pol = new PRegulares();
	double lados = Convert::ToDouble(TBPolL->Text);
	double NoLados = Convert::ToDouble(TBPolNL->Text);
	double Apotema = Convert::ToDouble(TBApotema->Text);
	MessageBox::Show("Área del Polígono: " + pol->ObArea(lados, NoLados, Apotema).ToString() + "\nPerímetro del polígono: " + pol->ObPerimetro(lados, lados).ToString());

}
};
}
