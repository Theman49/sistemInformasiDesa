#pragma once
#include "editDataAdmin.h"
#include "editDataWarga.h"
#include "lihatPesan.h"
#include "perangkatDesa.h"
#include "informasiDesa.h"

namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menuAdmin
	/// </summary>
	public ref class menuAdmin : public System::Windows::Forms::Form
	{
	public:
		menuAdmin(void)
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
		~menuAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ btnDbAdmin;
	private: System::Windows::Forms::Button^ btnDbWarga;
	private: System::Windows::Forms::Button^ btnInDesa;
	private: System::Windows::Forms::Button^ btnLiPesan;




	private: System::Windows::Forms::Button^ btnPrDesa;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuAdmin::typeid));
			this->btnDbAdmin = (gcnew System::Windows::Forms::Button());
			this->btnDbWarga = (gcnew System::Windows::Forms::Button());
			this->btnInDesa = (gcnew System::Windows::Forms::Button());
			this->btnLiPesan = (gcnew System::Windows::Forms::Button());
			this->btnPrDesa = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDbAdmin
			// 
			this->btnDbAdmin->BackColor = System::Drawing::Color::SpringGreen;
			this->btnDbAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDbAdmin->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->btnDbAdmin->FlatAppearance->BorderSize = 0;
			this->btnDbAdmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnDbAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnDbAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDbAdmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDbAdmin->ForeColor = System::Drawing::Color::Black;
			this->btnDbAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDbAdmin->Location = System::Drawing::Point(0, 190);
			this->btnDbAdmin->Name = L"btnDbAdmin";
			this->btnDbAdmin->Size = System::Drawing::Size(170, 36);
			this->btnDbAdmin->TabIndex = 1;
			this->btnDbAdmin->Text = L"Login Admin";
			this->btnDbAdmin->UseVisualStyleBackColor = false;
			this->btnDbAdmin->Click += gcnew System::EventHandler(this, &menuAdmin::btnDbAdmin_Click);
			// 
			// btnDbWarga
			// 
			this->btnDbWarga->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnDbWarga->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDbWarga->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->btnDbWarga->FlatAppearance->BorderSize = 0;
			this->btnDbWarga->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnDbWarga->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnDbWarga->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDbWarga->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDbWarga->ForeColor = System::Drawing::Color::Black;
			this->btnDbWarga->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDbWarga->Location = System::Drawing::Point(0, 190);
			this->btnDbWarga->Name = L"btnDbWarga";
			this->btnDbWarga->Size = System::Drawing::Size(170, 36);
			this->btnDbWarga->TabIndex = 2;
			this->btnDbWarga->Text = L"Database Warga";
			this->btnDbWarga->UseVisualStyleBackColor = false;
			this->btnDbWarga->Click += gcnew System::EventHandler(this, &menuAdmin::btnDbWarga_Click);
			// 
			// btnInDesa
			// 
			this->btnInDesa->BackColor = System::Drawing::Color::Aquamarine;
			this->btnInDesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInDesa->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->btnInDesa->FlatAppearance->BorderSize = 0;
			this->btnInDesa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnInDesa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnInDesa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInDesa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInDesa->ForeColor = System::Drawing::Color::Black;
			this->btnInDesa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInDesa->Location = System::Drawing::Point(0, 190);
			this->btnInDesa->Name = L"btnInDesa";
			this->btnInDesa->Size = System::Drawing::Size(170, 36);
			this->btnInDesa->TabIndex = 3;
			this->btnInDesa->Text = L"Informasi Desa";
			this->btnInDesa->UseVisualStyleBackColor = false;
			this->btnInDesa->Click += gcnew System::EventHandler(this, &menuAdmin::btnInDesa_Click);
			// 
			// btnLiPesan
			// 
			this->btnLiPesan->BackColor = System::Drawing::Color::FloralWhite;
			this->btnLiPesan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLiPesan->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->btnLiPesan->FlatAppearance->BorderSize = 0;
			this->btnLiPesan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnLiPesan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnLiPesan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLiPesan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLiPesan->ForeColor = System::Drawing::Color::Black;
			this->btnLiPesan->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLiPesan->Location = System::Drawing::Point(0, 190);
			this->btnLiPesan->Name = L"btnLiPesan";
			this->btnLiPesan->Size = System::Drawing::Size(170, 36);
			this->btnLiPesan->TabIndex = 4;
			this->btnLiPesan->Text = L"Pesan Warga";
			this->btnLiPesan->UseVisualStyleBackColor = false;
			this->btnLiPesan->Click += gcnew System::EventHandler(this, &menuAdmin::btnLiPesan_Click);
			// 
			// btnPrDesa
			// 
			this->btnPrDesa->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnPrDesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPrDesa->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->btnPrDesa->FlatAppearance->BorderSize = 0;
			this->btnPrDesa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
			this->btnPrDesa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->btnPrDesa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrDesa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrDesa->ForeColor = System::Drawing::Color::Black;
			this->btnPrDesa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrDesa->Location = System::Drawing::Point(0, 190);
			this->btnPrDesa->Name = L"btnPrDesa";
			this->btnPrDesa->Size = System::Drawing::Size(170, 36);
			this->btnPrDesa->TabIndex = 5;
			this->btnPrDesa->Text = L"Perangkat Desa";
			this->btnPrDesa->UseVisualStyleBackColor = false;
			this->btnPrDesa->Click += gcnew System::EventHandler(this, &menuAdmin::btnPrDesa_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FloralWhite;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->btnDbAdmin);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(170, 338);
			this->panel1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 34);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mengedit database\r\nlogin admin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(31, 62);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(103, 98);
			this->pictureBox5->TabIndex = 3;
			this->pictureBox5->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::SpringGreen;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->btnPrDesa);
			this->panel2->Location = System::Drawing::Point(172, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(170, 338);
			this->panel2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 34);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Mengedit\r\nPerangkat Desa";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(35, 62);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(103, 98);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->btnDbWarga);
			this->panel3->Location = System::Drawing::Point(343, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(170, 338);
			this->panel3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 244);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 34);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Mengedit Database\r\nPenduduk Desa";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(34, 62);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(103, 98);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->btnInDesa);
			this->panel4->Location = System::Drawing::Point(514, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(170, 338);
			this->panel4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 68);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Mengedit Informasi Desa\r\n(pengumuman,\r\ndetail desa, pendidikan,\r\nbudaya)";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(33, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(103, 98);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Aquamarine;
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->btnLiPesan);
			this->panel5->Location = System::Drawing::Point(685, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(170, 338);
			this->panel5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 34);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Melihat Pesan \r\nPenduduk Desa";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(35, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(103, 98);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// menuAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(856, 340);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"menuAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Admin";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &menuAdmin::menuAdmin_FormClosed);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		   /////////////////edit db admin////////////////////
	private: System::Void btnDbAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		/*this->Hide();*/
		editDataAdmin^ editAdm = gcnew editDataAdmin(this);
		editAdm->ShowDialog();
	}

		   /////////////////edit db warga///////////////////////
private: System::Void btnDbWarga_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	editDataWarga^ editWarga = gcnew editDataWarga(this);
	editWarga->ShowDialog();
}
	   /////////////////edit db pesan///////////////////////
private: System::Void btnLiPesan_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	lihatPesan^ lihatPsn = gcnew lihatPesan(this);
	lihatPsn->ShowDialog();
}

private: System::Void menuAdmin_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
	   /////////////////edit perangkat desa///////////////////////
private: System::Void btnPrDesa_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	perangkatDesa^ perangkat = gcnew perangkatDesa(this);
	perangkat->ShowDialog();
}

	   /////////////////edit informasi desa///////////////////////
private: System::Void btnInDesa_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	informasiDesa^ informasiDs = gcnew informasiDesa(this);
	informasiDs->ShowDialog();
}
};
}
