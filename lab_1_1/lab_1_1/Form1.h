#include "ZavdClass.h"
#pragma once

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ Value2;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;


    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->Value2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->label1->Location = System::Drawing::Point(-1, 21);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(158, 25);
            this->label1->TabIndex = 0;
            this->label1->Text = L"¬вед≥ть число x";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(205, 25);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(137, 22);
            this->textBox1->TabIndex = 1;
            // 
            // Value2
            // 
            this->Value2->AutoSize = true;
            this->Value2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->Value2->Location = System::Drawing::Point(2, 63);
            this->Value2->Name = L"Value2";
            this->Value2->Size = System::Drawing::Size(158, 25);
            this->Value2->TabIndex = 2;
            this->Value2->Text = L"¬вед≥ть число y";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(205, 67);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(137, 22);
            this->textBox2->TabIndex = 3;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(15, 159);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(127, 25);
            this->label2->TabIndex = 4;
            this->label2->Text = L"«наченн€ a";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(206, 111);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(138, 22);
            this->textBox3->TabIndex = 5;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(234, 490);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(172, 34);
            this->button1->TabIndex = 6;
            this->button1->Text = L"ќбчислити";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(-1, 107);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(158, 25);
            this->label3->TabIndex = 7;
            this->label3->Text = L"¬вед≥ть число z";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(205, 214);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(137, 22);
            this->textBox5->TabIndex = 9;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(15, 210);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(127, 25);
            this->label4->TabIndex = 10;
            this->label4->Text = L"«наченн€ b";
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(205, 163);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(139, 22);
            this->textBox4->TabIndex = 11;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(418, 675);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->Value2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Name = L"Form1";
            this->Text = L"88888";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
      double x = System::Convert::ToDouble(textBox1->Text);
      double y = System::Convert::ToDouble(textBox2->Text);
      double z = System::Convert::ToDouble(textBox3->Text);
      ZavdClass Zavd;
      Zavd.Fn_b(x, y, z);
      Zavd.Fn_a(x, y, z);

      textBox5->Text = System::Convert::ToString(Zavd.geta());
      textBox4->Text = System::Convert::ToString(Zavd.getb());

  }
};
}