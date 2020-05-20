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
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dg_pesan;


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
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dg_pesan = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_pesan))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(914, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &lihatPesan::backToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &lihatPesan::exitToolStripMenuItem_Click);
			// 
			// dg_pesan
			// 
			this->dg_pesan->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_pesan->Location = System::Drawing::Point(16, 35);
			this->dg_pesan->Name = L"dg_pesan";
			this->dg_pesan->Size = System::Drawing::Size(873, 328);
			this->dg_pesan->TabIndex = 1;
			// 
			// lihatPesan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(914, 476);
			this->Controls->Add(this->dg_pesan);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"lihatPesan";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"lihatPesan";
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
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void lihatPesan_Load(System::Object^ sender, System::EventArgs^ e) {

	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.pesan", conn);
	
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
};
}
