#pragma once

namespace Interseccion {

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
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
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
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 32;
			this->listBox1->Location = System::Drawing::Point(12, 67);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(205, 260);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 32;
			this->listBox2->Location = System::Drawing::Point(242, 67);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(205, 260);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 32;
			this->listBox3->Location = System::Drawing::Point(469, 67);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(205, 260);
			this->listBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lista 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 32);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Lista 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(472, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Interseccion";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(143, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Llenar Lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 351);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 51);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Interseccion";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 442);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->Name = L"Form1";
			this->Text = L"Interseccion entre dos listas";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		ref struct Nodo
		{
			Nodo^ link;
			int info;
		};

		static Nodo^ PTR1 = nullptr;
		static Nodo^ PTR2 = nullptr;
		static Nodo^ PTR3 = nullptr;

		void agregarAleatorio(){
		//vacio oh god why!!
		}

		void mostrar(ListBox^ l, Nodo^ ptr){
			l->Items->Clear();
			Nodo^ P = gcnew Nodo();
			P = ptr;
			while(P != nullptr){
				l->Items->Add(P->info);
				P=P->link;
			}
		}

		void interseccion(){
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 agregarAleatorio();
				 mostrar(listBox1,PTR1);
				 mostrar(listBox2,PTR2);
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				interseccion();
				mostrar(listBox3,PTR3);
		     }
};
}

