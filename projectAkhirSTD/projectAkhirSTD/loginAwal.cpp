#include "loginAwal.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	projectAkhirSTD::loginAwal form;
	MessageBox::Show("Selamat datang di Sistem Informasi Desa");
	Application::Run(% form);
}
