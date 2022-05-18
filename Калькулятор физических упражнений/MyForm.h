#pragma once
#include<string>
#include<cmath>
int main_result;
namespace Project4 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;





	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;








	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Род деятельности";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(17) {
				L"", L"Баскетбол", L"Велосипед", L"Бокс", L"Беговые лыжи",
					L"Горные лыжи", L"Гольф", L"Коньки", L"Каратэ", L"Гребля", L"Теннис", L"Прогулка", L"Скакалка", L"Плавание", L"Футбол", L"Волейбол",
					L"Хоккей"
			});
			this->comboBox1->Location = System::Drawing::Point(213, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(389, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(199, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Затраченное время";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(364, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Часы";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(488, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Минуты";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(855, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(174, 44);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Посчитать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(620, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 44);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(645, 138);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(117, 41);
			this->textBox3->TabIndex = 26;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(660, 42);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(331, 39);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Количество сожённых кКалорий";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(874, 138);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(117, 41);
			this->textBox4->TabIndex = 29;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(642, 102);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(170, 16);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Данным упражнением";
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(891, 95);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 23);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Всего";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(358, 151);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(116, 33);
			this->textBox5->TabIndex = 33;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(480, 151);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(116, 33);
			this->textBox6->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(5, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(358, 41);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Сколько ккалорий вы бы хотели сжечь\?";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(524, 423);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 33);
			this->textBox1->TabIndex = 40;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(402, 423);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 33);
			this->textBox2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(530, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 23);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Минуты";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(399, 393);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 23);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Часы";
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(420, 358);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(199, 23);
			this->label15->TabIndex = 36;
			this->label15->Text = L"Затраченное время";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(715, 399);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 57);
			this->textBox7->TabIndex = 42;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(715, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 44);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Узнать упражнение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(118, 415);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(117, 41);
			this->textBox8->TabIndex = 44;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1059, 664);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор физических нагрузок";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{


	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	double deiat;
	double result;
	double num1;
	double num2;
	double age=1;
	double weight=1;
	double gender=75;
 	if (textBox5->Text == "")
	{
		num1 = 0;
	}
	else
	{
		num1 = System::Convert::ToDouble(textBox5->Text) ;
	}
	if (textBox6->Text == "")
	{
		num2 = 0;
	}
	else
	{
		num2 = System::Convert::ToDouble(textBox6->Text)/60;
	}
	if (comboBox1->SelectedItem == "Баскетбол")
	{
		deiat = 380;
		result = (deiat * num1 ) + (deiat * num2)+age+gender+weight;
	}
	if (comboBox1->SelectedItem == "Велосипед")
	{
		deiat = 320;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Бокс")
	{
		deiat = 330;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Беговые лыжи")
	{
		deiat = 295;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Горные лыжи")
	{
		deiat = 210;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Гольф")
	{
		deiat = 175;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Коньки")
	{
		deiat = 300;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Каратэ")
	{
		deiat = 250;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Гребля")
	{
		deiat = 240;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Теннис")
	{
		deiat = 348;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Прогулка")
	{
		deiat = 190;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Скакалка")
	{
		deiat = 280;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Плавание")
	{
		deiat = 394;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Футбол")
	{
		deiat = 386;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Волейбол")
	{
		deiat = 219;
		result = (deiat * num1 ) + (deiat * num2);
	}
	if (comboBox1->SelectedItem == "Хоккей")
	{
		deiat = 264;
		result = (deiat * num1) + (deiat * num2);
	}
		main_result += result;
		textBox4->Text = System::Convert::ToString(main_result);
		textBox3->Text = System::Convert::ToString(round(result));

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	main_result = 0;
	textBox3->Text = "";
	textBox4->Text = "";
	comboBox1->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}	

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox3->Text = "";
	textBox4->Text = "";
	comboBox1->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	double upr;
	upr = System::Convert::ToDouble(textBox8->Text);
	double hour;
	double minute;
	if (textBox2->Text == "")
	{
		hour = 0;
	}
	else
	{
		hour = System::Convert::ToDouble(textBox2->Text);
	}
	if (textBox1->Text == "")
	{
		minute = 0;
	}
	else
	{
		minute = System::Convert::ToDouble(textBox1->Text) / 60;
	}
	int time = hour + minute;
	upr = upr / time;
	if (upr > 0 && upr <= 175)
	{
		textBox7->Text = "Гольф";
	}
	if (upr>175&&upr<=190)
	{
		textBox7->Text = "Прогулка";
	}
	if (upr > 190 && upr <= 219)
	{
		textBox7->Text = "Волейбол";
	}
	if (upr > 219 && upr <=264 )
	{
		textBox7->Text = "Хоккей";
	}
	if (upr > 264 && upr <= 280)
	{
		textBox7->Text = "Скакалка";
	}
	if (upr > 280 && upr <= 295)
	{
		textBox7->Text = "Беговые лыжи";
	}
	if (upr > 295 && upr <= 320)
	{
		textBox7->Text = "Велосипед";
	}
	if (upr > 320 && upr <= 330)
	{
		textBox7->Text = "Бокс";
	}
	if (upr > 330 && upr <= 350)
	{
		textBox7->Text = "Баскетбол";
	}
	if (upr > 350 && upr <= 400)
	{
		textBox7->Text = "Футбол";
	}
	if (upr > 400)
	{
		textBox7->Text = "Слишком мало времени";
	}
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
