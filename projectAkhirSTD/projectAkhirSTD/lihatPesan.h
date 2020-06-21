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
	/// Summary for lihatPesan
	/// </summary>
	public ref class lihatPesan : public System::Windows::Forms::Form
	{
	public:
		Form^ menuAdm;
		lihatPesan(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		lihatPesan(Form^ lihatPsn)
		{
			menuAdm = lihatPsn;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~lihatPesan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ dg_pesan;
	private: System::Windows::Forms::TextBox^ txt_key;

	private: System::Windows::Forms::Button^ btn_delete;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(lihatPesan::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dg_pesan = (gcnew System::Windows::Forms::DataGridView());
			this->txt_key = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_pesan))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->backToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(914, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToolStripMenuItem.Image")));
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &lihatPesan::backToolStripMenuItem_Click);
			// 
			// dg_pesan
			// 
			this->dg_pesan->AllowUserToAddRows = false;
			this->dg_pesan->AllowUserToDeleteRows = false;
			this->dg_pesan->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_pesan->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dg_pesan->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_pesan->Dock = System::Windows::Forms::DockStyle::Left;
			this->dg_pesan->Location = System::Drawing::Point(0, 24);
			this->dg_pesan->Name = L"dg_pesan";
			this->dg_pesan->ReadOnly = true;
			this->dg_pesan->Size = System::Drawing::Size(750, 452);
			this->dg_pesan->TabIndex = 1;
			this->dg_pesan->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &lihatPesan::dg_pesan_CellContentClick);
			// 
			// txt_key
			// 
			this->txt_key->Location = System::Drawing::Point(768, 444);
			this->txt_key->Name = L"txt_key";
			this->txt_key->ReadOnly = true;
			this->txt_key->Size = System::Drawing::Size(134, 20);
			this->txt_key->TabIndex = 2;
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_delete.Image")));
			this->btn_delete->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_delete->Location = System::Drawing::Point(768, 39);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(132, 46);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &lihatPesan::btn_delete_Click);
			// 
			// lihatPesan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(914, 476);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->txt_key);
			this->Controls->Add(this->dg_pesan);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"lihatPesan";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pesan Warga";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &lihatPesan::lihatPesan_FormClosed);
			this->Load += gcnew System::EventHandler(this, &lihatPesan::lihatPesan_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_pesan))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menuAdm->Show();
	}

private: System::Void lihatPesan_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select ID, tanggal as 'Waktu Pengiriman', pengirim as Pengirim, isi_pesan as Pesan from sisteminformasidesa.pesan", conn);
	
	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_pesan->DataSource = bSource;
		sda->Update(dbdataset);

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void lihatPesan_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void dg_pesan_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (this->dg_pesan->Rows[e->RowIndex]->Cells[e->ColumnIndex]) {
		this->dg_pesan->CurrentRow->Selected = true;
		this->txt_key->Text = dg_pesan->Rows[e->RowIndex]->Cells["ID"]->FormattedValue->ToString();
	}
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("delete from sisteminformasidesa.pesan where ID='"+this->txt_key->Text+"';", conn);
	MySqlDataReader^ dataReader;
	MySqlCommand^ connCmd2 = gcnew MySqlCommand("select ID, tanggal as 'Waktu Pengiriman', pengirim as Pengirim, isi_pesan as Pesan from sisteminformasidesa.pesan", conn);

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Pesan berhasil dihapus!!!");
		conn->Close();

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd2;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_pesan->DataSource = bSource;
		sda->Update(dbdataset);

	}

	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
