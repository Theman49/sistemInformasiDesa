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
	/// Summary for detailDesaReadOnly
	/// </summary>
	public ref class detailDesaReadOnly : public System::Windows::Forms::UserControl
	{
	public:
		detailDesaReadOnly(void)
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
		~detailDesaReadOnly()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_alamat;
	private: System::Windows::Forms::TextBox^ txt_luas;
	private: System::Windows::Forms::TextBox^ txt_pencaharian;
	private: System::Windows::Forms::TextBox^ txt_sda;
	private: System::Windows::Forms::LinkLabel^ txt_url;








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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_alamat = (gcnew System::Windows::Forms::TextBox());
			this->txt_luas = (gcnew System::Windows::Forms::TextBox());
			this->txt_pencaharian = (gcnew System::Windows::Forms::TextBox());
			this->txt_sda = (gcnew System::Windows::Forms::TextBox());
			this->txt_url = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(30, 230);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(211, 24);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Alamat URL Web Desa :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 24);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Sumber Daya Alam :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 24);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Mata Pencaharian :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 24);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Luas Wilayah :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 24);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Alamat Desa :";
			// 
			// txt_alamat
			// 
			this->txt_alamat->BackColor = System::Drawing::Color::LightYellow;
			this->txt_alamat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_alamat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_alamat->Location = System::Drawing::Point(161, 33);
			this->txt_alamat->Multiline = true;
			this->txt_alamat->Name = L"txt_alamat";
			this->txt_alamat->Size = System::Drawing::Size(610, 57);
			this->txt_alamat->TabIndex = 22;
			this->txt_alamat->Text = L"a\r\na";
			// 
			// txt_luas
			// 
			this->txt_luas->BackColor = System::Drawing::Color::LightYellow;
			this->txt_luas->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_luas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_luas->Location = System::Drawing::Point(171, 96);
			this->txt_luas->Name = L"txt_luas";
			this->txt_luas->Size = System::Drawing::Size(600, 22);
			this->txt_luas->TabIndex = 23;
			this->txt_luas->Text = L"a";
			// 
			// txt_pencaharian
			// 
			this->txt_pencaharian->BackColor = System::Drawing::Color::LightYellow;
			this->txt_pencaharian->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pencaharian->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pencaharian->Location = System::Drawing::Point(207, 142);
			this->txt_pencaharian->Name = L"txt_pencaharian";
			this->txt_pencaharian->Size = System::Drawing::Size(564, 22);
			this->txt_pencaharian->TabIndex = 24;
			this->txt_pencaharian->Text = L"a";
			// 
			// txt_sda
			// 
			this->txt_sda->BackColor = System::Drawing::Color::LightYellow;
			this->txt_sda->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_sda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sda->Location = System::Drawing::Point(218, 186);
			this->txt_sda->Name = L"txt_sda";
			this->txt_sda->Size = System::Drawing::Size(553, 22);
			this->txt_sda->TabIndex = 25;
			this->txt_sda->Text = L"a";
			// 
			// txt_url
			// 
			this->txt_url->AutoSize = true;
			this->txt_url->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_url->Location = System::Drawing::Point(247, 230);
			this->txt_url->Name = L"txt_url";
			this->txt_url->Size = System::Drawing::Size(94, 24);
			this->txt_url->TabIndex = 26;
			this->txt_url->TabStop = true;
			this->txt_url->Text = L"linkLabel1";
			// 
			// detailDesaReadOnly
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->Controls->Add(this->txt_url);
			this->Controls->Add(this->txt_sda);
			this->Controls->Add(this->txt_pencaharian);
			this->Controls->Add(this->txt_luas);
			this->Controls->Add(this->txt_alamat);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"detailDesaReadOnly";
			this->Size = System::Drawing::Size(790, 439);
			this->Load += gcnew System::EventHandler(this, &detailDesaReadOnly::detailDesaReadOnly_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void detailDesaReadOnly_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
