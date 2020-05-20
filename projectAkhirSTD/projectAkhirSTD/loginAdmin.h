#pragma once
#include "menuAdmin.h"
namespace projectAkhirSTD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for loginAdmin
	/// </summary>
	public ref class loginAdmin : public System::Windows::Forms::Form
	{
	public:
		loginAdmin(void)
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
		~loginAdmin()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginAdmin::typeid));
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txt_username
			// 
			this->txt_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_username->Location = System::Drawing::Point(53, 119);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(255, 35);
			this->txt_username->TabIndex = 1;
			this->txt_username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginAdmin::txt_username_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(47, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Gold;
			this->label2->Location = System::Drawing::Point(47, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 36);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// txt_password
			// 
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(53, 196);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(255, 35);
			this->txt_password->TabIndex = 3;
			this->txt_password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginAdmin::txt_password_KeyDown);
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(53, 250);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(87, 40);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Sign In";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &loginAdmin::btnOk_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(535, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &loginAdmin::exitToolStripMenuItem_Click);
			// 
			// loginAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(535, 355);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"loginAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Selamat Datang Admin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.admin where username='"+this->txt_username->Text+"' and password='"+this->txt_password->Text+"';", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			int count = 0;
			while (dataReader->Read()) {
				count = count + 1;
			}

			if (count == 1) {
				MessageBox::Show("Berhasil Login");
				this->Hide();
				menuAdmin^ menuAdm = gcnew menuAdmin();
				menuAdm->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("duplicate Login");
			}
			else {
				MessageBox::Show("Username dan Password tidak sesuai!!");
			}
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void txt_username_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		SendKeys::Send("{TAB}");
	}
}

private: System::Void txt_password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.admin where username='" + this->txt_username->Text + "' and password='" + this->txt_password->Text + "';", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			int count = 0;
			while (dataReader->Read()) {
				count = count + 1;
			}

			if (count == 1) {
				MessageBox::Show("Berhasil Login");
				this->Hide();
				menuAdmin^ menuAdm = gcnew menuAdmin();
				menuAdm->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("duplicate Login");
			}
			else {
				MessageBox::Show("Username dan Password tidak sesuai!!");
			}

		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
}
};
}
