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
	/// Summary for perangkatDesaReadOnly
	/// </summary>
	public ref class perangkatDesaReadOnly : public System::Windows::Forms::UserControl
	{
	public:
		perangkatDesaReadOnly(void)
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
		~perangkatDesaReadOnly()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_kades;
	private: System::Windows::Forms::TextBox^ txt_kaurKeuangan;



	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_kaurUmum;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_seksiPemerintahan;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_seksiKesejahteraan;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_kadusSatu;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_kadusDua;
	private: System::Windows::Forms::TextBox^ txt_kadusTiga;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	protected:









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
			this->txt_kades = (gcnew System::Windows::Forms::TextBox());
			this->txt_kaurKeuangan = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_kaurUmum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_seksiPemerintahan = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_seksiKesejahteraan = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_kadusSatu = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_kadusDua = (gcnew System::Windows::Forms::TextBox());
			this->txt_kadusTiga = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(329, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Kepala Desa";
			// 
			// txt_kades
			// 
			this->txt_kades->Location = System::Drawing::Point(297, 50);
			this->txt_kades->Name = L"txt_kades";
			this->txt_kades->ReadOnly = true;
			this->txt_kades->Size = System::Drawing::Size(148, 20);
			this->txt_kades->TabIndex = 1;
			this->txt_kades->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_kaurKeuangan
			// 
			this->txt_kaurKeuangan->Location = System::Drawing::Point(586, 192);
			this->txt_kaurKeuangan->Name = L"txt_kaurKeuangan";
			this->txt_kaurKeuangan->ReadOnly = true;
			this->txt_kaurKeuangan->Size = System::Drawing::Size(148, 20);
			this->txt_kaurKeuangan->TabIndex = 3;
			this->txt_kaurKeuangan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(608, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Kaur Keuangan";
			// 
			// txt_kaurUmum
			// 
			this->txt_kaurUmum->Location = System::Drawing::Point(427, 192);
			this->txt_kaurUmum->Name = L"txt_kaurUmum";
			this->txt_kaurUmum->ReadOnly = true;
			this->txt_kaurUmum->Size = System::Drawing::Size(148, 20);
			this->txt_kaurUmum->TabIndex = 5;
			this->txt_kaurUmum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(450, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Kaur Umur dan\r\nPerencanaan";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_seksiPemerintahan
			// 
			this->txt_seksiPemerintahan->Location = System::Drawing::Point(21, 220);
			this->txt_seksiPemerintahan->Name = L"txt_seksiPemerintahan";
			this->txt_seksiPemerintahan->ReadOnly = true;
			this->txt_seksiPemerintahan->Size = System::Drawing::Size(148, 20);
			this->txt_seksiPemerintahan->TabIndex = 9;
			this->txt_seksiPemerintahan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(49, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 34);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Kepala Seksi\r\nPemerintahan";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_seksiKesejahteraan
			// 
			this->txt_seksiKesejahteraan->Location = System::Drawing::Point(180, 220);
			this->txt_seksiKesejahteraan->Name = L"txt_seksiKesejahteraan";
			this->txt_seksiKesejahteraan->ReadOnly = true;
			this->txt_seksiKesejahteraan->Size = System::Drawing::Size(148, 20);
			this->txt_seksiKesejahteraan->TabIndex = 7;
			this->txt_seksiKesejahteraan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(191, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 51);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Kepala Seksi\r\nKesejahteraan dan\r\nPelayanan";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_kadusSatu
			// 
			this->txt_kadusSatu->Location = System::Drawing::Point(144, 351);
			this->txt_kadusSatu->Name = L"txt_kadusSatu";
			this->txt_kadusSatu->ReadOnly = true;
			this->txt_kadusSatu->Size = System::Drawing::Size(148, 20);
			this->txt_kadusSatu->TabIndex = 13;
			this->txt_kadusSatu->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(167, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Kepala Dusun I";
			// 
			// txt_kadusDua
			// 
			this->txt_kadusDua->Location = System::Drawing::Point(303, 351);
			this->txt_kadusDua->Name = L"txt_kadusDua";
			this->txt_kadusDua->ReadOnly = true;
			this->txt_kadusDua->Size = System::Drawing::Size(148, 20);
			this->txt_kadusDua->TabIndex = 11;
			this->txt_kadusDua->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_kadusTiga
			// 
			this->txt_kadusTiga->Location = System::Drawing::Point(463, 351);
			this->txt_kadusTiga->Name = L"txt_kadusTiga";
			this->txt_kadusTiga->ReadOnly = true;
			this->txt_kadusTiga->Size = System::Drawing::Size(148, 20);
			this->txt_kadusTiga->TabIndex = 15;
			this->txt_kadusTiga->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(535, 108);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Sekretaris";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(329, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Kepala Dusun II";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(487, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Kepala Dusun III";
			// 
			// perangkatDesaReadOnly
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_kadusTiga);
			this->Controls->Add(this->txt_kadusSatu);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_kadusDua);
			this->Controls->Add(this->txt_seksiPemerintahan);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_seksiKesejahteraan);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_kaurUmum);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_kaurKeuangan);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_kades);
			this->Controls->Add(this->label1);
			this->Name = L"perangkatDesaReadOnly";
			this->Size = System::Drawing::Size(763, 420);
			this->Load += gcnew System::EventHandler(this, &perangkatDesaReadOnly::perangkatDesaReadOnly_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void perangkatDesaReadOnly_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.perangkat;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ nama_kades = dataReader->GetString("kades");
				this->txt_kades->Text = nama_kades;
				String^ nama_kaurUmum = dataReader->GetString("kaur_umum");
				this->txt_kaurUmum->Text = nama_kaurUmum;
				String^ nama_kaurKeuangan = dataReader->GetString("kaur_keuangan");
				this->txt_kaurKeuangan->Text = nama_kaurKeuangan;
				String^ nama_seksiPemerintahan = dataReader->GetString("seksi_pemerintahan");
				this->txt_seksiPemerintahan->Text = nama_seksiPemerintahan;
				String^ nama_seksiKesejahteraan = dataReader->GetString("seksi_kesejahteraan");
				this->txt_seksiKesejahteraan->Text = nama_seksiKesejahteraan;
				String^ nama_kadusSatu = dataReader->GetString("kadus_satu");
				this->txt_kadusSatu->Text = nama_kadusSatu;
				String^ nama_kadusDua = dataReader->GetString("kadus_dua");
				this->txt_kadusDua->Text = nama_kadusDua;
				String^ nama_kadustiga = dataReader->GetString("kadus_tiga");
				this->txt_kadusTiga->Text = nama_kadustiga;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
