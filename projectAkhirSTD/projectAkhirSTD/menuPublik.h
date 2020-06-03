#pragma once
#include "perangkatDesaReadOnly.h"
#include "kirimPesan.h"
#include "dataPenduduk.h"
namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menuPublik
	/// </summary>
	public ref class menuPublik : public System::Windows::Forms::Form
	{
	public:
		Form^ home;
		menuPublik(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}
		menuPublik(Form^ menuPbl)
		{
			home = menuPbl;
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menuPublik()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_penduduk;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btn_pesan;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btn_perangkat;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ waktu;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPublik::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btn_pesan = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_perangkat = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_penduduk = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->waktu = (gcnew System::Windows::Forms::Label());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::Turquoise;
			this->panelMenu->Controls->Add(this->panel5);
			this->panelMenu->Controls->Add(this->btn_back);
			this->panelMenu->Controls->Add(this->pictureBox1);
			this->panelMenu->Controls->Add(this->panel4);
			this->panelMenu->Controls->Add(this->btn_pesan);
			this->panelMenu->Controls->Add(this->panel3);
			this->panelMenu->Controls->Add(this->btn_perangkat);
			this->panelMenu->Controls->Add(this->panel1);
			this->panelMenu->Controls->Add(this->btn_penduduk);
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(160, 493);
			this->panelMenu->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel5->Location = System::Drawing::Point(0, 439);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(15, 51);
			this->panel5->TabIndex = 6;
			// 
			// btn_back
			// 
			this->btn_back->FlatAppearance->BorderSize = 0;
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_back.Image")));
			this->btn_back->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_back->Location = System::Drawing::Point(12, 439);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Padding = System::Windows::Forms::Padding(5, 0, 15, 0);
			this->btn_back->Size = System::Drawing::Size(148, 51);
			this->btn_back->TabIndex = 7;
			this->btn_back->Text = L"Kembali";
			this->btn_back->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &menuPublik::btn_back_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 137);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel4->Location = System::Drawing::Point(0, 257);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(13, 51);
			this->panel4->TabIndex = 3;
			// 
			// btn_pesan
			// 
			this->btn_pesan->FlatAppearance->BorderSize = 0;
			this->btn_pesan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pesan->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pesan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_pesan.Image")));
			this->btn_pesan->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_pesan->Location = System::Drawing::Point(10, 257);
			this->btn_pesan->Name = L"btn_pesan";
			this->btn_pesan->Padding = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->btn_pesan->Size = System::Drawing::Size(148, 51);
			this->btn_pesan->TabIndex = 4;
			this->btn_pesan->Text = L"Kirim Pesan";
			this->btn_pesan->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_pesan->UseVisualStyleBackColor = true;
			this->btn_pesan->Click += gcnew System::EventHandler(this, &menuPublik::btn_pesan_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel3->Location = System::Drawing::Point(0, 200);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(13, 51);
			this->panel3->TabIndex = 1;
			// 
			// btn_perangkat
			// 
			this->btn_perangkat->FlatAppearance->BorderSize = 0;
			this->btn_perangkat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_perangkat->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_perangkat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_perangkat.Image")));
			this->btn_perangkat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_perangkat->Location = System::Drawing::Point(10, 200);
			this->btn_perangkat->Name = L"btn_perangkat";
			this->btn_perangkat->Padding = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->btn_perangkat->Size = System::Drawing::Size(148, 51);
			this->btn_perangkat->TabIndex = 2;
			this->btn_perangkat->Text = L"Perangkat\r\nDesa";
			this->btn_perangkat->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btn_perangkat->UseVisualStyleBackColor = true;
			this->btn_perangkat->Click += gcnew System::EventHandler(this, &menuPublik::btn_perangkat_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->Location = System::Drawing::Point(0, 143);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(13, 51);
			this->panel1->TabIndex = 0;
			// 
			// btn_penduduk
			// 
			this->btn_penduduk->FlatAppearance->BorderSize = 0;
			this->btn_penduduk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_penduduk->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_penduduk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_penduduk.Image")));
			this->btn_penduduk->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_penduduk->Location = System::Drawing::Point(10, 143);
			this->btn_penduduk->Name = L"btn_penduduk";
			this->btn_penduduk->Padding = System::Windows::Forms::Padding(1, 0, 10, 0);
			this->btn_penduduk->Size = System::Drawing::Size(148, 51);
			this->btn_penduduk->TabIndex = 0;
			this->btn_penduduk->Text = L"Penduduk";
			this->btn_penduduk->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_penduduk->UseVisualStyleBackColor = true;
			this->btn_penduduk->Click += gcnew System::EventHandler(this, &menuPublik::btn_penduduk_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Aquamarine;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->waktu);
			this->panel2->Location = System::Drawing::Point(159, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(790, 55);
			this->panel2->TabIndex = 1;
			// 
			// waktu
			// 
			this->waktu->AutoSize = true;
			this->waktu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waktu->Location = System::Drawing::Point(634, 18);
			this->waktu->Name = L"waktu";
			this->waktu->Size = System::Drawing::Size(44, 17);
			this->waktu->TabIndex = 0;
			this->waktu->Text = L"waktu";
			// 
			// panelContent
			// 
			this->panelContent->Location = System::Drawing::Point(159, 51);
			this->panelContent->Name = L"panelContent";
			this->panelContent->Size = System::Drawing::Size(790, 439);
			this->panelContent->TabIndex = 2;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &menuPublik::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Copperplate Gothic Light", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sistem Informasi Desa";
			// 
			// menuPublik
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(949, 491);
			this->Controls->Add(this->panelContent);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panelMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"menuPublik";
			this->Text = L"Menu Public";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &menuPublik::menuPublik_FormClosed);
			this->panelMenu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menuPublik_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
private: System::Void btn_perangkat_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panelContent->Controls->Add(gcnew perangkatDesaReadOnly);
}
private: System::Void btn_pesan_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panelContent->Controls->Add(gcnew kirimPesan);
}
private: System::Void btn_penduduk_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panelContent->Controls->Add(gcnew dataPenduduk);
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ datetime = DateTime::Now;
	this->waktu->Text = datetime->ToString();
}
private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	home->Show();
}
};
}
