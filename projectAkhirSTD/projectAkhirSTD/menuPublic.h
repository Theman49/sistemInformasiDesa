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
	/// Summary for menuPublic
	/// </summary>
	public ref class menuPublic : public System::Windows::Forms::Form
	{
	public:
		menuPublic(void)
		{
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
		~menuPublic()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dg_warga;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ pesanToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txt_pesan;
	private: System::Windows::Forms::Button^ btnKirim;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ labelPesan;


	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ waktu;

	private: System::Windows::Forms::Label^ label_pengirim;
	private: System::Windows::Forms::ComboBox^ list_pengirim;








	private: System::ComponentModel::IContainer^ components;










	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPublic::typeid));
			this->dg_warga = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pesanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txt_pesan = (gcnew System::Windows::Forms::TextBox());
			this->btnKirim = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->labelPesan = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->waktu = (gcnew System::Windows::Forms::Label());
			this->label_pengirim = (gcnew System::Windows::Forms::Label());
			this->list_pengirim = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dg_warga
			// 
			this->dg_warga->AllowUserToAddRows = false;
			this->dg_warga->AllowUserToDeleteRows = false;
			this->dg_warga->BackgroundColor = System::Drawing::Color::Pink;
			this->dg_warga->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dg_warga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_warga->Location = System::Drawing::Point(12, 43);
			this->dg_warga->Name = L"dg_warga";
			this->dg_warga->ReadOnly = true;
			this->dg_warga->Size = System::Drawing::Size(740, 239);
			this->dg_warga->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->homeToolStripMenuItem,
					this->pesanToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(765, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->homeToolStripMenuItem->Text = L"home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPublic::homeToolStripMenuItem_Click);
			// 
			// pesanToolStripMenuItem
			// 
			this->pesanToolStripMenuItem->Name = L"pesanToolStripMenuItem";
			this->pesanToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->pesanToolStripMenuItem->Text = L"pesan";
			this->pesanToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPublic::pesanToolStripMenuItem_Click);
			// 
			// txt_pesan
			// 
			this->txt_pesan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pesan->Location = System::Drawing::Point(12, 66);
			this->txt_pesan->Multiline = true;
			this->txt_pesan->Name = L"txt_pesan";
			this->txt_pesan->Size = System::Drawing::Size(740, 216);
			this->txt_pesan->TabIndex = 3;
			this->toolTip1->SetToolTip(this->txt_pesan, L"Sampaikan informasi sedetail mungkin");
			this->txt_pesan->TextChanged += gcnew System::EventHandler(this, &menuPublic::list_pengirim_TextChanged);
			// 
			// btnKirim
			// 
			this->btnKirim->BackColor = System::Drawing::Color::Transparent;
			this->btnKirim->Enabled = false;
			this->btnKirim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnKirim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnKirim->ForeColor = System::Drawing::Color::AliceBlue;
			this->btnKirim->Location = System::Drawing::Point(271, 313);
			this->btnKirim->Name = L"btnKirim";
			this->btnKirim->Size = System::Drawing::Size(114, 37);
			this->btnKirim->TabIndex = 5;
			this->btnKirim->Text = L"Kirim";
			this->btnKirim->UseVisualStyleBackColor = false;
			this->btnKirim->Click += gcnew System::EventHandler(this, &menuPublic::btnKirim_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Transparent;
			this->btnClear->Enabled = false;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::AliceBlue;
			this->btnClear->Location = System::Drawing::Point(391, 313);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(113, 34);
			this->btnClear->TabIndex = 6;
			this->btnClear->Text = L"Bersihkan";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &menuPublic::btnClear_Click);
			// 
			// labelPesan
			// 
			this->labelPesan->AutoSize = true;
			this->labelPesan->BackColor = System::Drawing::Color::Transparent;
			this->labelPesan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPesan->ForeColor = System::Drawing::Color::AliceBlue;
			this->labelPesan->Location = System::Drawing::Point(12, 39);
			this->labelPesan->Name = L"labelPesan";
			this->labelPesan->Size = System::Drawing::Size(78, 24);
			this->labelPesan->TabIndex = 7;
			this->labelPesan->Text = L"Pesan : ";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &menuPublic::timer1_Tick);
			// 
			// waktu
			// 
			this->waktu->AutoSize = true;
			this->waktu->BackColor = System::Drawing::Color::Transparent;
			this->waktu->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->waktu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->waktu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->waktu->Location = System::Drawing::Point(547, 410);
			this->waktu->Name = L"waktu";
			this->waktu->Size = System::Drawing::Size(60, 24);
			this->waktu->TabIndex = 9;
			this->waktu->Text = L"label1";
			// 
			// label_pengirim
			// 
			this->label_pengirim->AutoSize = true;
			this->label_pengirim->BackColor = System::Drawing::Color::Transparent;
			this->label_pengirim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pengirim->ForeColor = System::Drawing::Color::AliceBlue;
			this->label_pengirim->Location = System::Drawing::Point(12, 299);
			this->label_pengirim->Name = L"label_pengirim";
			this->label_pengirim->Size = System::Drawing::Size(85, 24);
			this->label_pengirim->TabIndex = 11;
			this->label_pengirim->Text = L"Pengirim";
			// 
			// list_pengirim
			// 
			this->list_pengirim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->list_pengirim->FormattingEnabled = true;
			this->list_pengirim->ItemHeight = 13;
			this->list_pengirim->Location = System::Drawing::Point(12, 326);
			this->list_pengirim->MaxDropDownItems = 100;
			this->list_pengirim->Name = L"list_pengirim";
			this->list_pengirim->Size = System::Drawing::Size(187, 21);
			this->list_pengirim->Sorted = true;
			this->list_pengirim->TabIndex = 10;
			this->list_pengirim->TextChanged += gcnew System::EventHandler(this, &menuPublic::list_pengirim_TextChanged);
			// 
			// menuPublic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aquamarine;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(765, 443);
			this->Controls->Add(this->label_pengirim);
			this->Controls->Add(this->list_pengirim);
			this->Controls->Add(this->waktu);
			this->Controls->Add(this->labelPesan);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnKirim);
			this->Controls->Add(this->txt_pesan);
			this->Controls->Add(this->dg_warga);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"menuPublic";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Public";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &menuPublic::menuPublic_FormClosing);
			this->Load += gcnew System::EventHandler(this, &menuPublic::menuPublic_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuPublic_Load(System::Object^ sender, System::EventArgs^ e) {
		//
		// dg_warga MySql
		//
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select no,nama_warga,agama,pendidikan,jenis_pekerjaan from sisteminformasidesa.warga;", conn);
		MySqlCommand^ connCmd2 = gcnew MySqlCommand("select * from sisteminformasidesa.warga;", conn);
		MySqlDataReader^ dataReader;

		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = connCmd;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dg_warga->DataSource = bSource;
			sda->Update(dbdataset);

			conn->Open();
			dataReader = connCmd2->ExecuteReader();

			while (dataReader->Read()) {
				String^ vName;
				vName = dataReader->GetString("nama_warga");
				list_pengirim->Items->Add(vName);

			}

		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		////////////////////hide component/////////////////////
		this->labelPesan->Hide();
		this->txt_pesan->Hide();
		this->btnClear->Hide();
		this->btnKirim->Hide();
		this->list_pengirim->Hide();
		this->label_pengirim->Hide();


		/*
		////////////fill combo box//////////////////
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.warga;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ vName;
				vName = dataReader->GetString("nama_warga");
				list_pengirim->Items->Add(vName);

			}
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		////////////////////////////////////////////
		*/
	
	}
	private: System::Void homeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dg_warga->Show();
		this->labelPesan->Hide();
		this->txt_pesan->Hide();
		this->btnClear->Hide();
		this->btnKirim->Hide();
		this->list_pengirim->Hide();
		this->label_pengirim->Hide();
		
		this->waktu->Location = System::Drawing::Point(547, 410);
		this->waktu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
	}


	private: System::Void pesanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dg_warga->Hide();
		this->labelPesan->Show();
		this->txt_pesan->Show();
		this->btnClear->Show();
		this->btnKirim->Show();
		this->list_pengirim->Show();
		this->label_pengirim->Show();


		

	
		this->waktu->Location = System::Drawing::Point(547, 39);
		this->waktu->ForeColor = System::Drawing::Color::Black;


		
	}
	
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txt_pesan->Clear();
}

private: System::Void btnKirim_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("insert into sisteminformasidesa.pesan values(current_timestamp,'"+this->list_pengirim->Text->ToString()+"','"+this->txt_pesan->Text+"')" , conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Pesan telah terkirim");
		this->txt_pesan->Clear();
		this->list_pengirim->Text = "";
	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime^ datetime = DateTime::Now;
	this->waktu->Text = datetime->ToString();
}


private: System::Void menuPublic_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Apakah anda yakin keluar?", "Menu Public", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		e->Cancel = true;
	}
}

private: System::Void list_pengirim_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(this->list_pengirim->Text) || String::IsNullOrEmpty(this->txt_pesan->Text)) {
		this->btnKirim->Enabled = false;
		this->btnClear->Enabled = false;

	}
	else {
		this->btnKirim->Enabled = true;
		this->btnClear->Enabled = true;

	}
}
};
}
