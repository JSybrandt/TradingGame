#pragma once

#include"HCFClientWindow.h"

namespace ClientWindow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GameWindow
	/// </summary>
	public ref class GameWindow : public System::Windows::Forms::Form
	{
	public:

		//HCFClientWindow^ hcf;

		GameWindow(void)
		{
			InitializeComponent();
			//hcf = gcnew HCFClientWindow(this);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::TabPage^  tabHistory;
	private: System::Windows::Forms::DataGridView^  dgvHistory;
	private: System::Windows::Forms::TabPage^  tabGame;


	private: System::Windows::Forms::NumericUpDown^  nudSellNumb;
	private: System::Windows::Forms::ComboBox^  cbSellItem;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  nudBuyNumb;
	private: System::Windows::Forms::ComboBox^  cbBuyItem;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lbCurrentLoc;
	private: System::Windows::Forms::Label^  lbGold;
	private: System::Windows::Forms::Label^  lbPlayerName;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  cbLocationSelection;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dgvPlayerInv;
	private: System::Windows::Forms::DataGridView^  dgvTownInfo;
	private: System::Windows::Forms::TabControl^  gameTab;
	private: System::Windows::Forms::Button^  buttTravel;
	private: System::Windows::Forms::Button^  buttSell;
	private: System::Windows::Forms::Button^  buttBuy;




















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabHistory = (gcnew System::Windows::Forms::TabPage());
			this->dgvHistory = (gcnew System::Windows::Forms::DataGridView());
			this->tabGame = (gcnew System::Windows::Forms::TabPage());
			this->nudSellNumb = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbSellItem = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nudBuyNumb = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbBuyItem = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbCurrentLoc = (gcnew System::Windows::Forms::Label());
			this->lbGold = (gcnew System::Windows::Forms::Label());
			this->lbPlayerName = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbLocationSelection = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvPlayerInv = (gcnew System::Windows::Forms::DataGridView());
			this->dgvTownInfo = (gcnew System::Windows::Forms::DataGridView());
			this->gameTab = (gcnew System::Windows::Forms::TabControl());
			this->buttBuy = (gcnew System::Windows::Forms::Button());
			this->buttSell = (gcnew System::Windows::Forms::Button());
			this->buttTravel = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->tabHistory->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvHistory))->BeginInit();
			this->tabGame->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudSellNumb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudBuyNumb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvPlayerInv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTownInfo))->BeginInit();
			this->gameTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(755, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->saveGameToolStripMenuItem, 
				this->loadToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveGameToolStripMenuItem
			// 
			this->saveGameToolStripMenuItem->Name = L"saveGameToolStripMenuItem";
			this->saveGameToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->saveGameToolStripMenuItem->Text = L"Save";
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->loadToolStripMenuItem->Text = L"Load";
			// 
			// tabHistory
			// 
			this->tabHistory->Controls->Add(this->dgvHistory);
			this->tabHistory->Location = System::Drawing::Point(4, 22);
			this->tabHistory->Name = L"tabHistory";
			this->tabHistory->Padding = System::Windows::Forms::Padding(3);
			this->tabHistory->Size = System::Drawing::Size(747, 532);
			this->tabHistory->TabIndex = 1;
			this->tabHistory->Text = L"History";
			this->tabHistory->UseVisualStyleBackColor = true;
			// 
			// dgvHistory
			// 
			this->dgvHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistory->Location = System::Drawing::Point(6, 6);
			this->dgvHistory->Name = L"dgvHistory";
			this->dgvHistory->Size = System::Drawing::Size(738, 517);
			this->dgvHistory->TabIndex = 0;
			// 
			// tabGame
			// 
			this->tabGame->Controls->Add(this->buttTravel);
			this->tabGame->Controls->Add(this->buttSell);
			this->tabGame->Controls->Add(this->buttBuy);
			this->tabGame->Controls->Add(this->nudSellNumb);
			this->tabGame->Controls->Add(this->cbSellItem);
			this->tabGame->Controls->Add(this->label7);
			this->tabGame->Controls->Add(this->nudBuyNumb);
			this->tabGame->Controls->Add(this->cbBuyItem);
			this->tabGame->Controls->Add(this->label6);
			this->tabGame->Controls->Add(this->lbCurrentLoc);
			this->tabGame->Controls->Add(this->lbGold);
			this->tabGame->Controls->Add(this->lbPlayerName);
			this->tabGame->Controls->Add(this->label5);
			this->tabGame->Controls->Add(this->label4);
			this->tabGame->Controls->Add(this->cbLocationSelection);
			this->tabGame->Controls->Add(this->label3);
			this->tabGame->Controls->Add(this->label2);
			this->tabGame->Controls->Add(this->label1);
			this->tabGame->Controls->Add(this->dgvPlayerInv);
			this->tabGame->Controls->Add(this->dgvTownInfo);
			this->tabGame->Location = System::Drawing::Point(4, 22);
			this->tabGame->Name = L"tabGame";
			this->tabGame->Padding = System::Windows::Forms::Padding(3);
			this->tabGame->Size = System::Drawing::Size(747, 532);
			this->tabGame->TabIndex = 0;
			this->tabGame->Text = L"Game";
			this->tabGame->UseVisualStyleBackColor = true;
			// 
			// nudSellNumb
			// 
			this->nudSellNumb->Location = System::Drawing::Point(663, 77);
			this->nudSellNumb->Name = L"nudSellNumb";
			this->nudSellNumb->Size = System::Drawing::Size(76, 20);
			this->nudSellNumb->TabIndex = 16;
			// 
			// cbSellItem
			// 
			this->cbSellItem->FormattingEnabled = true;
			this->cbSellItem->Location = System::Drawing::Point(536, 76);
			this->cbSellItem->Name = L"cbSellItem";
			this->cbSellItem->Size = System::Drawing::Size(121, 21);
			this->cbSellItem->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(503, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Sell:";
			// 
			// nudBuyNumb
			// 
			this->nudBuyNumb->Location = System::Drawing::Point(183, 77);
			this->nudBuyNumb->Name = L"nudBuyNumb";
			this->nudBuyNumb->Size = System::Drawing::Size(76, 20);
			this->nudBuyNumb->TabIndex = 13;
			// 
			// cbBuyItem
			// 
			this->cbBuyItem->FormattingEnabled = true;
			this->cbBuyItem->Location = System::Drawing::Point(56, 76);
			this->cbBuyItem->Name = L"cbBuyItem";
			this->cbBuyItem->Size = System::Drawing::Size(121, 21);
			this->cbBuyItem->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Buy:";
			// 
			// lbCurrentLoc
			// 
			this->lbCurrentLoc->AutoSize = true;
			this->lbCurrentLoc->Location = System::Drawing::Point(393, 147);
			this->lbCurrentLoc->Name = L"lbCurrentLoc";
			this->lbCurrentLoc->Size = System::Drawing::Size(73, 13);
			this->lbCurrentLoc->TabIndex = 10;
			this->lbCurrentLoc->Text = L"(lbCurrentLoc)";
			// 
			// lbGold
			// 
			this->lbGold->AutoSize = true;
			this->lbGold->Location = System::Drawing::Point(218, 15);
			this->lbGold->Name = L"lbGold";
			this->lbGold->Size = System::Drawing::Size(43, 13);
			this->lbGold->TabIndex = 9;
			this->lbGold->Text = L"(lbGold)";
			// 
			// lbPlayerName
			// 
			this->lbPlayerName->AutoSize = true;
			this->lbPlayerName->Location = System::Drawing::Point(53, 12);
			this->lbPlayerName->Name = L"lbPlayerName";
			this->lbPlayerName->Size = System::Drawing::Size(78, 13);
			this->lbPlayerName->TabIndex = 8;
			this->lbPlayerName->Text = L"(lbPlayerName)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Player Inventory:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(490, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Travel:";
			// 
			// cbLocationSelection
			// 
			this->cbLocationSelection->FormattingEnabled = true;
			this->cbLocationSelection->Location = System::Drawing::Point(536, 15);
			this->cbLocationSelection->Name = L"cbLocationSelection";
			this->cbLocationSelection->Size = System::Drawing::Size(203, 21);
			this->cbLocationSelection->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(299, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Current Location:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(180, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gold:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player:";
			// 
			// dgvPlayerInv
			// 
			this->dgvPlayerInv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlayerInv->Location = System::Drawing::Point(6, 180);
			this->dgvPlayerInv->Name = L"dgvPlayerInv";
			this->dgvPlayerInv->Size = System::Drawing::Size(253, 343);
			this->dgvPlayerInv->TabIndex = 0;
			// 
			// dgvTownInfo
			// 
			this->dgvTownInfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTownInfo->Location = System::Drawing::Point(302, 180);
			this->dgvTownInfo->Name = L"dgvTownInfo";
			this->dgvTownInfo->Size = System::Drawing::Size(439, 342);
			this->dgvTownInfo->TabIndex = 1;
			// 
			// gameTab
			// 
			this->gameTab->Controls->Add(this->tabGame);
			this->gameTab->Controls->Add(this->tabHistory);
			this->gameTab->Location = System::Drawing::Point(0, 0);
			this->gameTab->Name = L"gameTab";
			this->gameTab->SelectedIndex = 0;
			this->gameTab->Size = System::Drawing::Size(755, 558);
			this->gameTab->TabIndex = 3;
			// 
			// buttBuy
			// 
			this->buttBuy->Location = System::Drawing::Point(11, 103);
			this->buttBuy->Name = L"buttBuy";
			this->buttBuy->Size = System::Drawing::Size(248, 23);
			this->buttBuy->TabIndex = 4;
			this->buttBuy->Text = L"BUY";
			this->buttBuy->UseVisualStyleBackColor = true;
			// 
			// buttSell
			// 
			this->buttSell->Location = System::Drawing::Point(491, 103);
			this->buttSell->Name = L"buttSell";
			this->buttSell->Size = System::Drawing::Size(248, 23);
			this->buttSell->TabIndex = 17;
			this->buttSell->Text = L"SELL";
			this->buttSell->UseVisualStyleBackColor = true;
			// 
			// buttTravel
			// 
			this->buttTravel->Location = System::Drawing::Point(491, 42);
			this->buttTravel->Name = L"buttTravel";
			this->buttTravel->Size = System::Drawing::Size(248, 23);
			this->buttTravel->TabIndex = 18;
			this->buttTravel->Text = L"TRAVEL";
			this->buttTravel->UseVisualStyleBackColor = true;
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 556);
			this->Controls->Add(this->gameTab);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GameWindow";
			this->Text = L"GameWindow";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabHistory->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvHistory))->EndInit();
			this->tabGame->ResumeLayout(false);
			this->tabGame->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudSellNumb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudBuyNumb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvPlayerInv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTownInfo))->EndInit();
			this->gameTab->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			// hcf->onLoad();
		 }
};
}
