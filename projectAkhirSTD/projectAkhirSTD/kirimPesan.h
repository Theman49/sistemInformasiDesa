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
	/// Summary for kirimPesan
	/// </summary>
	public ref class kirimPesan : public System::Windows::Forms::UserControl
	{
	public:
		kirimPesan(void)
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
		~kirimPesan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_pesan;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmb_pengirim;
	private: System::Windows::Forms::Button^ btn_kirim;

	private: System::Windows::Forms::Button^ btn_clear;


	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(kirimPesan::typeid));
			this->txt_pesan = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmb_pengirim = (gcnew System::Windows::Forms::ComboBox());
			this->btn_kirim = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_pesan
			// 
			this->txt_pesan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pesan->Location = System::Drawing::Point(21, 72);
			this->txt_pesan->Multiline = true;
			this->txt_pesan->Name = L"txt_pesan";
			this->txt_pesan->Size = System::Drawing::Size(747, 246);
			this->txt_pesan->TabIndex = 0;
			this->txt_pesan->TextChanged += gcnew System::EventHandler(this, &kirimPesan::txt_pesan_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pesan :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pengirim";
			// 
			// cmb_pengirim
			// 
			this->cmb_pengirim->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_pengirim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmb_pengirim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmb_pengirim->FormattingEnabled = true;
			this->cmb_pengirim->Location = System::Drawing::Point(21, 371);
			this->cmb_pengirim->Name = L"cmb_pengirim";
			this->cmb_pengirim->Size = System::Drawing::Size(169, 24);
			this->cmb_pengirim->Sorted = true;
			this->cmb_pengirim->TabIndex = 3;
			this->cmb_pengirim->TextChanged += gcnew System::EventHandler(this, &kirimPesan::txt_pesan_TextChanged);
			// 
			// btn_kirim
			// 
			this->btn_kirim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_kirim->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_kirim.Image")));
			this->btn_kirim->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_kirim->Location = System::Drawing::Point(663, 356);
			this->btn_kirim->Name = L"btn_kirim";
			this->btn_kirim->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btn_kirim->Size = System::Drawing::Size(105, 39);
			this->btn_kirim->TabIndex = 4;
			this->btn_kirim->Text = L"Kirim";
			this->btn_kirim->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_kirim->UseVisualStyleBackColor = true;
			this->btn_kirim->Click += gcnew System::EventHandler(this, &kirimPesan::btn_kirim_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear.Image")));
			this->btn_clear->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_clear->Location = System::Drawing::Point(512, 356);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Padding = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->btn_clear->Size = System::Drawing::Size(145, 39);
			this->btn_clear->TabIndex = 5;
			this->btn_clear->Text = L"Bersihkan";
			this->btn_clear->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_clear->UseVisualStyleBackColor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &kirimPesan::btn_clear_Click);
			// 
			// kirimPesan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_kirim);
			this->Controls->Add(this->cmb_pengirim);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_pesan);
			this->Name = L"kirimPesan";
			this->Size = System::Drawing::Size(790, 439);
			this->Load += gcnew System::EventHandler(this, &kirimPesan::kirimPesan_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void txt_pesan_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(this->txt_pesan->Text) || String::IsNullOrEmpty(this->cmb_pengirim->Text)) {
		this->btn_kirim->Enabled = false;
		this->btn_clear->Enabled = false;
	}
	else {
		this->btn_kirim->Enabled = true;
		this->btn_clear->Enabled = true;
	}
}
private: System::Void kirimPesan_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.warga;", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();

		while (dataReader->Read()) {
			String^ vName;
			vName = dataReader->GetString("nama_warga");
			cmb_pengirim->Items->Add(vName);

		}

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	this->btn_kirim->Enabled = false();
	this->btn_clear->Enabled = false();
}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_pesan->Clear();
}
private: System::Void btn_kirim_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("insert into sisteminformasidesa.pesan values(ID,current_timestamp,'" + this->cmb_pengirim->Text->ToString() + "','" + this->txt_pesan->Text + "')", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Pesan telah terkirim");
		this->txt_pesan->Clear();
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
