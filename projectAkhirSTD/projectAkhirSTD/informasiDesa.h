#pragma once
#include "editPengumuman.h"
#include "detailDesa.h"
#include "pendidikanDesa.h"
#include "budayaDesa.h"
namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for informasiDesa
	/// </summary>
	public ref class informasiDesa : public System::Windows::Forms::Form
	{
	public:
		Form^ menuAdm;
		informasiDesa(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		informasiDesa(Form^ informasiDs)
		{
			menuAdm = informasiDs;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~informasiDesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Button^ btn_pengumuman;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_detail;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btn_pendidikan;


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ btn_budaya;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelContent;
	private: System::Windows::Forms::ToolStripMenuItem^ refreshToolStripMenuItem;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(informasiDesa::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refreshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_pengumuman = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_detail = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_pendidikan = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_budaya = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panelContent = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToolStripMenuItem,
					this->refreshToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(787, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToolStripMenuItem.Image")));
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &informasiDesa::backToolStripMenuItem_Click);
			// 
			// refreshToolStripMenuItem
			// 
			this->refreshToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refreshToolStripMenuItem.Image")));
			this->refreshToolStripMenuItem->Name = L"refreshToolStripMenuItem";
			this->refreshToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->refreshToolStripMenuItem->Text = L"Refresh";
			this->refreshToolStripMenuItem->Click += gcnew System::EventHandler(this, &informasiDesa::refreshToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Yellow;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->btn_pengumuman);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 341);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mengedit\r\nPengumuman Desa";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_pengumuman
			// 
			this->btn_pengumuman->BackColor = System::Drawing::Color::LightYellow;
			this->btn_pengumuman->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_pengumuman->FlatAppearance->BorderSize = 0;
			this->btn_pengumuman->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pengumuman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pengumuman->Location = System::Drawing::Point(0, 180);
			this->btn_pengumuman->Name = L"btn_pengumuman";
			this->btn_pengumuman->Size = System::Drawing::Size(196, 45);
			this->btn_pengumuman->TabIndex = 1;
			this->btn_pengumuman->Text = L"Pengumuman";
			this->btn_pengumuman->UseVisualStyleBackColor = false;
			this->btn_pengumuman->Click += gcnew System::EventHandler(this, &informasiDesa::btn_pengumuman_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(43, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(108, 104);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightYellow;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->btn_detail);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(197, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(196, 341);
			this->panel2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Mengedit\r\nDetail Informasi Desa";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_detail
			// 
			this->btn_detail->BackColor = System::Drawing::Color::Turquoise;
			this->btn_detail->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_detail->FlatAppearance->BorderSize = 0;
			this->btn_detail->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_detail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_detail->Location = System::Drawing::Point(0, 180);
			this->btn_detail->Name = L"btn_detail";
			this->btn_detail->Size = System::Drawing::Size(196, 45);
			this->btn_detail->TabIndex = 4;
			this->btn_detail->Text = L"Detail Desa";
			this->btn_detail->UseVisualStyleBackColor = false;
			this->btn_detail->Click += gcnew System::EventHandler(this, &informasiDesa::btn_detail_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(43, 54);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(108, 104);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Turquoise;
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->btn_pendidikan);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(394, 27);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(196, 341);
			this->panel3->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(160, 32);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Mengedit Informasi \r\nPendidikan Desa";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_pendidikan
			// 
			this->btn_pendidikan->BackColor = System::Drawing::Color::Thistle;
			this->btn_pendidikan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_pendidikan->FlatAppearance->BorderSize = 0;
			this->btn_pendidikan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pendidikan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pendidikan->Location = System::Drawing::Point(0, 180);
			this->btn_pendidikan->Name = L"btn_pendidikan";
			this->btn_pendidikan->Size = System::Drawing::Size(196, 45);
			this->btn_pendidikan->TabIndex = 4;
			this->btn_pendidikan->Text = L"Pendidikan";
			this->btn_pendidikan->UseVisualStyleBackColor = false;
			this->btn_pendidikan->Click += gcnew System::EventHandler(this, &informasiDesa::btn_pendidikan_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(43, 54);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(108, 104);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(43, 54);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(108, 104);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// btn_budaya
			// 
			this->btn_budaya->BackColor = System::Drawing::Color::Yellow;
			this->btn_budaya->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_budaya->FlatAppearance->BorderSize = 0;
			this->btn_budaya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_budaya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_budaya->Location = System::Drawing::Point(0, 180);
			this->btn_budaya->Name = L"btn_budaya";
			this->btn_budaya->Size = System::Drawing::Size(196, 45);
			this->btn_budaya->TabIndex = 4;
			this->btn_budaya->Text = L"Budaya";
			this->btn_budaya->UseVisualStyleBackColor = false;
			this->btn_budaya->Click += gcnew System::EventHandler(this, &informasiDesa::btn_budaya_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 32);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Mengedit Informasi \r\nBudaya Desa";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Thistle;
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->btn_budaya);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(591, 27);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(196, 341);
			this->panel4->TabIndex = 4;
			// 
			// panelContent
			// 
			this->panelContent->BackColor = System::Drawing::Color::Yellow;
			this->panelContent->Location = System::Drawing::Point(197, 27);
			this->panelContent->Name = L"panelContent";
			this->panelContent->Size = System::Drawing::Size(590, 341);
			this->panelContent->TabIndex = 5;
			this->panelContent->Visible = false;
			// 
			// informasiDesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 368);
			this->Controls->Add(this->panelContent);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"informasiDesa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit Informasi Desa";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &informasiDesa::informasiDesa_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menuAdm->Show();
	}
	private: System::Void informasiDesa_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
private: System::Void btn_pengumuman_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panel2->Hide();
	this->panel3->Hide();
	this->panel4->Hide();
	this->panelContent->Controls->Add(gcnew editPengumuman);
	/*panel content size 590; 341*/
	this->panelContent->Show();
}
private: System::Void btn_detail_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panel2->Location = System::Drawing::Point(0, 27);
	this->panel1->Hide();
	this->panel3->Hide();
	this->panel4->Hide();
	this->panelContent->Controls->Add(gcnew detailDesa);
	this->panelContent->Show();
}
private: System::Void btn_pendidikan_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panel3->Location = System::Drawing::Point(0, 27);
	this->panel1->Hide();
	this->panel2->Hide();
	this->panel4->Hide();
	this->panelContent->Controls->Add(gcnew pendidikanDesa);
	this->panelContent->Show();
}
private: System::Void btn_budaya_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Controls->Clear();
	this->panel4->Location = System::Drawing::Point(0, 27);
	this->panel1->Hide();
	this->panel2->Hide();
	this->panel3->Hide();
	this->panelContent->Controls->Add(gcnew budayaDesa);
	this->panelContent->Show();
}
private: System::Void refreshToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panelContent->Hide();
	this->panel1->Show();
	this->panel1->Location = System::Drawing::Point(0, 27);

	this->panel2->Show();
	this->panel2->Location = System::Drawing::Point(197, 27);

	this->panel3->Show();
	this->panel3->Location = System::Drawing::Point(394, 27);

	this->panel4->Show();
	this->panel4->Location = System::Drawing::Point(591, 27);
}
};
}
