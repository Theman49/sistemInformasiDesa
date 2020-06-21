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
	/// Summary for editDataWarga
	/// </summary>
	public ref class editDataWarga : public System::Windows::Forms::Form
	{
	public:
		Form^ menuAdm;
		editDataWarga(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		editDataWarga(Form^ editWarga)
		{
			menuAdm = editWarga;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editDataWarga()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::DataGridView^ dg_warga;
	private: System::Windows::Forms::TextBox^ txt_nama;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_NIK;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_tempatLahir;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_pekerjaan;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ cmb_jenkel;
	private: System::Windows::Forms::ComboBox^ cmb_agama;
	private: System::Windows::Forms::ComboBox^ cmb_pendidikan;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::DateTimePicker^ dtp_tglLahir;
	private: System::Windows::Forms::Button^ btn_clear;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_no;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(editDataWarga::typeid));
			this->dg_warga = (gcnew System::Windows::Forms::DataGridView());
			this->txt_nama = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_NIK = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_tempatLahir = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_pekerjaan = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cmb_jenkel = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_agama = (gcnew System::Windows::Forms::ComboBox());
			this->cmb_pendidikan = (gcnew System::Windows::Forms::ComboBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->dtp_tglLahir = (gcnew System::Windows::Forms::DateTimePicker());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_no = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dg_warga
			// 
			this->dg_warga->AllowUserToAddRows = false;
			this->dg_warga->AllowUserToDeleteRows = false;
			this->dg_warga->AllowUserToOrderColumns = true;
			this->dg_warga->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dg_warga->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dg_warga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_warga->Location = System::Drawing::Point(295, 43);
			this->dg_warga->Name = L"dg_warga";
			this->dg_warga->ReadOnly = true;
			this->dg_warga->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dg_warga->Size = System::Drawing::Size(650, 318);
			this->dg_warga->TabIndex = 1;
			this->toolTip1->SetToolTip(this->dg_warga, L"Klik tepi kanan kolom paling atas\r\nuntuk mengurutkan A-Z/Z-A atau\r\ndari angke kec"
				L"il-besar / besar-kecil");
			this->dg_warga->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &editDataWarga::dg_warga_CellContentClick);
			// 
			// txt_nama
			// 
			this->txt_nama->Location = System::Drawing::Point(115, 82);
			this->txt_nama->Name = L"txt_nama";
			this->txt_nama->Size = System::Drawing::Size(164, 20);
			this->txt_nama->TabIndex = 2;
			this->txt_nama->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Nama";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"NIK";
			// 
			// txt_NIK
			// 
			this->txt_NIK->Location = System::Drawing::Point(115, 127);
			this->txt_NIK->Name = L"txt_NIK";
			this->txt_NIK->Size = System::Drawing::Size(164, 20);
			this->txt_NIK->TabIndex = 4;
			this->txt_NIK->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(12, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 24);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Tempat Lahir";
			// 
			// txt_tempatLahir
			// 
			this->txt_tempatLahir->Location = System::Drawing::Point(145, 217);
			this->txt_tempatLahir->Name = L"txt_tempatLahir";
			this->txt_tempatLahir->Size = System::Drawing::Size(134, 20);
			this->txt_tempatLahir->TabIndex = 8;
			this->txt_tempatLahir->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(12, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Jenis Kelamin";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(12, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Agama";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(12, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Tanggal Lahir";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(12, 393);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Pekerjaan";
			// 
			// txt_pekerjaan
			// 
			this->txt_pekerjaan->Location = System::Drawing::Point(115, 398);
			this->txt_pekerjaan->Name = L"txt_pekerjaan";
			this->txt_pekerjaan->Size = System::Drawing::Size(164, 20);
			this->txt_pekerjaan->TabIndex = 16;
			this->txt_pekerjaan->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(12, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 24);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Pendidikan";
			// 
			// cmb_jenkel
			// 
			this->cmb_jenkel->FormattingEnabled = true;
			this->cmb_jenkel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Laki-Laki", L"Perempuan" });
			this->cmb_jenkel->Location = System::Drawing::Point(142, 172);
			this->cmb_jenkel->Name = L"cmb_jenkel";
			this->cmb_jenkel->Size = System::Drawing::Size(137, 21);
			this->cmb_jenkel->TabIndex = 18;
			this->cmb_jenkel->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// cmb_agama
			// 
			this->cmb_agama->FormattingEnabled = true;
			this->cmb_agama->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Budha", L"Hindu", L"Islam", L"Khatolik", L"Kong Hu Cu",
					L"Kristen"
			});
			this->cmb_agama->Location = System::Drawing::Point(142, 306);
			this->cmb_agama->Name = L"cmb_agama";
			this->cmb_agama->Size = System::Drawing::Size(137, 21);
			this->cmb_agama->Sorted = true;
			this->cmb_agama->TabIndex = 19;
			this->cmb_agama->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// cmb_pendidikan
			// 
			this->cmb_pendidikan->FormattingEnabled = true;
			this->cmb_pendidikan->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"SD/MI/Sederajat", L"SMP/MTs/Sederajat",
					L"SMA/MA/Sederajat", L"Belum Tamat Sekolah", L"Tidak Sekolah"
			});
			this->cmb_pendidikan->Location = System::Drawing::Point(142, 353);
			this->cmb_pendidikan->Name = L"cmb_pendidikan";
			this->cmb_pendidikan->Size = System::Drawing::Size(137, 21);
			this->cmb_pendidikan->TabIndex = 20;
			this->cmb_pendidikan->TextChanged += gcnew System::EventHandler(this, &editDataWarga::box_TextChanged);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::Transparent;
			this->btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add->FlatAppearance->CheckedBackColor = System::Drawing::Color::SlateBlue;
			this->btn_add->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_add->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::Black;
			this->btn_add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_add.Image")));
			this->btn_add->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_add->Location = System::Drawing::Point(464, 377);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Padding = System::Windows::Forms::Padding(10, 0, 30, 0);
			this->btn_add->Size = System::Drawing::Size(150, 40);
			this->btn_add->TabIndex = 21;
			this->btn_add->Text = L"Add";
			this->btn_add->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &editDataWarga::btn_add_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::Transparent;
			this->btn_delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_delete->Enabled = false;
			this->btn_delete->FlatAppearance->CheckedBackColor = System::Drawing::Color::SlateBlue;
			this->btn_delete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_delete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->ForeColor = System::Drawing::Color::Black;
			this->btn_delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.Image")));
			this->btn_delete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_delete->Location = System::Drawing::Point(630, 377);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Padding = System::Windows::Forms::Padding(0, 0, 20, 0);
			this->btn_delete->Size = System::Drawing::Size(150, 40);
			this->btn_delete->TabIndex = 22;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &editDataWarga::btn_delete_Click);
			// 
			// btn_update
			// 
			this->btn_update->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn_update->BackColor = System::Drawing::Color::Transparent;
			this->btn_update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_update->Enabled = false;
			this->btn_update->FlatAppearance->CheckedBackColor = System::Drawing::Color::SlateBlue;
			this->btn_update->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_update->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_update->ForeColor = System::Drawing::Color::Black;
			this->btn_update->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_update.Image")));
			this->btn_update->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->btn_update->Location = System::Drawing::Point(795, 377);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Padding = System::Windows::Forms::Padding(10, 0, 15, 0);
			this->btn_update->Size = System::Drawing::Size(150, 40);
			this->btn_update->TabIndex = 23;
			this->btn_update->Text = L"Update";
			this->btn_update->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_update->UseVisualStyleBackColor = false;
			this->btn_update->Click += gcnew System::EventHandler(this, &editDataWarga::btn_update_Click);
			// 
			// dtp_tglLahir
			// 
			this->dtp_tglLahir->CustomFormat = L"yyyy/MM/dd";
			this->dtp_tglLahir->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtp_tglLahir->Location = System::Drawing::Point(148, 258);
			this->dtp_tglLahir->Name = L"dtp_tglLahir";
			this->dtp_tglLahir->Size = System::Drawing::Size(130, 20);
			this->dtp_tglLahir->TabIndex = 24;
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::Transparent;
			this->btn_clear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_clear->FlatAppearance->CheckedBackColor = System::Drawing::Color::SlateBlue;
			this->btn_clear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->btn_clear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->btn_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clear->ForeColor = System::Drawing::Color::Black;
			this->btn_clear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clear.Image")));
			this->btn_clear->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_clear->Location = System::Drawing::Point(295, 377);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Padding = System::Windows::Forms::Padding(10, 0, 25, 0);
			this->btn_clear->Size = System::Drawing::Size(150, 40);
			this->btn_clear->TabIndex = 25;
			this->btn_clear->Text = L"Clear";
			this->btn_clear->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->Click += gcnew System::EventHandler(this, &editDataWarga::btn_clear_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(12, 38);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 24);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Nomor";
			// 
			// txt_no
			// 
			this->txt_no->Location = System::Drawing::Point(115, 43);
			this->txt_no->Name = L"txt_no";
			this->txt_no->Size = System::Drawing::Size(164, 20);
			this->txt_no->TabIndex = 26;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->backToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(957, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			this->toolTip1->SetToolTip(this->menuStrip1, L"Kembali ke menu admin");
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToolStripMenuItem.Image")));
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &editDataWarga::backToolStripMenuItem_Click);
			// 
			// editDataWarga
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(957, 429);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_no);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->dtp_tglLahir);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->cmb_pendidikan);
			this->Controls->Add(this->cmb_agama);
			this->Controls->Add(this->cmb_jenkel);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_pekerjaan);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_tempatLahir);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_NIK);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nama);
			this->Controls->Add(this->dg_warga);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"editDataWarga";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit Data Warga";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &editDataWarga::editDataWarga_FormClosed);
			this->Load += gcnew System::EventHandler(this, &editDataWarga::editDataWarga_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void editDataWarga_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select nomor as No, nama_warga as Nama,NIK,jenkel as 'Jenis Kelamin', tempat_lahir as 'Tempat Lahir', tanggal_lahir as 'Tanggal Lahir', agama as Agama, pendidikan as Pendidikan, jenis_pekerjaan as 'Jenis Pekerjaan' from sisteminformasidesa.warga;", conn);


	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_warga->DataSource = bSource;
		sda->Update(dbdataset);
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}


	this->btn_add->Enabled = false;
	this->btn_clear->Enabled = false;
}

