#include <windows.h>
#include "HowToGame.h"
#pragma once

namespace prakt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		List<String^>^ usedNumbers = gcnew List<String^>();
		int progression = 0, points = 0, toppoints = 0;
		System::String ^login, ^word, ^translation;
	private: System::Windows::Forms::Label^ label12;
	public:
		Game(void)
		{
			InitializeComponent();
		}
		Game(Form^ obj1, String^ login1, int toppoints1)
		{
			obj = obj1;
			login = login1;
			toppoints = toppoints1;
			InitializeComponent();
		}
	private: System::Windows::Forms::Button^ buttonrules;
	public:

	public:


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labeltranslate;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonback;
	private: System::Windows::Forms::Button^ buttonconfirm;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ goal1;
	private: System::Windows::Forms::Label^ goal2;
	private: System::Windows::Forms::Label^ goal3;
	private: System::Windows::Forms::Label^ goal4;
	private: System::Windows::Forms::Label^ goal5;
	private: System::Windows::Forms::Label^ goal6;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labeltranslate = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonback = (gcnew System::Windows::Forms::Button());
			this->buttonconfirm = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->goal1 = (gcnew System::Windows::Forms::Label());
			this->goal2 = (gcnew System::Windows::Forms::Label());
			this->goal3 = (gcnew System::Windows::Forms::Label());
			this->goal4 = (gcnew System::Windows::Forms::Label());
			this->goal5 = (gcnew System::Windows::Forms::Label());
			this->goal6 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonrules = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBox1->Location = System::Drawing::Point(147, 53);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 20;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 35);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Game::textBox1_TextChanged);
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
			this->label1->Size = System::Drawing::Size(172, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ваше слово:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// labeltranslate
			// 
			this->labeltranslate->AutoSize = true;
			this->labeltranslate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->labeltranslate->ForeColor = System::Drawing::Color::Transparent;
			this->labeltranslate->Location = System::Drawing::Point(187, 9);
			this->labeltranslate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labeltranslate->Name = L"labeltranslate";
			this->labeltranslate->Size = System::Drawing::Size(134, 31);
			this->labeltranslate->TabIndex = 7;
			this->labeltranslate->Text = L"Loading...";
			this->labeltranslate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(11, 53);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 31);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Перевод:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonback
			// 
			this->buttonback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonback->Location = System::Drawing::Point(4, 103);
			this->buttonback->Margin = System::Windows::Forms::Padding(2);
			this->buttonback->Name = L"buttonback";
			this->buttonback->Size = System::Drawing::Size(139, 58);
			this->buttonback->TabIndex = 10;
			this->buttonback->Text = L"Назад";
			this->buttonback->UseVisualStyleBackColor = true;
			this->buttonback->Click += gcnew System::EventHandler(this, &Game::buttonback_Click);
			// 
			// buttonconfirm
			// 
			this->buttonconfirm->Enabled = false;
			this->buttonconfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonconfirm->Location = System::Drawing::Point(278, 103);
			this->buttonconfirm->Margin = System::Windows::Forms::Padding(2);
			this->buttonconfirm->Name = L"buttonconfirm";
			this->buttonconfirm->Size = System::Drawing::Size(199, 58);
			this->buttonconfirm->TabIndex = 9;
			this->buttonconfirm->Text = L"Ответить";
			this->buttonconfirm->UseVisualStyleBackColor = true;
			this->buttonconfirm->Click += gcnew System::EventHandler(this, &Game::buttonconfirm_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(566, 9);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Прогресс";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(549, 112);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 31);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Очки:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal1
			// 
			this->goal1->AutoSize = true;
			this->goal1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal1->ForeColor = System::Drawing::Color::Transparent;
			this->goal1->Location = System::Drawing::Point(549, 53);
			this->goal1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal1->Name = L"goal1";
			this->goal1->Size = System::Drawing::Size(23, 31);
			this->goal1->TabIndex = 13;
			this->goal1->Text = L"-";
			this->goal1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal2
			// 
			this->goal2->AutoSize = true;
			this->goal2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal2->ForeColor = System::Drawing::Color::Transparent;
			this->goal2->Location = System::Drawing::Point(576, 53);
			this->goal2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal2->Name = L"goal2";
			this->goal2->Size = System::Drawing::Size(23, 31);
			this->goal2->TabIndex = 14;
			this->goal2->Text = L"-";
			this->goal2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal3
			// 
			this->goal3->AutoSize = true;
			this->goal3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal3->ForeColor = System::Drawing::Color::Transparent;
			this->goal3->Location = System::Drawing::Point(603, 53);
			this->goal3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal3->Name = L"goal3";
			this->goal3->Size = System::Drawing::Size(23, 31);
			this->goal3->TabIndex = 15;
			this->goal3->Text = L"-";
			this->goal3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal4
			// 
			this->goal4->AutoSize = true;
			this->goal4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal4->ForeColor = System::Drawing::Color::Transparent;
			this->goal4->Location = System::Drawing::Point(630, 53);
			this->goal4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal4->Name = L"goal4";
			this->goal4->Size = System::Drawing::Size(23, 31);
			this->goal4->TabIndex = 16;
			this->goal4->Text = L"-";
			this->goal4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal5
			// 
			this->goal5->AutoSize = true;
			this->goal5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal5->ForeColor = System::Drawing::Color::Transparent;
			this->goal5->Location = System::Drawing::Point(657, 53);
			this->goal5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal5->Name = L"goal5";
			this->goal5->Size = System::Drawing::Size(23, 31);
			this->goal5->TabIndex = 17;
			this->goal5->Text = L"-";
			this->goal5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// goal6
			// 
			this->goal6->AutoSize = true;
			this->goal6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->goal6->ForeColor = System::Drawing::Color::Transparent;
			this->goal6->Location = System::Drawing::Point(684, 53);
			this->goal6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->goal6->Name = L"goal6";
			this->goal6->Size = System::Drawing::Size(23, 31);
			this->goal6->TabIndex = 18;
			this->goal6->Text = L"-";
			this->goal6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(481, 81);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(103, 31);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Игрок: ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// buttonrules
			// 
			this->buttonrules->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonrules->Location = System::Drawing::Point(147, 103);
			this->buttonrules->Margin = System::Windows::Forms::Padding(2);
			this->buttonrules->Name = L"buttonrules";
			this->buttonrules->Size = System::Drawing::Size(127, 58);
			this->buttonrules->TabIndex = 20;
			this->buttonrules->Text = L"Правила";
			this->buttonrules->UseVisualStyleBackColor = true;
			this->buttonrules->Click += gcnew System::EventHandler(this, &Game::buttonrules_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(786, 174);
			this->ControlBox = false;
			this->Controls->Add(this->buttonrules);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->goal6);
			this->Controls->Add(this->goal5);
			this->Controls->Add(this->goal4);
			this->Controls->Add(this->goal3);
			this->Controls->Add(this->goal2);
			this->Controls->Add(this->goal1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->buttonback);
			this->Controls->Add(this->buttonconfirm);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labeltranslate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Game";
			this->Text = L"Игра \"Переводчик\"";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Game::Game_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		points = 0; buttonconfirm->Visible = true; label4->Text = "Прогресс";
		usedNumbers->Clear();
		progression = 0;
		Random^ rnd = gcnew Random();
		label12->Text = String::Format(L"Игрок: {0}, ТОП: {1}", login, toppoints);
		array<String^>^ lines = File::ReadAllLines("game.txt");
		if (lines->Length == 0)
			return;
		int randomNumber = rnd->Next(1, 101);
		for (int i = 1; i < lines->Length; i++)
		{
			array<String^>^ row = lines[i]->Split(',');
			if (Convert::ToInt16(row[0]) == randomNumber)
			{
				usedNumbers->Add(randomNumber.ToString());
				word = row[1];
				translation = row[2];
				labeltranslate->Text = word;
				if (login == "admin") {
					labeltranslate->Text = word;
					textBox1->Text = translation;
				}
				break;	
			}
		}
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") buttonconfirm->Enabled = true;
	else buttonconfirm->Enabled = false;
}
private: System::Void Game_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void buttonrules_Click(System::Object^ sender, System::EventArgs^ e) {
	HowToGame^ obj2 = gcnew HowToGame(this);
	obj2->Show();
}
private: System::Void buttonback_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
private: System::Void UpdateLoginValue(String^ login, int newValue)
	   {
		   try
		   {
			   array<String^>^ lines = File::ReadAllLines("loginf.txt");
			   bool found = false;
			   for (int i = 0; i < lines->Length; i++)
			   {
				    String^ currentLine = lines[i];
					if (currentLine == login && i + 2 < lines->Length && lines[i + 2]->StartsWith("|"))
					{
						lines[i + 2] = String::Format("|{0}", newValue);
						found = true;
						break;
					}
			   }
			   File::WriteAllLines("loginf.txt", lines);
		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show("Ошибка при обработке файла: " + ex->Message);
		   }
	   }
