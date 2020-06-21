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
	/// Summary for dataPenduduk
	/// </summary>
	public ref class dataPenduduk : public System::Windows::Forms::UserControl
	{
	public:
		dataPenduduk(void)
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
		~dataPenduduk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dg_warga;
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
			this->dg_warga = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->BeginInit();
			this->SuspendLayout();
			// 
			// dg_warga
			// 
			this->dg_warga->AllowUserToAddRows = false;
			this->dg_warga->AllowUserToDeleteRows = false;
			this->dg_warga->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dg_warga->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dg_warga->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_warga->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dg_warga->Location = System::Drawing::Point(0, 0);
			this->dg_warga->Name = L"dg_warga";
			this->dg_warga->ReadOnly = true;
			this->dg_warga->Size = System::Drawing::Size(790, 439);
			this->dg_warga->TabIndex = 0;
			// 
			// dataPenduduk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dg_warga);
			this->Name = L"dataPenduduk";
			this->Size = System::Drawing::Size(790, 439);
			this->Load += gcnew System::EventHandler(this, &dataPenduduk::dataPenduduk_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_warga))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataPenduduk_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select nomor as No,nama_warga as Nama,agama as Agama,pendidikan as Pendidikan,jenis_pekerjaan as 'Jenis Pekerjaan' from sisteminformasidesa.warga;", conn);
		
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = connCmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dg_warga->DataSource = bSource;
		sda->Update(dbdataset);

	}
	};
}
