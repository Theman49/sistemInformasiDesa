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
	/// Summary for editDataAdmin
	/// </summary>
	public ref class editDataAdmin : public System::Windows::Forms::Form
	{
	public:
		Form^ menuAdm;
		editDataAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		editDataAdmin(Form^ editAdm)
		{
			menuAdm = editAdm;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editDataAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:





	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(editDataAdmin::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(470, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->ToolTipText = L"Kembali ke menu admin";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &editDataAdmin::backToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &editDataAdmin::exitToolStripMenuItem_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(322, 232);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(79, 37);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &editDataAdmin::btnUpdate_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::OldLace;
			this->label2->Location = System::Drawing::Point(63, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 26);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Password";
			// 
			// txt_password
			// 
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(182, 177);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(219, 32);
			this->txt_password->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::OldLace;
			this->label1->Location = System::Drawing::Point(63, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Username";
			// 
			// txt_username
			// 
			this->txt_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_username->Location = System::Drawing::Point(182, 123);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(219, 32);
			this->txt_username->TabIndex = 6;
			// 
			// editDataAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(470, 351);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"editDataAdmin";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Edit Database Admin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}



private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	//
		// dg_warga MySql
		//
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.admin set username='"+this->txt_username->Text+"', password='"+this->txt_password->Text+"';", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		

		if (this->txt_username->Text == "" || this->txt_password->Text == "") {
			MessageBox::Show("username atau password kosong");
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






private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	menuAdm->Show();
}
};
}
