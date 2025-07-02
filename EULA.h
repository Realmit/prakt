#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EULA
	/// </summary>
	public ref class EULA : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		EULA(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		EULA(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EULA()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonbacktomain;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ buttoneng;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EULA::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttoneng = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(11, 684);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(290, 50);
			this->buttonbacktomain->TabIndex = 11;
			this->buttonbacktomain->Text = L"Назад";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &EULA::buttonbacktomain_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(491, 667);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->richTextBox2->Location = System::Drawing::Point(12, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox2->Size = System::Drawing::Size(493, 667);
			this->richTextBox2->TabIndex = 17;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			this->richTextBox2->Visible = false;
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &EULA::richTextBox2_TextChanged);
			// 
			// buttoneng
			// 
			this->buttoneng->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttoneng->Location = System::Drawing::Point(305, 684);
			this->buttoneng->Margin = System::Windows::Forms::Padding(2);
			this->buttoneng->Name = L"buttoneng";
			this->buttoneng->Size = System::Drawing::Size(199, 50);
			this->buttoneng->TabIndex = 18;
			this->buttoneng->Text = L"ENG";
			this->buttoneng->UseVisualStyleBackColor = true;
			this->buttoneng->Click += gcnew System::EventHandler(this, &EULA::buttoneng_Click);
			// 
			// EULA
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(515, 745);
			this->ControlBox = false;
			this->Controls->Add(this->buttoneng);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->buttonbacktomain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"EULA";
			this->Text = L"EULA";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EULA::EULA_FormClosing);
			this->Load += gcnew System::EventHandler(this, &EULA::EULA_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EULA_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void buttoneng_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttoneng->Text == "ENG") buttoneng->Text = "RUS";
		else buttoneng->Text = "ENG";
		richTextBox2->Visible = !richTextBox2->Visible;
		richTextBox1->Visible = !richTextBox1->Visible;
}
private: System::Void EULA_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
