#pragma once

namespace Project1 {

	int i = 0;
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button2;




	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(383, 128);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(639, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(961, 128);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(184, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->Location = System::Drawing::Point(77, 128);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(184, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Chartreuse;
			this->label2->Location = System::Drawing::Point(129, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Уровень 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightCoral;
			this->label3->Location = System::Drawing::Point(86, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Напишите объект вывода";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Location = System::Drawing::Point(116, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Результат";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Location = System::Drawing::Point(433, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Игра \"Изучение языка программирования c++\"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(433, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Уровень 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Lime;
			this->label6->Location = System::Drawing::Point(678, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Уровень 3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(1060, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Уровень 4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label8->Location = System::Drawing::Point(433, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Результат";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label9->Location = System::Drawing::Point(706, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 16);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Результат";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label10->Location = System::Drawing::Point(1043, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Результат";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightCoral;
			this->label11->Location = System::Drawing::Point(508, 318);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Баллы";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(420, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 69);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Подсчет баллов";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::LightCoral;
			this->label12->Location = System::Drawing::Point(401, 91);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(166, 16);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Напишите объект ввода";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::LightCoral;
			this->label13->Location = System::Drawing::Point(636, 91);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(267, 16);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Присвйте переменной num значение 42";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::LightCoral;
			this->label14->Location = System::Drawing::Point(937, 91);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(341, 16);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Напишите функцию проверки num на его значение";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::LightCoral;
			this->label15->Location = System::Drawing::Point(918, 434);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(112, 16);
			this->label15->TabIndex = 24;
			this->label15->Text = L"ОСН. Результта";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(870, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(263, 114);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Подсчет результата";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(1290, 626);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Изучение c++";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->BackColorChanged += gcnew System::EventHandler(this, &MyForm::red);
			this->BackgroundImageChanged += gcnew System::EventHandler(this, &MyForm::MyForm_BackgroundImageChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text->ToLower() == "cout")
		{
			this->label4->Text = " Верно ";
			i += 25;
			textBox4->Enabled = false;
		}
		else
		{
			this->label4->Text = " Неверно ";

		}
	
	}


	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	

	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
		label11->Text = i.ToString();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label11->Text = i.ToString();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->ToLower() == "cin")
		{
			this->label8->Text = " Верно ";
			i += 25;
			textBox1->Enabled = false;
		}
		else
		{
			this->label8->Text = " Неверно ";

		}

	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text->ToLower() == "int num = 42;")
	{
		this->label9->Text = " Верно ";
		i += 25;
		textBox2->Enabled = false;
	}
	else
	{
		this->label9->Text = " Неверно ";

	}

	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text->ToLower() == "if(num==42)")
	{
		this->label10->Text = " Верно ";
		i += 25;
		textBox3->Enabled = false;
	}
	else
	{
		this->label10->Text = " Неверно ";

	}

}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (i == 100) {
		label15->Text = "Игра пройдена";
	}
}
private: System::Void MyForm_BackgroundImageChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void red(System::Object^ sender, System::EventArgs^ e) {
}
};
}
