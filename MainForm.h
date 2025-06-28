#pragma once
#include "Auth.h"
#include "Info.h"
#include "InfoHowTo.h"
#include "Noauthview.h"
namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		//Form^ obj;
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		/*MainForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}*/
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonauth;


	private: System::Windows::Forms::Button^ buttonnologin;
	private: System::Windows::Forms::Button^ buttoninfo;
	private: System::Windows::Forms::Button^ buttonexit;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ buttoninfohowto;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonauth = (gcnew System::Windows::Forms::Button());
			this->buttonnologin = (gcnew System::Windows::Forms::Button());
			this->buttoninfo = (gcnew System::Windows::Forms::Button());
			this->buttonexit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttoninfohowto = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 88);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Автобусный автопарк";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// buttonauth
			// 
			this->buttonauth->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonauth->Location = System::Drawing::Point(12, 99);
			this->buttonauth->Margin = System::Windows::Forms::Padding(2);
			this->buttonauth->Name = L"buttonauth";
			this->buttonauth->Size = System::Drawing::Size(330, 80);
			this->buttonauth->TabIndex = 1;
			this->buttonauth->Text = L"Авторизация";
			this->buttonauth->UseVisualStyleBackColor = true;
			this->buttonauth->Click += gcnew System::EventHandler(this, &MainForm::buttonauth_Click);
			// 
			// buttonnologin
			// 
			this->buttonnologin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonnologin->Location = System::Drawing::Point(12, 181);
			this->buttonnologin->Margin = System::Windows::Forms::Padding(2);
			this->buttonnologin->Name = L"buttonnologin";
			this->buttonnologin->Size = System::Drawing::Size(196, 80);
			this->buttonnologin->TabIndex = 3;
			this->buttonnologin->Text = L"Просмотр без входа\r\n";
			this->buttonnologin->UseVisualStyleBackColor = true;
			this->buttonnologin->Click += gcnew System::EventHandler(this, &MainForm::buttonnologin_Click);
			// 
			// buttoninfo
			// 
			this->buttoninfo->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoninfo->Location = System::Drawing::Point(12, 265);
			this->buttoninfo->Margin = System::Windows::Forms::Padding(2);
			this->buttoninfo->Name = L"buttoninfo";
			this->buttoninfo->Size = System::Drawing::Size(130, 80);
			this->buttoninfo->TabIndex = 4;
			this->buttoninfo->Text = L"Контактная информация";
			this->buttoninfo->UseVisualStyleBackColor = true;
			this->buttoninfo->Click += gcnew System::EventHandler(this, &MainForm::buttoninfo_Click);
			// 
			// buttonexit
			// 
			this->buttonexit->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonexit->Location = System::Drawing::Point(146, 265);
			this->buttonexit->Margin = System::Windows::Forms::Padding(2);
			this->buttonexit->Name = L"buttonexit";
			this->buttonexit->Size = System::Drawing::Size(196, 80);
			this->buttonexit->TabIndex = 5;
			this->buttonexit->Text = L"Выход";
			this->buttonexit->UseVisualStyleBackColor = true;
			this->buttonexit->Click += gcnew System::EventHandler(this, &MainForm::buttonexit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(257, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 85);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(150, 60);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"г. Гомель";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(293, 343);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ver 0.5.2";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttoninfohowto
			// 
			this->buttoninfohowto->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoninfohowto->Location = System::Drawing::Point(212, 181);
			this->buttoninfohowto->Margin = System::Windows::Forms::Padding(2);
			this->buttoninfohowto->Name = L"buttoninfohowto";
			this->buttoninfohowto->Size = System::Drawing::Size(130, 80);
			this->buttoninfohowto->TabIndex = 10;
			this->buttoninfohowto->Text = L"Справочная информация";
			this->buttoninfohowto->UseVisualStyleBackColor = true;
			this->buttoninfohowto->Click += gcnew System::EventHandler(this, &MainForm::buttoninfohowto_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(356, 362);
			this->Controls->Add(this->buttoninfohowto);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonexit);
			this->Controls->Add(this->buttoninfo);
			this->Controls->Add(this->buttonnologin);
			this->Controls->Add(this->buttonauth);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Автобусный автопарк";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void buttonauth_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Auth^ obj1 = gcnew Auth(this);
	obj1->ShowDialog();
}
private: System::Void buttoninfo_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Info^ obj2 = gcnew Info(this);
	obj2->ShowDialog();
}
private: System::Void buttonnologin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Noauthview^ obj3 = gcnew Noauthview(this);
	obj3->ShowDialog();
}
private: System::Void buttonexit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Application::Exit();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttoninfohowto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	InfoHowTo^ obj4 = gcnew InfoHowTo(this);
	obj4->ShowDialog();
}
};
}
