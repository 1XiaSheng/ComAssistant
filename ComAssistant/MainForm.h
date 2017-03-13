#pragma once

namespace ComAssistant {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm 摘要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStripMain;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::ToolStripMenuItem^  mainToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  controleToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tCPCleintToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tCPServerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uDPclientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uDPServerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  comToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  portSetingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wellcomeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  webToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  charToHexToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hexToCharToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  luaToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: System::Windows::Forms::GroupBox^  groupBoxCom;
	private: System::Windows::Forms::GroupBox^  groupBoxComTransData;


	private: System::Windows::Forms::GroupBox^  groupBoxComSm;

	private: System::Windows::Forms::GroupBox^  groupBoxComPort;




	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::TextBox^  textBoxComSend;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxComRecived;

	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lport;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  portSetOk;
	private: System::Windows::Forms::ComboBox^  comboBox6;

















	protected:



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStripMain = (gcnew System::Windows::Forms::MenuStrip());
			this->mainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wellcomeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->controleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tCPCleintToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tCPServerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uDPclientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uDPServerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->portSetingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->charToHexToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hexToCharToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->luaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->webToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->groupBoxCom = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxComTransData = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxComSend = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxComRecived = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxComSm = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxComPort = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->portSetOk = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lport = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStripMain->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBoxCom->SuspendLayout();
			this->groupBoxComTransData->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBoxComSm->SuspendLayout();
			this->groupBoxComPort->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStripMain
			// 
			this->menuStripMain->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->mainToolStripMenuItem,
					this->fileToolStripMenuItem, this->controleToolStripMenuItem, this->portSetingToolStripMenuItem, this->toolsToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStripMain->Location = System::Drawing::Point(0, 0);
			this->menuStripMain->Name = L"menuStripMain";
			this->menuStripMain->Size = System::Drawing::Size(784, 25);
			this->menuStripMain->TabIndex = 1;
			this->menuStripMain->Text = L"menuStripMain";
			// 
			// mainToolStripMenuItem
			// 
			this->mainToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wellcomeToolStripMenuItem });
			this->mainToolStripMenuItem->Name = L"mainToolStripMenuItem";
			this->mainToolStripMenuItem->Size = System::Drawing::Size(49, 21);
			this->mainToolStripMenuItem->Text = L"Main";
			// 
			// wellcomeToolStripMenuItem
			// 
			this->wellcomeToolStripMenuItem->Name = L"wellcomeToolStripMenuItem";
			this->wellcomeToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->wellcomeToolStripMenuItem->Text = L"wellcome";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(39, 21);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->openToolStripMenuItem->Text = L"open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->saveToolStripMenuItem->Text = L"save";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->closeToolStripMenuItem->Text = L"close";
			// 
			// controleToolStripMenuItem
			// 
			this->controleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripMenuItem1,
					this->comToolStripMenuItem, this->tCPCleintToolStripMenuItem, this->tCPServerToolStripMenuItem, this->uDPclientToolStripMenuItem,
					this->uDPServerToolStripMenuItem
			});
			this->controleToolStripMenuItem->Name = L"controleToolStripMenuItem";
			this->controleToolStripMenuItem->Size = System::Drawing::Size(138, 21);
			this->controleToolStripMenuItem->Text = L"CommunicationType";
			this->controleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::controleToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(144, 22);
			this->toolStripMenuItem1->Text = L"RefreshPort";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem1_Click_1);
			// 
			// comToolStripMenuItem
			// 
			this->comToolStripMenuItem->Name = L"comToolStripMenuItem";
			this->comToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->comToolStripMenuItem->Text = L"Com";
			// 
			// tCPCleintToolStripMenuItem
			// 
			this->tCPCleintToolStripMenuItem->Name = L"tCPCleintToolStripMenuItem";
			this->tCPCleintToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->tCPCleintToolStripMenuItem->Text = L"TCPClient";
			// 
			// tCPServerToolStripMenuItem
			// 
			this->tCPServerToolStripMenuItem->Name = L"tCPServerToolStripMenuItem";
			this->tCPServerToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->tCPServerToolStripMenuItem->Text = L"TCPServer";
			// 
			// uDPclientToolStripMenuItem
			// 
			this->uDPclientToolStripMenuItem->Name = L"uDPclientToolStripMenuItem";
			this->uDPclientToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->uDPclientToolStripMenuItem->Text = L"UDPclient";
			// 
			// uDPServerToolStripMenuItem
			// 
			this->uDPServerToolStripMenuItem->Name = L"uDPServerToolStripMenuItem";
			this->uDPServerToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->uDPServerToolStripMenuItem->Text = L"UDPServer";
			// 
			// portSetingToolStripMenuItem
			// 
			this->portSetingToolStripMenuItem->Name = L"portSetingToolStripMenuItem";
			this->portSetingToolStripMenuItem->Size = System::Drawing::Size(80, 21);
			this->portSetingToolStripMenuItem->Text = L"PortSeting";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->charToHexToolStripMenuItem,
					this->hexToCharToolStripMenuItem, this->luaToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(52, 21);
			this->toolsToolStripMenuItem->Text = L"Tools";
			// 
			// charToHexToolStripMenuItem
			// 
			this->charToHexToolStripMenuItem->Name = L"charToHexToolStripMenuItem";
			this->charToHexToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->charToHexToolStripMenuItem->Text = L"CharToHex";
			// 
			// hexToCharToolStripMenuItem
			// 
			this->hexToCharToolStripMenuItem->Name = L"hexToCharToolStripMenuItem";
			this->hexToCharToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->hexToCharToolStripMenuItem->Text = L"HexToChar";
			// 
			// luaToolStripMenuItem
			// 
			this->luaToolStripMenuItem->Name = L"luaToolStripMenuItem";
			this->luaToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->luaToolStripMenuItem->Text = L"Lua";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->webToolStripMenuItem });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(55, 21);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// webToolStripMenuItem
			// 
			this->webToolStripMenuItem->Name = L"webToolStripMenuItem";
			this->webToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->webToolStripMenuItem->Text = L"web";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripStatusLabel3, this->toolStripStatusLabel4, this->toolStripStatusLabel5, this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 440);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(784, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &MainForm::toolStripStatusLabel1_Click);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel3->Text = L"toolStripStatusLabel3";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel4->Text = L"toolStripStatusLabel4";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel5->Text = L"toolStripStatusLabel5";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// groupBoxCom
			// 
			this->groupBoxCom->AutoSize = true;
			this->groupBoxCom->Controls->Add(this->groupBoxComTransData);
			this->groupBoxCom->Controls->Add(this->groupBoxComSm);
			this->groupBoxCom->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBoxCom->Location = System::Drawing::Point(0, 25);
			this->groupBoxCom->Name = L"groupBoxCom";
			this->groupBoxCom->Size = System::Drawing::Size(784, 415);
			this->groupBoxCom->TabIndex = 3;
			this->groupBoxCom->TabStop = false;
			this->groupBoxCom->Text = L"groupBoxCom";
			// 
			// groupBoxComTransData
			// 
			this->groupBoxComTransData->Controls->Add(this->groupBox8);
			this->groupBoxComTransData->Controls->Add(this->groupBox7);
			this->groupBoxComTransData->Location = System::Drawing::Point(209, 21);
			this->groupBoxComTransData->Name = L"groupBoxComTransData";
			this->groupBoxComTransData->Size = System::Drawing::Size(572, 277);
			this->groupBoxComTransData->TabIndex = 2;
			this->groupBoxComTransData->TabStop = false;
			this->groupBoxComTransData->Text = L"ComTransData";
			// 
			// groupBox8
			// 
			this->groupBox8->AutoSize = true;
			this->groupBox8->Controls->Add(this->textBoxComSend);
			this->groupBox8->Location = System::Drawing::Point(7, 135);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(550, 114);
			this->groupBox8->TabIndex = 1;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Send Data";
			// 
			// textBoxComSend
			// 
			this->textBoxComSend->AcceptsReturn = true;
			this->textBoxComSend->AcceptsTab = true;
			this->textBoxComSend->Location = System::Drawing::Point(7, 21);
			this->textBoxComSend->Multiline = true;
			this->textBoxComSend->Name = L"textBoxComSend";
			this->textBoxComSend->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxComSend->Size = System::Drawing::Size(537, 67);
			this->textBoxComSend->TabIndex = 0;
			// 
			// groupBox7
			// 
			this->groupBox7->AutoSize = true;
			this->groupBox7->Controls->Add(this->textBoxComRecived);
			this->groupBox7->Location = System::Drawing::Point(7, 20);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(550, 114);
			this->groupBox7->TabIndex = 0;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Recived Data";
			// 
			// textBoxComRecived
			// 
			this->textBoxComRecived->AcceptsReturn = true;
			this->textBoxComRecived->AcceptsTab = true;
			this->textBoxComRecived->Location = System::Drawing::Point(7, 20);
			this->textBoxComRecived->Multiline = true;
			this->textBoxComRecived->Name = L"textBoxComRecived";
			this->textBoxComRecived->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBoxComRecived->Size = System::Drawing::Size(537, 67);
			this->textBoxComRecived->TabIndex = 0;
			// 
			// groupBoxComSm
			// 
			this->groupBoxComSm->AutoSize = true;
			this->groupBoxComSm->Controls->Add(this->groupBoxComPort);
			this->groupBoxComSm->Location = System::Drawing::Point(7, 21);
			this->groupBoxComSm->Name = L"groupBoxComSm";
			this->groupBoxComSm->Size = System::Drawing::Size(203, 277);
			this->groupBoxComSm->TabIndex = 0;
			this->groupBoxComSm->TabStop = false;
			this->groupBoxComSm->Text = L"ComSm";
			// 
			// groupBoxComPort
			// 
			this->groupBoxComPort->AutoSize = true;
			this->groupBoxComPort->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->groupBoxComPort->Controls->Add(this->comboBox6);
			this->groupBoxComPort->Controls->Add(this->portSetOk);
			this->groupBoxComPort->Controls->Add(this->comboBox5);
			this->groupBoxComPort->Controls->Add(this->comboBox4);
			this->groupBoxComPort->Controls->Add(this->comboBox3);
			this->groupBoxComPort->Controls->Add(this->comboBox2);
			this->groupBoxComPort->Controls->Add(this->label6);
			this->groupBoxComPort->Controls->Add(this->label5);
			this->groupBoxComPort->Controls->Add(this->label4);
			this->groupBoxComPort->Controls->Add(this->label3);
			this->groupBoxComPort->Controls->Add(this->label2);
			this->groupBoxComPort->Controls->Add(this->lport);
			this->groupBoxComPort->Controls->Add(this->comboBox1);
			this->groupBoxComPort->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBoxComPort->Location = System::Drawing::Point(3, 17);
			this->groupBoxComPort->Name = L"groupBoxComPort";
			this->groupBoxComPort->Size = System::Drawing::Size(197, 216);
			this->groupBoxComPort->TabIndex = 0;
			this->groupBoxComPort->TabStop = false;
			this->groupBoxComPort->Text = L"ComPort";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(89, 143);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(99, 20);
			this->comboBox6->TabIndex = 8;
			// 
			// portSetOk
			// 
			this->portSetOk->AutoSize = true;
			this->portSetOk->Location = System::Drawing::Point(39, 173);
			this->portSetOk->Name = L"portSetOk";
			this->portSetOk->Size = System::Drawing::Size(99, 23);
			this->portSetOk->TabIndex = 7;
			this->portSetOk->Text = L"OK";
			this->portSetOk->UseVisualStyleBackColor = true;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(89, 118);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(99, 20);
			this->comboBox5->TabIndex = 6;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(89, 92);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(99, 20);
			this->comboBox4->TabIndex = 6;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(89, 66);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(99, 20);
			this->comboBox3->TabIndex = 5;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(89, 40);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(99, 20);
			this->comboBox2->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 12);
			this->label6->TabIndex = 3;
			this->label6->Text = L"flowcontrol";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 3;
			this->label5->Text = L"parity";
			this->label5->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"stopbits";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 3;
			this->label3->Text = L"databits";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"baudrate";
			// 
			// lport
			// 
			this->lport->AutoSize = true;
			this->lport->Location = System::Drawing::Point(11, 23);
			this->lport->Name = L"lport";
			this->lport->Size = System::Drawing::Size(29, 12);
			this->lport->TabIndex = 1;
			this->lport->Text = L"port";
			this->lport->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(89, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 20);
			this->comboBox1->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 462);
			this->Controls->Add(this->groupBoxCom);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStripMain);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuStripMain->ResumeLayout(false);
			this->menuStripMain->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBoxCom->ResumeLayout(false);
			this->groupBoxCom->PerformLayout();
			this->groupBoxComTransData->ResumeLayout(false);
			this->groupBoxComTransData->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBoxComSm->ResumeLayout(false);
			this->groupBoxComSm->PerformLayout();
			this->groupBoxComPort->ResumeLayout(false);
			this->groupBoxComPort->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void controleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void toolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