private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("insert into sisteminformasidesa.warga values('"+this->txt_no->Text+"','"+this->txt_nama->Text+"','"+this->txt_NIK->Text+"','"+this->cmb_jenkel->Text->ToString()+"','"+this->txt_tempatLahir->Text+"','"+this->dtp_tglLahir->Text->ToString()+"','"+this->cmb_agama->Text->ToString()+"','"+this->cmb_pendidikan->Text->ToString()+"','"+this->txt_pekerjaan->Text+"')", conn );
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd2 = gcnew MySqlCommand("select nomor as No, nama_warga as Nama,NIK,jenkel as 'Jenis Kelamin', tempat_lahir as 'Tempat Lahir', tanggal_lahir as 'Tanggal Lahir', agama as Agama, pendidikan as Pendidikan, jenis_pekerjaan as 'Jenis Pekerjaan' from sisteminformasidesa.warga;", conn);

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Berhasil ditambahkan!");
		this->txt_nama->Clear();
		this->txt_NIK->Clear();
		this->txt_pekerjaan->Clear();
		this->txt_tempatLahir->Clear();
		this->cmb_agama->Text = "";
		this->cmb_jenkel->Text = "";
		this->cmb_pendidikan->Text = "";
		this->txt_no->Clear();
		this->btn_delete->Enabled = false;
		this->btn_update->Enabled = false;
		conn->Close();


		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd2;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_warga->DataSource = bSource;
		sda->Update(dbdataset);
	
	}


	catch(Exception^ex){
		MessageBox::Show(ex->Message);
	}

}

