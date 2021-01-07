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
	private: Bunifu::Framework::UI::BunifuTileButton^ bunifuTileButton1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ExitButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->FormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->ExitButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->LeftPanel = (gcnew System::Windows::Forms::Panel());
			this->bunifuTileButton1 = (gcnew Bunifu::Framework::UI::BunifuTileButton());
			this->LeftPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// FormElipse
			// 
			this->FormElipse->ElipseRadius = 10;
			this->FormElipse->TargetControl = this;
			// 
			// ExitButton
			// 
			this->ExitButton->ActiveBorderThickness = 1;
			this->ExitButton->ActiveCornerRadius = 20;
			this->ExitButton->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitButton->ActiveForecolor = System::Drawing::Color::White;
			this->ExitButton->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)),
				static_cast<System::Int32>(static_cast<System::Byte>(180)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.BackgroundImage")));
			this->ExitButton->ButtonText = L"x";
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Transparent;
			this->ExitButton->IdleBorderThickness = 1;
			this->ExitButton->IdleCornerRadius = 20;
			this->ExitButton->IdleFillColor = System::Drawing::Color::White;
			this->ExitButton->IdleForecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->ExitButton->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->ExitButton->Location = System::Drawing::Point(923, 8);
			this->ExitButton->Margin = System::Windows::Forms::Padding(5);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(25, 34);
			this->ExitButton->TabIndex = 0;
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Form1::ExitButton_Click);
			// 
			// LeftPanel
			// 
			this->LeftPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(221)));
			this->LeftPanel->Controls->Add(this->bunifuTileButton1);
			this->LeftPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->LeftPanel->Location = System::Drawing::Point(0, 0);
			this->LeftPanel->Name = L"LeftPanel";
			this->LeftPanel->Size = System::Drawing::Size(200, 561);
			this->LeftPanel->TabIndex = 1;
			// 
			// bunifuTileButton1
			// 
			this->bunifuTileButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuTileButton1->color = System::Drawing::Color::SeaGreen;
			this->bunifuTileButton1->colorActive = System::Drawing::Color::MediumSeaGreen;
			this->bunifuTileButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuTileButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->bunifuTileButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuTileButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuTileButton1.Image")));
			this->bunifuTileButton1->ImagePosition = 20;
			this->bunifuTileButton1->ImageZoom = 50;
			this->bunifuTileButton1->LabelPosition = 41;
			this->bunifuTileButton1->LabelText = L"Anonymous";
			this->bunifuTileButton1->Location = System::Drawing::Point(15, 8);
			this->bunifuTileButton1->Margin = System::Windows::Forms::Padding(6);
			this->bunifuTileButton1->Name = L"bunifuTileButton1";
			this->bunifuTileButton1->Size = System::Drawing::Size(170, 129);
			this->bunifuTileButton1->TabIndex = 0;
			this->bunifuTileButton1->Click += gcnew System::EventHandler(this, &Form1::bunifuTileButton1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(964, 561);
			this->Controls->Add(this->LeftPanel);
			this->Controls->Add(this->ExitButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->Text = L"Shade";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->LeftPanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bunifuTileButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
