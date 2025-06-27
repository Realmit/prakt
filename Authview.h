#include "Reg.h"
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

	/// <summary>
	/// Сводка для Authview
	/// </summary>
	public ref class Authview : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
	private: System::Windows::Forms::Button^ buttonload;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonsearch;
	private: System::Windows::Forms::Label^ label2;
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
	private: System::Windows::Forms::Button^ buttonbacktomain;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonadminreg;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authview::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonadminreg = (gcnew System::Windows::Forms::Button());
			this->buttonload = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonsearch = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonbacktomain
			// 
			this->buttonbacktomain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonbacktomain->Location = System::Drawing::Point(11, 509);
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
			this->dataGridView1->Size = System::Drawing::Size(929, 492);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Authview::dataGridView1_CellDoubleClick);
			// 
			// buttonadminreg
			// 
			this->buttonadminreg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonadminreg->Location = System::Drawing::Point(722, 509);
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
			this->buttonload->Location = System::Drawing::Point(611, 509);
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
			this->label1->Location = System::Drawing::Point(945, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 88);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Чтобы редактировать ячейки, нажмите дважды на ячейку";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// buttonsearch
			// 
			this->buttonsearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->buttonsearch->Location = System::Drawing::Point(951, 446);
			this->buttonsearch->Margin = System::Windows::Forms::Padding(2);
			this->buttonsearch->Name = L"buttonsearch";
			this->buttonsearch->Size = System::Drawing::Size(434, 58);
			this->buttonsearch->TabIndex = 16;
			this->buttonsearch->Text = L"Выполнить поиск";
			this->buttonsearch->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(945, 100);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(459, 88);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Чтобы удалить строчку, нажмите на её номер";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Authview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1396, 578);
			this->ControlBox = false;
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
			this->Text = L"Авторизированный доступ";
			this->Load += gcnew System::EventHandler(this, &Authview::Authview_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadDataFromFile(String^ filePath){
		try
		{
			array<String^>^ lines = File::ReadAllLines(filePath);

			if (lines->Length == 0)
				return;

			// Очистка таблицы
			dataGridView1->Columns->Clear();
			dataGridView1->Rows->Clear();

			// Разбираем заголовок
			array<String^>^ headers = lines[0]->Split(' ');
			for each (String ^ header in headers)
			{
				dataGridView1->Columns->Add(header, header);
			}

			// Добавляем строки
			for (int i = 1; i < lines->Length; i++)
			{
				array<String^>^ row = lines[i]->Split(' ');
				dataGridView1->Rows->Add(row);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message);
		}
	}
	private: System::Void Authview_Load(System::Object^ sender, System::EventArgs^ e) {
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
}
	private:
		void dataGridView1_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
		{
			if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
			{
				int row = e->RowIndex;
				int col = e->ColumnIndex;
				String^ cellValue = this->dataGridView1->Rows[row]->Cells[col]->Value->ToString();
				MessageBox::Show(
					String::Format("Двойной клик!\nСтрока: {0}\nСтолбец: {1}\nЗначение: {2}", row, col, cellValue),
					"Информация о ячейке",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
		}
};
}
