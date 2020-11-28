#pragma once
#include "Gstat.h"
#include "Gclient.h"
#include "Gcommandes.h"
#include "Stock.h"
#include "GesPersonnel.h"


namespace PROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;





	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecondForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(924, 477);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Retour";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(613, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L" Gestion du personnel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SecondForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(437, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L" Gestion des clients";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SecondForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(437, 382);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(161, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L" Gestion du stock";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SecondForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(789, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(161, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L" Gestion des commandes";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SecondForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->BackColor = System::Drawing::Color::LightSkyBlue;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(789, 382);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(161, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L" Gestion des statistiques";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &SecondForm::button6_Click);
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1037, 520);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Gstat^ p = gcnew Gstat;
	p->Show();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Gclient^ p = gcnew Gclient;
	p->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Stock^ p = gcnew Stock;
	p->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Gcommandes^ p = gcnew Gcommandes;
	p->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GesPersonnel^ p = gcnew GesPersonnel;
	p->Show();
}
};
}
