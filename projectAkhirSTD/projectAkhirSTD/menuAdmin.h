#pragma once
#include "editDataAdmin.h"
#include "editDataWarga.h"
#include "lihatPesan.h"
#include "perangkatDesa.h"

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
		Form^ beranda;
		menuAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		menuAdmin(Form^ menuAdm)
		{
			beranda = menuAdm;
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDbAdmin
			// 
			this->btnDbAdmin->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnDbAdmin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDbAdmin->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->btnDbAdmin->FlatAppearance->BorderSize = 3;
			this->btnDbAdmin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnDbAdmin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDbAdmin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDbAdmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDbAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDbAdmin.Image")));
			this->btnDbAdmin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDbAdmin->Location = System::Drawing::Point(12, 27);
			this->btnDbAdmin->Name = L"btnDbAdmin";
			this->btnDbAdmin->Size = System::Drawing::Size(305, 46);
			this->btnDbAdmin->TabIndex = 1;
			this->btnDbAdmin->Text = L"Login Admin";
			this->btnDbAdmin->UseVisualStyleBackColor = false;
			this->btnDbAdmin->Click += gcnew System::EventHandler(this, &menuAdmin::btnDbAdmin_Click);
			// 
			// btnDbWarga
			// 
			this->btnDbWarga->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnDbWarga->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDbWarga->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->btnDbWarga->FlatAppearance->BorderSize = 3;
			this->btnDbWarga->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnDbWarga->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnDbWarga->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDbWarga->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDbWarga->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDbWarga.Image")));
			this->btnDbWarga->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDbWarga->Location = System::Drawing::Point(12, 160);
			this->btnDbWarga->Name = L"btnDbWarga";
			this->btnDbWarga->Size = System::Drawing::Size(305, 46);
			this->btnDbWarga->TabIndex = 2;
			this->btnDbWarga->Text = L"Database Warga";
			this->btnDbWarga->UseVisualStyleBackColor = false;
			this->btnDbWarga->Click += gcnew System::EventHandler(this, &menuAdmin::btnDbWarga_Click);
			// 
			// btnInDesa
			// 
			this->btnInDesa->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnInDesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnInDesa->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->btnInDesa->FlatAppearance->BorderSize = 3;
			this->btnInDesa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnInDesa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnInDesa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInDesa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInDesa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInDesa.Image")));
			this->btnInDesa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInDesa->Location = System::Drawing::Point(12, 234);
			this->btnInDesa->Name = L"btnInDesa";
			this->btnInDesa->Size = System::Drawing::Size(305, 46);
			this->btnInDesa->TabIndex = 3;
			this->btnInDesa->Text = L"Informasi Desa";
			this->btnInDesa->UseVisualStyleBackColor = false;
			// 
			// btnLiPesan
			// 
			this->btnLiPesan->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnLiPesan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLiPesan->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->btnLiPesan->FlatAppearance->BorderSize = 3;
			this->btnLiPesan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnLiPesan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnLiPesan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLiPesan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLiPesan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLiPesan.Image")));
			this->btnLiPesan->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLiPesan->Location = System::Drawing::Point(12, 299);
			this->btnLiPesan->Name = L"btnLiPesan";
			this->btnLiPesan->Size = System::Drawing::Size(305, 46);
			this->btnLiPesan->TabIndex = 4;
			this->btnLiPesan->Text = L"Pesan Warga";
			this->btnLiPesan->UseVisualStyleBackColor = false;
			this->btnLiPesan->Click += gcnew System::EventHandler(this, &menuAdmin::btnLiPesan_Click);
			// 
			// btnPrDesa
			// 
			this->btnPrDesa->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnPrDesa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPrDesa->FlatAppearance->BorderColor = System::Drawing::Color::DarkSlateGray;
			this->btnPrDesa->FlatAppearance->BorderSize = 3;
			this->btnPrDesa->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnPrDesa->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnPrDesa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrDesa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrDesa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrDesa.Image")));
			this->btnPrDesa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrDesa->Location = System::Drawing::Point(12, 91);
			this->btnPrDesa->Name = L"btnPrDesa";
			this->btnPrDesa->Size = System::Drawing::Size(305, 46);
			this->btnPrDesa->TabIndex = 5;
			this->btnPrDesa->Text = L"Perangkat Desa";
			this->btnPrDesa->UseVisualStyleBackColor = false;
			this->btnPrDesa->Click += gcnew System::EventHandler(this, &menuAdmin::btnPrDesa_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(362, 91);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(176, 189);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// menuAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(561, 361);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnPrDesa);
			this->Controls->Add(this->btnLiPesan);
			this->Controls->Add(this->btnInDesa);
			this->Controls->Add(this->btnDbWarga);
			this->Controls->Add(this->btnDbAdmin);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"menuAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Admin";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &menuAdmin::menuAdmin_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


		   /////////////////edit db admin////////////////////
	private: System::Void btnDbAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		editDataAdmin^ editAdm = gcnew editDataAdmin(this);
		editAdm->ShowDialog();
	}

		   /////////////////edit db warga///////////////////////
private: System::Void btnDbWarga_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	editDataWarga^ editWarga = gcnew editDataWarga(this);
	editWarga->ShowDialog();
}

private: System::Void btnLiPesan_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	lihatPesan^ lihatPsn = gcnew lihatPesan(this);
	lihatPsn->ShowDialog();
}
private: System::Void menuAdmin_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void btnPrDesa_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	perangkatDesa^ perangkat = gcnew perangkatDesa(this);
	perangkat->ShowDialog();
}

};
}