private: System::Void buttonconfirm_Click(System::Object^ sender, System::EventArgs^ e) {
	bool right = 0;
	if (textBox1->Text->ToLower() == translation->ToLower()) right = true;
	switch (progression)
	{
	case(0): if (right) { goal1->Text = "+"; goal1->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
			 else { goal1->Text = "-"; goal1->ForeColor = System::Drawing::Color::Red;} 
		     break;
	case(1): if (right) { goal2->Text = "+"; goal2->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
		   else { goal2->Text = "-"; goal2->ForeColor = System::Drawing::Color::Red; }
		   break;
	case(2): if (right) { goal3->Text = "+"; goal3->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
		   else { goal3->Text = "-"; goal3->ForeColor = System::Drawing::Color::Red; }
		   break;
	case(3): if (right) { goal4->Text = "+"; goal4->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
		   else { goal4->Text = "-"; goal4->ForeColor = System::Drawing::Color::Red; }
		   break;
	case(4): if (right) { goal5->Text = "+"; goal5->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
		   else { goal5->Text = "-"; goal5->ForeColor = System::Drawing::Color::Red; }
		   break;
	case(5): if (right) { goal6->Text = "+"; goal6->ForeColor = System::Drawing::Color::LimeGreen; points += 100; }
		   else { goal6->Text = "-"; goal6->ForeColor = System::Drawing::Color::Red; }
		   break;
	default: break;
	}
	label5->Text = String::Format("Очки: {0}",points);
	progression++;
	if (progression != 6)
	{
		Random^ rnd = gcnew Random();
		int randomNumber = rnd->Next(1, 101);
		while (usedNumbers->Contains(randomNumber.ToString())) randomNumber = rnd->Next(1, 101);
		usedNumbers->Add(randomNumber.ToString());
		array<String^>^ lines = File::ReadAllLines("game.txt");
		for (int i = 1; i < lines->Length; i++)
		{
			array<String^>^ row = lines[i]->Split(',');
			if (Convert::ToInt16(row[0]) == randomNumber)
			{
				word = row[1];
				translation = row[2];
				labeltranslate->Text = word;
				if (login == "admin") {
					labeltranslate->Text = word;
					textBox1->Text = translation;
				}
				break;
			}
		}
	}
	else
	{
		buttonconfirm->Visible = false;
		if (points > toppoints){
			UpdateLoginValue(login, points);
			MessageBox::Show(String::Format("Конец игры! Вы поставили новый рекорд! Ваш счёт: {0}, ваш старый рекорд: {1}", points, toppoints));
		}
		else MessageBox::Show(String::Format("Конец игры! Ваш счёт: {0}, ваш рекорд: {1}", points, toppoints));
		labeltranslate->Text = "Закрывайте игру и возвращайтесь к работе!"; label4->Text = "";
	}
}
};
}
