#pragma once

namespace TodoList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ taskTextBox;
	private: System::Windows::Forms::Button^ addTask;
	private: System::Windows::Forms::ListBox^ listTask;
	private: System::Windows::Forms::Button^ deleteTask;
	private: System::Windows::Forms::Button^ doneTask;
	private: System::Windows::Forms::ListBox^ doneList;
	private: System::Windows::Forms::Label^ taskLabel;
	private: System::Windows::Forms::Label^ doneLabel;
	private: System::Windows::Forms::Label^ todoCounter;
	private: System::Windows::Forms::Label^ doneCounter;
	protected:

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
			this->taskTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addTask = (gcnew System::Windows::Forms::Button());
			this->listTask = (gcnew System::Windows::Forms::ListBox());
			this->deleteTask = (gcnew System::Windows::Forms::Button());
			this->doneTask = (gcnew System::Windows::Forms::Button());
			this->doneList = (gcnew System::Windows::Forms::ListBox());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->doneLabel = (gcnew System::Windows::Forms::Label());
			this->todoCounter = (gcnew System::Windows::Forms::Label());
			this->doneCounter = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// taskTextBox
			// 
			this->taskTextBox->Location = System::Drawing::Point(10, 12);
			this->taskTextBox->Name = L"taskTextBox";
			this->taskTextBox->Size = System::Drawing::Size(100, 20);
			this->taskTextBox->TabIndex = 0;
			// 
			// addTask
			// 
			this->addTask->Location = System::Drawing::Point(116, 12);
			this->addTask->Name = L"addTask";
			this->addTask->Size = System::Drawing::Size(75, 23);
			this->addTask->TabIndex = 1;
			this->addTask->Text = L"Add Task";
			this->addTask->UseVisualStyleBackColor = true;
			this->addTask->Click += gcnew System::EventHandler(this, &MyForm::addButtonClick);
			// 
			// listTask
			// 
			this->listTask->FormattingEnabled = true;
			this->listTask->Location = System::Drawing::Point(10, 89);
			this->listTask->Name = L"listTask";
			this->listTask->Size = System::Drawing::Size(206, 186);
			this->listTask->TabIndex = 2;
			// 
			// deleteTask
			// 
			this->deleteTask->Location = System::Drawing::Point(10, 281);
			this->deleteTask->Name = L"deleteTask";
			this->deleteTask->Size = System::Drawing::Size(100, 23);
			this->deleteTask->TabIndex = 3;
			this->deleteTask->Text = L"Delete Task";
			this->deleteTask->UseVisualStyleBackColor = true;
			this->deleteTask->Click += gcnew System::EventHandler(this, &MyForm::deleteButtonClick);
			// 
			// doneTask
			// 
			this->doneTask->Location = System::Drawing::Point(116, 281);
			this->doneTask->Name = L"doneTask";
			this->doneTask->Size = System::Drawing::Size(100, 23);
			this->doneTask->TabIndex = 4;
			this->doneTask->Text = L"Complete Task";
			this->doneTask->UseVisualStyleBackColor = true;
			this->doneTask->Click += gcnew System::EventHandler(this, &MyForm::completeButtonClick);
			// 
			// doneList
			// 
			this->doneList->FormattingEnabled = true;
			this->doneList->Location = System::Drawing::Point(222, 89);
			this->doneList->Name = L"doneList";
			this->doneList->Size = System::Drawing::Size(206, 186);
			this->doneList->TabIndex = 5;
			// 
			// taskLabel
			// 
			this->taskLabel->AutoSize = true;
			this->taskLabel->Location = System::Drawing::Point(12, 70);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(72, 13);
			this->taskLabel->TabIndex = 6;
			this->taskLabel->Text = L"Tasks To Do:";
			// 
			// doneLabel
			// 
			this->doneLabel->AutoSize = true;
			this->doneLabel->Location = System::Drawing::Point(222, 70);
			this->doneLabel->Name = L"doneLabel";
			this->doneLabel->Size = System::Drawing::Size(92, 13);
			this->doneLabel->TabIndex = 7;
			this->doneLabel->Text = L"Completed Tasks:";
			// 
			// todoCounter
			// 
			this->todoCounter->AutoSize = true;
			this->todoCounter->Location = System::Drawing::Point(90, 70);
			this->todoCounter->Name = L"todoCounter";
			this->todoCounter->Size = System::Drawing::Size(13, 13);
			this->todoCounter->TabIndex = 8;
			this->todoCounter->Text = L"0";
			// 
			// doneCounter
			// 
			this->doneCounter->AutoSize = true;
			this->doneCounter->Location = System::Drawing::Point(320, 70);
			this->doneCounter->Name = L"doneCounter";
			this->doneCounter->Size = System::Drawing::Size(13, 13);
			this->doneCounter->TabIndex = 9;
			this->doneCounter->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 326);
			this->Controls->Add(this->doneCounter);
			this->Controls->Add(this->todoCounter);
			this->Controls->Add(this->doneLabel);
			this->Controls->Add(this->taskLabel);
			this->Controls->Add(this->doneList);
			this->Controls->Add(this->doneTask);
			this->Controls->Add(this->deleteTask);
			this->Controls->Add(this->listTask);
			this->Controls->Add(this->addTask);
			this->Controls->Add(this->taskTextBox);
			this->Name = L"MyForm";
			this->Text = L"Task Organizer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		System::Void addButtonClick(System::Object^ sender, System::EventArgs^ e) {
			String^ task = this->taskTextBox->Text;

			if (!String::IsNullOrWhiteSpace(task)) {
				this->listTask->Items->Add(task);
				this->todoCounter->Text = (this->listTask->Items->Count).ToString();
				this->taskTextBox->Clear();
			}
		}

		System::Void deleteButtonClick(System::Object^ sender, System::EventArgs^ e) {
			System::Object^ task = this->listTask->SelectedItem;
			
			if (task != nullptr) {
				this->listTask->Items->Remove(task);
				this->todoCounter->Text = (this->listTask->Items->Count).ToString();
			}
		}

		System::Void completeButtonClick(System::Object^ sender, System::EventArgs^ e) {
			System::Object^ task = this->listTask->SelectedItem;

			if (task != nullptr) {
				this->listTask->Items->Remove(task);
				this->todoCounter->Text = (this->listTask->Items->Count).ToString();
				this->doneList->Items->Add(task);
				this->doneCounter->Text = (this->doneList->Items->Count).ToString();
			}
		}
#pragma endregion
	};
}
