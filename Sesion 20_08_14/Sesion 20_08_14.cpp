// Sesion 20_08_14.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "Form1.h"

using namespace Sesion20_08_14;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ning�n control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew Form1());
	return 0;
}