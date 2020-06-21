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
	/// Summary for pendidikanDesa
	/// </summary>
	public ref class pendidikanDesa : public System::Windows::Forms::UserControl
	{
	public:
		pendidikanDesa(void)
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
		~pendidikanDesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_sd;
	private: System::Windows::Forms::TextBox^ txt_smp;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_sma;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_edukasi;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_update;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(pendidikanDesa::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_sd = (gcnew System::Windows::Forms::TextBox());
			this->txt_smp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_sma = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_edukasi = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sekolah Dasar (SD) /\r\nMadrasah Ibtidiyah (MI) :\r\n";
			// 
			// txt_sd
			// 
			this->txt_sd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sd->Location = System::Drawing::Point(193, 44);
			this->txt_sd->Name = L"txt_sd";
			this->txt_sd->Size = System::Drawing::Size(380, 23);
			this->txt_sd->TabIndex = 1;
			// 
			// txt_smp
			// 
			this->txt_smp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_smp->Location = System::Drawing::Point(253, 95);
			this->txt_smp->Name = L"txt_smp";
			this->txt_smp->Size = System::Drawing::Size(320, 23);
			this->txt_smp->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Sekolah Menengah Dasar (SMP) /\r\nMadrasah Tsanawiyah (MTs) :";
			// 
			// txt_sma
			// 
			this->txt_sma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sma->Location = System::Drawing::Point(238, 149);
			this->txt_sma->Name = L"txt_sma";
			this->txt_sma->Size = System::Drawing::Size(335, 23);
			this->txt_sma->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(213, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sekolah Menengah Atas (SMA) /\r\nMadrasah Aliyah (MA) :";
			// 
			// txt_edukasi
			// 
			this->txt_edukasi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edukasi->Location = System::Drawing::Point(149, 199);
			this->txt_edukasi->Multiline = true;
			this->txt_edukasi->Name = L"txt_edukasi";
			this->txt_edukasi->Size = System::Drawing::Size(424, 72);
			this->txt_edukasi->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Program Edukasi :";
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.Image")));
			this->btn_update->Location = System::Drawing::Point(485, 286);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(88, 31);
			this->btn_update->TabIndex = 8;
			this->btn_update->Text = L"Update";
			this->btn_update->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &pendidikanDesa::btn_update_Click);
			// 
			// pendidikanDesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->txt_edukasi);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_sma);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_smp);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_sd);
			this->Controls->Add(this->label1);
			this->Name = L"pendidikanDesa";
			this->Size = System::Drawing::Size(590, 341);
			this->Load += gcnew System::EventHandler(this, &pendidikanDesa::pendidikanDesa_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pendidikanDesa_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.pendidikan;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ sd = dataReader->GetString("sd");
				this->txt_sd->Text = sd;
				String^ smp = dataReader->GetString("smp");
				this->txt_smp->Text = smp;
				String^ sma = dataReader->GetString("sma");
				this->txt_sma->Text = sma;
				String^ edukasi = dataReader->GetString("edukasi");
				this->txt_edukasi->Text = edukasi;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.pendidikan set sd = '" + this->txt_sd->Text + "', smp = '" + this->txt_smp->Text + "', sma = '" + this->txt_sma->Text + "', edukasi = '" + this->txt_edukasi->Text + "';", conn);
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
