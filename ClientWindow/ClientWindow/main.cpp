/*
 Group #: Group 5
 Members: Justin Sybrandt, Caelan Mayberry, Seth Loew
 Course: COMP 322, Object Oriented & Advanced Programming
 Date: 12/3/2014
 Description: START
*/ 

#include "GameWindow.h"
using namespace ClientWindow;
#pragma comment(linker,"/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

[STAThreadAttribute]
int main(int argc, char *argv[]) {
    Application::Run(gcnew GameWindow());
    return 0;
}

