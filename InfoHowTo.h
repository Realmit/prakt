#include "EULA.h"
#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InfoHowTo
	/// </summary>
	public ref class InfoHowTo : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		InfoHowTo(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		InfoHowTo(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~InfoHowTo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonbacktomain;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttoneula;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoHowTo::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttoneula = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(12, 679);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(290, 50);
			this->buttonbacktomain->TabIndex = 10;
			this->buttonbacktomain->Text = L"Назад";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &InfoHowTo::buttonbacktomain_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(183, 45);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 41);
			this->label2->TabIndex = 13;
			this->label2->Text = L"г. Гомель";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(66, -15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 88);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Автобусный автопарк";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &InfoHowTo::label1_Click);
			// 
			// buttoneula
			// 
			this->buttoneula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttoneula->Location = System::Drawing::Point(306, 679);
			this->buttoneula->Margin = System::Windows::Forms::Padding(2);
			this->buttoneula->Name = L"buttoneula";
			this->buttoneula->Size = System::Drawing::Size(199, 50);
			this->buttoneula->TabIndex = 14;
			this->buttoneula->Text = L"EULA";
			this->buttoneula->UseVisualStyleBackColor = true;
			this->buttoneula->Click += gcnew System::EventHandler(this, &InfoHowTo::buttoneula_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->richTextBox1->Location = System::Drawing::Point(12, 89);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(491, 585);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// InfoHowTo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(515, 745);
			this->ControlBox = false;
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->buttoneula);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonbacktomain);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InfoHowTo";
			this->Text = L"Справочная информация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &InfoHowTo::InfoHowTo_FormClosing);
			this->Load += gcnew System::EventHandler(this, &InfoHowTo::InfoHowTo_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InfoHowTo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void buttoneula_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		EULA^ obj1 = gcnew EULA(this);
		obj1->ShowDialog();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void InfoHowTo_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
};
}
