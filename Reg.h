#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Reg
	/// </summary>
	public ref class Reg : public System::Windows::Forms::Form
	{
	public:
		bool blinkact1 = false;
		bool blinkact2 = false;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		Form^ obj;
		Reg(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Reg(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonbacktomain;
	protected:
	private: System::Windows::Forms::Button^ buttonadd;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonremove;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Reg::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->buttonadd = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonremove = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(11, 143);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(142, 58);
			this->buttonbacktomain->TabIndex = 9;
			this->buttonbacktomain->Text = L"В меню";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &Reg::buttonbacktomain_Click);
			// 
			// buttonadd
			// 
			this->buttonadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonadd->Location = System::Drawing::Point(320, 143);
			this->buttonadd->Margin = System::Windows::Forms::Padding(2);
			this->buttonadd->Name = L"buttonadd";
			this->buttonadd->Size = System::Drawing::Size(164, 58);
			this->buttonadd->TabIndex = 10;
			this->buttonadd->Text = L"Проверить";
			this->buttonadd->UseVisualStyleBackColor = true;
			this->buttonadd->Click += gcnew System::EventHandler(this, &Reg::buttonadd_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBox1->Location = System::Drawing::Point(16, 106);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(189, 29);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Показать пароль";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Reg::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(16, 62);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 31);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Пароль";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 31);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Логин";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox2->Location = System::Drawing::Point(128, 62);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->MaxLength = 12;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 35);
			this->textBox2->TabIndex = 12;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox1->Location = System::Drawing::Point(128, 11);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 12;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 35);
			this->textBox1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label5->ForeColor = System::Drawing::Color::Gold;
			this->label5->Location = System::Drawing::Point(332, 11);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 97);
			this->label5->TabIndex = 16;
			this->label5->Text = L"СУЩЕСТВУЮЩИЙ ЛОГИН";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Visible = false;
			// 
			// buttonremove
			// 
			this->buttonremove->Enabled = false;
			this->buttonremove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonremove->Location = System::Drawing::Point(157, 143);
			this->buttonremove->Margin = System::Windows::Forms::Padding(2);
			this->buttonremove->Name = L"buttonremove";
			this->buttonremove->Size = System::Drawing::Size(159, 58);
			this->buttonremove->TabIndex = 17;
			this->buttonremove->Text = L"5";
			this->buttonremove->UseVisualStyleBackColor = true;
			this->buttonremove->Click += gcnew System::EventHandler(this, &Reg::buttonremove_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::LimeGreen;
			this->label3->Location = System::Drawing::Point(332, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 97);
			this->label3->TabIndex = 18;
			this->label3->Text = L"НОВЫЙ ЛОГИН";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &Reg::label3_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 300;
			this->timer1->Tick += gcnew System::EventHandler(this, &Reg::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(326, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 105);
			this->pictureBox1->TabIndex = 81;
			this->pictureBox1->TabStop = false;
			// 
			// Reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(495, 212);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonremove);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonadd);
			this->Controls->Add(this->buttonbacktomain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Reg";
			this->Text = L"Панель администратора";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Reg::Reg_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Reg::Reg_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonbacktomain->Text == "Назад")
	{
		label5->Text = "СУЩЕСТВУЮЩИЙ ЛОГИН";
		label5->ForeColor = System::Drawing::Color::Gold;
		blinkact1 = blinkact2 = 0;
		label3->Visible = false;
		label5->Visible = false;
		buttonadd->Enabled = true;
		buttonremove->Enabled = false;
		label2->Visible = false;
		textBox2->Visible = false;
		checkBox1->Visible = false;
		textBox1->Enabled = true;
		textBox2->Text = "";
		textBox1->Text = "";
		buttonbacktomain->Text = "В меню";
		buttonadd->Text = "Проверить";
	}
	else
	{
		this->Hide();
		obj->Show();
	}
}
private: System::Void buttonadd_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonadd->Text == "Проверить" && textBox1->Text != "")
	{
		FILE* f = fopen("loginf.txt", "r"); int fg = 0;
		char buff[100], buf[100], * p = NULL;
		msclr::interop::marshal_context context;
		std::string str1 = context.marshal_as<std::string>(Convert::ToString(textBox1->Text));
		const char* cmptmp = str1.c_str();
		fseek(f, 0, SEEK_SET);
		int exitint = 0;
		while ((fgets(buff, sizeof(buff), f)) != NULL && !exitint)
		{
			p = strtok(buff, "\n\t\0");
			while (p != NULL && exitint == 0)
			{
				strcpy(buff, p);
				if (strcmp(buff, cmptmp) == 0)
				{
					blinkact2 = 0; blinkact1 = 1; label5->Visible = true; label3->Visible = false;
					buttonremove->Enabled = true; buttonadd->Text = "Изменить пароль";
					buttonbacktomain->Text = "Назад";
					fg = 1;
					fclose(f);
					exitint = 1;
				}
				if (!exitint) p = strtok(NULL, "\n\t\0");
			}
		}
		if (!fg) {
			blinkact2 = true; blinkact1 = false; label3->Visible = true; label5->Visible = false;
			buttonadd->Text = "Добавить";
			buttonremove->Enabled = false;
			label2->Visible = true;
			textBox2->Visible = true;
			checkBox1->Visible = true;
			textBox1->Enabled = false;
			buttonbacktomain->Text = "Назад";
		}
		fclose(f);
	}
	else if(buttonadd->Text == "Добавить")
	{
		if (textBox2->Text != "")
		{
			label5->Visible = true; blinkact2 = false;
			blinkact1 = true; label5->Text = "УСПЕХ";
			label5->ForeColor = System::Drawing::Color::LimeGreen;
			buttonremove->Enabled = false; buttonadd->Enabled = false;
			label3->Visible = false;
			FILE* f = fopen("loginf.txt", "a");
			fprintf(f, "%s\n|%s\n|0\n", Convert::ToString(textBox1->Text), Convert::ToString(textBox2->Text));
			fclose(f);
			textBox1->Text = ""; textBox2->Text = "";
		}
		else
		{
			blinkact1 = true; label5->Text = "ПУСТОЙ ПАРОЛЬ";
			label5->ForeColor = System::Drawing::Color::Red;
		}
	}
	else if (buttonadd->Text == "Изменить пароль")
	{
		buttonadd->Text = "Подтвердить";
		buttonremove->Enabled = false;
		label2->Visible = true;
		blinkact2 = blinkact1 = false; label5->Visible = false; label3->Visible = false;
		textBox2->Visible = true;
		checkBox1->Visible = true;
		textBox1->Enabled = false;
		buttonbacktomain->Text = "Назад";
	}
	else if (buttonadd->Text == "Подтвердить")
	{
		if (textBox2->Text != "")
		{
			FILE* f = fopen("loginf.txt", "r"); FILE* fbuf = fopen("loginfbuf.txt", "w");
			if (f == NULL || fbuf == NULL) MessageBox::Show("Ошибка чтения файла!");
			char buff[100], * p = NULL;
			msclr::interop::marshal_context context;
			std::string strlog = context.marshal_as<std::string>(Convert::ToString(textBox1->Text));
			std::string strpas = context.marshal_as<std::string>(Convert::ToString(textBox2->Text));
			const char* logchar = strlog.c_str();
			const char* paschar = strpas.c_str();
			fseek(f, 0, SEEK_SET);
			int exitint, fg; exitint = fg = 0;
			while ((fgets(buff, sizeof(buff), f)) != NULL && !exitint)
			{
				p = strtok(buff, "\n\t\0");
				while (p != NULL && exitint == 0)
				{
					strcpy(buff, p);
					if (strcmp(buff, logchar) == 0 && fg == 0) {
						fg = 1;
						fprintf(fbuf, "%s\n", p);
					}
					else if (fg == 1) {
						fprintf(fbuf, "|%s\n", paschar);
						fg = 0;
					}
					else if (!exitint) fprintf(fbuf, "%s\n", p);
					if (!exitint) p = strtok(NULL, "\n\t\0");
				}
			}
			fclose(f); fclose(fbuf);
			if (remove("loginf.txt")) MessageBox::Show("Ошибка удаления файла!");
			if (rename("loginfbuf.txt","loginf.txt")) MessageBox::Show("Ошибка переименования файла!");
			else
			{
				label5->Visible = true;
				blinkact1 = true; label5->Text = "УСПЕХ";
				label5->ForeColor = System::Drawing::Color::LimeGreen;
				buttonremove->Enabled = false; buttonadd->Enabled = false;
			}
		}
		else
		{
			label5->Visible = true;
			blinkact1 = true; label5->Text = "ПУСТОЙ ПАРОЛЬ";
			label5->ForeColor = System::Drawing::Color::Red;
		}	
	}
}
private: System::Void buttonremove_Click(System::Object^ sender, System::EventArgs^ e) {
	if (buttonremove->Enabled == true)
	{
		FILE* f = fopen("loginf.txt", "r"); FILE* fbuf = fopen("loginfbuf.txt", "w");
		if (f == NULL || fbuf == NULL) MessageBox::Show("Ошибка чтения файла!");
		char buff[100], * p = NULL;
		msclr::interop::marshal_context context;
		std::string strlog = context.marshal_as<std::string>(Convert::ToString(textBox1->Text));
		const char* logchar = strlog.c_str();
		fseek(f, 0, SEEK_SET);
		int exitint, fg; exitint = fg = 0;
		while ((fgets(buff, sizeof(buff), f)) != NULL && !exitint)
		{
			p = strtok(buff, "\n\t\0");
			while (p != NULL && exitint == 0)
			{
				strcpy(buff, p);
				if (strcmp(buff, logchar) == 0 || (fg >= 1 && fg <= 2)){
					fg++;
				}
				else if (!exitint) fprintf(fbuf, "%s\n", p);
				if (!exitint) p = strtok(NULL, "\n\t\0");
			}
		}
		fclose(f); fclose(fbuf);
		if (remove("loginf.txt")) MessageBox::Show("Ошибка удаления файла!");
		if (rename("loginfbuf.txt", "loginf.txt")) MessageBox::Show("Ошибка переименования файла!");
		else
		{
			label5->Visible = true;
			blinkact1 = true; label5->Text = "УСПЕХ";
			label5->ForeColor = System::Drawing::Color::LimeGreen;
			buttonremove->Enabled = false; buttonadd->Enabled = false;
		}

	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (blinkact1) label5->Visible = !label5->Visible;
	if (blinkact2) label3->Visible = !label3->Visible;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->UseSystemPasswordChar = !textBox2->UseSystemPasswordChar;
}
private: System::Void Reg_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Reg_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
};
}