private: System::Void box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(this->txt_no->Text) || String::IsNullOrEmpty(this->txt_nama->Text) || String::IsNullOrEmpty(this->txt_NIK->Text) || String::IsNullOrEmpty(this->txt_pekerjaan->Text) || String::IsNullOrEmpty(this->txt_tempatLahir->Text) || String::IsNullOrEmpty(this->cmb_agama->Text) || String::IsNullOrEmpty(this->cmb_jenkel->Text) || String::IsNullOrEmpty(this->cmb_pendidikan->Text))
	{
		this->btn_add->Enabled = false;
		this->btn_clear->Enabled = false;

	}
	else {
		this->btn_add->Enabled = true;
		this->btn_clear->Enabled = true;
	}
}

private: System::Void dg_warga_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	if (this->dg_warga->Rows[e->RowIndex]->Cells[e->ColumnIndex]) {
		this-> dg_warga->CurrentRow->Selected = true;
		this->btn_delete->Enabled = true;
		this->btn_update->Enabled = true;
		this->txt_nama->Text = dg_warga->Rows[e->RowIndex]->Cells["Nama"]->FormattedValue->ToString();
		this->txt_NIK->Text = dg_warga->Rows[e->RowIndex]->Cells["NIK"]->FormattedValue->ToString();
		this->txt_pekerjaan->Text = dg_warga->Rows[e->RowIndex]->Cells["Jenis Pekerjaan"]->FormattedValue->ToString();
		this->txt_tempatLahir->Text = dg_warga->Rows[e->RowIndex]->Cells["Tempat Lahir"]->FormattedValue->ToString();
		this->cmb_agama->Text = dg_warga->Rows[e->RowIndex]->Cells["Agama"]->FormattedValue->ToString();
		this->cmb_jenkel->Text = dg_warga->Rows[e->RowIndex]->Cells["Jenis Kelamin"]->FormattedValue->ToString();
		this->cmb_pendidikan->Text = dg_warga->Rows[e->RowIndex]->Cells["Pendidikan"]->FormattedValue->ToString();
		this->dtp_tglLahir->Text = dg_warga->Rows[e->RowIndex]->Cells["Tanggal Lahir"]->FormattedValue->ToString();
		this->txt_no->Text = dg_warga->Rows[e->RowIndex]->Cells["No"]->FormattedValue->ToString();
	}
}
private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.warga set nama_warga='"+this->txt_nama->Text+"',NIK='" + this->txt_NIK->Text + "',jenis_pekerjaan='" + this->txt_pekerjaan->Text + "',tempat_lahir='" + this->txt_tempatLahir->Text + "',agama='" + this->cmb_agama->Text + "',jenkel='" + this->cmb_jenkel->Text + "',pendidikan='" + this->cmb_pendidikan->Text + "',tanggal_lahir='" + this->dtp_tglLahir->Text->ToString() + "' where nomor='"+this->txt_no->Text+"';", conn);
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd2 = gcnew MySqlCommand("select nomor as No, nama_warga as Nama,NIK,jenkel as 'Jenis Kelamin', tempat_lahir as 'Tempat Lahir', tanggal_lahir as 'Tanggal Lahir', agama as Agama, pendidikan as Pendidikan, jenis_pekerjaan as 'Jenis Pekerjaan' from sisteminformasidesa.warga;", conn);

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Berhasil diubah!!!");
		this->txt_nama->Clear();
		this->txt_NIK->Clear();
		this->txt_pekerjaan->Clear();
		this->txt_tempatLahir->Clear();
		this->cmb_agama->Text = "";
		this->cmb_jenkel->Text = "";
		this->cmb_pendidikan->Text = "";
		this->btn_delete->Enabled = false;
		this->btn_update->Enabled = false;
		this -> txt_no->Clear();
		conn->Close();


		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd2;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_warga->DataSource = bSource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex){
		MessageBox::Show(ex->Message);
	}
	

}
private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_nama->Clear();
	this->txt_NIK->Clear();
	this->txt_pekerjaan->Clear();
	this->txt_tempatLahir->Clear();
	this->cmb_agama->Text = "";
	this->cmb_jenkel->Text = "";
	this->cmb_pendidikan->Text = "";
	this->txt_no->Clear();

	this->btn_delete->Enabled = false;
	this->btn_update->Enabled = false;
}

private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	menuAdm->Show();
}
private: System::Void editDataWarga_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("delete from sisteminformasidesa.warga where nomor='"+this->txt_no->Text+"'", conn);
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd2 = gcnew MySqlCommand("select nomor as No, nama_warga as Nama,NIK,jenkel as 'Jenis Kelamin', tempat_lahir as 'Tempat Lahir', tanggal_lahir as 'Tanggal Lahir', agama as Agama, pendidikan as Pendidikan, jenis_pekerjaan as 'Jenis Pekerjaan' from sisteminformasidesa.warga;", conn);

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Telah dihapus!");
		this->txt_nama->Clear();
		this->txt_NIK->Clear();
		this->txt_pekerjaan->Clear();
		this->txt_tempatLahir->Clear();
		this->cmb_agama->Text = "";
		this->cmb_jenkel->Text = "";
		this->cmb_pendidikan->Text = "";
		this->txt_no->Clear();
		this->btn_delete->Enabled = false;
		this->btn_update->Enabled = false;
		conn->Close();


		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd2;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_warga->DataSource = bSource;
		sda->Update(dbdataset);

	}


	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
