#pragma once
#include "loginAdmin.h"
#include "menuPublik.h"
#include "menuAdmin.h"

namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for loginAwal
	/// </summary>
	public ref class loginAwal : public System::Windows::Forms::Form
	{
	public:
		loginAwal(void)
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
		~loginAwal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::Button^ btnPublic;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginAwal::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnPublic = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(197, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// btnAdmin
			// 
			this->btnAdmin->BackColor = System::Drawing::Color::Transparent;
			this->btnAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdmin->FlatAppearance->BorderColor = System::Drawing::Color::MediumPurple;
			this->btnAdmin->FlatAppearance->BorderSize = 0;
			this->btnAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdmin.Image")));
			this->btnAdmin->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnAdmin->Location = System::Drawing::Point(133, 205);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(136, 103);
			this->btnAdmin->TabIndex = 1;
			this->btnAdmin->Text = L"Admin";
			this->btnAdmin->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnAdmin->UseVisualStyleBackColor = false;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &loginAwal::btnAdmin_Click);
			// 
			// btnPublic
			// 
			this->btnPublic->BackColor = System::Drawing::Color::Transparent;
			this->btnPublic->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPublic->FlatAppearance->BorderColor = System::Drawing::Color::MediumPurple;
			this->btnPublic->FlatAppearance->BorderSize = 0;
			this->btnPublic->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPublic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPublic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPublic.Image")));
			this->btnPublic->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnPublic->Location = System::Drawing::Point(301, 204);
			this->btnPublic->Name = L"btnPublic";
			this->btnPublic->Size = System::Drawing::Size(136, 103);
			this->btnPublic->TabIndex = 2;
			this->btnPublic->Text = L"Public";
			this->btnPublic->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnPublic->UseVisualStyleBackColor = false;
			this->btnPublic->Click += gcnew System::EventHandler(this, &loginAwal::btnPublic_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(557, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &loginAwal::exitToolStripMenuItem_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Location = System::Drawing::Point(383, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"         Sistem Informasi Desa v1.0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->UseCompatibleTextRendering = true;
			// 
			// loginAwal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cyan;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(557, 429);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnPublic);
			this->Controls->Add(this->btnAdmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"loginAwal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistem Informasi Desa v1.0";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &loginAwal::loginAwal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &loginAwal::loginAwal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		loginAdmin^ logAdm = gcnew loginAdmin(this);
		logAdm->ShowDialog();
	}
	private: System::Void btnPublic_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menuPublik^ menuPbl = gcnew menuPublik(this);
		menuPbl->ShowDialog();
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void loginAwal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Apakah anda yakin keluar?", "Terima Kasih :)", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		e->Cancel = true;
	}
}
private: System::Void loginAwal_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("CREATE DATABASE sisteminformasidesa; CREATE TABLE sisteminformasidesa.admin(username varchar(20), password varchar(20)); CREATE TABLE sisteminformasidesa.detail(alamat text NOT NULL, luas varchar(30) NOT NULL, pencaharian text NOT NULL, sda text NOT NULL, url varchar(100)); CREATE TABLE sisteminformasidesa.foto(image1 varchar(200), image2 varchar(200), image3 varchar(200), image4 varchar(200)); CREATE TABLE sisteminformasidesa.pendidikan(sd text NOT NULL, smp text NOT NULL,	sma text NOT NULL, edukasi text NOT NULL); CREATE TABLE sisteminformasidesa.pengumuman(isi_pengumuman longtext, tanggal text); CREATE TABLE sisteminformasidesa.perangkat(kades varchar(30) PRIMARY KEY NOT NULL, kaur_umum varchar(30),	kaur_keuangan varchar(30), seksi_pemerintahan varchar(30), seksi_kesejahteraan varchar(30), kadus_satu varchar(30), kadus_dua varchar(30), kadus_tiga varchar(30)); CREATE TABLE sisteminformasidesa.pesan(ID int(11) PRIMARY KEY NOT NULL AUTO_INCREMENT, tanggal timestamp NOT NULL DEFAULT current_timestamp(), pengirim varchar(30), isi_pesan longtext); CREATE TABLE sisteminformasidesa.warga(nomor int(11) NOT NULL, nama_warga varchar(30) NOT NULL, NIK varchar(20) NOT NULL, jenkel varchar(10) NOT NULL, tempat_lahir varchar(15) NOT NULL, tanggal_lahir date NOT NULL, agama varchar(10) NOT NULL, pendidikan varchar(20) NOT NULL, jenis_pekerjaan varchar(20) NOT NULL, PRIMARY KEY(nomor, NIK)); INSERT INTO sisteminformasidesa.admin VALUES('struktur','data');INSERT INTO sisteminformasidesa.pengumuman (isi_pengumuman,tanggal) VALUES('tidak ada pengumuman', CURRENT_TIMESTAMP()); INSERT INTO sisteminformasidesa.detail VALUES('-','-','-','-','-'); INSERT INTO sisteminformasidesa.foto VALUES('-', '-', '-', '-'); INSERT INTO sisteminformasidesa.pendidikan VALUES('-', '-', '-', '-'); INSERT INTO sisteminformasidesa.perangkat VALUES('-', '-', '-', '-', '-', '-', '-', '-'); ", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
