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
	/// Summary for editPengumuman
	/// </summary>
	public ref class editPengumuman : public System::Windows::Forms::UserControl
	{
	public:
		editPengumuman(void)
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
		~editPengumuman()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_pengumuman;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ tanggal;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(editPengumuman::typeid));
			this->txt_pengumuman = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tanggal = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// txt_pengumuman
			// 
			this->txt_pengumuman->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_pengumuman->Location = System::Drawing::Point(16, 16);
			this->txt_pengumuman->Multiline = true;
			this->txt_pengumuman->Name = L"txt_pengumuman";
			this->txt_pengumuman->Size = System::Drawing::Size(557, 222);
			this->txt_pengumuman->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(16, 262);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(117, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Update";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editPengumuman::button1_Click);
			// 
			// tanggal
			// 
			this->tanggal->CustomFormat = L"yyyy/MM/dd";
			this->tanggal->Enabled = false;
			this->tanggal->Location = System::Drawing::Point(446, 273);
			this->tanggal->Name = L"tanggal";
			this->tanggal->Size = System::Drawing::Size(127, 20);
			this->tanggal->TabIndex = 2;
			// 
			// editPengumuman
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->Controls->Add(this->tanggal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_pengumuman);
			this->Name = L"editPengumuman";
			this->Size = System::Drawing::Size(590, 341);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("update sisteminformasidesa.pengumuman set isi_pengumuman='" + this->txt_pengumuman->Text + "', tanggal = '"+this->tanggal->Text+"' ;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();
			MessageBox::Show("Berhasil diupdate");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	

};
}
