#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuElipse^ FormElipse;
	private: System::Windows::Forms::Panel^ LeftPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ PassInput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ UserInput;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;






	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->FormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->LeftPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PassInput = (gcnew System::Windows::Forms::Label());
			this->LeftPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// FormElipse
			// 
			this->FormElipse->ElipseRadius = 10;
			this->FormElipse->TargetControl = this;
			// 
			// LeftPanel
			// 
			this->LeftPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->LeftPanel->Controls->Add(this->PassInput);
			this->LeftPanel->Controls->Add(this->label2);
			this->LeftPanel->Controls->Add(this->UserInput);
			this->LeftPanel->Controls->Add(this->textBox1);
			this->LeftPanel->Controls->Add(this->label1);
			this->LeftPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->LeftPanel->Location = System::Drawing::Point(0, 0);
			this->LeftPanel->Name = L"LeftPanel";
			this->LeftPanel->Size = System::Drawing::Size(200, 561);
			this->LeftPanel->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(914, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rage Italic", 50));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 478);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 84);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Shade";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 20);
			this->textBox1->TabIndex = 4;
			// 
			// UserInput
			// 
			this->UserInput->Location = System::Drawing::Point(18, 93);
			this->UserInput->Name = L"UserInput";
			this->UserInput->Size = System::Drawing::Size(162, 20);
			this->UserInput->TabIndex = 5;
			this->UserInput->TextChanged += gcnew System::EventHandler(this, &Form1::UserInput_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->label2->Location = System::Drawing::Point(16, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Username";
			// 
			// PassInput
			// 
			this->PassInput->AutoSize = true;
			this->PassInput->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassInput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->PassInput->Location = System::Drawing::Point(18, 114);
			this->PassInput->Name = L"PassInput";
			this->PassInput->Size = System::Drawing::Size(68, 20);
			this->PassInput->TabIndex = 7;
			this->PassInput->Text = L"Password";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(964, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->LeftPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Shade";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->LeftPanel->ResumeLayout(false);
			this->LeftPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void UserInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
