#include "Reg.h"
#include <windows.h>
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
	/// Сводка для Authview
	/// </summary>
	public ref class Authview : public System::Windows::Forms::Form
	{
	public:
	Form^ obj; 
	int origrow = -1;
	int origcol = -1;
	private: System::Windows::Forms::Button^ buttonload;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonsearch;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxnumless;

	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::CheckBox^ checkBoxnumequal;
	private: System::Windows::Forms::CheckBox^ checkBoxnummore;
	private: System::Windows::Forms::CheckBox^ checkBoxactive;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxnum;


	private: System::Windows::Forms::CheckBox^ checkBoxactivesost;




	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::CheckBox^ checkBoxlost;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxcount;

	private: System::Windows::Forms::CheckBox^ checkBoxcount;
	private: System::Windows::Forms::CheckBox^ checkBoxcountmore;


	private: System::Windows::Forms::CheckBox^ checkBoxcountequal;

	private: System::Windows::Forms::CheckBox^ checkBoxcountless;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxstime;







	private: System::Windows::Forms::CheckBox^ checkBoxstime;
	private: System::Windows::Forms::CheckBox^ checkBoxstimemore;

	private: System::Windows::Forms::CheckBox^ checkBoxstimeequal;



	private: System::Windows::Forms::CheckBox^ checkBoxstimeless;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxltime;

	private: System::Windows::Forms::CheckBox^ checkBoxltime;
	private: System::Windows::Forms::CheckBox^ checkBoxltimemore;


	private: System::Windows::Forms::CheckBox^ checkBoxltimeequal;

	private: System::Windows::Forms::CheckBox^ checkBoxltimeless;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxprice;

	private: System::Windows::Forms::CheckBox^ checkBoxprice;
	private: System::Windows::Forms::CheckBox^ checkBoxpricemore;


	private: System::Windows::Forms::CheckBox^ checkBoxpriceequal;

	private: System::Windows::Forms::CheckBox^ checkBoxpriceless;

	private: System::Windows::Forms::Label^ label10;












	private: System::Windows::Forms::Button^ buttonsearch2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBoxsost;
	private: System::Windows::Forms::TextBox^ textBoxlost;





	public:
		int currentVolume = 500;
private: System::Windows::Forms::Button^ buttonreset;
private: System::Windows::Forms::Button^ buttonedit;
private: System::Windows::Forms::Button^ buttoneditundo;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxedit;
private: System::Windows::Forms::TextBox^ textBoxedit;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBoxeditold;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxedittime;

public:

public:
	int adminmodelocal = 0;
		Authview(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Authview(Form^ obj1, int adminmode)
		{
			obj = obj1;
			adminmodelocal = adminmode;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Authview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: array<array<String^>^>^ originalData;
	private: System::Windows::Forms::Button^ buttonbacktomain;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonadminreg;
private: System::ComponentModel::IContainer^ components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authview::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonadminreg = (gcnew System::Windows::Forms::Button());
			this->buttonload = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonsearch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxnumless = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxnumequal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxnummore = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxactive = (gcnew System::Windows::Forms::CheckBox());
			this->maskedTextBoxnum = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxactivesost = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBoxlost = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxcount = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxcount = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxcountmore = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxcountequal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxcountless = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxstime = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxstime = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxstimemore = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxstimeequal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxstimeless = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxltime = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxltime = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxltimemore = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxltimeequal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxltimeless = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxprice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxprice = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxpricemore = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxpriceequal = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxpriceless = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonsearch2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxsost = (gcnew System::Windows::Forms::TextBox());
			this->textBoxlost = (gcnew System::Windows::Forms::TextBox());
			this->buttonreset = (gcnew System::Windows::Forms::Button());
			this->buttonedit = (gcnew System::Windows::Forms::Button());
			this->buttoneditundo = (gcnew System::Windows::Forms::Button());
			this->maskedTextBoxedit = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBoxedit = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxeditold = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxedittime = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(11, 380);
			this->buttonbacktomain->Margin = System::Windows::Forms::Padding(2);
			this->buttonbacktomain->Name = L"buttonbacktomain";
			this->buttonbacktomain->Size = System::Drawing::Size(140, 58);
			this->buttonbacktomain->TabIndex = 11;
			this->buttonbacktomain->Text = L"Выход";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &Authview::buttonbacktomain_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(929, 363);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Authview::dataGridView1_CellDoubleClick);
			// 
			// buttonadminreg
			// 
			this->buttonadminreg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonadminreg->Location = System::Drawing::Point(578, 380);
			this->buttonadminreg->Margin = System::Windows::Forms::Padding(2);
			this->buttonadminreg->Name = L"buttonadminreg";
			this->buttonadminreg->Size = System::Drawing::Size(218, 58);
			this->buttonadminreg->TabIndex = 13;
			this->buttonadminreg->Text = L"Меню администратора";
			this->buttonadminreg->UseVisualStyleBackColor = true;
			this->buttonadminreg->Click += gcnew System::EventHandler(this, &Authview::buttonadminreg_Click);
			// 
			// buttonload
			// 
			this->buttonload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonload->Location = System::Drawing::Point(467, 380);
			this->buttonload->Margin = System::Windows::Forms::Padding(2);
			this->buttonload->Name = L"buttonload";
			this->buttonload->Size = System::Drawing::Size(107, 58);
			this->buttonload->TabIndex = 14;
			this->buttonload->Text = L"Загрузить таблицу";
			this->buttonload->UseVisualStyleBackColor = true;
			this->buttonload->Click += gcnew System::EventHandler(this, &Authview::buttonload_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(945, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 83);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Чтобы редактировать ячейки, нажмите дважды на ячейку";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buttonsearch
			// 
			this->buttonsearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonsearch->Location = System::Drawing::Point(951, 166);
			this->buttonsearch->Margin = System::Windows::Forms::Padding(2);
			this->buttonsearch->Name = L"buttonsearch";
			this->buttonsearch->Size = System::Drawing::Size(434, 58);
			this->buttonsearch->TabIndex = 16;
			this->buttonsearch->Text = L"Открыть меню поиска";
			this->buttonsearch->UseVisualStyleBackColor = true;
			this->buttonsearch->Click += gcnew System::EventHandler(this, &Authview::buttonsearch_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(945, 92);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(459, 72);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Чтобы удалить строчку, нажмите на её номер";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// checkBoxnumless
			// 
			this->checkBoxnumless->AutoSize = true;
			this->checkBoxnumless->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxnumless->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxnumless->Location = System::Drawing::Point(1408, 88);
			this->checkBoxnumless->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxnumless->Name = L"checkBoxnumless";
			this->checkBoxnumless->Size = System::Drawing::Size(43, 29);
			this->checkBoxnumless->TabIndex = 20;
			this->checkBoxnumless->Text = L"<";
			this->checkBoxnumless->UseVisualStyleBackColor = true;
			this->checkBoxnumless->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(1427, 12);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 31);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Номер";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &Authview::label3_Click);
			// 
			// checkBoxnumequal
			// 
			this->checkBoxnumequal->AutoSize = true;
			this->checkBoxnumequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxnumequal->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxnumequal->Location = System::Drawing::Point(1476, 88);
			this->checkBoxnumequal->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxnumequal->Name = L"checkBoxnumequal";
			this->checkBoxnumequal->Size = System::Drawing::Size(43, 29);
			this->checkBoxnumequal->TabIndex = 21;
			this->checkBoxnumequal->Text = L"=";
			this->checkBoxnumequal->UseVisualStyleBackColor = true;
			this->checkBoxnumequal->Visible = false;
			// 
			// checkBoxnummore
			// 
			this->checkBoxnummore->AutoSize = true;
			this->checkBoxnummore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxnummore->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxnummore->Location = System::Drawing::Point(1553, 88);
			this->checkBoxnummore->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxnummore->Name = L"checkBoxnummore";
			this->checkBoxnummore->Size = System::Drawing::Size(43, 29);
			this->checkBoxnummore->TabIndex = 22;
			this->checkBoxnummore->Text = L">";
			this->checkBoxnummore->UseVisualStyleBackColor = true;
			this->checkBoxnummore->Visible = false;
			// 
			// checkBoxactive
			// 
			this->checkBoxactive->AutoSize = true;
			this->checkBoxactive->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxactive->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxactive->Location = System::Drawing::Point(1408, 24);
			this->checkBoxactive->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxactive->Name = L"checkBoxactive";
			this->checkBoxactive->Size = System::Drawing::Size(15, 14);
			this->checkBoxactive->TabIndex = 23;
			this->checkBoxactive->UseVisualStyleBackColor = true;
			this->checkBoxactive->Visible = false;
			this->checkBoxactive->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxactive_CheckedChanged);
			// 
			// maskedTextBoxnum
			// 
			this->maskedTextBoxnum->Enabled = false;
			this->maskedTextBoxnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxnum->Location = System::Drawing::Point(1408, 46);
			this->maskedTextBoxnum->Mask = L"00000";
			this->maskedTextBoxnum->Name = L"maskedTextBoxnum";
			this->maskedTextBoxnum->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxnum->TabIndex = 24;
			this->maskedTextBoxnum->ValidatingType = System::Int32::typeid;
			this->maskedTextBoxnum->Visible = false;
			// 
			// checkBoxactivesost
			// 
			this->checkBoxactivesost->AutoSize = true;
			this->checkBoxactivesost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxactivesost->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxactivesost->Location = System::Drawing::Point(1408, 131);
			this->checkBoxactivesost->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxactivesost->Name = L"checkBoxactivesost";
			this->checkBoxactivesost->Size = System::Drawing::Size(15, 14);
			this->checkBoxactivesost->TabIndex = 29;
			this->checkBoxactivesost->UseVisualStyleBackColor = true;
			this->checkBoxactivesost->Visible = false;
			this->checkBoxactivesost->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxactivesost_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(1427, 119);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 31);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Нач. остановк";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Visible = false;
			// 
			// checkBoxlost
			// 
			this->checkBoxlost->AutoSize = true;
			this->checkBoxlost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxlost->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxlost->Location = System::Drawing::Point(1408, 238);
			this->checkBoxlost->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxlost->Name = L"checkBoxlost";
			this->checkBoxlost->Size = System::Drawing::Size(15, 14);
			this->checkBoxlost->TabIndex = 35;
			this->checkBoxlost->UseVisualStyleBackColor = true;
			this->checkBoxlost->Visible = false;
			this->checkBoxlost->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxlost_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(1427, 226);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 31);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Кон. остановк";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Visible = false;
			// 
			// maskedTextBoxcount
			// 
			this->maskedTextBoxcount->Enabled = false;
			this->maskedTextBoxcount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxcount->Location = System::Drawing::Point(1408, 367);
			this->maskedTextBoxcount->Mask = L"00000";
			this->maskedTextBoxcount->Name = L"maskedTextBoxcount";
			this->maskedTextBoxcount->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxcount->TabIndex = 42;
			this->maskedTextBoxcount->ValidatingType = System::Int32::typeid;
			this->maskedTextBoxcount->Visible = false;
			// 
			// checkBoxcount
			// 
			this->checkBoxcount->AutoSize = true;
			this->checkBoxcount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxcount->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxcount->Location = System::Drawing::Point(1408, 345);
			this->checkBoxcount->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxcount->Name = L"checkBoxcount";
			this->checkBoxcount->Size = System::Drawing::Size(15, 14);
			this->checkBoxcount->TabIndex = 41;
			this->checkBoxcount->UseVisualStyleBackColor = true;
			this->checkBoxcount->Visible = false;
			this->checkBoxcount->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxcount_CheckedChanged);
			// 
			// checkBoxcountmore
			// 
			this->checkBoxcountmore->AutoSize = true;
			this->checkBoxcountmore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxcountmore->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxcountmore->Location = System::Drawing::Point(1553, 409);
			this->checkBoxcountmore->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxcountmore->Name = L"checkBoxcountmore";
			this->checkBoxcountmore->Size = System::Drawing::Size(43, 29);
			this->checkBoxcountmore->TabIndex = 40;
			this->checkBoxcountmore->Text = L">";
			this->checkBoxcountmore->UseVisualStyleBackColor = true;
			this->checkBoxcountmore->Visible = false;
			// 
			// checkBoxcountequal
			// 
			this->checkBoxcountequal->AutoSize = true;
			this->checkBoxcountequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxcountequal->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxcountequal->Location = System::Drawing::Point(1476, 409);
			this->checkBoxcountequal->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxcountequal->Name = L"checkBoxcountequal";
			this->checkBoxcountequal->Size = System::Drawing::Size(43, 29);
			this->checkBoxcountequal->TabIndex = 39;
			this->checkBoxcountequal->Text = L"=";
			this->checkBoxcountequal->UseVisualStyleBackColor = true;
			this->checkBoxcountequal->Visible = false;
			// 
			// checkBoxcountless
			// 
			this->checkBoxcountless->AutoSize = true;
			this->checkBoxcountless->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxcountless->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxcountless->Location = System::Drawing::Point(1408, 409);
			this->checkBoxcountless->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxcountless->Name = L"checkBoxcountless";
			this->checkBoxcountless->Size = System::Drawing::Size(43, 29);
			this->checkBoxcountless->TabIndex = 38;
			this->checkBoxcountless->Text = L"<";
			this->checkBoxcountless->UseVisualStyleBackColor = true;
			this->checkBoxcountless->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label6->ForeColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(1427, 333);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 31);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Количество";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label6->Visible = false;
			// 
			// maskedTextBoxstime
			// 
			this->maskedTextBoxstime->Enabled = false;
			this->maskedTextBoxstime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxstime->Location = System::Drawing::Point(1622, 46);
			this->maskedTextBoxstime->Mask = L"00.00";
			this->maskedTextBoxstime->Name = L"maskedTextBoxstime";
			this->maskedTextBoxstime->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxstime->TabIndex = 54;
			this->maskedTextBoxstime->ValidatingType = System::DateTime::typeid;
			this->maskedTextBoxstime->Visible = false;
			// 
			// checkBoxstime
			// 
			this->checkBoxstime->AutoSize = true;
			this->checkBoxstime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxstime->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxstime->Location = System::Drawing::Point(1622, 24);
			this->checkBoxstime->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxstime->Name = L"checkBoxstime";
			this->checkBoxstime->Size = System::Drawing::Size(15, 14);
			this->checkBoxstime->TabIndex = 53;
			this->checkBoxstime->UseVisualStyleBackColor = true;
			this->checkBoxstime->Visible = false;
			this->checkBoxstime->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxstime_CheckedChanged);
			// 
			// checkBoxstimemore
			// 
			this->checkBoxstimemore->AutoSize = true;
			this->checkBoxstimemore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxstimemore->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxstimemore->Location = System::Drawing::Point(1767, 88);
			this->checkBoxstimemore->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxstimemore->Name = L"checkBoxstimemore";
			this->checkBoxstimemore->Size = System::Drawing::Size(43, 29);
			this->checkBoxstimemore->TabIndex = 52;
			this->checkBoxstimemore->Text = L">";
			this->checkBoxstimemore->UseVisualStyleBackColor = true;
			this->checkBoxstimemore->Visible = false;
			// 
			// checkBoxstimeequal
			// 
			this->checkBoxstimeequal->AutoSize = true;
			this->checkBoxstimeequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxstimeequal->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxstimeequal->Location = System::Drawing::Point(1690, 88);
			this->checkBoxstimeequal->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxstimeequal->Name = L"checkBoxstimeequal";
			this->checkBoxstimeequal->Size = System::Drawing::Size(43, 29);
			this->checkBoxstimeequal->TabIndex = 51;
			this->checkBoxstimeequal->Text = L"=";
			this->checkBoxstimeequal->UseVisualStyleBackColor = true;
			this->checkBoxstimeequal->Visible = false;
			// 
			// checkBoxstimeless
			// 
			this->checkBoxstimeless->AutoSize = true;
			this->checkBoxstimeless->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxstimeless->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxstimeless->Location = System::Drawing::Point(1622, 88);
			this->checkBoxstimeless->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxstimeless->Name = L"checkBoxstimeless";
			this->checkBoxstimeless->Size = System::Drawing::Size(43, 29);
			this->checkBoxstimeless->TabIndex = 50;
			this->checkBoxstimeless->Text = L"<";
			this->checkBoxstimeless->UseVisualStyleBackColor = true;
			this->checkBoxstimeless->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label8->ForeColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(1641, 12);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 31);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Нач. время";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label8->Visible = false;
			// 
			// maskedTextBoxltime
			// 
			this->maskedTextBoxltime->Enabled = false;
			this->maskedTextBoxltime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxltime->Location = System::Drawing::Point(1622, 153);
			this->maskedTextBoxltime->Mask = L"00.00";
			this->maskedTextBoxltime->Name = L"maskedTextBoxltime";
			this->maskedTextBoxltime->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxltime->TabIndex = 60;
			this->maskedTextBoxltime->ValidatingType = System::DateTime::typeid;
			this->maskedTextBoxltime->Visible = false;
			// 
			// checkBoxltime
			// 
			this->checkBoxltime->AutoSize = true;
			this->checkBoxltime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxltime->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxltime->Location = System::Drawing::Point(1622, 131);
			this->checkBoxltime->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxltime->Name = L"checkBoxltime";
			this->checkBoxltime->Size = System::Drawing::Size(15, 14);
			this->checkBoxltime->TabIndex = 59;
			this->checkBoxltime->UseVisualStyleBackColor = true;
			this->checkBoxltime->Visible = false;
			this->checkBoxltime->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxltime_CheckedChanged);
			// 
			// checkBoxltimemore
			// 
			this->checkBoxltimemore->AutoSize = true;
			this->checkBoxltimemore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxltimemore->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxltimemore->Location = System::Drawing::Point(1767, 195);
			this->checkBoxltimemore->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxltimemore->Name = L"checkBoxltimemore";
			this->checkBoxltimemore->Size = System::Drawing::Size(43, 29);
			this->checkBoxltimemore->TabIndex = 58;
			this->checkBoxltimemore->Text = L">";
			this->checkBoxltimemore->UseVisualStyleBackColor = true;
			this->checkBoxltimemore->Visible = false;
			// 
			// checkBoxltimeequal
			// 
			this->checkBoxltimeequal->AutoSize = true;
			this->checkBoxltimeequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxltimeequal->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxltimeequal->Location = System::Drawing::Point(1690, 195);
			this->checkBoxltimeequal->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxltimeequal->Name = L"checkBoxltimeequal";
			this->checkBoxltimeequal->Size = System::Drawing::Size(43, 29);
			this->checkBoxltimeequal->TabIndex = 57;
			this->checkBoxltimeequal->Text = L"=";
			this->checkBoxltimeequal->UseVisualStyleBackColor = true;
			this->checkBoxltimeequal->Visible = false;
			// 
			// checkBoxltimeless
			// 
			this->checkBoxltimeless->AutoSize = true;
			this->checkBoxltimeless->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxltimeless->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxltimeless->Location = System::Drawing::Point(1622, 195);
			this->checkBoxltimeless->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxltimeless->Name = L"checkBoxltimeless";
			this->checkBoxltimeless->Size = System::Drawing::Size(43, 29);
			this->checkBoxltimeless->TabIndex = 56;
			this->checkBoxltimeless->Text = L"<";
			this->checkBoxltimeless->UseVisualStyleBackColor = true;
			this->checkBoxltimeless->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label9->ForeColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(1641, 119);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(155, 31);
			this->label9->TabIndex = 55;
			this->label9->Text = L"Кон. время";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label9->Visible = false;
			// 
			// maskedTextBoxprice
			// 
			this->maskedTextBoxprice->Enabled = false;
			this->maskedTextBoxprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxprice->Location = System::Drawing::Point(1622, 260);
			this->maskedTextBoxprice->Mask = L"00000";
			this->maskedTextBoxprice->Name = L"maskedTextBoxprice";
			this->maskedTextBoxprice->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxprice->TabIndex = 66;
			this->maskedTextBoxprice->ValidatingType = System::Int32::typeid;
			this->maskedTextBoxprice->Visible = false;
			// 
			// checkBoxprice
			// 
			this->checkBoxprice->AutoSize = true;
			this->checkBoxprice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxprice->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxprice->Location = System::Drawing::Point(1622, 238);
			this->checkBoxprice->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxprice->Name = L"checkBoxprice";
			this->checkBoxprice->Size = System::Drawing::Size(15, 14);
			this->checkBoxprice->TabIndex = 65;
			this->checkBoxprice->UseVisualStyleBackColor = true;
			this->checkBoxprice->Visible = false;
			this->checkBoxprice->CheckedChanged += gcnew System::EventHandler(this, &Authview::checkBoxprice_CheckedChanged);
			// 
			// checkBoxpricemore
			// 
			this->checkBoxpricemore->AutoSize = true;
			this->checkBoxpricemore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxpricemore->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxpricemore->Location = System::Drawing::Point(1767, 302);
			this->checkBoxpricemore->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxpricemore->Name = L"checkBoxpricemore";
			this->checkBoxpricemore->Size = System::Drawing::Size(43, 29);
			this->checkBoxpricemore->TabIndex = 64;
			this->checkBoxpricemore->Text = L">";
			this->checkBoxpricemore->UseVisualStyleBackColor = true;
			this->checkBoxpricemore->Visible = false;
			// 
			// checkBoxpriceequal
			// 
			this->checkBoxpriceequal->AutoSize = true;
			this->checkBoxpriceequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxpriceequal->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxpriceequal->Location = System::Drawing::Point(1690, 302);
			this->checkBoxpriceequal->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxpriceequal->Name = L"checkBoxpriceequal";
			this->checkBoxpriceequal->Size = System::Drawing::Size(43, 29);
			this->checkBoxpriceequal->TabIndex = 63;
			this->checkBoxpriceequal->Text = L"=";
			this->checkBoxpriceequal->UseVisualStyleBackColor = true;
			this->checkBoxpriceequal->Visible = false;
			// 
			// checkBoxpriceless
			// 
			this->checkBoxpriceless->AutoSize = true;
			this->checkBoxpriceless->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->checkBoxpriceless->ForeColor = System::Drawing::SystemColors::Window;
			this->checkBoxpriceless->Location = System::Drawing::Point(1622, 302);
			this->checkBoxpriceless->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxpriceless->Name = L"checkBoxpriceless";
			this->checkBoxpriceless->Size = System::Drawing::Size(43, 29);
			this->checkBoxpriceless->TabIndex = 62;
			this->checkBoxpriceless->Text = L"<";
			this->checkBoxpriceless->UseVisualStyleBackColor = true;
			this->checkBoxpriceless->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->label10->ForeColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(1641, 226);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 31);
			this->label10->TabIndex = 61;
			this->label10->Text = L"Цена";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label10->Visible = false;
			// 
			// buttonsearch2
			// 
			this->buttonsearch2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonsearch2->Location = System::Drawing::Point(1622, 333);
			this->buttonsearch2->Margin = System::Windows::Forms::Padding(2);
			this->buttonsearch2->Name = L"buttonsearch2";
			this->buttonsearch2->Size = System::Drawing::Size(188, 58);
			this->buttonsearch2->TabIndex = 79;
			this->buttonsearch2->Text = L"Поиск";
			this->buttonsearch2->UseVisualStyleBackColor = true;
			this->buttonsearch2->Visible = false;
			this->buttonsearch2->Click += gcnew System::EventHandler(this, &Authview::buttonsearch2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(951, 229);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(434, 208);
			this->pictureBox1->TabIndex = 80;
			this->pictureBox1->TabStop = false;
			// 
			// textBoxsost
			// 
			this->textBoxsost->Enabled = false;
			this->textBoxsost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBoxsost->Location = System::Drawing::Point(1408, 153);
			this->textBoxsost->Margin = System::Windows::Forms::Padding(2);
			this->textBoxsost->MaxLength = 12;
			this->textBoxsost->Name = L"textBoxsost";
			this->textBoxsost->Size = System::Drawing::Size(188, 35);
			this->textBoxsost->TabIndex = 81;
			this->textBoxsost->Visible = false;
			// 
			// textBoxlost
			// 
			this->textBoxlost->Enabled = false;
			this->textBoxlost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBoxlost->Location = System::Drawing::Point(1408, 260);
			this->textBoxlost->Margin = System::Windows::Forms::Padding(2);
			this->textBoxlost->MaxLength = 12;
			this->textBoxlost->Name = L"textBoxlost";
			this->textBoxlost->Size = System::Drawing::Size(188, 35);
			this->textBoxlost->TabIndex = 82;
			this->textBoxlost->Visible = false;
			this->textBoxlost->TextChanged += gcnew System::EventHandler(this, &Authview::textBoxlost_TextChanged);
			// 
			// buttonreset
			// 
			this->buttonreset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonreset->Location = System::Drawing::Point(1622, 395);
			this->buttonreset->Margin = System::Windows::Forms::Padding(2);
			this->buttonreset->Name = L"buttonreset";
			this->buttonreset->Size = System::Drawing::Size(188, 42);
			this->buttonreset->TabIndex = 83;
			this->buttonreset->Text = L"Сброс";
			this->buttonreset->UseVisualStyleBackColor = true;
			this->buttonreset->Visible = false;
			this->buttonreset->Click += gcnew System::EventHandler(this, &Authview::buttonreset_Click);
			// 
			// buttonedit
			// 
			this->buttonedit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonedit->Location = System::Drawing::Point(999, 367);
			this->buttonedit->Margin = System::Windows::Forms::Padding(2);
			this->buttonedit->Name = L"buttonedit";
			this->buttonedit->Size = System::Drawing::Size(169, 58);
			this->buttonedit->TabIndex = 84;
			this->buttonedit->Text = L"Редактировать";
			this->buttonedit->UseVisualStyleBackColor = true;
			this->buttonedit->Visible = false;
			this->buttonedit->Click += gcnew System::EventHandler(this, &Authview::buttonedit_Click);
			// 
			// buttoneditundo
			// 
			this->buttoneditundo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttoneditundo->Location = System::Drawing::Point(1172, 367);
			this->buttoneditundo->Margin = System::Windows::Forms::Padding(2);
			this->buttoneditundo->Name = L"buttoneditundo";
			this->buttoneditundo->Size = System::Drawing::Size(169, 58);
			this->buttoneditundo->TabIndex = 85;
			this->buttoneditundo->Text = L"Отмена";
			this->buttoneditundo->UseVisualStyleBackColor = true;
			this->buttoneditundo->Visible = false;
			this->buttoneditundo->Click += gcnew System::EventHandler(this, &Authview::buttoneditundo_Click);
			// 
			// maskedTextBoxedit
			// 
			this->maskedTextBoxedit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->maskedTextBoxedit->Location = System::Drawing::Point(1060, 316);
			this->maskedTextBoxedit->Mask = L"00000";
			this->maskedTextBoxedit->Name = L"maskedTextBoxedit";
			this->maskedTextBoxedit->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxedit->TabIndex = 86;
			this->maskedTextBoxedit->ValidatingType = System::Int32::typeid;
			this->maskedTextBoxedit->Visible = false;
			this->maskedTextBoxedit->TextChanged += gcnew System::EventHandler(this, &Authview::maskedTextBoxedit_TextChanged);
			// 
			// textBoxedit
			// 
			this->textBoxedit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBoxedit->Location = System::Drawing::Point(1060, 316);
			this->textBoxedit->Margin = System::Windows::Forms::Padding(2);
			this->textBoxedit->MaxLength = 12;
			this->textBoxedit->Name = L"textBoxedit";
			this->textBoxedit->Size = System::Drawing::Size(188, 35);
			this->textBoxedit->TabIndex = 87;
			this->textBoxedit->Visible = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(954, 235);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 35);
			this->label7->TabIndex = 88;
			this->label7->Text = L"Ячейка (,)";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Visible = false;
			// 
			// textBoxeditold
			// 
			this->textBoxeditold->Enabled = false;
			this->textBoxeditold->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->textBoxeditold->Location = System::Drawing::Point(1060, 275);
			this->textBoxeditold->Margin = System::Windows::Forms::Padding(2);
			this->textBoxeditold->MaxLength = 12;
			this->textBoxeditold->Name = L"textBoxeditold";
			this->textBoxeditold->Size = System::Drawing::Size(188, 35);
			this->textBoxeditold->TabIndex = 89;
			this->textBoxeditold->Visible = false;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(954, 275);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 35);
			this->label11->TabIndex = 90;
			this->label11->Text = L"Старое:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(954, 316);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(102, 35);
			this->label12->TabIndex = 91;
			this->label12->Text = L"Новое:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label12->Visible = false;
			// 
			// maskedTextBoxedittime
			// 
			this->maskedTextBoxedittime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			this->maskedTextBoxedittime->Location = System::Drawing::Point(1061, 316);
			this->maskedTextBoxedittime->Mask = L"00.00";
			this->maskedTextBoxedittime->Name = L"maskedTextBoxedittime";
			this->maskedTextBoxedittime->Size = System::Drawing::Size(188, 35);
			this->maskedTextBoxedittime->TabIndex = 92;
			this->maskedTextBoxedittime->ValidatingType = System::DateTime::typeid;
			this->maskedTextBoxedittime->Visible = false;
			this->maskedTextBoxedittime->TextChanged += gcnew System::EventHandler(this, &Authview::maskedTextBoxedittime_TextChanged);
			// 
			// Authview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1824, 449);
			this->ControlBox = false;
			this->Controls->Add(this->maskedTextBoxedittime);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBoxeditold);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxedit);
			this->Controls->Add(this->maskedTextBoxedit);
			this->Controls->Add(this->buttoneditundo);
			this->Controls->Add(this->buttonedit);
			this->Controls->Add(this->buttonreset);
			this->Controls->Add(this->textBoxlost);
			this->Controls->Add(this->textBoxsost);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonsearch2);
			this->Controls->Add(this->maskedTextBoxprice);
			this->Controls->Add(this->checkBoxprice);
			this->Controls->Add(this->checkBoxpricemore);
			this->Controls->Add(this->checkBoxpriceequal);
			this->Controls->Add(this->checkBoxpriceless);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->maskedTextBoxltime);
			this->Controls->Add(this->checkBoxltime);
			this->Controls->Add(this->checkBoxltimemore);
			this->Controls->Add(this->checkBoxltimeequal);
			this->Controls->Add(this->checkBoxltimeless);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxstime);
			this->Controls->Add(this->checkBoxstime);
			this->Controls->Add(this->checkBoxstimemore);
			this->Controls->Add(this->checkBoxstimeequal);
			this->Controls->Add(this->checkBoxstimeless);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxcount);
			this->Controls->Add(this->checkBoxcount);
			this->Controls->Add(this->checkBoxcountmore);
			this->Controls->Add(this->checkBoxcountequal);
			this->Controls->Add(this->checkBoxcountless);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->checkBoxlost);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBoxactivesost);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBoxnum);
			this->Controls->Add(this->checkBoxactive);
			this->Controls->Add(this->checkBoxnummore);
			this->Controls->Add(this->checkBoxnumequal);
			this->Controls->Add(this->checkBoxnumless);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonsearch);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonload);
			this->Controls->Add(this->buttonadminreg);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonbacktomain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Authview";
			this->Text = L"Авторизированный прсомотр";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Authview::Authview_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Authview::Authview_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void LoadDataFromFile(String^ filePath){
		try
		{
			array<String^>^ lines = File::ReadAllLines(filePath);
			if (lines->Length == 0)
				return;
			dataGridView1->Columns->Clear();
			dataGridView1->Rows->Clear();
			array<String^>^ headers = lines[0]->Split('|');
			for each (String ^ header in headers)
			{
				dataGridView1->Columns->Add(header, header);
			}
			int i = 1;
			for (i = 1; i < lines->Length; i++)
			{
				array<String^>^ row = lines[i]->Split('|');
				dataGridView1->Rows->Add(row);
			}
			origrow = i; origcol = e.Col
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message);
		}
	}
	private: System::Void Authview_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(1400, 450);
		if (adminmodelocal == 1) {
			buttonadminreg->Visible = true;
			buttonload->Visible = true;
		}
		else {
			buttonadminreg->Visible = false;
			buttonload->Visible = false;
		}
		LoadDataFromFile("auto.txt");
		for each (DataGridViewColumn ^ column in dataGridView1->Columns)
		{
			column->SortMode = DataGridViewColumnSortMode::Programmatic;
		}
		if (originalData == nullptr || originalData->Length == 0)
		{
			try
			{
				array<String^>^ lines = File::ReadAllLines("auto.txt");
				if (lines->Length <= 1) return;

				originalData = gcnew array<array<String^>^>(lines->Length - 1);

				for (int i = 1; i < lines->Length; i++)
				{
					array<String^>^ row = lines[i]->Split('|');
					originalData[i - 1] = row;
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Ошибка чтения файла: " + ex->Message);
				return;
			}
		}
	}
	private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void buttonadminreg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Reg^ obj1 = gcnew Reg(this);
		obj1->ShowDialog();
	}
	private: System::Void buttonload_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Text files (*.txt)|*.txt";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		LoadDataFromFile(openFileDialog->FileName);
	}
	if (Path::GetFileName(openFileDialog->FileName) == "auto.txt") {
		buttonsearch->Enabled = true;
		buttonsearch->Text = "Открыть меню поиска";
	}
	else
	{
		buttonsearch->Enabled = false;
		buttonsearch->Text = "Выберите файл 'auto.txt', чтобы выполнить поиск";
	}
}
private: System::Void buttonsearch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->ClientSize == System::Drawing::Size(1820, 450))
		this->ClientSize = System::Drawing::Size(1400, 450); // 1416
	else this->ClientSize = System::Drawing::Size(1820, 450); // 1840
	if (buttonsearch->Text == "Открыть меню поиска") buttonsearch->Text = "Отмена";
	else if (buttonsearch->Text == "Отмена") buttonsearch->Text = "Открыть меню поиска";
	buttonreset->Visible = !buttonreset->Visible;
	checkBoxactive->Visible = !checkBoxactive->Visible;
	checkBoxactivesost->Visible = !checkBoxactivesost->Visible;
	checkBoxlost->Visible = !checkBoxlost->Visible;
	checkBoxcount->Visible = !checkBoxcount->Visible;
	checkBoxstime->Visible = !checkBoxstime->Visible;
	checkBoxltime->Visible = !checkBoxltime->Visible;
	checkBoxprice->Visible = !checkBoxprice->Visible;
	maskedTextBoxnum->Visible = !maskedTextBoxnum->Visible;
	textBoxsost->Visible = !textBoxsost->Visible;
	textBoxlost->Visible = !textBoxlost->Visible;
	maskedTextBoxcount->Visible = !maskedTextBoxcount->Visible;
	maskedTextBoxstime->Visible = !maskedTextBoxstime->Visible;
	maskedTextBoxltime->Visible = !maskedTextBoxltime->Visible;
	maskedTextBoxprice->Visible = !maskedTextBoxprice->Visible;
	label3->Visible = !label3->Visible;
	label4->Visible = !label4->Visible;
	label5->Visible = !label5->Visible;
	label6->Visible = !label6->Visible;
	label8->Visible = !label8->Visible;
	label9->Visible = !label9->Visible;
	label10->Visible = !label10->Visible;
	buttonsearch2->Visible = !buttonsearch2->Visible;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBoxactive_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	maskedTextBoxnum->Enabled = !maskedTextBoxnum->Enabled;
	maskedTextBoxnum->Text = "";
	checkBoxnumless->Visible = !checkBoxnumless->Visible;
	checkBoxnumequal->Visible = !checkBoxnumequal->Visible;
	checkBoxnummore->Visible = !checkBoxnummore->Visible;
}
private: System::Void checkBoxcount_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	maskedTextBoxcount->Enabled = !maskedTextBoxcount->Enabled;
	maskedTextBoxcount->Text = "";
	checkBoxcountless->Visible = !checkBoxcountless->Visible;
	checkBoxcountequal->Visible = !checkBoxcountequal->Visible;
	checkBoxcountmore->Visible = !checkBoxcountmore->Visible;
}
private: System::Void checkBoxstime_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	maskedTextBoxstime->Enabled = !maskedTextBoxstime->Enabled;
	maskedTextBoxstime->Text = "";
	checkBoxstimeless->Visible = !checkBoxstimeless->Visible;
	checkBoxstimeequal->Visible = !checkBoxstimeequal->Visible;
	checkBoxstimemore->Visible = !checkBoxstimemore->Visible;
}
private: System::Void checkBoxltime_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	maskedTextBoxltime->Enabled = !maskedTextBoxltime->Enabled;
	maskedTextBoxltime->Text = "";
	checkBoxltimeless->Visible = !checkBoxltimeless->Visible;
	checkBoxltimeequal->Visible = !checkBoxltimeequal->Visible;
	checkBoxltimemore->Visible = !checkBoxltimemore->Visible;
}
private: System::Void checkBoxprice_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	maskedTextBoxprice->Enabled = !maskedTextBoxprice->Enabled;
	maskedTextBoxprice->Text = "";
	checkBoxpriceless->Visible = !checkBoxpriceless->Visible;
	checkBoxpriceequal->Visible = !checkBoxpriceequal->Visible;
	checkBoxpricemore->Visible = !checkBoxpricemore->Visible;
}
private: System::Void checkBoxactivesost_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBoxsost->Enabled = !textBoxsost->Enabled;
	textBoxsost->Text = "";
}
private: System::Void textBoxlost_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBoxlost_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBoxlost->Enabled = !textBoxlost->Enabled;
	textBoxlost->Text = "";
}
private: System::Void Authview_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
private: System::Void buttonsearch2_Click(System::Object^ sender, System::EventArgs^ e)
{
	array<array<String^>^>^ filteredRows = gcnew array<array<String^>^>(dataGridView1->RowCount);
	int count = 0;

	for each (DataGridViewRow ^ row in dataGridView1->Rows)
	{
		if (row->IsNewRow) continue;

		bool match = true;

		// Номер
		if (checkBoxactive->Checked && maskedTextBoxnum->Text != "")
		{
			int cellValue = Convert::ToInt32(row->Cells[1]->Value);
			int input = Convert::ToInt32(maskedTextBoxnum->Text);
			if (!((checkBoxnumless->Checked && (cellValue < input)) || (checkBoxnumequal->Checked && (cellValue == input)) || checkBoxnummore->Checked && (cellValue > input))) match = false;
		}

		// Количество
		if (checkBoxcount->Checked && maskedTextBoxcount->Text != "")
		{
			int cellValue = Convert::ToInt32(row->Cells[4]->Value); 
			int input = Convert::ToInt32(maskedTextBoxcount->Text);
			if (!((checkBoxcountless->Checked && (cellValue < input)) || (checkBoxcountequal->Checked && (cellValue == input)) || checkBoxcountmore->Checked && (cellValue > input))) match = false;
		}

		// Цена
		if (checkBoxprice->Checked && maskedTextBoxprice->Text != "")
		{
			int cellValue = Convert::ToInt32(row->Cells[7]->Value);
			int input = Convert::ToInt32(maskedTextBoxprice->Text);
			if (!((checkBoxpriceless->Checked && (cellValue < input)) || (checkBoxpriceequal->Checked && (cellValue == input)) || checkBoxpricemore->Checked && (cellValue > input))) match = false;
		}
		// Начальное время
		if (checkBoxstime->Checked && maskedTextBoxstime->Text != "")
		{
			String^ cellValue = row->Cells[5]->Value->ToString();
			DateTime cellDT;
			if (!DateTime::TryParseExact(cellValue, "HH.mm", nullptr, System::Globalization::DateTimeStyles::None, cellDT))
				continue;
			DateTime inputDT;
			if (!DateTime::TryParseExact(maskedTextBoxstime->Text, "HH.mm", nullptr, System::Globalization::DateTimeStyles::None, inputDT))
			{
				MessageBox::Show("Введите корректное время в формате 00.00");
				return;
			}
			if (!((checkBoxstimeless->Checked && (cellDT < inputDT)) || (checkBoxstimeequal->Checked && (cellDT == inputDT)) || checkBoxstimemore->Checked && (cellDT > inputDT))) match = false;
		}

		// Конечное время
		if (checkBoxltime->Checked && maskedTextBoxltime->Text != "")
		{
			String^ cellValue = row->Cells[6]->Value->ToString();
			DateTime cellDT;
			if (!DateTime::TryParseExact(cellValue, "HH.mm", nullptr, System::Globalization::DateTimeStyles::None, cellDT))
				continue;
			DateTime inputDT;
			if (!DateTime::TryParseExact(maskedTextBoxltime->Text, "HH.mm", nullptr, System::Globalization::DateTimeStyles::None, inputDT))
			{
				MessageBox::Show("Введите корректное время в формате 00.00");
				return;
			}

			if (!((checkBoxltimeless->Checked && (cellDT < inputDT)) || (checkBoxltimeequal->Checked && (cellDT == inputDT)) || checkBoxltimemore->Checked && (cellDT > inputDT))) match = false;
		}

		// Нач. остановка
		if (checkBoxactivesost->Checked && textBoxsost->Text != "")
		{
			String^ cellValue = row->Cells[2]->Value->ToString();
			if (!cellValue->Contains(textBoxsost->Text))
				match = false;
		}

		// Кон. остановка
		if (checkBoxlost->Checked && textBoxlost->Text != "")
		{
			String^ cellValue = row->Cells[3]->Value->ToString();
			if (!cellValue->Contains(textBoxlost->Text))
				match = false;
		}

		if (match)
		{
			array<String^>^ rowData = gcnew array<String^>(row->Cells->Count);
			for (int i = 0; i < row->Cells->Count; i++)
			{
				rowData[i] = row->Cells[i]->Value->ToString();
			}
			filteredRows[count++] = rowData;
		}
	}

	// Обновляем DataGridView
	dataGridView1->Rows->Clear();
	for (int i = 0; i < count; i++)
	{
		dataGridView1->Rows->Add(filteredRows[i]);
	}
	for each (DataGridViewColumn ^ column in dataGridView1->Columns)
	{
		column->SortMode = DataGridViewColumnSortMode::Programmatic;
	}
}
private: System::Void buttonreset_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadDataFromFile("auto.txt");
	for each (DataGridViewColumn ^ column in dataGridView1->Columns)
	{
		column->SortMode = DataGridViewColumnSortMode::Programmatic;
	}
}
private: System::Void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{

		if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
		{
			DataGridViewRow^ currentRow = dataGridView1->Rows[e->RowIndex];
			int originalRowIndex = -1;
			for (int i = 0; i < originalData->Length; i++)
			{
				bool match = true;
				for (int j = 0; j < currentRow->Cells->Count; j++)
				{
					String^ gridVal = currentRow->Cells[j]->Value->ToString();
					if (gridVal != originalData[i][j])
					{
						match = false;
						break;
					}
				}

				if (match)
				{
					originalRowIndex = i;
					break;
				}
			}

			if (originalRowIndex == -1)
			{
				MessageBox::Show("Не удалось найти оригинальную строку.");
				return;
			}

			int originalColIndex = e->ColumnIndex;
			origrow = originalRowIndex;
			origcol = originalColIndex;
			if (originalColIndex != 0)
			{
				String^ value = currentRow->Cells[originalColIndex]->Value->ToString();
				label7->Text = String::Format(L"Ячейка ({0},{1})", origrow, origcol);
				if (originalColIndex != 0)
				{
					textBoxeditold->Text = value;
					label7->Visible = true;
					label11->Visible = true;
					label12->Visible = true;
					textBoxeditold->Visible = true;
					buttonedit->Visible = true;
					buttoneditundo->Visible = true;
					String^ str;
					if ((str = "147")->Contains(originalColIndex.ToString()))
					{
						maskedTextBoxedit->Visible = true;
						maskedTextBoxedittime->Visible = false;
						textBoxedit->Visible = false;
						textBoxedit->Text = "";
						maskedTextBoxedit->Text = "";
						maskedTextBoxedittime->Text = "";

					}
					else if ((str = "56")->Contains(originalColIndex.ToString()))
					{
						maskedTextBoxedittime->Visible = true;
						maskedTextBoxedit->Visible = false;
						textBoxedit->Visible = false;
						textBoxedit->Text = "";
						maskedTextBoxedit->Text = "";
						maskedTextBoxedittime->Text = "";
					}
					else
					{
						maskedTextBoxedittime->Visible = false;
						maskedTextBoxedit->Visible = false;
						textBoxedit->Visible = true;
						textBoxedit->Text = "";
						maskedTextBoxedit->Text = "";
						maskedTextBoxedittime->Text = "";
					}
				}
			}
		}
	}
