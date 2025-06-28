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
	/// Сводка для Noauthview
	/// </summary>
	public ref class Noauthview : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Noauthview(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Noauthview(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Noauthview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonbacktomain;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Noauthview::typeid));
			this->buttonbacktomain = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->buttonbacktomain->TabIndex = 10;
			this->buttonbacktomain->Text = L"Назад";
			this->buttonbacktomain->UseVisualStyleBackColor = true;
			this->buttonbacktomain->Click += gcnew System::EventHandler(this, &Noauthview::buttonbacktomain_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(929, 492);
			this->dataGridView1->TabIndex = 13;
			// 
			// Noauthview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(964, 578);
			this->ControlBox = false;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonbacktomain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Noauthview";
			this->Text = L"Просмотр без авторизации";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Noauthview::Noauthview_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Noauthview::Noauthview_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonbacktomain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: void LoadDataFromFile(String^ filePath) {
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
			for (int i = 1; i < lines->Length; i++)
			{
				array<String^>^ row = lines[i]->Split('|');
				dataGridView1->Rows->Add(row);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Ошибка при чтении файла: " + ex->Message);
		}
	}
	private: System::Void Noauthview_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadDataFromFile("auto.txt");
		for each (DataGridViewColumn ^ column in dataGridView1->Columns)
		{
			column->SortMode = DataGridViewColumnSortMode::Programmatic;
		}
	}
private: System::Void Noauthview_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (e->CloseReason == CloseReason::UserClosing) {
		Application::Exit();
	}
}
};
}
