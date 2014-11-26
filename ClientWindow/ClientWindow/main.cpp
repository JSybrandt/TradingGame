#include "MyForm.h"
using namespace ClientWindow;
#pragma comment(linker,"/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

[STAThreadAttribute]
int main(int argc, char *argv[]) {
    Application::Run(gcnew MyForm());
    return 0;
}

