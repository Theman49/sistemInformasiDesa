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
		Form^ home;
		loginAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		loginAdmin(Form^ loginAdm)
		{
			home = loginAdm;
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


	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ backToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->backToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_username
			// 
			this->txt_username->BackColor = System::Drawing::Color::FloralWhite;
			this->txt_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_username->Font = (gcnew System::Drawing::Font(L"Clarendon Lt BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_username->Location = System::Drawing::Point(102, 198);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(217, 29);
			this->txt_username->TabIndex = 1;
			this->txt_username->Text = L"Username";
			this->txt_username->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginAdmin::txt_username_KeyDown);
			// 
			// txt_password
			// 
			this->txt_password->BackColor = System::Drawing::Color::FloralWhite;
			this->txt_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(102, 251);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(217, 28);
			this->txt_password->TabIndex = 3;
			this->txt_password->Text = L"Password";
			this->txt_password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginAdmin::txt_password_KeyDown);
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::PowderBlue;
			this->btnOk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(64, 314);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(255, 40);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Sign In";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &loginAdmin::btnOk_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->backToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(381, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// backToolStripMenuItem
			// 
			this->backToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backToolStripMenuItem.Image")));
			this->backToolStripMenuItem->Name = L"backToolStripMenuItem";
			this->backToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->backToolStripMenuItem->Text = L"Back";
			this->backToolStripMenuItem->Click += gcnew System::EventHandler(this, &loginAdmin::backToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &loginAdmin::exitToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(127, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(126, 139);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(64, 285);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(255, 2);
			this->panel1->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(64, 232);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(255, 2);
			this->panel2->TabIndex = 9;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(64, 194);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(64, 247);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 32);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// loginAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(381, 376);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"loginAdmin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Selamat Datang Admin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
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
private: System::Void backToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	home->Show();
}
};
}
