#pragma once

#include"Player.h"
#include"Game.h"
#include"Inventory.h"
#include"Item.h"
#include "Town.h"

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

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  cbLocationSelection;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

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
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lbDay;
	private: System::Windows::Forms::Label^  lbCurrLoc;






















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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbLocationSelection = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dgvPlayerInv = (gcnew System::Windows::Forms::DataGridView());
			this->PlayerItemCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PlayerQuantityCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvTownInfo = (gcnew System::Windows::Forms::DataGridView());
			this->TownItemCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownQuantityCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownBuyCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TownSellCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbDay = (gcnew System::Windows::Forms::Label());
			this->lbCurrLoc = (gcnew System::Windows::Forms::Label());
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
			this->buttSell->Click += gcnew System::EventHandler(this, &GameWindow::buttSell_Click);
			// 
			// buttBuy
			// 
			this->buttBuy->Location = System::Drawing::Point(15, 97);
			this->buttBuy->Name = L"buttBuy";
			this->buttBuy->Size = System::Drawing::Size(248, 23);
			this->buttBuy->TabIndex = 4;
			this->buttBuy->Text = L"BUY";
			this->buttBuy->UseVisualStyleBackColor = true;
			this->buttBuy->Click += gcnew System::EventHandler(this, &GameWindow::buttBuy_Click);
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
			this->lbGold->Location = System::Drawing::Point(79, 9);
			this->lbGold->Name = L"lbGold";
			this->lbGold->Size = System::Drawing::Size(43, 13);
			this->lbGold->TabIndex = 9;
			this->lbGold->Text = L"(lbGold)";
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
			this->label2->Location = System::Drawing::Point(43, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Gold:";
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

			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(162, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Day:";
			// 
			// lbDay
			// 
			this->lbDay->AutoSize = true;
			this->lbDay->Enabled = false;
			this->lbDay->Location = System::Drawing::Point(197, 9);
			this->lbDay->Name = L"lbDay";
			this->lbDay->Size = System::Drawing::Size(40, 13);
			this->lbDay->TabIndex = 20;
			this->lbDay->Text = L"(lbDay)";
			// 
			// lbCurrLoc
			// 
			this->lbCurrLoc->AutoSize = true;
			this->lbCurrLoc->Enabled = false;
			this->lbCurrLoc->Location = System::Drawing::Point(397, 144);
			this->lbCurrLoc->Name = L"lbCurrLoc";
			this->lbCurrLoc->Size = System::Drawing::Size(58, 13);
			this->lbCurrLoc->TabIndex = 21;
			this->lbCurrLoc->Text = L"(lbCurrLoc)";
			// 
			// GameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(755, 556);
			this->Controls->Add(this->lbCurrLoc);
			this->Controls->Add(this->lbDay);
			this->Controls->Add(this->label8);
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
			this->Controls->Add(this->label7);
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
			Game* game;

private: System::Void buttLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }

private: System::Void buttTravel_Click(System::Object^  sender, System::EventArgs^  e) {

			 //TODO: actually travel
			UpdateAll();

			string event = game->getRandomEvent();
			String ^EventName = gcnew String(event.c_str());


			MessageBox::Show( "Event happened!!  " + EventName );

		 }
private: System::Void GameWindow_Load(System::Object^  sender, System::EventArgs^  e) {
			game = new Game();
			
			UpdateAll();

			cbLocationSelection->Items->Add("Newsham");
			cbLocationSelection->Items->Add("Wolfwater");
			cbLocationSelection->Items->Add("Oakheart");
			cbLocationSelection->Items->Add("Aberdeen");
			cbLocationSelection->Items->Add("Dornwich");
			cbLocationSelection->Items->Add("Snake's Canyon");
			cbLocationSelection->Items->Add("Icemeet");
			cbLocationSelection->Items->Add("Squall's End");
			cbLocationSelection->Items->Add("Everwinter");
			cbLocationSelection->Items->Add("Dragontail");	

			Controls->Add(cbLocationSelection);


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
				String^ itemNumb = Convert::ToString(game->getPlayer().getInventory().getNumberOf(i));

				c1->Value = itemName;
				c2->Value = itemNumb;

				r->Cells->Add(c1);
				r->Cells->Add(c2);

				dgvPlayerInv->Rows->Add(r);
			}
		 }