private: System::Void buttoneditundo_Click(System::Object^ sender, System::EventArgs^ e) {
	label7->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	textBoxeditold->Visible = false;
	textBoxedit->Visible = false;
	textBoxedit->Text = "";
	maskedTextBoxedit->Visible = false;
	maskedTextBoxedit->Text = "";
	maskedTextBoxedittime->Visible = false;
	maskedTextBoxedittime->Text = "";
	buttonedit->Visible = false;
	buttoneditundo->Visible = false;
}
private: System::Void UpdateFileValue(int row, int col, String^ newValue)
{
	try
	{
		array<String^>^ lines = File::ReadAllLines("auto.txt");
		if (lines->Length <= row + 1)
		{
			MessageBox::Show("Указанная строка выходит за пределы файла.");
			return;
		}
		array<String^>^ cells = lines[row + 1]->Split(gcnew array<Char>{ '|' }, StringSplitOptions::None);
		if (col >= cells->Length)
		{
			MessageBox::Show("Указанный столбец выходит за пределы таблицы.");
			return;
		}
		cells[col] = newValue;
		lines[row + 1] = String::Join("|", cells);
		File::WriteAllLines("auto.txt", lines);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при обработке файла: " + ex->Message);
	}
}
private: System::Void buttonedit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ newValue = "";
	if (maskedTextBoxedit->Visible && maskedTextBoxedit->Text != "")
		newValue = maskedTextBoxedit->Text;
	else if (maskedTextBoxedittime->Visible && maskedTextBoxedittime->Text != "")
		newValue = maskedTextBoxedittime->Text;
	else if (textBoxedit->Visible && textBoxedit->Text != "")
		newValue = textBoxedit->Text;
	if (newValue == "")
	{
		MessageBox::Show("Введите новое значение");
		return;
	}
	UpdateFileValue(origrow, origcol, newValue);
	label7->Visible = true;
	textBoxedit->Text = "";
	maskedTextBoxedit->Text = "";
	maskedTextBoxedittime->Text = "";
	dataGridView1->Columns->Clear();
	dataGridView1->Rows->Clear();
	LoadDataFromFile("auto.txt");
	buttoneditundo_Click(nullptr, nullptr);
}
private: System::Void maskedTextBoxedittime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	MaskedTextBox^ mtb = dynamic_cast<MaskedTextBox^>(sender);
	if (mtb != nullptr && mtb->Text->Contains(" "))
	{
		mtb->Text = mtb->Text->Replace(" ", "");
		mtb->SelectionStart = mtb->Text->Length;
	}
}
private: System::Void maskedTextBoxedit_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	MaskedTextBox^ mtb = dynamic_cast<MaskedTextBox^>(sender);
	if (mtb != nullptr && mtb->Text->Contains(" "))
	{
		mtb->Text = mtb->Text->Replace(" ", "");
		mtb->SelectionStart = mtb->Text->Length;
	}
}
};
}
	