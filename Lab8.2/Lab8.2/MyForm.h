#pragma once

namespace Lab82 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:String^ booksFname = "books.txt";
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_Author;
	private: System::Windows::Forms::TextBox^ textBox_Title;
	private: System::Windows::Forms::TextBox^ textBox_Year;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_Save;
	private: System::Windows::Forms::TextBox^ textBox_SearchYear;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button_Filter;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_Author = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Title = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Year = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_Save = (gcnew System::Windows::Forms::Button());
			this->textBox_SearchYear = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_Filter = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Читати з файла дані";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 103);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 240);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(29, 366);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 453);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(267, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Середнє арифметичне від\'ємних чисел:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 505);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Очистити повністю";
			// 
			// textBox_Author
			// 
			this->textBox_Author->Location = System::Drawing::Point(616, 38);
			this->textBox_Author->Name = L"textBox_Author";
			this->textBox_Author->Size = System::Drawing::Size(100, 22);
			this->textBox_Author->TabIndex = 5;
			// 
			// textBox_Title
			// 
			this->textBox_Title->Location = System::Drawing::Point(616, 105);
			this->textBox_Title->Name = L"textBox_Title";
			this->textBox_Title->Size = System::Drawing::Size(100, 22);
			this->textBox_Title->TabIndex = 6;
			// 
			// textBox_Year
			// 
			this->textBox_Year->Location = System::Drawing::Point(616, 168);
			this->textBox_Year->Name = L"textBox_Year";
			this->textBox_Year->Size = System::Drawing::Size(100, 22);
			this->textBox_Year->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(543, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Автор";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(543, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Назва";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(543, 168);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Рік";
			// 
			// button_Save
			// 
			this->button_Save->Location = System::Drawing::Point(539, 215);
			this->button_Save->Name = L"button_Save";
			this->button_Save->Size = System::Drawing::Size(223, 29);
			this->button_Save->TabIndex = 11;
			this->button_Save->Text = L"Записати книгу у файл";
			this->button_Save->UseVisualStyleBackColor = true;
			this->button_Save->Click += gcnew System::EventHandler(this, &MyForm::button_Save_Click);
			// 
			// textBox_SearchYear
			// 
			this->textBox_SearchYear->Location = System::Drawing::Point(662, 271);
			this->textBox_SearchYear->Name = L"textBox_SearchYear";
			this->textBox_SearchYear->Size = System::Drawing::Size(100, 22);
			this->textBox_SearchYear->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(480, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(176, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Введіть рік для фільтрації:";
			// 
			// button_Filter
			// 
			this->button_Filter->Location = System::Drawing::Point(561, 329);
			this->button_Filter->Name = L"button_Filter";
			this->button_Filter->Size = System::Drawing::Size(155, 35);
			this->button_Filter->TabIndex = 14;
			this->button_Filter->Text = L"Пошук книги";
			this->button_Filter->UseVisualStyleBackColor = true;
			this->button_Filter->Click += gcnew System::EventHandler(this, &MyForm::button_Filter_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(483, 403);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(402, 85);
			this->dataGridView1->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 572);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button_Filter);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_SearchYear);
			this->Controls->Add(this->button_Save);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_Year);
			this->Controls->Add(this->textBox_Title);
			this->Controls->Add(this->textBox_Author);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fname = "numbers.txt";
		if (File::Exists(fname)) {
			StreamReader^ reader = File::OpenText(fname);
			textBox1->Clear();
			String^ fileContent = reader->ReadToEnd();
			array<String^>^ numbers = fileContent->Split(gcnew array<Char>{' ', '\n', '\r'}, StringSplitOptions::RemoveEmptyEntries);
			for (int i = 0; i < numbers->Length; i++) {
				textBox1->AppendText(numbers[i] + Environment::NewLine);
			}
			reader->Close();
		}
		else {
			MessageBox::Show("Файл numbers.txt не знайдено!");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double sum = 0;
		int count = 0;
		for (int i = 0; i < textBox1->Lines->Length; i++) {
			int number;
			if (Int32::TryParse(textBox1->Lines[i], number)) {
				if (number < 0) { // Варіант 2: від'ємні числа
					sum += number;
					count++;
				}
			}
		}
		if (count > 0) {
			double average = sum / count;
			label2->Text = Convert::ToString(average);
		}
		else {
			label2->Text = "Від'ємних чисел немає";
		}
	}
	private: System::Void button_Save_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox_Author->Text != "" && textBox_Title->Text != "" && textBox_Year->Text != "") {
			File::AppendAllText(booksFname, textBox_Author->Text + "\t" + textBox_Title->Text + "\t" + textBox_Year->Text + "\n");
			textBox_Author->Clear();
			textBox_Title->Clear();
			textBox_Year->Clear();
			MessageBox::Show("Книгу успішно додано!");
		}
		else {
			MessageBox::Show("Заповніть всі поля!");
		}
	}
	private: System::Void button_Filter_Click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Rows->Clear();
		int searchYear;
		if (!Int32::TryParse(textBox_SearchYear->Text, searchYear)) {
			MessageBox::Show("Введіть коректний рік!");
			return;
		}
		if (File::Exists(booksFname)) {
			array<Char>^ separator = { '\t' };
			StreamReader^ reader = File::OpenText(booksFname);
			String^ str;
			while ((str = reader->ReadLine()) != nullptr) {
				array<String^>^ col = str->Split(separator, StringSplitOptions::RemoveEmptyEntries);
				if (col->Length >= 3) {
					int bookYear;
					if (Int32::TryParse(col[2], bookYear)) {
						if (bookYear > searchYear) { // Варіант 2: пізніше введеного року
							dataGridView1->Rows->Add(col[0], col[1], col[2]);
						}
					}
				}
			}
			reader->Close();
		}
		else {
			MessageBox::Show("Файл з книгами ще не створено!");
		}
	};;
	};;
}

                      