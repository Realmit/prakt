#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
#include "Authview.h"
#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Auth
	/// </summary>
	/// 
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		bool blinkact = false;
		bool blinkact2 = false;
		bool blinkact3 = false;
		System::String^ pas;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonchecklogin;
	private: System::Windows::Forms::Label^ label5;

	public:
		int adminmodelocal = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		Form^ obj;
		Auth(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Auth(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonauthconfirm;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ buttonbacktomain;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Auth::typeid));
			this->buttonauthconfirm = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonchecklogin = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonauthconfirm
			// 
			this->buttonauthconfirm->Enabled = false;
			this->buttonauthconfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonauthconfirm->Location = System::Drawing::Point(194, 137);
			this->buttonauthconfirm->Margin = System::Windows::Forms::Padding(2);
			this->buttonauthconfirm->Name = L"buttonauthconfirm";
			this->buttonauthconfirm->Size = System::Drawing::Size(290, 58);
			this->buttonauthconfirm->TabIndex = 2;
			this->buttonauthconfirm->Text = L"Авторизация";
			this->buttonauthconfirm->UseVisualStyleBackColor = true;
			this->buttonauthconfirm->Click += gcnew System::EventHandler(this, &Auth::buttonauthconfirm_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox1->Location = System::Drawing::Point(123, 9);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 12;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 35);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox2->Location = System::Drawing::Point(123, 60);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->MaxLength = 12;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 35);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Auth::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(11, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Логин";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(11, 60);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Пароль";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &Auth::label2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Location = System::Drawing::Point(11, 104);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(189, 29);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Показать пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Auth::checkBox1_CheckedChanged);
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(11, 137);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(179, 58);
			this->buttonbacktomain->TabIndex = 8;
			this->buttonbacktomain->Text = L"Назад";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &Auth::buttonbacktomain_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(322, 13);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 63);
			this->label4->TabIndex = 9;
			this->label4->Text = L"НЕВЕРНЫЙ ПАРОЛЬ\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &Auth::label4_Click_1);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &Auth::timer1_Tick_1);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(325, 13);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 63);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ПРОФИЛЬ НАЙДЕН";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &Auth::label3_Click);
			// 
			// buttonchecklogin
			// 
			this->buttonchecklogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonchecklogin->Location = System::Drawing::Point(321, 84);
			this->buttonchecklogin->Margin = System::Windows::Forms::Padding(2);
			this->buttonchecklogin->Name = L"buttonchecklogin";
			this->buttonchecklogin->Size = System::Drawing::Size(163, 49);
			this->buttonchecklogin->TabIndex = 11;
			this->buttonchecklogin->Text = L"Проверка логина";
			this->buttonchecklogin->UseVisualStyleBackColor = true;
			this->buttonchecklogin->Click += gcnew System::EventHandler(this, &Auth::buttonchecklogin_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(324, 13);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 63);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ЛОГИН НЕ НАЙДЕН";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(321, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 70);
			this->pictureBox1->TabIndex = 81;
			this->pictureBox1->TabStop = false;
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(495, 202);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonchecklogin);
			this->Controls->Add(this->buttonbacktomain);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonauthconfirm);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Auth";
			this->Text = L"Авторизация";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Auth::Auth_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Auth::Auth_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = !textBox2->UseSystemPasswordChar;
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonchecklogin->Enabled == false)
	{
		blinkact = blinkact2 = blinkact3 = 0;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		buttonchecklogin->Enabled = true;
		buttonauthconfirm->Enabled = false;
		label2->Visible = false;
		textBox2->Visible = false;
		checkBox1->Visible = false;
		textBox1->Enabled = true;
		textBox2->Text = "";
		textBox1->Text = "";
		buttonbacktomain->Text = "Назад";
	}
	else
	{
		this->Hide();
		obj->Show();
	}
}
private: System::Void buttonauthconfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	if (blinkact2)
	{
		blinkact2 = 0;
		label3->Visible = false;
	}
	msclr::interop::marshal_context context;
	std::string str1 = context.marshal_as<std::string>(Convert::ToString(textBox2->Text));
	std::string str2 = context.marshal_as<std::string>(pas);
	const char* boxchar = str1.c_str();
	const char* paschar = str2.c_str();
	char pasta[100]; strcpy(pasta, "\0");
	strcat(pasta, "|");  strcat(pasta, boxchar);
	if (strcmp(paschar, pasta))
	{
		blinkact = 1;
	}
	else
	{
		blinkact3 = 0;
		blinkact = 0; label4->Visible = false;
		this->Hide();
		Authview^ obj1 = gcnew Authview(this, adminmodelocal);
		obj1->ShowDialog();
	}
}
private: System::Void buttonchecklogin_Click(System::Object^ sender, System::EventArgs^ e) {
	adminmodelocal = 0;	
	FILE* f = fopen("loginf.txt", "r"); int fg = 0;
	char buff[100], buf[100], *p = NULL;
	msclr::interop::marshal_context context;
	std::string str1 = context.marshal_as<std::string>(Convert::ToString(textBox1->Text));
	const char* cmptmp = str1.c_str();
	fseek(f, 0, SEEK_SET);
	int exitint = 0;
	while ((fgets(buff, sizeof(buff), f)) != NULL && exitint == 0)
	{
		p = strtok(buff, "\n\t\0");
		while (p != NULL && exitint == 0)
		{
			strcpy(buff, p);
			if (strcmp(buff, cmptmp) == 0)
			{
				fg = 1;
				blinkact2 = 1; blinkact3 = 0; label5->Visible = false;
				buttonchecklogin->Enabled = false;
				buttonauthconfirm->Enabled = true;
				label2->Visible = true;
				textBox2->Visible = true;
				checkBox1->Visible = true;
				textBox1->Enabled = false;
				buttonbacktomain->Text = "Отмена";
				if (strcmp(cmptmp, "admin") == 0) adminmodelocal = 1;
				else adminmodelocal = 0;
			}
			else if (fg == 1)
			{
				std::string buffstr(buff);
				pas = gcnew String(buffstr.c_str());
				fclose(f);
				exitint = 1;
			}
			if (fg == 0) {
				blinkact3 = 1; label5->Visible = true;
			}
			if(!exitint) p = strtok(NULL, "\n\t\0");
		}
	}
	fclose(f);
}
private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
	if (blinkact) label4->Visible = !label4->Visible;
	if (blinkact2) label3->Visible = !label3->Visible;
	if (blinkact3) label5->Visible = !label5->Visible;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Auth_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Auth_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