private: System::Void UpdateTownDGV()
		 {
			dgvTownInfo->Rows->Clear();
			for(Item i : *game->getItemReference())
			{
				if(game->getCurrentLocation().getInventory().getNumberOf(i) > 0)
				{
					DataGridViewRow^ r = gcnew DataGridViewRow;
					DataGridViewCell^ c1 = gcnew DataGridViewTextBoxCell;
					DataGridViewCell^ c2 = gcnew DataGridViewTextBoxCell;
					DataGridViewCell^ c3 = gcnew DataGridViewTextBoxCell;
					DataGridViewCell^ c4 = gcnew DataGridViewTextBoxCell;

					String^ itemName = gcnew String(i.getName().c_str());
					String^ itemNumb = Convert::ToString(game->getCurrentLocation().getInventory().getNumberOf(i));
					String^ buyPrice = Convert::ToString(game->getCurrentLocation().getBuyPrice(i));
					String^ sellPrice = Convert::ToString(game->getCurrentLocation().getSellPrice(i));

					c1->Value = itemName;
					c2->Value = itemNumb;
					c3->Value = buyPrice;
					c4->Value = sellPrice;

					r->Cells->Add(c1);
					r->Cells->Add(c2);
					r->Cells->Add(c3);
					r->Cells->Add(c4);

					dgvTownInfo->Rows->Add(r);
				}
			}
		 }

private: System::Void UpdateBuySellCB()
		 {
			cbBuyItem->Items->Clear();
			cbSellItem->Items->Clear();

			for(Item i : *game->getItemReference())
			{
				if(game->getCurrentLocation().getInventory().getNumberOf(i) > 0)
				{
					String^ item = gcnew String(i.getName().c_str());
					cbBuyItem->Items->Add(item);
					cbSellItem->Items->Add(item);
				}
			}
		 }

private: System::Void UpdateLabels()
		 {
			lbDay->Text =  Convert::ToString(game->getDayCount());
			lbCurrLoc->Text = gcnew String(game->getCurrentLocation().getName().c_str());
			lbGold->Text = Convert::ToString(game->getPlayer().getGold());
		 }

private: System::Void UpdateAll()
		 {
			UpdateLabels();
			UpdateBuySellCB();
			UpdatePlayerDGV();
			UpdateTownDGV();
		 }

private: Item getItemFromBuyComboBox()
		 {
			String ^ selected = cbBuyItem->Text;
			for(Item i : *game->getItemReference())
			{
				String ^ currItem = gcnew String(i.getName().c_str());
				if(selected->Equals(currItem))
					return i;
			}
			return Item("NULL",0);
		 }
private: Item getItemFromSellComboBox()
		 {
			String ^ selected = cbSellItem->Text;
			for(Item i : *game->getItemReference())
			{
				String ^ currItem = gcnew String(i.getName().c_str());
				if(selected->Equals(currItem))
					return i;
			}
			return Item("NULL",0);
		 }
private: System::Void buttBuy_Click(System::Object^  sender, System::EventArgs^  e) {

			 Item i = getItemFromBuyComboBox();

			 int amt = Convert::ToInt32(nudBuyNumb->Value);

			 if(i.getName()!="NULL")
			 {
				 game->attemptToBuy(i,amt);
			 }

			 UpdateAll();
		 }
private: System::Void buttSell_Click(System::Object^  sender, System::EventArgs^  e) {
			 Item i = getItemFromSellComboBox();

			 int amt = Convert::ToInt32(nudSellNumb->Value);

			  if(i.getName()!="NULL")
			 {
				 game->attemptToSell(i,amt);
			 }

			 UpdateAll();
		 }
};
}
