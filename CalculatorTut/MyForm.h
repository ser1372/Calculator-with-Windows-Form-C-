#pragma once

namespace CalculatorTut {

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
    protected:
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::ComboBox^ comboBox1;

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
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(34, 197);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(474, 29);
            this->textBox1->TabIndex = 0;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(34, 294);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(474, 29);
            this->textBox2->TabIndex = 1;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(34, 397);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(474, 29);
            this->textBox3->TabIndex = 2;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(29, 170);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(140, 24);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Первое число:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(29, 267);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(138, 24);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Второе число:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(29, 370);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(108, 24);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Результат:";
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(34, 477);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(475, 48);
            this->button1->TabIndex = 7;
            this->button1->Text = L"Вычислить";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(34, 531);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(475, 48);
            this->button2->TabIndex = 8;
            this->button2->Text = L"Сбросить";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(53, 35);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(114, 25);
            this->label4->TabIndex = 9;
            this->label4->Text = L"Сложение";
            // 
            // comboBox1
            // 
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Вычитание", L"Умножение", L"Деление" });
            this->comboBox1->Location = System::Drawing::Point(318, 32);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(189, 33);
            this->comboBox1->TabIndex = 10;
            this->comboBox1->Text = L"Сложение";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDark;
            this->ClientSize = System::Drawing::Size(552, 612);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->MaximizeBox = false;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Calculator";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
       

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
    
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
    


}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
       //Функция защиты от неверного ввода данных
       bool Protect() {
           if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0)) { return false; }

           for (int i = 0; i < textBox1->Text->Length; i++) {
               if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',')) {}
               else { return false; }
           }

           for (int i = 0; i < textBox2->Text->Length; i++) {
               if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',')) {}
               else { return false; }
           }

           return true;
       }
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    if (Protect()) {
        double Num1, Num2, Result;
        Num1 = System::Convert::ToDouble(textBox1->Text);
        Num2 = System::Convert::ToDouble(textBox2->Text);

        if (comboBox1->SelectedItem == "Сложение") {
            Result = Num1 + Num2;
            label4->Text = L"Сложение";
        }
        else
            if (comboBox1->SelectedItem == "Вычитание") {
                Result = Num1 - Num2;
                label4->Text = L"Вычитание";
            }
            else
                if (comboBox1->SelectedItem == "Умножение") {
                    Result = Num1 * Num2;
                    label4->Text = L"Умножение";

                }
                else
                    if (comboBox1->SelectedItem == "Деление") {
                        if (Num1 != 0) {
                            Result = Num1 / Num2;
                            label4->Text = L"Деление";
                        }
                        else { MessageBox::Show("Попытка деления на 0", "Ошибка"); }

                    }
        textBox3->Text = System::Convert::ToString(Result);
                }
    else {
        MessageBox::Show("Ошибка ввода", "Ошибка");
    }
}
};
}
