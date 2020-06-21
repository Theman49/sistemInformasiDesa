#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;


namespace projectAkhirSTD {

	/// <summary>
	/// Summary for pengumuman
	/// </summary>
	public ref class pengumuman : public System::Windows::Forms::UserControl
	{
	public:
		pengumuman(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~pengumuman()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ txt_pengumuman;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ labelWarn;
	private: System::Windows::Forms::Label^ date;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_pengumuman = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelWarn = (gcnew System::Windows::Forms::Label());
			this->date = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(217, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pengumuman";
			// 
			// txt_pengumuman
			// 
			this->txt_pengumuman->BackColor = System::Drawing::SystemColors::Control;
			this->txt_pengumuman->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pengumuman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pengumuman->Location = System::Drawing::Point(25, 176);
			this->txt_pengumuman->Name = L"txt_pengumuman";
			this->txt_pengumuman->ReadOnly = true;
			this->txt_pengumuman->Size = System::Drawing::Size(740, 236);
			this->txt_pengumuman->TabIndex = 1;
			this->txt_pengumuman->Text = L"ini text pengumuman";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(218, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Dibuat pada tanggal :";
			// 
			// labelWarn
			// 
			this->labelWarn->AutoSize = true;
			this->labelWarn->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWarn->Location = System::Drawing::Point(129, 219);
			this->labelWarn->Name = L"labelWarn";
			this->labelWarn->Size = System::Drawing::Size(533, 47);
			this->labelWarn->TabIndex = 4;
			this->labelWarn->Text = L"~~Tidak ada pengumuman!~~";
			this->labelWarn->Visible = false;
			// 
			// date
			// 
			this->date->AutoSize = true;
			this->date->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date->Location = System::Drawing::Point(255, 130);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(78, 18);
			this->date->TabIndex = 5;
			this->date->Text = L"tanggal";
			// 
			// pengumuman
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->date);
			this->Controls->Add(this->labelWarn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_pengumuman);
			this->Controls->Add(this->label1);
			this->Name = L"pengumuman";
			this->Size = System::Drawing::Size(790, 439);
			this->Load += gcnew System::EventHandler(this, &pengumuman::pengumuman_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pengumuman_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.pengumuman;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ value = dataReader->GetString("isi_pengumuman");
				this->txt_pengumuman->Text = value;
				String^ tanggal = dataReader->GetString("tanggal");
				this->date->Text = tanggal;
			}
			
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		if (this->txt_pengumuman->Text == "" || this->date->Text == "") {
			this->txt_pengumuman->Visible = false;
			this->label2->Visible = false;
			this->date->Visible = false;
			this->labelWarn->Visible = true;
		}

	}
	};
}
