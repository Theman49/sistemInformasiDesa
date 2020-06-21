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
	/// Summary for pendidikanDesaReadOnly
	/// </summary>
	public ref class pendidikanDesaReadOnly : public System::Windows::Forms::UserControl
	{
	public:
		pendidikanDesaReadOnly(void)
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
		~pendidikanDesaReadOnly()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_sd;
	private: System::Windows::Forms::TextBox^ txt_smp;
	private: System::Windows::Forms::TextBox^ txt_sma;
	private: System::Windows::Forms::TextBox^ txt_edukasi;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_sd = (gcnew System::Windows::Forms::TextBox());
			this->txt_smp = (gcnew System::Windows::Forms::TextBox());
			this->txt_sma = (gcnew System::Windows::Forms::TextBox());
			this->txt_edukasi = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Program Edukasi :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 26);
			this->label3->TabIndex = 9;
			this->label3->Text = L"SMA / MA :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"SMP / MTs :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"SD / MI :";
			// 
			// txt_sd
			// 
			this->txt_sd->BackColor = System::Drawing::Color::Turquoise;
			this->txt_sd->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_sd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sd->Location = System::Drawing::Point(127, 33);
			this->txt_sd->Multiline = true;
			this->txt_sd->Name = L"txt_sd";
			this->txt_sd->Size = System::Drawing::Size(639, 60);
			this->txt_sd->TabIndex = 11;
			this->txt_sd->Text = L"a\r\na";
			// 
			// txt_smp
			// 
			this->txt_smp->BackColor = System::Drawing::Color::Turquoise;
			this->txt_smp->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_smp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_smp->Location = System::Drawing::Point(160, 124);
			this->txt_smp->Multiline = true;
			this->txt_smp->Name = L"txt_smp";
			this->txt_smp->Size = System::Drawing::Size(606, 60);
			this->txt_smp->TabIndex = 12;
			this->txt_smp->Text = L"a\r\na";
			// 
			// txt_sma
			// 
			this->txt_sma->BackColor = System::Drawing::Color::Turquoise;
			this->txt_sma->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_sma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sma->Location = System::Drawing::Point(160, 212);
			this->txt_sma->Multiline = true;
			this->txt_sma->Name = L"txt_sma";
			this->txt_sma->Size = System::Drawing::Size(606, 60);
			this->txt_sma->TabIndex = 13;
			this->txt_sma->Text = L"a\r\na";
			// 
			// txt_edukasi
			// 
			this->txt_edukasi->BackColor = System::Drawing::Color::Turquoise;
			this->txt_edukasi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_edukasi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edukasi->Location = System::Drawing::Point(221, 302);
			this->txt_edukasi->Multiline = true;
			this->txt_edukasi->Name = L"txt_edukasi";
			this->txt_edukasi->Size = System::Drawing::Size(545, 108);
			this->txt_edukasi->TabIndex = 14;
			this->txt_edukasi->Text = L"a\r\na\r\na\r\na";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Honeydew;
			this->panel1->Location = System::Drawing::Point(29, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(737, 1);
			this->panel1->TabIndex = 15;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Honeydew;
			this->panel2->Location = System::Drawing::Point(29, 190);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(737, 1);
			this->panel2->TabIndex = 16;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Honeydew;
			this->panel3->Location = System::Drawing::Point(29, 278);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(737, 1);
			this->panel3->TabIndex = 17;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Honeydew;
			this->panel4->Location = System::Drawing::Point(28, 416);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(737, 1);
			this->panel4->TabIndex = 17;
			// 
			// pendidikanDesaReadOnly
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txt_edukasi);
			this->Controls->Add(this->txt_sma);
			this->Controls->Add(this->txt_smp);
			this->Controls->Add(this->txt_sd);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"pendidikanDesaReadOnly";
			this->Size = System::Drawing::Size(790, 439);
			this->Load += gcnew System::EventHandler(this, &pendidikanDesaReadOnly::pendidikanDesaReadOnly_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pendidikanDesaReadOnly_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionInfo = L"datasource=localhost;port=3306;username=root;password=;";
		MySqlConnection^ conn = gcnew MySqlConnection(connectionInfo);
		MySqlCommand^ connCmd = gcnew MySqlCommand("select * from sisteminformasidesa.pendidikan;", conn);
		MySqlDataReader^ dataReader;

		try {
			conn->Open();
			dataReader = connCmd->ExecuteReader();

			while (dataReader->Read()) {
				String^ sd = dataReader->GetString("sd");
				this->txt_sd->Text = sd;
				String^ smp = dataReader->GetString("smp");
				this->txt_smp->Text = smp;
				String^ sma = dataReader->GetString("sma");
				this->txt_sma->Text = sma;
				String^ edukasi = dataReader->GetString("edukasi");
				this->txt_edukasi->Text = edukasi;
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
