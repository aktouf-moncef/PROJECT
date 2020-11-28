#include "MainForm.h"
#include "MainForm.h"
#include<Windows.h>
#include "SecondForm.h"


using namespace PROJECT;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MainForm());

    return 0;
}
