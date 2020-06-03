#pragma once

namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for perangkatDesa
	/// </summary>
	public ref class perangkatDesa : public System::Windows::Forms::Form
	{
	public:
		Form^ menuAdm;
		perangkatDesa(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		perangkatDesa(Form^ perangkat)
		{
			menuAdm = perangkat;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~perangkatDesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_kades;
	private: System::Windows::Forms::TextBox^ txt_kaurUmum;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_kaurKeuangan;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_kadusSatu;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_seksiKesejahteraan;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::TextBox^ txt_seksiPemerintahan;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_kadusTiga;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_kadusDua;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btn_update;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(perangkatDesa::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refreshToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_kades = (gcnew System::Windows::Forms::TextBox());
			this->txt_kaurUmum = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_kaurKeuangan = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_kadusSatu = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_seksiKesejahteraan = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_seksiPemerintahan = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_kadusTiga = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_kadusDua = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(926, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToolStripMenuItem.Image")));
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &perangkatDesa::backToolStripMenuItem_Click);
			// 
			// refreshToolStripMenuItem
			// 
			this->refreshToolStripMenuItem->Name = L"refreshToolStripMenuItem";
			this->refreshToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->refreshToolStripMenuItem->Text = L"Refresh";
			this->refreshToolStripMenuItem->Click += gcnew System::EventHandler(this, &perangkatDesa::refreshToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(419, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Kepala Desa";
			// 
			// txt_kades
			// 
			this->txt_kades->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kades->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kades->Location = System::Drawing::Point(370, 71);
			this->txt_kades->Name = L"txt_kades";
			this->txt_kades->Size = System::Drawing::Size(181, 23);
			this->txt_kades->TabIndex = 2;
			this->txt_kades->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_kaurUmum
			// 
			this->txt_kaurUmum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kaurUmum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kaurUmum->Location = System::Drawing::Point(506, 269);
			this->txt_kaurUmum->Name = L"txt_kaurUmum";
			this->txt_kaurUmum->Size = System::Drawing::Size(181, 23);
			this->txt_kaurUmum->TabIndex = 4;
			this->txt_kaurUmum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(542, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Kaur Umum Dan \r\nPerencanaan";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_kaurKeuangan
			// 
			this->txt_kaurKeuangan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kaurKeuangan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kaurKeuangan->Location = System::Drawing::Point(712, 269);
			this->txt_kaurKeuangan->Name = L"txt_kaurKeuangan";
			this->txt_kaurKeuangan->Size = System::Drawing::Size(181, 23);
			this->txt_kaurKeuangan->TabIndex = 6;
			this->txt_kaurKeuangan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(751, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Kaur Keuangan";
			// 
			// txt_kadusSatu
			// 
			this->txt_kadusSatu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kadusSatu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kadusSatu->Location = System::Drawing::Point(166, 467);
			this->txt_kadusSatu->Name = L"txt_kadusSatu";
			this->txt_kadusSatu->Size = System::Drawing::Size(181, 23);
			this->txt_kadusSatu->TabIndex = 8;
			this->txt_kadusSatu->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(210, 421);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 34);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Kepala Dusun\r\nI";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_seksiKesejahteraan
			// 
			this->txt_seksiKesejahteraan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_seksiKesejahteraan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_seksiKesejahteraan->Location = System::Drawing::Point(228, 311);
			this->txt_seksiKesejahteraan->Name = L"txt_seksiKesejahteraan";
			this->txt_seksiKesejahteraan->Size = System::Drawing::Size(181, 23);
			this->txt_seksiKesejahteraan->TabIndex = 12;
			this->txt_seksiKesejahteraan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(265, 246);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 51);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Kepala Seksi\r\nKesejahteraan\r\nDan Pelayanan";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_seksiPemerintahan
			// 
			this->txt_seksiPemerintahan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_seksiPemerintahan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_seksiPemerintahan->Location = System::Drawing::Point(27, 311);
			this->txt_seksiPemerintahan->Name = L"txt_seksiPemerintahan";
			this->txt_seksiPemerintahan->Size = System::Drawing::Size(181, 23);
			this->txt_seksiPemerintahan->TabIndex = 10;
			this->txt_seksiPemerintahan->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 34);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Kepala Seksi\r\nPemerintahan";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::SeaShell;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(625, 133);
			this->label7->Name = L"label7";
			this->label7->Padding = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->label7->Size = System::Drawing::Size(131, 29);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Sekretaris Desa";
			// 
			// txt_kadusTiga
			// 
			this->txt_kadusTiga->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kadusTiga->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kadusTiga->Location = System::Drawing::Point(575, 467);
			this->txt_kadusTiga->Name = L"txt_kadusTiga";
			this->txt_kadusTiga->Size = System::Drawing::Size(181, 23);
			this->txt_kadusTiga->TabIndex = 15;
			this->txt_kadusTiga->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(619, 421);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 34);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Kepala Dusun\r\nIII";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_kadusDua
			// 
			this->txt_kadusDua->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txt_kadusDua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kadusDua->Location = System::Drawing::Point(375, 467);
			this->txt_kadusDua->Name = L"txt_kadusDua";
			this->txt_kadusDua->Size = System::Drawing::Size(181, 23);
			this->txt_kadusDua->TabIndex = 17;
			this->txt_kadusDua->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(419, 421);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 34);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Kepala Dusun\r\nII";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_update
			// 
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.Image")));
			this->btn_update->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_update->Location = System::Drawing::Point(811, 504);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(103, 41);
			this->btn_update->TabIndex = 18;
			this->btn_update->Text = L"Update";
			this->btn_update->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &perangkatDesa::btn_update_Click);
			// 
			// perangkatDesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(926, 557);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->txt_kadusDua);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_kadusTiga);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_seksiKesejahteraan);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_seksiPemerintahan);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_kadusSatu);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_kaurKeuangan);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_kaurUmum);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_kades);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"perangkatDesa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Perangkat Desa";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &perangkatDesa::perangkatDesa_FormClosed);
			this->Load += gcnew System::EventHandler(this, &perangkatDesa::perangkatDesa_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menuAdm->Show();
	}
	private: System::Void perangkatDesa_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}


private: System::Void perangkatDesa_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ myGraphic = this->CreateGraphics();
	Pen^ myPen = gcnew Pen(Brushes::Gray, 2);
	Pen^ penLine = gcnew Pen(Brushes::Gray, 2);
	myPen->StartCap = Drawing2D::LineCap::ArrowAnchor;
	//tengah
	myGraphic->DrawLine(myPen, 467, 408, 467, 100);
	//bawah
	myGraphic->DrawLine(penLine, 260, 375, 667, 375);
	myGraphic->DrawLine(myPen, 262, 408, 262, 375);
	myGraphic->DrawLine(myPen, 664, 408, 664, 375);
	//atas
	myGraphic->DrawLine(penLine, 467, 149, 625, 149);
	myGraphic->DrawLine(myPen, 600, 224, 692, 169);
	myGraphic->DrawLine(myPen, 803, 224, 690, 169);
	//seksi
	myGraphic->DrawLine(penLine, 210, 173, 467, 173);
	myGraphic->DrawLine(penLine, 212, 173, 212, 190);
	myGraphic->DrawLine(penLine, 117, 190, 318, 190);
	myGraphic->DrawLine(myPen, 119, 237, 119, 190);
	myGraphic->DrawLine(myPen, 315, 230, 315, 190);
	


	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.perangkat set kades='" + this->txt_kades->Text + "', kaur_umum = '" + this->txt_kaurUmum->Text + "', kaur_keuangan = '" + this->txt_kaurKeuangan->Text + "', seksi_pemerintahan = '" + this->txt_seksiPemerintahan->Text + "', seksi_kesejahteraan = '" + this->txt_seksiKesejahteraan->Text + "', kadus_satu = '" + this->txt_kadusSatu->Text + "', kadus_dua = '" + this->txt_kadusDua->Text + "', kadus_tiga = '" + this->txt_kadusTiga->Text + "';", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();


		if (this->txt_kades->Text == "" || this->txt_kaurUmum->Text == "" || this->txt_kaurKeuangan->Text == "" || this->txt_seksiPemerintahan->Text == "" || this->txt_seksiKesejahteraan->Text == "" || this->txt_kadusSatu->Text == "" || this->txt_kadusDua->Text == "" || this->txt_kadusTiga->Text == "") {
			MessageBox::Show("Masih Ada yang Kosong!!!");
		}
		else {
			dataReader = connCmd->ExecuteReader();
			MessageBox::Show("Berhasil Diupdate");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void txt_kades_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void refreshToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ myGraphic = CreateGraphics();
	Pen^ myPen = gcnew Pen(Brushes::Gray, 2);
	Pen^ penLine = gcnew Pen(Brushes::Gray, 2);
	myPen->StartCap = Drawing2D::LineCap::ArrowAnchor;
	//tengah
	myGraphic->DrawLine(myPen, 467, 408, 467, 100);
	//bawah
	myGraphic->DrawLine(penLine, 260, 375, 667, 375);
	myGraphic->DrawLine(myPen, 260, 408, 260, 375);
	myGraphic->DrawLine(myPen, 667, 408, 667, 375);
	//atas
	myGraphic->DrawLine(penLine, 467, 149, 625, 149);
	myGraphic->DrawLine(myPen, 600, 224, 692, 160);
	myGraphic->DrawLine(myPen, 803, 224, 690, 160);
	//seksi
	myGraphic->DrawLine(penLine, 210, 173, 467, 173);
	myGraphic->DrawLine(penLine, 210, 173, 210, 190);
	myGraphic->DrawLine(penLine, 117, 190, 318, 190);
	myGraphic->DrawLine(myPen, 117, 237, 117, 190);
	myGraphic->DrawLine(myPen, 318, 230, 318, 190);
}
};
}
