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
	/// Summary for budayaDesa
	/// </summary>
	public ref class budayaDesa : public System::Windows::Forms::UserControl
	{
	public:
		budayaDesa(void)
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
		~budayaDesa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btn_fix;
	private: System::Windows::Forms::TextBox^ txt_search;
	private: System::Windows::Forms::TextBox^ txt_replace;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_fix2;
	private: System::Windows::Forms::Button^ btn_fix4;


	private: System::Windows::Forms::Button^ btn_fix3;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(budayaDesa::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_fix = (gcnew System::Windows::Forms::Button());
			this->txt_search = (gcnew System::Windows::Forms::TextBox());
			this->txt_replace = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_fix2 = (gcnew System::Windows::Forms::Button());
			this->btn_fix4 = (gcnew System::Windows::Forms::Button());
			this->btn_fix3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(21, 16);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(208, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->Location = System::Drawing::Point(21, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(208, 153);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->Location = System::Drawing::Point(235, 172);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(208, 153);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Location = System::Drawing::Point(235, 16);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(208, 150);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(70, 135);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(124, 31);
			this->btn1->TabIndex = 4;
			this->btn1->Text = L"Upload";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &budayaDesa::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(277, 135);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(124, 31);
			this->btn2->TabIndex = 5;
			this->btn2->Text = L"Upload";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &budayaDesa::btn2_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(277, 294);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(124, 31);
			this->btn4->TabIndex = 7;
			this->btn4->Text = L"Upload";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &budayaDesa::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(70, 294);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(124, 31);
			this->btn3->TabIndex = 6;
			this->btn3->Text = L"Upload";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &budayaDesa::btn3_Click);
			// 
			// btn_save
			// 
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->Location = System::Drawing::Point(454, 294);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(124, 31);
			this->btn_save->TabIndex = 8;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &budayaDesa::btn_save_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(455, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 20);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(455, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(95, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(455, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(95, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(455, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(95, 20);
			this->textBox4->TabIndex = 11;
			// 
			// btn_fix
			// 
			this->btn_fix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_fix->Location = System::Drawing::Point(548, 16);
			this->btn_fix->Margin = System::Windows::Forms::Padding(1);
			this->btn_fix->Name = L"btn_fix";
			this->btn_fix->Size = System::Drawing::Size(28, 35);
			this->btn_fix->TabIndex = 13;
			this->btn_fix->Text = L"Fix";
			this->btn_fix->UseVisualStyleBackColor = true;
			this->btn_fix->Click += gcnew System::EventHandler(this, &budayaDesa::btn_fix_Click);
			// 
			// txt_search
			// 
			this->txt_search->Location = System::Drawing::Point(455, 194);
			this->txt_search->Name = L"txt_search";
			this->txt_search->ReadOnly = true;
			this->txt_search->Size = System::Drawing::Size(123, 20);
			this->txt_search->TabIndex = 15;
			this->txt_search->Text = L"\\";
			// 
			// txt_replace
			// 
			this->txt_replace->Location = System::Drawing::Point(454, 237);
			this->txt_replace->Name = L"txt_replace";
			this->txt_replace->ReadOnly = true;
			this->txt_replace->Size = System::Drawing::Size(123, 20);
			this->txt_replace->TabIndex = 14;
			this->txt_replace->Text = L"/";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(452, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 17);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Find";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(451, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 17);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Replace";
			// 
			// btn_fix2
			// 
			this->btn_fix2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_fix2->Location = System::Drawing::Point(549, 48);
			this->btn_fix2->Margin = System::Windows::Forms::Padding(1);
			this->btn_fix2->Name = L"btn_fix2";
			this->btn_fix2->Size = System::Drawing::Size(28, 35);
			this->btn_fix2->TabIndex = 18;
			this->btn_fix2->Text = L"Fix";
			this->btn_fix2->UseVisualStyleBackColor = true;
			this->btn_fix2->Click += gcnew System::EventHandler(this, &budayaDesa::btn_fix2_Click);
			// 
			// btn_fix4
			// 
			this->btn_fix4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_fix4->Location = System::Drawing::Point(548, 106);
			this->btn_fix4->Margin = System::Windows::Forms::Padding(1);
			this->btn_fix4->Name = L"btn_fix4";
			this->btn_fix4->Size = System::Drawing::Size(28, 35);
			this->btn_fix4->TabIndex = 20;
			this->btn_fix4->Text = L"Fix";
			this->btn_fix4->UseVisualStyleBackColor = true;
			this->btn_fix4->Click += gcnew System::EventHandler(this, &budayaDesa::btn_fix4_Click);
			// 
			// btn_fix3
			// 
			this->btn_fix3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_fix3->Location = System::Drawing::Point(549, 74);
			this->btn_fix3->Margin = System::Windows::Forms::Padding(1);
			this->btn_fix3->Name = L"btn_fix3";
			this->btn_fix3->Size = System::Drawing::Size(28, 35);
			this->btn_fix3->TabIndex = 19;
			this->btn_fix3->Text = L"Fix";
			this->btn_fix3->UseVisualStyleBackColor = true;
			this->btn_fix3->Click += gcnew System::EventHandler(this, &budayaDesa::btn_fix3_Click);
			// 
			// budayaDesa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->Controls->Add(this->btn_fix4);
			this->Controls->Add(this->btn_fix3);
			this->Controls->Add(this->btn_fix2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_search);
			this->Controls->Add(this->txt_replace);
			this->Controls->Add(this->btn_fix);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"budayaDesa";
			this->Size = System::Drawing::Size(590, 341);
			this->Load += gcnew System::EventHandler(this, &budayaDesa::budayaDesa_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "JPG Files(*.jpg)|*.jpg|PNG Files(*.png)|*.png|All Files(*.*)|*.*";
	dialog->Title = "Select a pictures";

	if (dialog->ShowDialog() == ::DialogResult::OK) {
		String^ picPath = dialog->FileName->ToString();
		pictureBox1->ImageLocation = picPath;
		this->textBox1->Text = picPath;
	}
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "JPG Files(*.jpg)|*.jpg|PNG Files(*.png)|*.png|All Files(*.*)|*.*";
	dialog->Title = "Select a pictures";

	if (dialog->ShowDialog() == ::DialogResult::OK) {
		String^ picPath = dialog->FileName->ToString();
		pictureBox2->ImageLocation = picPath;
		this->textBox2->Text = picPath;
	}
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "JPG Files(*.jpg)|*.jpg|PNG Files(*.png)|*.png|All Files(*.*)|*.*";
	dialog->Title = "Select a pictures";

	if (dialog->ShowDialog() == ::DialogResult::OK) {
		String^ picPath = dialog->FileName->ToString();
		pictureBox3->ImageLocation = picPath;
		this->textBox3->Text = picPath;
	}
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "JPG Files(*.jpg)|*.jpg|PNG Files(*.png)|*.png|All Files(*.*)|*.*";
	dialog->Title = "Select a pictures";

	if (dialog->ShowDialog() == ::DialogResult::OK) {
		String^ picPath = dialog->FileName->ToString();
		pictureBox4->ImageLocation = picPath;
		this->textBox4->Text = picPath;
	}
}
private: System::Void btn_fix_Click(System::Object^ sender, System::EventArgs^ e) {
	int location;
	String^ myString;
	String^ replace;
	String^ search;

	myString = this->textBox1->Text;
	search = this->txt_search->Text->Trim();
	replace = this->txt_replace->Text->Trim();
	location = this->textBox1->Text->LastIndexOf(search);

	if (location == -1) {
		MessageBox::Show("String not found", "no change occured");
	}
	else {
		this->textBox1->Text = myString->Remove(location, search->Length)->Insert(location, replace);
	}
}
private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.foto set image1='" + this->textBox1->Text + "', image2='" + this->textBox2->Text + "', image3='" + this->textBox3->Text + "', image4='" + this->textBox4->Text + "';", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		/*	connCmd->Parameters->Add(gcnew MySqlParameter("@IMG", imageBt));*/
		dataReader = connCmd->ExecuteReader();
		MessageBox::Show("Berhasil diupdate");


	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void budayaDesa_Load(System::Object^ sender, System::EventArgs^ e) {
	String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
	MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.foto;", conn);
	MySqlDataReader^ dataReader;

	try {
		conn->Open();
		dataReader = connCmd->ExecuteReader();

		while (dataReader->Read()) {

			this->pictureBox1->ImageLocation = dataReader->GetString("image1");
			this->textBox1->Text = dataReader->GetString("image1");
			this->pictureBox2->ImageLocation = dataReader->GetString("image2");
			this->textBox2->Text = dataReader->GetString("image2");
			this->pictureBox3->ImageLocation = dataReader->GetString("image3");
			this->textBox3->Text = dataReader->GetString("image3");
			this->pictureBox4->ImageLocation = dataReader->GetString("image4");
			this->textBox4->Text = dataReader->GetString("image4");
		}

	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void btn_fix4_Click(System::Object^ sender, System::EventArgs^ e) {
	int location;
	String^ myString;
	String^ replace;
	String^ search;

	myString = this->textBox4->Text;
	search = this->txt_search->Text->Trim();
	replace = this->txt_replace->Text->Trim();
	location = this->textBox4->Text->LastIndexOf(search);

	if (location == -1) {
		MessageBox::Show("String not found", "no change occured");
	}
	else {
		this->textBox4->Text = myString->Remove(location, search->Length)->Insert(location, replace);
	}
}
private: System::Void btn_fix3_Click(System::Object^ sender, System::EventArgs^ e) {
	int location;
	String^ myString;
	String^ replace;
	String^ search;

	myString = this->textBox3->Text;
	search = this->txt_search->Text->Trim();
	replace = this->txt_replace->Text->Trim();
	location = this->textBox3->Text->LastIndexOf(search);

	if (location == -1) {
		MessageBox::Show("String not found", "no change occured");
	}
	else {
		this->textBox3->Text = myString->Remove(location, search->Length)->Insert(location, replace);
	}
}
private: System::Void btn_fix2_Click(System::Object^ sender, System::EventArgs^ e) {
	int location;
	String^ myString;
	String^ replace;
	String^ search;

	myString = this->textBox2->Text;
	search = this->txt_search->Text->Trim();
	replace = this->txt_replace->Text->Trim();
	location = this->textBox2->Text->LastIndexOf(search);

	if (location == -1) {
		MessageBox::Show("String not found", "no change occured");
	}
	else {
		this->textBox2->Text = myString->Remove(location, search->Length)->Insert(location, replace);
	}
}
};
}
