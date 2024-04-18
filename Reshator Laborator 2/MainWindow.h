#pragma once
#include "Core.h"
#include "resource.h"

namespace ReshatorLaborator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
		}

	protected:
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ flowey;
	private: System::Windows::Forms::PictureBox^ floweyBottom;
	private: System::Windows::Forms::PictureBox^ floweyTop;
	private: System::Windows::Forms::PictureBox^ logo3;
	private: System::Windows::Forms::PictureBox^ logo2;
	private: System::Windows::Forms::PictureBox^ logo1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;


	private: System::Windows::Forms::Timer^ intro;
	private: System::Windows::Forms::Timer^ animations;
	private: System::Windows::Forms::Timer^ flowey_show;
	private: System::Windows::Forms::Timer^ flowey_hide;
	private: System::Windows::Forms::Timer^ flowey_shot;
	private: System::Windows::Forms::Timer^ miss;
	private: System::Windows::Forms::Timer^ to_settings;
	private: System::Windows::Forms::Timer^ settings_to_menu;
	private: System::Windows::Forms::Timer^ lab_choice;
	private: System::Windows::Forms::Timer^ lab_choice_to_menu;
	private: System::Windows::Forms::Timer^ task_choice;
	private: System::Windows::Forms::Timer^ task_resolve;
	private: System::Windows::Forms::Timer^ text_write;
	private: System::Windows::Forms::Timer^ to_menu;
	private: System::Windows::Forms::Timer^ func_custom;
	private: System::Windows::Forms::Timer^ func_reset;
	private: System::Windows::Forms::Timer^ task_resolve_to_choice;


	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->flowey = (gcnew System::Windows::Forms::Panel());
			this->floweyTop = (gcnew System::Windows::Forms::PictureBox());
			this->floweyBottom = (gcnew System::Windows::Forms::PictureBox());
			this->logo3 = (gcnew System::Windows::Forms::PictureBox());
			this->logo2 = (gcnew System::Windows::Forms::PictureBox());
			this->logo1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->intro = (gcnew System::Windows::Forms::Timer(this->components));
			this->animations = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowey_show = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowey_hide = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowey_shot = (gcnew System::Windows::Forms::Timer(this->components));
			this->miss = (gcnew System::Windows::Forms::Timer(this->components));
			this->to_settings = (gcnew System::Windows::Forms::Timer(this->components));
			this->settings_to_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->lab_choice = (gcnew System::Windows::Forms::Timer(this->components));
			this->lab_choice_to_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->task_choice = (gcnew System::Windows::Forms::Timer(this->components));
			this->task_resolve = (gcnew System::Windows::Forms::Timer(this->components));
			this->text_write = (gcnew System::Windows::Forms::Timer(this->components));
			this->to_menu = (gcnew System::Windows::Forms::Timer(this->components));
			this->func_custom = (gcnew System::Windows::Forms::Timer(this->components));
			this->func_reset = (gcnew System::Windows::Forms::Timer(this->components));
			this->task_resolve_to_choice = (gcnew System::Windows::Forms::Timer(this->components));
			this->flowey->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floweyTop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floweyBottom))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo1))->BeginInit();
			this->SuspendLayout();
			// 
			// flowey
			// 
			this->flowey->Controls->Add(this->floweyTop);
			this->flowey->Controls->Add(this->floweyBottom);
			this->flowey->Location = System::Drawing::Point(12, 56);
			this->flowey->Name = L"flowey";
			this->flowey->Size = System::Drawing::Size(50, 50);
			this->flowey->TabIndex = 17;
			// 
			// floweyTop
			// 
			this->floweyTop->Location = System::Drawing::Point(-3, 75);
			this->floweyTop->Name = L"floweyTop";
			this->floweyTop->Size = System::Drawing::Size(248, 76);
			this->floweyTop->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->floweyTop->TabIndex = 4;
			this->floweyTop->TabStop = false;
			this->floweyTop->Click += gcnew System::EventHandler(this, &MainWindow::floweyTop_Click);
			// 
			// floweyBottom
			// 
			this->floweyBottom->Location = System::Drawing::Point(93, 157);
			this->floweyBottom->Name = L"floweyBottom";
			this->floweyBottom->Size = System::Drawing::Size(60, 72);
			this->floweyBottom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->floweyBottom->TabIndex = 5;
			this->floweyBottom->TabStop = false;
			// 
			// logo3
			// 
			this->logo3->Location = System::Drawing::Point(35, 459);
			this->logo3->Name = L"logo3";
			this->logo3->Size = System::Drawing::Size(39, 46);
			this->logo3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logo3->TabIndex = 15;
			this->logo3->TabStop = false;
			// 
			// logo2
			// 
			this->logo2->Location = System::Drawing::Point(12, 459);
			this->logo2->Name = L"logo2";
			this->logo2->Size = System::Drawing::Size(132, 24);
			this->logo2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logo2->TabIndex = 14;
			this->logo2->TabStop = false;
			// 
			// logo1
			// 
			this->logo1->Location = System::Drawing::Point(20, 468);
			this->logo1->Name = L"logo1";
			this->logo1->Size = System::Drawing::Size(132, 25);
			this->logo1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->logo1->TabIndex = 3;
			this->logo1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(172, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 52);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Лабораторная работа";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(270, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(500, 104);
			this->label2->TabIndex = 19;
			this->label2->Text = L"1";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(-58, 459);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 64);
			this->label3->TabIndex = 20;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel->Location = System::Drawing::Point(12, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(50, 50);
			this->panel->TabIndex = 18;
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->input->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->input->Location = System::Drawing::Point(111, 300);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(100, 35);
			this->input->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(-53, 446);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 125);
			this->button1->TabIndex = 0;
			this->button1->Text = L"СТАРТ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button2->Location = System::Drawing::Point(68, 131);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(623, 249);
			this->button2->TabIndex = 1;
			this->button2->Text = L"НАСТРОЙКИ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button3->Location = System::Drawing::Point(241, 410);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(300, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ВЫХОД";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button4->Location = System::Drawing::Point(52, 471);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 6;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainWindow::button4_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button5->Location = System::Drawing::Point(20, 468);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 7;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainWindow::button5_Click);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button6->Location = System::Drawing::Point(-26, 446);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(220, 125);
			this->button6->TabIndex = 8;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainWindow::button6_Click);
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button7->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button7->Location = System::Drawing::Point(80, 468);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 9;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainWindow::button7_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button8->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button8->Location = System::Drawing::Point(-31, 480);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(242, 100);
			this->button8->TabIndex = 10;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainWindow::button8_Click);
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->FlatAppearance->BorderSize = 2;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button9->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button9->Location = System::Drawing::Point(-39, 459);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(250, 125);
			this->button9->TabIndex = 11;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainWindow::button9_Click);
			// 
			// button10
			// 
			this->button10->Enabled = false;
			this->button10->FlatAppearance->BorderSize = 2;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			this->button10->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button10->Location = System::Drawing::Point(-2, 480);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 100);
			this->button10->TabIndex = 12;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainWindow::button10_Click);
			// 
			// intro
			// 
			this->intro->Interval = 1;
			this->intro->Tick += gcnew System::EventHandler(this, &MainWindow::intro_Tick);
			// 
			// animations
			// 
			this->animations->Interval = 1;
			this->animations->Tick += gcnew System::EventHandler(this, &MainWindow::animations_Tick);
			// 
			// flowey_show
			// 
			this->flowey_show->Interval = 75;
			this->flowey_show->Tick += gcnew System::EventHandler(this, &MainWindow::flowey_show_Tick);
			// 
			// flowey_hide
			// 
			this->flowey_hide->Interval = 75;
			this->flowey_hide->Tick += gcnew System::EventHandler(this, &MainWindow::flowey_hide_Tick);
			// 
			// flowey_shot
			// 
			this->flowey_shot->Interval = 75;
			this->flowey_shot->Tick += gcnew System::EventHandler(this, &MainWindow::flowey_shot_Tick);
			// 
			// miss
			// 
			this->miss->Interval = 1;
			this->miss->Tick += gcnew System::EventHandler(this, &MainWindow::miss_Tick);
			// 
			// to_settings
			// 
			this->to_settings->Interval = 1;
			this->to_settings->Tick += gcnew System::EventHandler(this, &MainWindow::to_settings_Tick);
			// 
			// settings_to_menu
			// 
			this->settings_to_menu->Interval = 1;
			this->settings_to_menu->Tick += gcnew System::EventHandler(this, &MainWindow::settings_to_menu_Tick);
			// 
			// lab_choice
			// 
			this->lab_choice->Interval = 1;
			this->lab_choice->Tick += gcnew System::EventHandler(this, &MainWindow::lab_choice_Tick);
			// 
			// lab_choice_to_menu
			// 
			this->lab_choice_to_menu->Interval = 1;
			this->lab_choice_to_menu->Tick += gcnew System::EventHandler(this, &MainWindow::lab_choice_to_menu_Tick);
			// 
			// task_choice
			// 
			this->task_choice->Interval = 1;
			this->task_choice->Tick += gcnew System::EventHandler(this, &MainWindow::task_choice_Tick);
			// 
			// task_resolve
			// 
			this->task_resolve->Interval = 1;
			this->task_resolve->Tick += gcnew System::EventHandler(this, &MainWindow::task_resolve_Tick);
			// 
			// text_write
			// 
			this->text_write->Interval = 2;
			this->text_write->Tick += gcnew System::EventHandler(this, &MainWindow::text_write_Tick);
			// 
			// to_menu
			// 
			this->to_menu->Interval = 1;
			this->to_menu->Tick += gcnew System::EventHandler(this, &MainWindow::to_menu_Tick);
			// 
			// func_custom
			// 
			this->func_custom->Interval = 1;
			this->func_custom->Tick += gcnew System::EventHandler(this, &MainWindow::func_custom_Tick);
			// 
			// func_reset
			// 
			this->func_reset->Interval = 1;
			this->func_reset->Tick += gcnew System::EventHandler(this, &MainWindow::func_reset_Tick);
			// 
			// task_resolve_to_choice
			// 
			this->task_resolve_to_choice->Interval = 1;
			// 
			// MainWindow
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->logo1);
			this->Controls->Add(this->logo2);
			this->Controls->Add(this->logo3);
			this->Controls->Add(this->flowey);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainWindow::MainWindow_KeyDown);
			this->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWindow::MainWindow_MouseWheel);
			this->flowey->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floweyTop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floweyBottom))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// 0 - счетчик главных анимаций
		// 1 - счетчик анимаций Флауи
		// 2 - счетчик анимаций Флауи
		// 3 - счетчик анимаций фона
		int* counter = new int[4];

		// 0 - переменная для плавных движений главных анимаций
		// 1 - переменная для плавных движений главных анимаций
		// 2 - переменная для плавных движений главных анимаций
		// 3 - переменная для плавных движений анимаций Флауи
		double* move = new double[4];

		// 0 - Флауи показан
		// 1-3 - спрайты flowey_show или flowey_hide (3-1)
		// 4-8 - спрайты flowey_sink (5-1)
		// 9 - Флауи скрыт
		int flowey_state = 9;

		// Положение кнопки, вызвавшей таймер task_choice или task_resolve. Требуется для анимаций
		Drawing::Point saved_location;

		// Размер кнопки, вызвавшей таймер task_resolve. Требуется для анимаций
		Drawing::Size saved_size;

		// Сохраненный текст, который будет реализовывать таймер text_write
		System::String^ saved_text;

		// Фактическая прокрутка экрана настроек. Изменяется вместе с движением объектов панели
		int settings_factic_scroll = 0;

		// Прокрутка экрана настроек. Значение, на которое положение элементов панели и фактическая прокрутка изменяются
		double settings_scroll = 0;

		// Словарь кнопок и копий их размеров, положений и шрифтов. Требуется для анимаций
		Generic::Dictionary<Button^, Button^>^ copy = gcnew Generic::Dictionary<Button^, Button^>();

		// Менеджер ресурсов программы. Получает внедренные ресурсы .resx файла из исполняемого файла
		Resources::ResourceManager^ Sprites = gcnew Resources::ResourceManager("ReshatorLaborator2.Sprites", System::Reflection::Assembly::GetExecutingAssembly());
		
		// Действия при загрузке формы
		private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
			for (int i = 0; i < 4; i++) {
				counter[i] = 0;
				move[i] = 0;
			}
			Bitmap^ cursor = (Bitmap^)Sprites->GetObject("cursor");
			this->Cursor = gcnew System::Windows::Forms::Cursor(cursor->GetHicon());
			if (Settings["buttons_animation"]) {
				for each (Control ^ control in this->Controls) {
					if (dynamic_cast<Button^>(control) != nullptr) {
						copy_button((Button^)control);
					}
				}
				for each (Control ^ control in panel->Controls) {
					if (dynamic_cast<Button^>(control) != nullptr) {
						copy_button((Button^)control);
					}
				}
			}
			flowey_state = 9;
			flowey->Location = System::Drawing::Point(445, 286);
			flowey->Size = System::Drawing::Size(248, 232);
			floweyBottom->Location = System::Drawing::Point(801, 0);
			floweyTop->Location = System::Drawing::Point(801, 0);
			label1->Location = System::Drawing::Point(801, 0);
			label2->Location = Drawing::Point(801, 0);
			label2->Size = Drawing::Size(0, 0);
			label3->Location = Drawing::Point(801, 0);
			label3->Size = Drawing::Size(300, 200);
			reset();
			animations->Start();
			intro->Start();
		}
		// События нажатия клавиш на клавиатуре для формы в разные ее состояния
		private: System::Void MainWindow_KeyDown(System::Object^ sender, KeyEventArgs^ e) {
			
		}
		// События прокрутки колеса мыши для формы в разные ее состояния
		private: System::Void MainWindow_MouseWheel(System::Object^ sender, MouseEventArgs^ e) {
			if (WinState == "settings") {
				settings_scroll += e->Delta / 6.0;
			}
		}
		// Функция первичного копирования кнопки в словарь copy
		private: System::Void copy_button(Button^ button) {
			Button^ new_button = gcnew Button();
			new_button->Location = button->Location;
			new_button->Size = button->Size;
			new_button->Font = button->Font;
			copy->Add(button, new_button);
		}
		// Функция для сброса значений элементов управления до их значения в состоянии формы "menu"
		private: System::Void reset() {
			logo3->Location = System::Drawing::Point(801, 0);
			logo2->Location = System::Drawing::Point(801, 0);
			logo1->Location = System::Drawing::Point(801, 0);
			panel->Location = System::Drawing::Point(41, 700);
			panel->Size = System::Drawing::Size(0, 360);
			input->Location = Drawing::Point(801, 0);
			input->Enabled = false;
			if (Settings["buttons_animation"]) {
				copy[button1]->Location = System::Drawing::Point(801, 0);
				copy[button1]->Size = System::Drawing::Size(300, 90);
				copy[button1]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button2]->Location = System::Drawing::Point(801, 0);
				copy[button2]->Size = System::Drawing::Size(300, 90);
				copy[button2]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button3]->Location = System::Drawing::Point(801, 0);
				copy[button3]->Size = System::Drawing::Size(300, 90);
				copy[button3]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button4]->Location = System::Drawing::Point(801, 0);
				copy[button4]->Size = System::Drawing::Size(100, 100);
				copy[button4]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button5]->Location = System::Drawing::Point(801, 0);
				copy[button5]->Size = System::Drawing::Size(100, 100);
				copy[button5]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button6]->Location = System::Drawing::Point(801, 0);
				copy[button6]->Size = System::Drawing::Size(100, 100);
				copy[button6]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button7]->Location = System::Drawing::Point(801, 0);
				copy[button7]->Size = System::Drawing::Size(100, 100);
				copy[button7]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button8]->Location = System::Drawing::Point(801, 0);
				copy[button8]->Size = System::Drawing::Size(100, 100);
				copy[button8]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button9]->Location = System::Drawing::Point(801, 0);
				copy[button9]->Size = System::Drawing::Size(100, 100);
				copy[button9]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				copy[button10]->Location = System::Drawing::Point(801, 0);
				copy[button10]->Size = System::Drawing::Size(100, 100);
				copy[button10]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			}
			button1->FlatAppearance->BorderSize = 2;
			button1->Location = System::Drawing::Point(801, 0);
			button1->Size = System::Drawing::Size(300, 90);
			button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button1->Text = L"СТАРТ";
			button1->Enabled = false;
			button2->FlatAppearance->BorderSize = 2;
			button2->Location = System::Drawing::Point(801, 0);
			button2->Size = System::Drawing::Size(300, 90);
			button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button2->Text = L"НАСТРОЙКИ";
			button2->Enabled = false;
			button3->FlatAppearance->BorderSize = 2;
			button3->Location = System::Drawing::Point(801, 0);
			button3->Size = System::Drawing::Size(300, 90);
			button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button3->Text = L"ВЫХОД";
			button3->Enabled = false;
			button4->FlatAppearance->BorderSize = 2;
			button4->Location = System::Drawing::Point(801, 0);
			button4->Size = System::Drawing::Size(100, 100);
			button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button4->Text = L"1";
			button4->Enabled = false;
			button5->FlatAppearance->BorderSize = 2;
			button5->Location = System::Drawing::Point(801, 0);
			button5->Size = System::Drawing::Size(100, 100);
			button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button5->Text = L"2";
			button5->Enabled = false;
			button6->FlatAppearance->BorderSize = 2;
			button6->Location = System::Drawing::Point(801, 0);
			button6->Size = System::Drawing::Size(100, 100);
			button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button6->Text = L"3";
			button6->Enabled = false;
			button7->FlatAppearance->BorderSize = 2;
			button7->Location = System::Drawing::Point(801, 0);
			button7->Size = System::Drawing::Size(100, 100);
			button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button7->Text = L"4";
			button7->Enabled = false;
			button8->FlatAppearance->BorderSize = 2;
			button8->Location = System::Drawing::Point(801, 0);
			button8->Size = System::Drawing::Size(100, 100);
			button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button8->Text = L"5";
			button8->Enabled = false;
			button9->FlatAppearance->BorderSize = 2;
			button9->Location = System::Drawing::Point(801, 0);
			button9->Size = System::Drawing::Size(100, 100);
			button9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button9->Text = L"6";
			button9->Enabled = false;
			button10->FlatAppearance->BorderSize = 2;
			button10->Location = System::Drawing::Point(801, 0);
			button10->Size = System::Drawing::Size(100, 100);
			button10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
			button10->Text = L"7";
			button10->Enabled = false;
		}
		// Функция создания параметра настроек для панели panel
		private: System::Void make_parameter(std::string name) {
			Button^ button = gcnew Button;
			button->Name = gcnew String(name.data());
			button->FlatAppearance->BorderSize = 2;
			button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(100, 100, 200);
			button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(10, 25, 100);
			button->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 22));
			button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button->ForeColor = System::Drawing::SystemColors::HighlightText;
			button->Location = System::Drawing::Point(75, 20 + panel->Controls->Count * 130);
			button->Size = System::Drawing::Size(450, 100);
			button->TabIndex = 0;
			button->UseVisualStyleBackColor = true;
			button->Click += gcnew System::EventHandler(this, &MainWindow::settings_button_Click);
			button->Text = gcnew String((settings_names[name]).data()) + "\n\r" + ((bool)Settings[name] ? "Вкл." : "Выкл.");
			panel->Controls->Add(button);
			if (Settings["buttons_animation"]) {
				copy_button(button);
			}
		}
		// Обработка события нажатия на кнопку button1
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "menu") {
				lab_choice->Start();
			}
			if (WinState == "task_choice") {
				Task = 1;
				saved_location = button1->Location;
				saved_size = button1->Size;
				if (Settings["buttons_animation"]) {
					copy[button1]->Location = Drawing::Point(801, 0);
				}
				else {
					button1->Location = Drawing::Point(801, 0);
				}
				task_resolve->Start();
			}
		}
		// Обработка события нажатия на кнопку button2
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "menu") {
				to_settings->Start();
			}
			if (WinState == "task_choice") {
				Task = 2;
				button2->Enabled = false;
				saved_location = button2->Location;
				saved_size = button2->Size;
				if (Settings["buttons_animation"]) {
					copy[button2]->Location = Drawing::Point(801, 0);
				}
				else {
					button2->Location = Drawing::Point(801, 0);
				}
				task_resolve->Start();
			}
		}
		// Обработка события нажатия на кнопку button3
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "menu") {
				this->Close();
			}
			if (WinState == "lab_choice" && counter[0] == 0) {
				lab_choice_to_menu->Start();
			}
			if (WinState == "task_choice") {
				Task = 3;
				button3->Enabled = false;
				saved_location = button3->Location;
				saved_size = button3->Size;
				if (Settings["buttons_animation"]) {
					copy[button3]->Location = Drawing::Point(801, 0);
				}
				else {
					button3->Location = Drawing::Point(801, 0);
				}
				task_resolve->Start();
			}
		}
		// Обработка события нажатия на кнопку button4
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "settings") {
				settings_to_menu->Start();
			}
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 1;
				saved_location = Drawing::Point(button4->Left + button4->Width / 2, button4->Top + button4->Height / 2);
				task_choice->Start();
			}
			if (WinState == "task_choice") {
				Task = 4;
				button4->Enabled = false;
				saved_location = button4->Location;
				saved_size = button4->Size;
				if (Settings["buttons_animation"]) {
					copy[button4]->Location = Drawing::Point(801, 0);
				}
				else {
					button4->Location = Drawing::Point(801, 0);
				}
				task_resolve->Start();
			}
		}
		// Обработка события нажатия на кнопку button5
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 2;
				saved_location = Drawing::Point(button5->Left + button5->Width / 2, button5->Top + button5->Height / 2);
				task_choice->Start();
			}
			if (WinState == "task_choice" || WinState == "task_resolve") {
				to_menu->Start();
			}
		}
		// Обработка события нажатия на кнопку button6
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 3;
				saved_location = Drawing::Point(button6->Left + button6->Width / 2, button6->Top + button6->Height / 2);
				task_choice->Start();
			}
			if (WinState == "task_choice") {
				Task = 5;
				button6->Enabled = false;
				saved_location = button6->Location;
				saved_size = button6->Size;
				if (Settings["buttons_animation"]) {
					copy[button6]->Location = Drawing::Point(801, 0);
				}
				else {
					button6->Location = Drawing::Point(801, 0);
				}
				task_resolve->Start();
			}
		}
		// Обработка события нажатия на кнопку button7
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 4;
				saved_location = Drawing::Point(button7->Left + button7->Width / 2, button7->Top + button7->Height / 2);
				task_choice->Start();
			}
			if (WinState == "task_resolve") {
				if (button7->Text == "Польз. функция") {
					CustomFunc = true;
					label1->Text = "";
					saved_text = "Введите новую функцию в поле ниже.\r\ny = " + gcnew String(f_decl.data());
					text_write->Stop();
					text_write->Start();
					button7->Text = "Сбросить функцию";
					if (Settings["buttons_animation"]) {
						copy[button8]->Size = Drawing::Size(250, 100);
						copy[button8]->Location = Drawing::Point(12, 440);
					}
					button8->Size = Drawing::Size(250, 100);
					button8->Location = Drawing::Point(7, 440);
					button8->Text = "Принять функцию";
					button8->Enabled = true;
					input->Size = Drawing::Size(600, 50);
					input->Location = Drawing::Point(91, 395);
					input->Enabled = true;
					input->BringToFront();
				}
				else {
					CustomFunc = false;
					label1->Text = "";
					saved_text = lab_manager();
					text_write->Stop();
					text_write->Start();
					button7->Text = "Польз. функция";
					if (Settings["buttons_animation"]) {
						copy[button8]->Location = Drawing::Point(850, 0);
					}
					button8->Location = Drawing::Point(850, 0);
					button8->Enabled = false;
					input->Location = Drawing::Point(850, 0);
					input->Text = "";
					input->Enabled = false;
				}
			}
		}
		// Обработка события нажатия на кнопку button8
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 5;
				saved_location = Drawing::Point(button8->Left + button8->Width / 2, button8->Top + button8->Height / 2);
				task_choice->Start();
			}
			if (WinState == "task_resolve") {
				if (input->Text != "") {
					f_decl = std::to_string(input->Text);
				}
				saved_text = lab_manager();
				label1->Text = "";
				text_write->Start();
			}
		}
		// Обработка события нажатия на кнопку button9
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 6;
				saved_location = Drawing::Point(button9->Left + button9->Width / 2, button9->Top + button9->Height / 2);
				task_choice->Start();
			}
		}
		// Обработка события нажатия на кнопку button10
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			if (WinState == "lab_choice") {
				lab_choice->Stop();
				counter[0] = 0;
				Lab = 7;
				saved_location = Drawing::Point(button10->Left + button10->Width / 2, button10->Top + button10->Height / 2);
				task_choice->Start();
			}
		}
		// Обработка события нажатия на кнопку параметра настроек панели panel
		private: System::Void settings_button_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ button = (Button^)sender;
			if (WinState == "settings") {
				if (button->Name == "intro") {
					if (Settings["intro"]) {
						Settings["intro"] = false;
					}
					else {
						Settings["intro"] = true;
					}
					button->Text = gcnew String((settings_names[std::to_string(button->Name)]).data()) + "\n\r" + (Settings[std::to_string(button->Name)] ? "Вкл." : "Выкл.");
				}
				if (button->Name == "buttons_animation") {
					if (Settings["buttons_animation"]) {
						Settings["buttons_animation"] = false;
						button->Size = copy[button]->Size;
						button->Location = copy[button]->Location;
						button->Font = copy[button]->Font;
						copy->Clear();
					}
					else {
						for each (Control ^ control in this->Controls) {
							if (dynamic_cast<Button^>(control) != nullptr) {
								copy_button((Button^)control);
							}
						}
						for each (Control ^ control in panel->Controls) {
							if (dynamic_cast<Button^>(control) != nullptr) {
								copy_button((Button^)control);
							}
						}
						Settings["buttons_animation"] = true;
					}
					button->Text = gcnew String((settings_names[std::to_string(button->Name)]).data()) + "\n\r" + (Settings[std::to_string(button->Name)] ? "Вкл." : "Выкл.");
				}
				if (button->Name == "flowey") {
					if (Settings["flowey"]) {
						if (button->ForeColor.Equals(SystemColors::HighlightText)) {
							button->ForeColor = Color::LightSkyBlue;
							button->Text = "Эта кнопка не работает =)";
							return;
						}
						if (button->ForeColor.Equals(Color::LightSkyBlue)) {
							button->ForeColor = Color::LightBlue;
							button->Text = "Эта кнопка не работает =)";
							return;
						}
						if (button->ForeColor.Equals(Color::LightBlue)) {
							button->ForeColor = Color::LightGreen;
							button->Text = "Эта кнопка не работает =)";
							return;
						}
						if (button->ForeColor.Equals(Color::LightGreen)) {
							button->ForeColor = Color::LightYellow;
							button->Text = "Эта кнопка не работает =)";
							return;
						}
						if (button->ForeColor.Equals(Color::LightYellow)) {
							button->ForeColor = Color::Yellow;
							button->Text = "Эта кнопка не работает";
							return;
						}
						if (button->ForeColor.Equals(Color::Yellow)) {
							button->ForeColor = Color::Orange;
							button->Text = "Эта кнопка не работает.";
							return;
						}
						if (button->ForeColor.Equals(Color::Orange)) {
							button->ForeColor = Color::OrangeRed;
							button->Text = "ДАЖЕ НЕ СМЕЙ";
							return;
						}
						if (button->ForeColor.Equals(Color::OrangeRed)) {
							button->ForeColor = Color::Red;
							button->Text = "ТЫ ПОЖАЛЕЕШЬ";
							return;
						}
						if (button->ForeColor.Equals(Color::Red)) {
							button->ForeColor = Color::DarkRed;
							button->Text = "ПОСЛЕДНЕЕ ПРЕДУПРЕЖДЕНИЕ";
							return;
						}
						if (button->ForeColor.Equals(Color::DarkRed)) {
							button->ForeColor = SystemColors::ControlText;
							button->Text = "";
							animations->Stop();
							MessageBox::Show("Invalid or missing Symbol data.", "Я ПРЕДУПРЕЖДАЛ ТЕБЯ =)", MessageBoxButtons::OK, MessageBoxIcon::Error);
							this->Close();
							// ТЕБЕ ЭТО НЕ НУЖНО =)
							/*button->ForeColor = SystemColors::HighlightText;
							Settings["flowey"] = false;
							button->Text = gcnew String(settings_names[std::to_string(button->Name)].data()) + "\n\r" + (Settings[std::to_string(button->Name)] ? "Вкл." : "Выкл.");
							return;*/
						}
					}
					else {
						Settings["flowey"] = true;
						flowey_state = 9;
						button->Text = gcnew String(settings_names[std::to_string(button->Name)].data()) + "\n\r" + (Settings[std::to_string(button->Name)] ? "Вкл." : "Выкл.");
					}
				}
				settings_export();
			}
		}
		// Обработка события нажатия на floweyTop
		private: System::Void floweyTop_Click(System::Object^ sender, System::EventArgs^ e) {
			if (counter[1] == 0 && Settings["flowey"]) {
				flowey_shot->Start();
			}
		}
		// Заставка приложения. Запускается только раз за один запуск программы
		private: System::Void intro_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (Settings["intro"]) {
				if (counter[0] == 1) {
					WinState = "animation";
					move[0] = 100;
				}
				if (counter[0] == 25) {
					logo1->Size = Drawing::Size(478, 68);
					logo1->Location = Drawing::Point(150, 170);
					logo1->Image = (Bitmap^)Sprites->GetObject(L"Reshator");
					logo2->Size = Drawing::Size(478, 78);
					logo2->Location = Drawing::Point(150, 165);
					logo2->Image = (Bitmap^)Sprites->GetObject(L"Laborator");
					logo3->Image = (Bitmap^)Sprites->GetObject(L"2");
					this->Text = "Reshator";
				}
				if (counter[0] == 75) {
					this->Text += " Laborator";
					move[0] = 100;
				}
				if (counter[0] > 75 && counter[0] < 125) {
					move[0] *= 0.9;
					logo2->Top = logo1->Top + 65 - int(move[0] * 0.7);
				}
				if (counter[0] == 150) {
					this->Text += " 2";
				}
				if (counter[0] > 150 && counter[0] < 250) {
					move[0] += (100 - move[0]) * 0.1;
					logo1->Left = 150 - int(move[0] * 0.70); //logo1->Left = 80
					logo2->Left = 150 - int(move[0] * 0.70); //logo2->Left = 80
					logo3->Size = Drawing::Size(int(move[0] * 1.45), int(move[0] * 1.5)); //logo3->Size = (145, 150)
					logo3->Location = Drawing::Point(565, 245 - (logo3->Height / 2)); //logo3->Location = (565, 170)
				}
				if (counter[0] == 250) {
					move[0] = 0.4;
					move[1] = 0;
				}
				if (counter[0] > 250 && counter[0] < 300) {
					move[0] += (move[0] + 1) * 0.05;
					move[1] += move[0] / 4.933035;
				}
				if (counter[0] > 299 && counter[0] < 350) {
					move[0] = move[0] * 0.95;
					move[1] += move[0] / 4.933035;
				}
				if (counter[0] > 250 && counter[0] < 350) {
					logo1->Size = Drawing::Size(478 - int(move[1] * 0.97), 68 - int(move[1] * 0.15)); //logo1->Size = (381, 53)
					logo1->Location = Drawing::Point(80 + int(move[1] * 0.65), 170 - int(move[1] * 1.55)); //logo1->Location = (145, 15)
					logo2->Size = Drawing::Size(478 - int(move[1] * 0.97), 78 - int(move[1] * 0.3)); //logo2->Size = (381, 48)
					logo2->Location = Drawing::Point(80 + int(move[1] * 0.65), 235 - int(move[1] * 1.63)); //logo2->Location = (145, 72)
					logo3->Size = Drawing::Size(145 - int(move[1] * 0.33), 150 - int(move[1] * 0.27)); //logo3->Size = (112, 123)
					logo3->Location = Drawing::Point(565 - int(move[1] * 0.35), 170 - int(move[1] * 1.58)); //logo3->Location = (530, 12)
				}
				if (counter[0] == 350) {
					button1->Enabled = true;
					button2->Enabled = true;
					button3->Enabled = true;
					move[0] = 100;
					move[1] = 0;
				}
			}
			else {
				if (counter[0] == 1) {
					counter[0] = 325;
					WinState = "animation";
					button1->Enabled = true;
					button2->Enabled = true;
					button3->Enabled = true;
					logo1->Size = Drawing::Size(381, 53);
					logo1->Location = Drawing::Point(145, -185);
					logo1->Image = (Bitmap^)Sprites->GetObject(L"Reshator");
					logo2->Size = Drawing::Size(381, 48);
					logo2->Location = Drawing::Point(145, -128);
					logo2->Image = (Bitmap^)Sprites->GetObject(L"Laborator");
					logo3->Image = (Bitmap^)Sprites->GetObject(L"2");
					logo3->Size = Drawing::Size(112, 123);
					logo3->Location = Drawing::Point(530, -188);
					this->Text = "Reshator Laborator 2";
					move[0] = 100;
				}
			}
			if (counter[0] > 350 && counter[0] < 425) {
				move[0] *= 0.92;
				if (Settings["buttons_animation"]) {
					copy[button1]->Location = Drawing::Point(40 - int(move[0] * 4), 190);
					copy[button2]->Location = Drawing::Point(40 - int(move[0] * 4), 310);
					copy[button3]->Location = Drawing::Point(40 - int(move[0] * 4), 430);
				}
				else {
					button1->Location = Drawing::Point(40 - int(move[0] * 4), 190);
					button2->Location = Drawing::Point(40 - int(move[0] * 4), 310);
					button3->Location = Drawing::Point(40 - int(move[0] * 4), 430);
				}
				if (!Settings["intro"]) {
					logo1->Location = Drawing::Point(145, 15 - int(move[0] * 2));
					logo2->Location = Drawing::Point(145, 72 - int(move[0] * 2));
					logo3->Location = Drawing::Point(530, 12 - int(move[0] * 2));
				}
			}
			if (counter[0] == 425) {
				move[0] = 0;
				counter[0] = 0;
				WinState = "menu";
				flowey->Location = System::Drawing::Point(445, 286);
				flowey_show->Start();
				intro->Stop();
			}
		}
		// Все фоновые анимации формы при разных состояниях окна
		private: System::Void animations_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[3]++;
			if (counter[3] == 360) {
				counter[3] = 0;
			}
			this->BackColor = System::Drawing::Color::FromArgb(0, 0, int(sin(counter[3] * M_PI / 360) * 25));
			if (Settings["buttons_animation"]) {
				for each (Generic::KeyValuePair<Button^, Button^> kvp in copy) {
					anim_button(kvp.Key, kvp.Value, 110);
				}
			}
			if (WinState == "settings" && (abs(settings_scroll) > 0.2 || settings_factic_scroll < -250 || settings_factic_scroll > 0)) {
				if (abs(settings_scroll) > 0.2) {
					for each (Button ^ button in panel->Controls) {
						if (Settings["buttons_animation"]) {
							copy[button]->Top += int(settings_scroll);
						}
						else {
							button->Top += int(settings_scroll);
						}
					}
					settings_factic_scroll += int(settings_scroll);
					settings_scroll *= 0.8;
				}
				if (settings_factic_scroll > 0) {
					int shift = int(settings_factic_scroll / 6.0);
					for each (Button ^ button in panel->Controls) {
						if (Settings["buttons_animation"]) {
							copy[button]->Top -= shift;
						}
						else {
							button->Top -= shift;
						}
					}
					settings_factic_scroll -= shift;
				}
				if (settings_factic_scroll < -(35 + (panel->Controls->Count - 3) * 130)) {
					int shift = int(((35 + (panel->Controls->Count - 3) * 130) + settings_factic_scroll) / 6.0);
					for each (Button ^ button in panel->Controls) {
						if (Settings["buttons_animation"]) {
							copy[button]->Top -= shift;
						}
						else {
							button->Top -= shift;
						}
					}
					settings_factic_scroll -= shift;
				}
			}
		}
		// Функция анимации кнопок при наведении курсора мыши на кнопку и наоборот
		// Обеспечивает движения кнопок формы при включенных настройках анимаций
		private: System::Void anim_button(Button^ button, Button^ copy, int percentage) {
			if ((button->Left + button->Width < 0 && copy->Left + copy->Width < 0) ||
				(button->Left > 800 && copy->Left > 800) ||
				(button->Top + button->Height < 0 && copy->Top + copy->Height < 0) ||
				(button->Top > 600 && copy->Top > 600)) {
				return;
			}
			int mouseX = MousePosition.X - Left - 7;
			int mouseY = MousePosition.Y - Top - 30;
			Drawing::Size^ endSize = gcnew Drawing::Size(int(copy->Width / 100.0 * percentage), int(copy->Height / 100.0 * percentage));
			Drawing::Font^ endFont = gcnew Drawing::Font(copy->Font->Name, float(copy->Font->Size / 100 * percentage));
			if (button->RectangleToScreen(button->ClientRectangle).Contains(Control::MousePosition) && button->Enabled != false) {
				button->Size = Drawing::Size(int(endSize->Width + (button->Width - endSize->Width) * 0.8), int(endSize->Height + (button->Height - endSize->Height) * 0.8));
				button->Location = Drawing::Point(copy->Left - (button->Width - copy->Width) / 2, copy->Top - (button->Height - copy->Height) / 2);
				button->Font = gcnew Drawing::Font(copy->Font->Name, float(endFont->Size + (button->Font->Size - endFont->Size) * 0.8));
			}
			else {
				button->Size = Drawing::Size(int(copy->Width + (button->Width - copy->Width) * 0.8), int(copy->Height + (button->Height - copy->Height) * 0.8));
				button->Location = Drawing::Point(copy->Left - (button->Width - copy->Width) / 2, copy->Top - (button->Height - copy->Height) / 2);
				button->Font = gcnew Drawing::Font(copy->Font->Name, float(copy->Font->Size + (button->Font->Size - copy->Font->Size) * 0.8));
			}
		}
		// Анимация появления Флауи на панели flowey
		private: System::Void flowey_show_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[1]++;
			if (counter[1] == 1) {
				if (Settings["flowey"]) {
					floweyBottom->Location = Drawing::Point(30, 0);
					floweyBottom->Size = Drawing::Size(188, 232);
					floweyTop->Location = Drawing::Point(801, 0);
					floweyTop->Parent = flowey;
					floweyBottom->SendToBack();
					if (flowey_state == 9) {
						floweyBottom->Image = nullptr;
						floweyTop->Image = nullptr;
					}
					else {
						if (flowey_state != 0) {
							counter[1] = 10 - flowey_state;
						}
						else {
							counter[1] = 9;
						}
					}
				}
				else {
					counter[1] = 0;
					floweyBottom->Location = Drawing::Point(801, 0);
					floweyTop->Location = Drawing::Point(801, 0);
					flowey_show->Stop();
					return;
				}
			}
			if (counter[1] < 6) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_sink" + counter[1]);
				flowey_state = 9 - counter[1];
			}
			if (counter[1] > 5 && counter[1] < 9) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_show" + (counter[1] - 5));
				flowey_state = 9 - counter[1];
			}
			if (counter[1] == 9) {
				floweyBottom->Size = Drawing::Size(60, 72);
				floweyBottom->Location = Drawing::Point(94, 160);
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_stem");
				floweyTop->Location = Drawing::Point(35, 70);
				floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_basic");
				floweyTop->Size = Drawing::Size(floweyTop->Image->Width * 2, floweyTop->Image->Height * 2);
				flowey_state = 9 - counter[1];
				counter[1] = 0;
				flowey_show->Stop();
			}
		}
		// Анимация скрытия Флауи с панели flowey
		private: System::Void flowey_hide_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[1]++;
			if (counter[1] == 1) {
				if (Settings["flowey"]) {
					floweyBottom->Size = Drawing::Size(188, 232);
					floweyBottom->Location = Drawing::Point(30, 0);
					floweyTop->Location = Drawing::Point(801, 0);
					floweyTop->Parent = flowey;
					floweyBottom->SendToBack();
					if (flowey_state == 0) {
						floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey");
					}
					else {
						if (flowey_state != 9) {
							counter[1] = flowey_state + 1;
						}
						else {
							counter[1] = 9;
						}
					}
				}
				else {
					counter[1] = 0;
					floweyBottom->Location = Drawing::Point(801, 0);
					floweyTop->Location = Drawing::Point(801, 0);
					flowey_hide->Stop();
					return;
				}
			}
			if (counter[1] < 4) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_hide" + counter[1]);
				flowey_state = counter[1];
			}
			if (counter[1] > 3 && counter[1] < 9) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_sink" + (9 - counter[1]));
				flowey_state = counter[1];
			}
			if (counter[1] == 9) {
				floweyBottom->Image = nullptr;
				flowey_state = counter[1];
				counter[1] = 0;
				flowey_hide->Stop();
			}
		}
		// Анимация атаки на Флауи. Не конфликтует с остальными анимациями Флауи
		private: System::Void flowey_shot_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[1]++;
			if (counter[1] == 1) {
				if (Settings["flowey"]) {
					floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey");
					floweyBottom->Size = Drawing::Size(188, 232);
					floweyBottom->Location = Drawing::Point(30, 0);
					floweyTop->Parent = floweyBottom;
					floweyTop->BackColor = Drawing::Color::Transparent;
					floweyTop->Size = Drawing::Size(52, 220);
					floweyTop->Location = Drawing::Point(70, 5);
				}
				else {
					counter[1] = 0;
					floweyBottom->Location = Drawing::Point(801, 0);
					floweyTop->Location = Drawing::Point(801, 0);
					flowey_shot->Stop();
					return;
				}
			}
			if (counter[1] < 4) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_hide" + counter[1]);
				floweyTop->Image = (Bitmap^)Sprites->GetObject("slash" + counter[1]);
				flowey_state = counter[1];
			}
			if (counter[1] > 3 && counter[1] < 9) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_sink" + (9 - counter[1]));
				flowey_state = counter[1];
				if (counter[1] < 7) {
					floweyTop->Image = (Bitmap^)Sprites->GetObject("slash" + counter[1]);
				}
				else {
					floweyTop->Image = nullptr;
				}
			}
			if (counter[1] == 9) {
				floweyBottom->Image = nullptr;
				miss->Start();
				flowey_state = counter[1];
			}
			if (counter[1] > 15 && counter[1] < 21) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_sink" + (counter[1] - 15));
				flowey_state = 24 - counter[1];
			}
			if (counter[1] > 20 && counter[1] < 24) {
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_show" + (counter[1] - 20));
				flowey_state = 24 - counter[1];
			}
			if (counter[1] == 24) {
				miss->Stop();
				counter[2] = 0;
				floweyBottom->Size = Drawing::Size(60, 72);
				floweyBottom->Location = Drawing::Point(94, 160);
				floweyBottom->Image = (Bitmap^)Sprites->GetObject("flowey_stem");
				floweyTop->Location = Drawing::Point(35, 70);
				srand(unsigned int(time(NULL)));
				int random = rand() % 3;
				if (random == 0) {
					floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_tricky");
				}
				else {
					if (random == 1) {
						floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_scary");
					}
					else {
						if (random == 2) {
							floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_smug");
						}
					}
				}
				floweyTop->Size = Drawing::Size(floweyTop->Image->Width * 2, floweyTop->Image->Height * 2);
				flowey_state = 0;
				counter[1] = 0;
				flowey_shot->Stop();
			}
		}
		// Анимация текста "MISS". Запускается параллельно с анимацией атаки на Флауи
		private: System::Void miss_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[2]++;
			if (counter[2] == 1) {
				if (Settings["flowey"]) {
					floweyTop->Parent = flowey;
					floweyBottom->SendToBack();
					floweyTop->Image = (Bitmap^)Sprites->GetObject("miss");
					floweyTop->Size = Drawing::Size(floweyTop->Image->Width * 2, floweyTop->Image->Height * 2);
					floweyTop->Location = Drawing::Point(0, 100);
					move[3] = 9;
				}
				else {
					counter[2] = 0;
					floweyBottom->Location = Drawing::Point(801, 0);
					floweyTop->Location = Drawing::Point(801, 0);
					miss->Stop();
				}
			}
			if (counter[2] < 55) {
				move[3] -= 0.35;
				floweyTop->Top -= int(move[3]);
			}
			if (counter[2] == 90) {
				move[3] = 0;
				counter[2] = 0;
				floweyTop->Location = Drawing::Point(800, 0);
				floweyTop->Image = nullptr;
				miss->Stop();
			}
		}
		// Анимация перехода на экран настроек из главного меню
		private: System::Void to_settings_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				counter[1] = 0;
				flowey_shot->Stop();
				flowey_show->Stop();
				flowey_hide->Start();
				button4->Enabled = true;
				button4->Text = "В меню";
				label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				label1->Text = "НАСТРОЙКИ";
				make_parameter("intro");
				make_parameter("buttons_animation");
				make_parameter("flowey");
				move[0] = 0.4;
				move[1] = 0;
				move[2] = 100;
			}
			if (counter[0] > 0 && counter[0] < 50) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 49 && counter[0] < 100) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 0 && counter[0] < 100) {
				if (Settings["buttons_animation"]) {
					copy[button1]->Left -= int(move[0]);
					copy[button2]->Left -= int(move[0]);
					copy[button3]->Left -= int(move[0]);
				}
				else {
					button1->Left -= int(move[0]);
					button2->Left -= int(move[0]);
					button3->Left -= int(move[0]);
				}
				logo1->Size = Drawing::Size(381 - int(move[1] * 2.49), 53 - int(move[1] * 0.28)); //logo1->Size = (132, 25)
				logo1->Location = Drawing::Point(145 - int(move[1] * 1.33), 15 - int(move[1] * 0.08)); //logo1->Location = (12, 7)
				logo2->Size = Drawing::Size(381 - int(move[1] * 2.49), 48 - int(move[1] * 0.23)); //logo2->Size = (132, 25)
				logo2->Location = Drawing::Point(145 - int(move[1] * 1.33), 72 - int(move[1] * 0.44)); //logo2->Location = (12, 28)
				logo3->Size = Drawing::Size(112 - int(move[1] * 0.73), 123 - int(move[1] * 0.77)); //logo3->Size = (39, 46)
				logo3->Location = Drawing::Point(530 - int(move[1] * 3.8), 12 - int(move[1] * 0.05)); //logo3->Location = (150, 7)
				panel->Size = Drawing::Size(int(move[1] * 7), 360);
				panel->Location = Drawing::Point(41 + (700 - panel->Width) / 2, 672 - int(move[1] * 6));
				panel->BackColor = Drawing::Color::FromArgb(0, 0, int(move[1] * 0.64));
				for each (Button ^ button in panel->Controls) {
					if (Settings["buttons_animation"]) {
						copy[button]->Left = 120 - (700 - panel->Width) / 2;
					}
					else {
						button->Left = 120 - (700 - panel->Width) / 2;
					}
				}
			}
			if (counter[0] > 25 && counter[0] < 110) {
				move[2] *= 0.93;
				if (Settings["buttons_animation"]) {
					copy[button4]->Size = Drawing::Size(300, 90);
					copy[button4]->Location = Drawing::Point(241, 448 + int(move[2] * 4));
				}
				else {
					button4->Size = Drawing::Size(300, 90);
					button4->Location = Drawing::Point(241, 448 + int(move[2] * 4));
				}
				label1->Location = Drawing::Point(268, 10 - int(move[2] * 4));
			}
			if (counter[0] == 110) {
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				move[0] = 0;
				move[1] = 0;
				move[2] = 0;
				counter[0] = 0;
				WinState = "settings";
				to_settings->Stop();
			}
		}
		// Анимация перехода в главное меню из настроек
		private: System::Void settings_to_menu_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				if (Settings["buttons_animation"]) {
					copy[button1]->Size = System::Drawing::Size(300, 90);
					copy[button2]->Size = System::Drawing::Size(300, 90);
					copy[button3]->Size = System::Drawing::Size(300, 90);
				}
				else {
					button1->Size = System::Drawing::Size(300, 90);
					button2->Size = System::Drawing::Size(300, 90);
					button3->Size = System::Drawing::Size(300, 90);
				}
				button1->Enabled = true;
				button2->Enabled = true;
				button3->Enabled = true;
				move[0] = 0.4;
				move[1] = 0;
				move[2] = 0;
			}
			if (counter[0] > 0 && counter[0] < 50) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 49 && counter[0] < 100) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 0 && counter[0] < 100) {
				if (Settings["buttons_animation"]) {
					copy[button1]->Location = Drawing::Point(-360 + int(move[1] * 4), 190);
					copy[button2]->Location = Drawing::Point(-360 + int(move[1] * 4), 310);
					copy[button3]->Location = Drawing::Point(-360 + int(move[1] * 4), 430);
				}
				else {
					button1->Location = Drawing::Point(-360 + int(move[1] * 4), 190);
					button2->Location = Drawing::Point(-360 + int(move[1] * 4), 310);
					button3->Location = Drawing::Point(-360 + int(move[1] * 4), 430);
				}
				logo1->Size = Drawing::Size(132 + int(move[1] * 2.49), 25 + int(move[1] * 0.28)); //logo1->Size = (381, 53)
				logo1->Location = Drawing::Point(12 + int(move[1] * 1.33), 7 + int(move[1] * 0.08)); //logo1->Location = (145, 15)
				logo2->Size = Drawing::Size(132 + int(move[1] * 2.49), 25 + int(move[1] * 0.23)); //logo2->Size = (381, 48)
				logo2->Location = Drawing::Point(12 + int(move[1] * 1.33), 28 + int(move[1] * 0.44)); //logo2->Location = (145, 72)
				logo3->Size = Drawing::Size(39 + int(move[1] * 0.73), 46 + int(move[1] * 0.77)); //logo3->Size = (112, 123)
				logo3->Location = Drawing::Point(150 + int(move[1] * 3.8), 7 + int(move[1] * 0.05)); //logo3->Location = (530, 12)
				panel->Size = Drawing::Size(700 - int(move[1] * 7), 360);
				panel->Location = Drawing::Point(41 + (700 - panel->Width) / 2, 72 + int(move[1] * 6));
				panel->BackColor = Drawing::Color::FromArgb(0, 0, 64 - int(move[1] * 0.64));
				for each (Button ^ button in panel->Controls) {
					if (Settings["buttons_animation"]) {
						copy[button]->Left = 120 - (700 - panel->Width) / 2;
					}
					else {
						button->Left = 120 - (700 - panel->Width) / 2;
					}
				}
				label1->Location = Drawing::Point(268, 10 - int(move[1] * 4));
			}
			if (counter[0] == 75) {
				flowey_shot->Stop();
				flowey_hide->Stop();
				flowey_show->Start();
			}
			if (counter[0] > 25 && counter[0] < 110) {
				move[2] += (move[2] + 1) * 0.05;
				if (Settings["buttons_animation"]) {
					copy[button4]->Location = Drawing::Point(241, 448 + int(move[2] * 4));
				}
				else {
					button4->Location = Drawing::Point(241, 448 + int(move[2] * 4));
				}
			}
			if (counter[0] == 110) {
				for each (Button ^ button in panel->Controls) {
					copy->Remove(button);
				}
				panel->Controls->Clear();
				if (Settings["buttons_animation"]) {
					copy[button4]->Size = System::Drawing::Size(100, 100);
					button4->Size = System::Drawing::Size(100, 100);
					copy[button4]->Location = System::Drawing::Point(850, 0);
				}
				else {
					button4->Size = System::Drawing::Size(100, 100);
					button4->Location = System::Drawing::Point(850, 0);
				}
				button4->Text = "1";
				button4->Enabled = false;
				settings_factic_scroll = 0;
				settings_scroll = 0;
				WinState = "menu";
				counter[0] = 0;
				move[0] = 0;
				move[1] = 0;
				move[2] = 0;
				settings_to_menu->Stop();
			}
		}
		// Анимация перехода в меню выбора лабораторной из главного меню
		private: System::Void lab_choice_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				button4->Enabled = true;
				button5->Enabled = true;
				button6->Enabled = true;
				button7->Enabled = true;
				button8->Enabled = true;
				button9->Enabled = true;
				button10->Enabled = true;
				label1->SendToBack();
				move[0] = 0.4;
				move[1] = 0;
				move[2] = 100;
			}
			if (counter[0] < 50) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 49 && counter[0] < 100) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] < 100) {
				if (Settings["buttons_animation"]) {
					copy[button1]->Left -= int(move[0] * 1.2);
					copy[button2]->Left -= int(move[0] * 1.2);
					if (counter[0] < 55) {
						copy[button3]->Left -= int(move[0] * 1.2);
					}
					copy[button4]->Location = Drawing::Point(967 - int(move[1] * 8), 120);
					copy[button5]->Location = Drawing::Point(1083 - int(move[1] * 8), 120);
					copy[button6]->Location = Drawing::Point(1199 - int(move[1] * 8), 120);
					copy[button7]->Location = Drawing::Point(1315 - int(move[1] * 8), 120);
					copy[button8]->Location = Drawing::Point(1025 - int(move[1] * 8), 236);
					copy[button9]->Location = Drawing::Point(1141 - int(move[1] * 8), 236);
					copy[button10]->Location = Drawing::Point(1257 - int(move[1] * 8), 236);
				}
				else {
					button1->Left -= int(move[0] * 1.2);
					button2->Left -= int(move[0] * 1.2);
					if (counter[0] < 55) {
						button3->Left -= int(move[0] * 1.2);
					}
					button4->Location = Drawing::Point(967 - int(move[1] * 8), 120);
					button5->Location = Drawing::Point(1083 - int(move[1] * 8), 120);
					button6->Location = Drawing::Point(1199 - int(move[1] * 8), 120);
					button7->Location = Drawing::Point(1315 - int(move[1] * 8), 120);
					button8->Location = Drawing::Point(1025 - int(move[1] * 8), 236);
					button9->Location = Drawing::Point(1141 - int(move[1] * 8), 236);
					button10->Location = Drawing::Point(1257 - int(move[1] * 8), 236);
				}
				flowey->Location = System::Drawing::Point(445 + int(move[1]), 286 + int(move[1] * 0.12));
				logo1->Size = Drawing::Size(381 - int(move[1] * 2.49), 53 - int(move[1] * 0.28)); //logo1->Size = (132, 25)
				logo1->Location = Drawing::Point(145 - int(move[1] * 1.33), 15 - int(move[1] * 0.08)); //logo1->Location = (12, 7)
				logo2->Size = Drawing::Size(381 - int(move[1] * 2.49), 48 - int(move[1] * 0.23)); //logo2->Size = (132, 25)
				logo2->Location = Drawing::Point(145 - int(move[1] * 1.33), 72 - int(move[1] * 0.44)); //logo2->Location = (12, 28)
				logo3->Size = Drawing::Size(112 - int(move[1] * 0.73), 123 - int(move[1] * 0.77)); //logo3->Size = (39, 46)
				logo3->Location = Drawing::Point(530 - int(move[1] * 3.8), 12 - int(move[1] * 0.05)); //logo3->Location = (150, 7)
			}
			if (counter[0] == 55) {
				label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				label1->Text = "Выберите\r\nлабораторную работу";
				label1->TextAlign = Drawing::ContentAlignment::MiddleCenter;
				button1->Enabled = false;
				button2->Enabled = false;
				if (Settings["buttons_animation"]) {
					copy[button3]->Size = Drawing::Size(300, 100);
				}
				else {
					button3->Size = Drawing::Size(300, 100);
				}
				button3->Text = "В МЕНЮ";
			}
			if (counter[0] == 100) {
				move[0] = 0;
				move[1] = 0;
			}
			if (counter[0] > 55 && counter[0] < 130) {
				move[2] *= 0.92;
				if (Settings["buttons_animation"]) {
					copy[button3]->Location = Drawing::Point(241, 385 + int(move[2] * 4));
				}
				else {
					button3->Location = Drawing::Point(241, 385 + int(move[2] * 4));
				}
				label1->Location = Drawing::Point(205, 5 - int(move[2] * 4));
			}
			if (counter[0] == 130) {
				move[2] = 0;
				counter[0] = 0;
				WinState = "lab_choice";
				lab_choice->Stop();
			}
		}
		// Анимация перехода в главное меню из экрана выбора лабораторной
		private: System::Void lab_choice_to_menu_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				move[0] = 0.4;
				move[1] = 0;
				move[2] = 0;
			}
			if (counter[0] < 50) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 49 && counter[0] < 100) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] < 70) {
				move[2] += (move[2] + 1) * 0.07;
				if (Settings["buttons_animation"]) {
					copy[button3]->Location = Drawing::Point(241, 385 + int(move[2] * 4));
				}
				else {
					button3->Location = Drawing::Point(241, 385 + int(move[2] * 4));
				}
				label1->Location = Drawing::Point(205, 5 - int(move[2] * 4));
			}
			if (counter[0] < 100) {
				if (Settings["buttons_animation"]) {
					copy[button4]->Location = Drawing::Point(167 + int(move[1] * 8), 120);
					copy[button5]->Location = Drawing::Point(283 + int(move[1] * 8), 120);
					copy[button6]->Location = Drawing::Point(399 + int(move[1] * 8), 120);
					copy[button7]->Location = Drawing::Point(515 + int(move[1] * 8), 120);
					copy[button8]->Location = Drawing::Point(225 + int(move[1] * 8), 236);
					copy[button9]->Location = Drawing::Point(341 + int(move[1] * 8), 236);
					copy[button10]->Location = Drawing::Point(457 + int(move[1] * 8), 236);
				}
				else {
					button4->Location = Drawing::Point(167 + int(move[1] * 8), 120);
					button5->Location = Drawing::Point(283 + int(move[1] * 8), 120);
					button6->Location = Drawing::Point(399 + int(move[1] * 8), 120);
					button7->Location = Drawing::Point(515 + int(move[1] * 8), 120);
					button8->Location = Drawing::Point(225 + int(move[1] * 8), 236);
					button9->Location = Drawing::Point(341 + int(move[1] * 8), 236);
					button10->Location = Drawing::Point(457 + int(move[1] * 8), 236);
				}
				flowey->Location = System::Drawing::Point(545 - int(move[1]), 298 - int(move[1] * 0.12));
				logo1->Size = Drawing::Size(132 + int(move[1] * 2.49), 25 + int(move[1] * 0.28)); //logo1->Size = (381, 53)
				logo1->Location = Drawing::Point(12 + int(move[1] * 1.33), 7 + int(move[1] * 0.08)); //logo1->Location = (145, 15)
				logo2->Size = Drawing::Size(132 + int(move[1] * 2.49), 25 + int(move[1] * 0.23)); //logo2->Size = (381, 48)
				logo2->Location = Drawing::Point(12 + int(move[1] * 1.33), 28 + int(move[1] * 0.44)); //logo2->Location = (145, 72)
				logo3->Size = Drawing::Size(39 + int(move[1] * 0.73), 46 + int(move[1] * 0.77)); //logo3->Size = (112, 123)
				logo3->Location = Drawing::Point(150 + int(move[1] * 3.8), 7 + int(move[1] * 0.05)); //logo3->Location = (530, 12)
			}
			if (counter[0] == 70) {
				move[2] = 100;
				button1->Enabled = true;
				button2->Enabled = true;
				if (Settings["buttons_animation"]) {
					copy[button3]->Size = Drawing::Size(300, 90);
				}
				else {
					button3->Size = Drawing::Size(300, 90);
				}
				button3->Text = "ВЫХОД";
			}
			if (counter[0] > 70 && counter[0] < 120) {
				move[2] *= 0.93;
				if (Settings["buttons_animation"]) {
					copy[button1]->Location = Drawing::Point(40 - int(move[2] * 4), 190);
					copy[button2]->Location = Drawing::Point(40 - int(move[2] * 4), 310);
					copy[button3]->Location = Drawing::Point(40 - int(move[2] * 4), 430);
				}
				else {
					button1->Location = Drawing::Point(40 - int(move[2] * 4), 190);
					button2->Location = Drawing::Point(40 - int(move[2] * 4), 310);
					button3->Location = Drawing::Point(40 - int(move[2] * 4), 430);
				}
			}
			if (counter[0] == 120) {
				move[0] = 0;
				move[1] = 0;
				counter[0] = 0;
				button4->Enabled = false;
				button5->Enabled = false;
				button6->Enabled = false;
				button7->Enabled = false;
				button8->Enabled = false;
				button9->Enabled = false;
				button10->Enabled = false;
				WinState = "menu";
				lab_choice_to_menu->Stop();
			}
		}
		// Анимация перехода на экран выбора задания из экрана выбора лабораторной
		private: System::Void task_choice_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				move[0] = 100;
				flowey_shot->Stop();
				flowey_show->Stop();
				flowey_hide->Start();
				label2->TextAlign = Drawing::ContentAlignment::MiddleCenter;
				label2->Text = "" + Lab;
				label2->BringToFront();
			}
			if (counter[0] < 120) {
				move[0] *= 0.94;
				label2->Size = Drawing::Size(1000 - int(move[0] * 10), 1000 - int(move[0] * 10));
				label2->Location = Drawing::Point(-109 + int(move[0] * saved_location.X / 100 + move[0] * 1.09), -250 + int(move[0] * saved_location.Y / 100 + move[0] * 2.5));
				label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(80 - move[0] * 0.8)));
			}
			if (counter[0] == 120) {
				move[0] = 100;
				label3->Size = Drawing::Size(700, 200);
				label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 25));
				label3->TextAlign = Drawing::ContentAlignment::TopCenter;
				label3->Text = gcnew String(lab_names[Lab - 1].data());
				label3->BringToFront();
			}
			if (counter[0] > 119 && counter[0] < 220) {
				move[0] *= 0.93;
				label2->Location = Drawing::Point(-109, -320 + int(move[0] * 0.7));
				label3->Location = Drawing::Point(41, 250 + int(move[0] * 6));
			}
			if (counter[0] == 220) {
				move[0] = 0.4;
				move[1] = 0;
				reset();
				Resources::ResourceManager^ Tasks = gcnew Resources::ResourceManager("ReshatorLaborator2.Tasks", System::Reflection::Assembly::GetExecutingAssembly());
				label1->Location = Drawing::Point(186, 0);
				label1->Size = Drawing::Size(400, 50);
				label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 27));
				label1->Text = "Лабораторная работа";
				int tasks = int(lab_tasks[Lab - 1].size());
				if (tasks > 0) {
					if (Settings["buttons_animation"]) {
						copy[button1]->Location = Drawing::Point(tasks == 1 ? 281 : tasks == 2 || tasks == 4 ? 163 : 46, tasks < 4 ? 260 : 190);
						copy[button1]->Size = Drawing::Size(220, 125);
						copy[button1]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button1->Location = Drawing::Point(tasks == 1 ? 281 : tasks == 2 || tasks == 4 ? 163 : 46, tasks < 4 ? 260 : 190);
						button1->Size = Drawing::Size(220, 125);
						button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button1->Text = gcnew String(lab_tasks[Lab - 1][0].data());
					button1->Enabled = true;
				}
				if (tasks > 1) {
					if (Settings["buttons_animation"]) {
						copy[button2]->Location = Drawing::Point(tasks == 2 || tasks == 4 ? 398 : 281, tasks < 4 ? 260 : 190);
						copy[button2]->Size = Drawing::Size(220, 125);
						copy[button2]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button2->Location = Drawing::Point(tasks == 2 || tasks == 4 ? 398 : 281, tasks < 4 ? 260 : 190);
						button2->Size = Drawing::Size(220, 125);
						button2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button2->Text = gcnew String(lab_tasks[Lab - 1][1].data());
					button2->Enabled = true;
				}
				if (tasks > 2) {
					if (Settings["buttons_animation"]) {
						copy[button3]->Location = Drawing::Point(tasks == 4 ? 163 : 516, tasks == 3 ? 260 : tasks == 4 ? 330 : 190);
						copy[button3]->Size = Drawing::Size(220, 125);
						copy[button3]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button3->Location = Drawing::Point(tasks == 4 ? 163 : 516, tasks == 3 ? 260 : tasks == 4 ? 330 : 190);
						button3->Size = Drawing::Size(220, 125);
						button3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button3->Text = gcnew String(lab_tasks[Lab - 1][2].data());
					button3->Enabled = true;
				}
				if (tasks > 3) {
					if (Settings["buttons_animation"]) {
						copy[button4]->Location = Drawing::Point(tasks < 6 ? 163 : 46, 330);
						copy[button4]->Size = Drawing::Size(220, 125);
						copy[button4]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button4->Location = Drawing::Point(tasks < 6 ? 163 : 46, 330);
						button4->Size = Drawing::Size(220, 125);
						button4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button4->Text = gcnew String(lab_tasks[Lab - 1][3].data());
					button4->Enabled = true;
				}
				if (tasks > 4) {
					if (Settings["buttons_animation"]) {
						copy[button5]->Location = Drawing::Point(tasks < 6 ? 398 : 281, 330);
						copy[button5]->Size = Drawing::Size(220, 125);
						copy[button5]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button5->Location = Drawing::Point(tasks < 6 ? 398 : 281, 330);
						button5->Size = Drawing::Size(220, 125);
						button5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button5->Text = gcnew String(lab_tasks[Lab - 1][4].data());
					button5->Enabled = true;
				}
				if (tasks > 5) {
					if (Settings["buttons_animation"]) {
						copy[button6]->Location = Drawing::Point(516, 330);
						copy[button6]->Size = Drawing::Size(220, 125);
						copy[button6]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					else {
						button6->Location = Drawing::Point(516, 330);
						button6->Size = Drawing::Size(220, 125);
						button6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
					}
					button6->Text = gcnew String(lab_tasks[Lab - 1][5].data());
					button6->Enabled = true;
				}
				if (Settings["buttons_animation"]) {
					copy[button7]->Location = Drawing::Point(241, 410);
					copy[button7]->Size = Drawing::Size(300, 100);
					copy[button7]->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				}
				else {
					button7->Location = Drawing::Point(241, 410);
					button7->Size = Drawing::Size(300, 100);
					button7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20));
				}
				button7->Text = "В МЕНЮ";
				button7->Enabled = true;
			}
			if (counter[0] > 220 && counter[0] < 270) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 269 && counter[0] < 320) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 220 && counter[0] < 320) {
				label2->Size = Drawing::Size(1000 - int(move[1] * 9.74), 1000 - int(move[1] * 9.5));
				label2->Location = Drawing::Point(-109 + int(move[1] * 6.70), -320 + int(move[1] * 3.20));
				label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(80 - move[1] * 0.53)));
				label3->Location = Drawing::Point(41, 250 + int(move[1] * 8));
			}
			if (counter[0] == 320) {
				counter[0] = 0;
				move[0] = 0;
				move[1] = 0;
				label1->Text = "Лабораторная работа " + label2->Text;
				label2->Location = Drawing::Point(801, 0);
				WinState = "task_choice";
				task_choice->Stop();
			}
		}
		// Анимация перехода на экран выполнения задания
		private: System::Void task_resolve_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				label2->BorderStyle = BorderStyle::Fixed3D;
				label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10));
				label2->Text = gcnew String(lab_tasks[Lab - 1][Task - 1].data());
				label2->Size = saved_size;
				label2->Location = saved_location;
				if (Lab == 1 || (Lab == 4 && Task == 2) || Lab == 5 || (Lab == 6 && Task == 2)) {
					button7->Text = "Польз. функция";
					button7->Enabled = true;
					if (Settings["buttons_animation"]) {
						copy[button7]->Size = Drawing::Size(250, 100);
					}
					else {
						button7->Size = Drawing::Size(250, 100);
					}
				}
				move[0] = 0.4;
				move[1] = 0;
			}
			if (counter[0] < 50) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 49 && counter[0] < 100) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] < 100) {
				label1->Top = 2 - int(move[1] * 2);
				label2->Size = Drawing::Size(saved_size.Width - int(move[1] * saved_size.Width / 100 - move[1] * 5), saved_size.Height - int(move[1] * saved_size.Height / 100 - move[1] * 1));
				label2->Location = Drawing::Point(saved_location.X - int(move[1] * saved_location.X / 100 - move[1] * 1.41), saved_location.Y - int(move[1] * saved_location.Y / 100 - move[1] * 0.12));
				label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(10 + move[1] * 0.05)));
				if (Settings["buttons_animation"]) {
					copy[button1]->Top += int(move[0]);
					copy[button2]->Top += int(move[0]);
					copy[button3]->Top += int(move[0]);
					copy[button4]->Top += int(move[0]);
					if (lab_tasks[Lab - 1].size() < 3) {
						copy[button5]->Size = Drawing::Size(242 + int(move[1] * 0.08), 125 - int(move[1] * 0.25));
						copy[button5]->Location = Drawing::Point(270 - int(move[1] * 0.03), 415 + int(move[1] * 0.25));
					}
					if (lab_tasks[Lab - 1].size() == 3 || lab_tasks[Lab - 1].size() == 4) {
						copy[button5]->Size = Drawing::Size(242 + int(move[1] * 0.08), 125 - int(move[1] * 0.25));
						copy[button5]->Location = Drawing::Point(402 - int(move[1] * 1.35), 415 + int(move[1] * 0.25));
					}
					if (lab_tasks[Lab - 1].size() == 5) {
						copy[button5]->Size = Drawing::Size(200 + int(move[1] * 0.5), 125 - int(move[1] * 0.25));
						copy[button5]->Location = Drawing::Point(306 - int(move[1] * 0.39), 415 + int(move[1] * 0.25));
					}
					copy[button6]->Top += int(move[0]);
					if (Lab == 1 || (Lab == 4 && Task == 2) || Lab == 5 || (Lab == 6 && Task == 2)) {
						copy[button7]->Location = Drawing::Point(524, 800 - int(move[1] * 3.6));
					}
				}
				else {
					button1->Top += int(move[0]);
					button2->Top += int(move[0]);
					button3->Top += int(move[0]);
					button4->Top += int(move[0]);
					if (lab_tasks[Lab - 1].size() < 3) {
						button5->Size = Drawing::Size(242 + int(move[1] * 0.08), 125 - int(move[1] * 0.25));
						button5->Location = Drawing::Point(270 - int(move[1] * 0.03), 415 + int(move[1] * 0.25));
					}
					if (lab_tasks[Lab - 1].size() == 3 || lab_tasks[Lab - 1].size() == 4) {
						button5->Size = Drawing::Size(242 + int(move[1] * 0.08), 125 - int(move[1] * 0.25));
						button5->Location = Drawing::Point(402 - int(move[1] * 1.35), 415 + int(move[1] * 0.25));
					}
					if (lab_tasks[Lab - 1].size() == 5) {
						button5->Size = Drawing::Size(200 + int(move[1] * 0.5), 125 - int(move[1] * 0.25));
						button5->Location = Drawing::Point(306 - int(move[1] * 0.39), 415 + int(move[1] * 0.25));
					}
					button6->Top += int(move[0]);
					if (Lab == 1 || (Lab == 4 && Task == 2) || Lab == 5 || (Lab == 6 && Task == 2)) {
						button7->Location = Drawing::Point(524, 800 - int(move[1] * 3.6));
					}
				}
			}
			if (counter[0] == 100) {
				this->Text = "Reshator Laborator 2 - Лабораторная работа " + Lab;
				button1->Enabled = false;
				button2->Enabled = false;
				button3->Enabled = false;
				button4->Enabled = false;
				button5->Enabled = true;
				button6->Enabled = false;
				label1->Font = gcnew System::Drawing::Font(L"Cascadia Mono", 15);
				label1->BorderStyle = BorderStyle::Fixed3D;
				label1->AutoSize = false;
				label1->Text = "";
				label1->BringToFront();
				if (Lab == 5) {
					CustomFunc = true;
				}
				saved_text = lab_manager();
				text_write->Start();
				move[0] = 100;
			}
			if (counter[0] > 100 && counter[0] < 200) {
				move[0] *= 0.93;
				label1->Size = Drawing::Size(600 - int(move[0] * 6), 230);
				label1->Location = Drawing::Point(391 - label1->Width / 2, 195);
				label1->BackColor = Drawing::Color::FromArgb(0, 0, 64 - int(move[0] * 0.64));
			}
			if (counter[0] == 200) {
				move[0] = 0;
				move[1] = 0;
				counter[0] = 0;
				WinState = "task_resolve";
				task_resolve->Stop();
			}
		}
		// Анимация создания текста из переменной saved_text в объект label1. Перед использованием следует очистить текст из label1
		private: System::Void text_write_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (saved_text->Length > label1->Text->Length) {
				label1->Text += saved_text[label1->Text->Length];
			}
			else {
				text_write->Stop();
			}
		}
		// Анимация перехода в главное меню из экрана выполнения или выбора задания
		private: System::Void to_menu_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				WinState = "animation";
				CustomFunc = false;
				move[0] = 100;
				label3->BringToFront();
				if (Settings["flowey"]) {
					label3->TextAlign = Drawing::ContentAlignment::MiddleLeft;
					label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 30));
					label3->Text = "";
					flowey_hide->Stop();
					flowey_shot->Stop();
					flowey->Location = Drawing::Point(267, 225);
					flowey_show->Start();
					flowey->BringToFront();
				}
				else {
					label3->TextAlign = Drawing::ContentAlignment::MiddleCenter;
					label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(0.1)));
					label3->Text = "Возвращаемся в меню...";
				}
			}
			if (Settings["flowey"]) {
				if (counter[0] < 88) {
					move[0] *= 0.92;
					label3->Size = Drawing::Size(1000 - int(move[0] * 10), 1000 - int(move[0] * 10));
					label3->Location = Drawing::Point(-109 + int(move[0] * 3.91 + move[0] * 1.09), -350 + int(move[0] * 4.16 + move[0] * 3.5));
				}
				if (counter[0] > 88 && counter[0] < 192) {
					System::String^ text = "Возвращаемся в меню...";
					if (counter[0] % 4 == 0 && (counter[0] - 88) / 4 <= text->Length) {
						System::String^ label = "                     ";
						for (int i = 0; i < text->Length && i <= (counter[0] - 88) / 4; i++) {
							label += text[i];
						}
						label3->Text = label;
					}
					if (counter[0] % 8 == 0 && flowey_state == 0) {
						if ((counter[0] / 8) % 2 == 0) {
							floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_tricky2");
							floweyTop->Size = Drawing::Size(floweyTop->Image->Width * 2, floweyTop->Image->Height * 2);
						}
						else {
							floweyTop->Image = (Bitmap^)Sprites->GetObject("flowey_tricky");
							floweyTop->Size = Drawing::Size(floweyTop->Image->Width * 2, floweyTop->Image->Height * 2);
						}
					}
				}
			}
			else {
				if (counter[0] < 120) {
					move[0] *= 0.94;
					label3->Size = Drawing::Size(1000 - int(move[0] * 10), 1000 - int(move[0] * 10));
					label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", float(30 - move[0] * 0.3)));
					label3->Location = Drawing::Point(-109 + int(move[0] * 3.91 + move[0] * 1.09), -220 + int(move[0] * 4.16 + move[0] * 2.2));
				}
				if (counter[0] == 120) {
					counter[0] = 200;
				}
			}
			if (counter[0] == 230) {
				reset();
				this->Text = "Reshator Laborator 2";
				label1->Location = System::Drawing::Point(801, 0);
				label1->BorderStyle = BorderStyle::None;
				label1->BackColor = Color::Transparent;
				label1->AutoSize = true;
				label2->Location = Drawing::Point(801, 0);
				label2->BorderStyle = BorderStyle::None;
				logo1->Location = Drawing::Point(145, 15);
				logo1->Size = Drawing::Size(381, 53);
				logo2->Location = Drawing::Point(145, 72);
				logo2->Size = Drawing::Size(381, 48);
				logo3->Location = Drawing::Point(530, 12);
				logo3->Size = Drawing::Size(112, 123);
				button1->Enabled = true;
				button2->Enabled = true;
				button3->Enabled = true;
				move[0] = 0.4;
				move[1] = 0;
				move[2] = 100;
			}
			if (counter[0] > 230 && counter[0] < 280) {
				move[0] += (move[0] + 1) * 0.05;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 279 && counter[0] < 330) {
				move[0] = move[0] * 0.95;
				move[1] += move[0] / 4.933035;
			}
			if (counter[0] > 230 && counter[0] < 330) {
				if (Settings["flowey"]) {
					flowey->Location = System::Drawing::Point(267 + int(move[1] * 1.78), 225 + int(move[1] * 0.61));
					label3->Location = Drawing::Point(-109 + int(move[1] * 10), -350);
				}
				else {
					label3->Location = Drawing::Point(-109 + int(move[1] * 10), -220);
				}
			}
			if (counter[0] > 310 && counter[0] < 410) {
				move[2] *= 0.93;
				if (Settings["buttons_animation"]) {
					copy[button1]->Location = Drawing::Point(40 - int(move[2] * 4), 190);
					copy[button2]->Location = Drawing::Point(40 - int(move[2] * 4), 310);
					copy[button3]->Location = Drawing::Point(40 - int(move[2] * 4), 430);
				}
				else {
					button1->Location = Drawing::Point(40 - int(move[2] * 4), 190);
					button2->Location = Drawing::Point(40 - int(move[2] * 4), 310);
					button3->Location = Drawing::Point(40 - int(move[2] * 4), 430);
				}
			}
			if (counter[0] == 410) {
				counter[0] = 0;
				move[0] = 0;
				move[1] = 0;
				flowey->SendToBack();
				WinState = "menu";
				to_menu->Stop();
			}
		}
		private: System::Void func_custom_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {
				button7->Text = "Сбросить функцию";
			} 
			if (counter[0]) {

			}
		}
		private: System::Void func_reset_Tick(System::Object^ sender, System::EventArgs^ e) {
			counter[0]++;
			if (counter[0] == 1) {

			}
		}
};
}