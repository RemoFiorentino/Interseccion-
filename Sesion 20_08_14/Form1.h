#pragma once

namespace Sesion20_08_14 {
	
	#include <stdlib.h>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		ref struct Nodo
		{
			Nodo^ link;
			int info;
		};

		static Nodo^ PTR1 = nullptr;
		static Nodo^ PTR2 = nullptr;
		static Nodo^ PTR3 = nullptr;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBox1;
	protected: 

	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ListBox^  listBox2;

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>}
		
		void AgregarPila(){
				Nodo^ Q = gcnew Nodo();
				Q->info= rand() % 15 + 1;
				Q->link=PTR1;
				PTR1=Q;
				Nodo^ p = gcnew Nodo();
				p->info= rand() % 15 + 1;
				p->link=PTR2;
				PTR2=p;
		}

		void mostrar(){
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			listBox3->Items->Clear();
			Nodo^ P = gcnew Nodo();
			Nodo^ Q = gcnew Nodo();
			Nodo^ R = gcnew Nodo();
			P = PTR1;
			Q = PTR2;
			R = PTR3;
			while(P != nullptr){
				listBox1->Items->Add(P->info);
				P=P->link;
			}
			while(Q != nullptr){
				listBox2->Items->Add(Q->info);
				Q=Q->link;
			}
			while(R != nullptr){
				listBox3->Items->Add(R->info);
				R=R->link;
			}
		}
		void Inter(){
			PTR3=nullptr;
			Nodo^ P = gcnew Nodo();
			Nodo^ Q = gcnew Nodo();
			P = PTR1;
			while(P != nullptr){
				Q=PTR2;
				while(Q->info != P->info && Q->link != nullptr){
					Q=Q->link;
				}
				if (Q->info == P->info){
					Nodo^ S = gcnew Nodo();
					S->info = P->info;
					S->link=PTR3;
					PTR3 = S;
				}
				P = P->link;
			}
		}
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 31;
			this->listBox1->Location = System::Drawing::Point(13, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 190);
			this->listBox1->TabIndex = 0;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 31;
			this->listBox3->Location = System::Drawing::Point(276, 31);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 190);
			this->listBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lista 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(157, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lista 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(288, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"interseccion";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Llenar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Interseccion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 31;
			this->listBox2->Location = System::Drawing::Point(146, 31);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 190);
			this->listBox2->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 282);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void listBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 AgregarPila();
			 mostrar();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Inter();
			 mostrar();
		 }
};
}

