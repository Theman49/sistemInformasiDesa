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
	/// Summary for detailDesa
	/// </summary>
	public ref class detailDesa : public System::Windows::Forms::UserControl
	{
	public:
		detailDesa(void)
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
		~detailDesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_alamat;
	private: System::Windows::Forms::TextBox^ txt_luas;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_pencaharian;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_sda;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_url;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(detailDesa::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_alamat = (gcnew System::Windows::Forms::TextBox());
			this->txt_luas = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_pencaharian = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_sda = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_url = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Alamat Desa :";
			// 
			// txt_alamat
			// 
			this->txt_alamat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_alamat->Location = System::Drawing::Point(115, 19);
			this->txt_alamat->Multiline = true;
			this->txt_alamat->Name = L"txt_alamat";
			this->txt_alamat->Size = System::Drawing::Size(461, 40);
			this->txt_alamat->TabIndex = 1;
			// 
			// txt_luas
			// 
			this->txt_luas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_luas->Location = System::Drawing::Point(115, 65);
			this->txt_luas->Name = L"txt_luas";
			this->txt_luas->Size = System::Drawing::Size(461, 23);
			this->txt_luas->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Luas Wilayah :";
			// 
			// txt_pencaharian
			// 
			this->txt_pencaharian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pencaharian->Location = System::Drawing::Point(150, 97);
			this->txt_pencaharian->Multiline = true;
			this->txt_pencaharian->Name = L"txt_pencaharian";
			this->txt_pencaharian->Size = System::Drawing::Size(426, 40);
			this->txt_pencaharian->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Mata Pencaharian :";
			// 
			// txt_sda
			// 
			this->txt_sda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sda->Location = System::Drawing::Point(156, 143);
			this->txt_sda->Name = L"txt_sda";
			this->txt_sda->Size = System::Drawing::Size(420, 23);
			this->txt_sda->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(13, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Sumber Daya Alam :";
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.Image")));
			this->btn_update->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_update->Location = System::Drawing::Point(480, 212);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(96, 33);
			this->btn_update->TabIndex = 10;
			this->btn_update->Text = L"Update";
			this->btn_update->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &detailDesa::btn_update_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Alamat URL Web Desa :";
			// 
			// txt_url
			// 
			this->txt_url->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_url->Location = System::Drawing::Point(180, 172);
			this->txt_url->Name = L"txt_url";
			this->txt_url->Size = System::Drawing::Size(396, 23);
			this->txt_url->TabIndex = 12;
			// 
			// detailDesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->Controls->Add(this->txt_url);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->txt_sda);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_pencaharian);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_luas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_alamat);
			this->Controls->Add(this->label1);
			this->Name = L"detailDesa";
			this->Size = System::Drawing::Size(590, 341);
			this->Load += gcnew System::EventHandler(this, &detailDesa::detailDesa_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void detailDesa_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.detail;", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();

		while (dataReader->Read()) {
			String^ alamat = dataReader->GetString("alamat");
			this->txt_alamat->Text = alamat;
			String^ luas = dataReader->GetString("luas");
			this->txt_luas->Text = luas;
			String^ pencaharian = dataReader->GetString("pencaharian");
			this->txt_pencaharian->Text = pencaharian;
			String^ sda = dataReader->GetString("sda");
			this->txt_sda->Text = sda;
			String^ url = dataReader->GetString("url");
			this->txt_url->Text = url;
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.detail set alamat = '"+this->txt_alamat->Text+"', luas = '" + this->txt_luas->Text + "', pencaharian = '" + this->txt_pencaharian->Text + "', sda = '" + this->txt_sda->Text + "', url = '"+this->txt_url->Text+"';", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Berhasil diupdate");

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}


}
};
}
