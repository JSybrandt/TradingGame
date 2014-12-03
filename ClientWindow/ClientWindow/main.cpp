#include "GameWindow.h"
using namespace ClientWindow;
#pragma comment(linker,"/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

[STAThreadAttribute]
int main(int argc, char *argv[]) {
    Application::Run(gcnew GameWindow());
    return 0;
}

