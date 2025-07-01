#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HowToGame
	/// </summary>
	public ref class HowToGame : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		HowToGame(void)
		{
			InitializeComponent();
		}
		HowToGame(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HowToGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ buttonbacktomain;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HowToGame::typeid));
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->richTextBox2->Location = System::Drawing::Point(10, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox2->Size = System::Drawing::Size(493, 195);
			this->richTextBox2->TabIndex = 18;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			this->richTextBox2->UseWaitCursor = true;
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(9, 212);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(494, 50);
			this->buttonbacktomain->TabIndex = 19;
			this->buttonbacktomain->Text = L"Назад";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &HowToGame::buttonbacktomain_Click);
			// 
			// HowToGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(515, 278);
			this->ControlBox = false;
			this->Controls->Add(this->buttonbacktomain);
			this->Controls->Add(this->richTextBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"HowToGame";
			this->Text = L"Инструкция к игре";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	};
}
