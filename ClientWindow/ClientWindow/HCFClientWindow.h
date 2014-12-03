//#pragma once
//#include "GameWindow.h"
//#include "Game.h"
//
//using System::Windows::Forms::OpenFileDialog;
//using System::IO::Stream;
//
//using namespace ClientWindow;
////ref class GameWindow;
//
//ref class HCFClientWindow{
//private:
//	GameWindow^ form;
//	Game ^ game;
//public:
//	HCFClientWindow(GameWindow^ f)
//	{
//		form = f;
//		game = gcnew Game();
//	}
//
//	void onLoad()
//	{
//		Stream^ in;
//		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
//		if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
//		{
//			if ( (in = openFileDialog1->OpenFile()) != nullptr )
//			{
//				 
//			// Insert code to read the stream here.
//			in->Close();
//			}
//		}
//	}
//};