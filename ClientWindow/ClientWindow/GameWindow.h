#pragma once

#include"Player.h"
#include"Game.h"
#include"Inventory.h"
#include"Item.h"

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










	private: System::Windows::Forms::NumericUpDown^  nudSellNumb;
	private: System::Windows::Forms::ComboBox^  cbSellItem;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  nudBuyNumb;
	private: System::Windows::Forms::ComboBox^  cbBuyItem;
	private: System::Windows::Forms::Label^  label6;

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

	private: System::Windows::Forms::Button^  buttTravel;
	private: System::Windows::Forms::Button^  buttSell;
	private: System::Windows::Forms::Button^  buttBuy;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PlayerItemCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  PlayerQuantityCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TownItemCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TownQuantityCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TownBuyCol;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TownSellCol;






















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
			this->buttTravel = (gcnew System::Windows::Forms::Button());
			this->buttSell = (gcnew System::Windows::Forms::Button());
			this->buttBuy = (gcnew System::Windows::Forms::Button());
			this->nudSellNumb = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbSellItem = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nudBuyNumb = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbBuyItem = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->TownItemCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownQuantityCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownBuyCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownSellCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerItemCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerQuantityCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudSellNumb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudBuyNumb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvPlayerInv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTownInfo))->BeginInit();
			this->SuspendLayout();
			// 
			// buttTravel
			// 
			this->buttTravel->Location = System::Drawing::Point(497, 33);
			this->buttTravel->Name = L"buttTravel";
			this->buttTravel->Size = System::Drawing::Size(248, 23);
			this->buttTravel->TabIndex = 18;
			this->buttTravel->Text = L"TRAVEL";
			this->buttTravel->UseVisualStyleBackColor = true;
			this->buttTravel->Click += gcnew System::EventHandler(this, &GameWindow::buttTravel_Click);
			// 
			// buttSell
			// 
			this->buttSell->Location = System::Drawing::Point(493, 97);
			this->buttSell->Name = L"buttSell";
			this->buttSell->Size = System::Drawing::Size(248, 23);
			this->buttSell->TabIndex = 17;
			this->buttSell->Text = L"SELL";
			this->buttSell->UseVisualStyleBackColor = true;
			// 
			// buttBuy
			// 
			this->buttBuy->Location = System::Drawing::Point(15, 97);
			this->buttBuy->Name = L"buttBuy";
			this->buttBuy->Size = System::Drawing::Size(248, 23);
			this->buttBuy->TabIndex = 4;
			this->buttBuy->Text = L"BUY";
			this->buttBuy->UseVisualStyleBackColor = true;
			// 
			// nudSellNumb
			// 
			this->nudSellNumb->Location = System::Drawing::Point(665, 71);
			this->nudSellNumb->Name = L"nudSellNumb";
			this->nudSellNumb->Size = System::Drawing::Size(76, 20);
			this->nudSellNumb->TabIndex = 16;
			// 
			// cbSellItem
			// 
			this->cbSellItem->FormattingEnabled = true;
			this->cbSellItem->Location = System::Drawing::Point(538, 70);
			this->cbSellItem->Name = L"cbSellItem";
			this->cbSellItem->Size = System::Drawing::Size(121, 21);
			this->cbSellItem->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(505, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Sell:";
			// 
			// nudBuyNumb
			// 
			this->nudBuyNumb->Location = System::Drawing::Point(187, 71);
			this->nudBuyNumb->Name = L"nudBuyNumb";
			this->nudBuyNumb->Size = System::Drawing::Size(76, 20);
			this->nudBuyNumb->TabIndex = 13;
			// 
			// cbBuyItem
			// 
			this->cbBuyItem->FormattingEnabled = true;
			this->cbBuyItem->Location = System::Drawing::Point(60, 70);
			this->cbBuyItem->Name = L"cbBuyItem";
			this->cbBuyItem->Size = System::Drawing::Size(121, 21);
			this->cbBuyItem->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Buy:";
			// 
			// lbGold
			// 
			this->lbGold->AutoSize = true;
			this->lbGold->Location = System::Drawing::Point(220, 9);
			this->lbGold->Name = L"lbGold";
			this->lbGold->Size = System::Drawing::Size(43, 13);
			this->lbGold->TabIndex = 9;
			this->lbGold->Text = L"(lbGold)";
			// 
			// lbPlayerName
			// 
			this->lbPlayerName->AutoSize = true;
			this->lbPlayerName->Location = System::Drawing::Point(57, 9);
			this->lbPlayerName->Name = L"lbPlayerName";
			this->lbPlayerName->Size = System::Drawing::Size(78, 13);
			this->lbPlayerName->TabIndex = 8;
			this->lbPlayerName->Text = L"(lbPlayerName)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Player Inventory:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(492, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Travel:";
			// 
			// cbLocationSelection
			// 
			this->cbLocationSelection->FormattingEnabled = true;
			this->cbLocationSelection->Location = System::Drawing::Point(538, 6);
			this->cbLocationSelection->Name = L"cbLocationSelection";
			this->cbLocationSelection->Size = System::Drawing::Size(203, 21);
			this->cbLocationSelection->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Current Location:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(184, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gold:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player:";
			// 
			// dgvPlayerInv
			// 
			this->dgvPlayerInv->AllowUserToAddRows = false;
			this->dgvPlayerInv->AllowUserToDeleteRows = false;
			this->dgvPlayerInv->AllowUserToResizeColumns = false;
			this->dgvPlayerInv->AllowUserToResizeRows = false;
			this->dgvPlayerInv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPlayerInv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->PlayerItemCol, 
				this->PlayerQuantityCol});
			this->dgvPlayerInv->Location = System::Drawing::Point(12, 160);
			this->dgvPlayerInv->Name = L"dgvPlayerInv";
			this->dgvPlayerInv->RowHeadersVisible = false;
			this->dgvPlayerInv->ShowCellErrors = false;
			this->dgvPlayerInv->ShowCellToolTips = false;
			this->dgvPlayerInv->ShowEditingIcon = false;
			this->dgvPlayerInv->ShowRowErrors = false;
			this->dgvPlayerInv->Size = System::Drawing::Size(288, 392);
			this->dgvPlayerInv->TabIndex = 0;
			// 
			// dgvTownInfo
			// 
			this->dgvTownInfo->AllowUserToAddRows = false;
			this->dgvTownInfo->AllowUserToDeleteRows = false;
			this->dgvTownInfo->AllowUserToResizeColumns = false;
			this->dgvTownInfo->AllowUserToResizeRows = false;
			this->dgvTownInfo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTownInfo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->TownItemCol, 
				this->TownQuantityCol, this->TownBuyCol, this->TownSellCol});
			this->dgvTownInfo->Location = System::Drawing::Point(306, 160);
			this->dgvTownInfo->Name = L"dgvTownInfo";
			this->dgvTownInfo->RowHeadersVisible = false;
			this->dgvTownInfo->ShowCellErrors = false;
			this->dgvTownInfo->ShowCellToolTips = false;
			this->dgvTownInfo->ShowEditingIcon = false;
			this->dgvTownInfo->ShowRowErrors = false;
			this->dgvTownInfo->Size = System::Drawing::Size(439, 392);
			this->dgvTownInfo->TabIndex = 1;
			// 
			// TownItemCol
			// 
			this->TownItemCol->HeaderText = L"Item";
			this->TownItemCol->Name = L"TownItemCol";
			// 
			// TownQuantityCol
			// 
			this->TownQuantityCol->HeaderText = L"Quantity";
			this->TownQuantityCol->Name = L"TownQuantityCol";
			// 
			// TownBuyCol
			// 
			this->TownBuyCol->HeaderText = L"Buy Price";
			this->TownBuyCol->Name = L"TownBuyCol";
			// 
			// TownSellCol
			// 
			this->TownSellCol->HeaderText = L"Sell Price";
			this->TownSellCol->Name = L"TownSellCol";
			// 
			// PlayerItemCol
			// 
			this->PlayerItemCol->HeaderText = L"Item";
			this->PlayerItemCol->Name = L"PlayerItemCol";
			// 
			// PlayerQuantityCol
			// 
			this->PlayerQuantityCol->HeaderText = L"Quantity";
			this->PlayerQuantityCol->Name = L"PlayerQuantityCol";
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 556);
			this->Controls->Add(this->buttBuy);
			this->Controls->Add(this->dgvTownInfo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvPlayerInv);
			this->Controls->Add(this->nudBuyNumb);
			this->Controls->Add(this->buttSell);
			this->Controls->Add(this->cbBuyItem);
			this->Controls->Add(this->buttTravel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->nudSellNumb);
			this->Controls->Add(this->cbSellItem);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lbPlayerName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbGold);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cbLocationSelection);
			this->Name = L"GameWindow";
			this->Text = L"GameWindow";
			this->Load += gcnew System::EventHandler(this, &GameWindow::GameWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudSellNumb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nudBuyNumb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvPlayerInv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTownInfo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion


		private: 
			Player* player;
			Game* game;

private: System::Void buttLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void buttTravel_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void GameWindow_Load(System::Object^  sender, System::EventArgs^  e) {
			player = new Player();
			game = new Game();
			UpdatePlayerDGV();

		 }


private: System::Void UpdatePlayerDGV()
		 {
			 dgvPlayerInv->Rows->Clear();
			for(Item i : *game->getItemReference())
			{
				DataGridViewRow^ r = gcnew DataGridViewRow;
				DataGridViewCell^ c1 = gcnew DataGridViewTextBoxCell;
				DataGridViewCell^ c2 = gcnew DataGridViewTextBoxCell;

				String^ itemName = gcnew String(i.getName().c_str());
				String^ itemNumb = Convert::ToString(player->getInventory()->getNumberOf(i));

				c1->Value = itemName;
				c2->Value = itemNumb;

				r->Cells->Add(c1);
				r->Cells->Add(c2);

				dgvPlayerInv->Rows->Add(r);
			}
		 }

};
}
