#pragma once

namespace cw_31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class ClockForm : public System::Windows::Forms::Form
	{
	public:
		ClockForm(void)
		{
			InitializeComponent();
			displayTime = gcnew System::Boolean(true);
			displayDate = gcnew System::Boolean(true);
		}

	protected:
		~ClockForm()
		{
			if (components)
			{
				delete components;
			}
		}


	// FIELDS
	private: System::Boolean^ displayTime;
	private: System::Boolean^ displayDate;


	 // CONTROLS
	private: System::Windows::Forms::Panel^  panel_clock;
	private: System::Windows::Forms::Timer^  timer_seconds;
	private: System::Windows::Forms::Panel^  panel_options;
	private: System::Windows::Forms::GroupBox^  groupBox_options;
	private: System::Windows::Forms::CheckBox^  checkBox_time;
	private: System::Windows::Forms::CheckBox^  checkBox_date;
	private: System::Windows::Forms::Button^  button_font;
	private: System::Windows::Forms::Button^  button_close;
	private: System::Windows::Forms::FontDialog^  fontDialog_timedate;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel_clock = (gcnew System::Windows::Forms::Panel());
			this->timer_seconds = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel_options = (gcnew System::Windows::Forms::Panel());
			this->groupBox_options = (gcnew System::Windows::Forms::GroupBox());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_font = (gcnew System::Windows::Forms::Button());
			this->checkBox_date = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_time = (gcnew System::Windows::Forms::CheckBox());
			this->fontDialog_timedate = (gcnew System::Windows::Forms::FontDialog());
			this->panel_options->SuspendLayout();
			this->groupBox_options->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_clock
			// 
			this->panel_clock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_clock->Location = System::Drawing::Point(20, 8);
			this->panel_clock->MinimumSize = System::Drawing::Size(475, 475);
			this->panel_clock->Name = L"panel_clock";
			this->panel_clock->Size = System::Drawing::Size(475, 475);
			this->panel_clock->TabIndex = 0;
			this->panel_clock->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ClockForm::panel_clock_Paint);
			// 
			// timer_seconds
			// 
			this->timer_seconds->Enabled = true;
			this->timer_seconds->Interval = 1000;
			this->timer_seconds->Tick += gcnew System::EventHandler(this, &ClockForm::timer_seconds_Tick);
			// 
			// panel_options
			// 
			this->panel_options->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_options->Controls->Add(this->groupBox_options);
			this->panel_options->Location = System::Drawing::Point(525, 8);
			this->panel_options->MinimumSize = System::Drawing::Size(100, 475);
			this->panel_options->Name = L"panel_options";
			this->panel_options->Size = System::Drawing::Size(100, 475);
			this->panel_options->TabIndex = 0;
			// 
			// groupBox_options
			// 
			this->groupBox_options->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox_options->Controls->Add(this->button_close);
			this->groupBox_options->Controls->Add(this->button_font);
			this->groupBox_options->Controls->Add(this->checkBox_date);
			this->groupBox_options->Controls->Add(this->checkBox_time);
			this->groupBox_options->Location = System::Drawing::Point(0, 0);
			this->groupBox_options->MinimumSize = System::Drawing::Size(100, 475);
			this->groupBox_options->Name = L"groupBox_options";
			this->groupBox_options->Size = System::Drawing::Size(100, 475);
			this->groupBox_options->TabIndex = 0;
			this->groupBox_options->TabStop = false;
			this->groupBox_options->Text = L"Options:";
			// 
			// button_close
			// 
			this->button_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_close->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_close->Location = System::Drawing::Point(10, 435);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(80, 30);
			this->button_close->TabIndex = 4;
			this->button_close->Text = L"Close";
			this->button_close->UseVisualStyleBackColor = false;
			this->button_close->Click += gcnew System::EventHandler(this, &ClockForm::button_close_Click);
			// 
			// button_font
			// 
			this->button_font->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button_font->Location = System::Drawing::Point(10, 60);
			this->button_font->Name = L"button_font";
			this->button_font->Size = System::Drawing::Size(80, 30);
			this->button_font->TabIndex = 3;
			this->button_font->Text = L"Choose font";
			this->button_font->UseVisualStyleBackColor = false;
			this->button_font->Click += gcnew System::EventHandler(this, &ClockForm::button_font_Click);
			// 
			// checkBox_date
			// 
			this->checkBox_date->AutoSize = true;
			this->checkBox_date->Checked = true;
			this->checkBox_date->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_date->Location = System::Drawing::Point(10, 40);
			this->checkBox_date->Name = L"checkBox_date";
			this->checkBox_date->Size = System::Drawing::Size(77, 17);
			this->checkBox_date->TabIndex = 2;
			this->checkBox_date->Text = L"Show date";
			this->checkBox_date->UseVisualStyleBackColor = true;
			this->checkBox_date->Click += gcnew System::EventHandler(this, &ClockForm::checkBox_date_Click);
			// 
			// checkBox_time
			// 
			this->checkBox_time->AutoSize = true;
			this->checkBox_time->Checked = true;
			this->checkBox_time->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_time->Location = System::Drawing::Point(10, 20);
			this->checkBox_time->Name = L"checkBox_time";
			this->checkBox_time->Size = System::Drawing::Size(75, 17);
			this->checkBox_time->TabIndex = 1;
			this->checkBox_time->Text = L"Show time";
			this->checkBox_time->UseVisualStyleBackColor = true;
			this->checkBox_time->Click += gcnew System::EventHandler(this, &ClockForm::checkBox_time_Click);
			// 
			// fontDialog_timedate
			// 
			this->fontDialog_timedate->Font = (gcnew System::Drawing::Font(L"Arial", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->fontDialog_timedate->FontMustExist = true;
			this->fontDialog_timedate->MaxSize = 30;
			this->fontDialog_timedate->MinSize = 10;
			this->fontDialog_timedate->ShowApply = true;
			// 
			// ClockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 491);
			this->Controls->Add(this->panel_options);
			this->Controls->Add(this->panel_clock);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(660, 530);
			this->Name = L"ClockForm";
			this->Text = L"Clock";
			this->Resize += gcnew System::EventHandler(this, &ClockForm::ClockForm_Resize);
			this->panel_options->ResumeLayout(false);
			this->groupBox_options->ResumeLayout(false);
			this->groupBox_options->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	// EVENT HANDLING
	private: System::Void panel_clock_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		// preparations
		static const double piOver21600 = Math::PI / 21600;	// values needed for calculations:
		static const double piOver1800 = Math::PI / 1800;
		static const double piOver360 = Math::PI / 360;
		static const double piOver30 = Math::PI / 30;
		static const double piOver6 = Math::PI / 6;
		static const double piOver2 = Math::PI / 2; // thanks to 'static' value is computed once and only read each time the method is called
		Double^ clockRadius;
		if (static_cast<double>(panel_clock->Width) < static_cast<double>(panel_clock->Height)) {
			clockRadius = gcnew Double(static_cast<double>(panel_clock->Width) * 200 / 475); // setting clock-face radius (default radius is 200 and default panel size is 475)
		}
		else {
			clockRadius = gcnew Double(static_cast<double>(panel_clock->Height) * 200 / 475); // setting clock-face radius
		}
		DateTime^ Current = gcnew DateTime;	// geting current date and time
		Current = DateTime::Now;
		PointF centerOfPanel = PointF(static_cast<float>(panel_clock->Width) / 2, static_cast<float>(panel_clock->Height) / 2); // PointF object contains floating-point coordinates (accurancy)
		e->Graphics->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;	// setting smoothing mode on
		// drawing hour-markers and numbers
		// marker preparations
		Pen^ markerBrush = gcnew Pen(Color::Gray, 3); // setting marker brush
		PointF markerInerTip, markerOuterTip; // creating marker-tips' points
		// number preparations
		System::Drawing::Font^ numerFont = gcnew System::Drawing::Font("Comic Sans MS", 15, FontStyle::Bold); // setting text font
		StringFormat^ numberFormat = gcnew StringFormat();
		numberFormat->Alignment = StringAlignment::Center; // setting text format
		SolidBrush^ numberBrush = gcnew SolidBrush(Color::Black); // setting text brush (color)
		PointF numberPosition;
		// drawing loop
		for (int i = 1; i <= 12; i++) {
			// setting coordinates
			markerInerTip.X = Convert::ToSingle(Math::Sin(piOver6 * i) * 0.9 * static_cast<double>(clockRadius) + centerOfPanel.X);
			markerInerTip.Y = Convert::ToSingle(-Math::Cos(piOver6 * i) * 0.9 * static_cast<double>(clockRadius) + centerOfPanel.Y);
			markerOuterTip.X = Convert::ToSingle(Math::Sin(piOver6 * i) * static_cast<double>(clockRadius) + centerOfPanel.X);
			markerOuterTip.Y = Convert::ToSingle(-Math::Cos(piOver6 * i) * static_cast<double>(clockRadius) + centerOfPanel.Y);
			// drawing marker
			e->Graphics->DrawLine(markerBrush, markerInerTip, markerOuterTip);
			// setting coordinates
			numberPosition.X = Convert::ToSingle(Math::Sin(piOver6 * i) * 0.8 * static_cast<double>(clockRadius) + centerOfPanel.X);
			numberPosition.Y = Convert::ToSingle(-Math::Cos(piOver6 * i) * 0.8 * static_cast<double>(clockRadius) + centerOfPanel.Y - 15); // '-15' for adjustment (numbers have tendency to go too low)
			// drawing marker
			e->Graphics->DrawString(i.ToString(), numerFont, numberBrush, numberPosition, numberFormat);
		}
		// drawing clock face edge
		Pen^ edgeBrush = gcnew Pen(Color::Black, 3);
		e->Graphics->DrawEllipse(edgeBrush, static_cast<int>(Math::Round(centerOfPanel.X - static_cast<double>(clockRadius))), static_cast<int>(Math::Round(centerOfPanel.Y - static_cast<double>(clockRadius))),
			static_cast<int>(Math::Round(static_cast<double>(clockRadius) * 2)), static_cast<int>(Math::Round(static_cast<double>(clockRadius) * 2)));
		// drawing date and time in text form
		if (Convert::ToBoolean(displayTime) == true || Convert::ToBoolean(displayDate) == true) {
			String^ timeText = Current->ToLongTimeString();	// geting time text
			String^ dateText = Current->ToLongDateString(); // geting date text
			System::Drawing::Font^ textFont = gcnew System::Drawing::Font(fontDialog_timedate->Font, fontDialog_timedate->Font->Style); // setting text font
			StringFormat^ textFormat = gcnew StringFormat();
			textFormat->Alignment = StringAlignment::Center; // setting text format
			SolidBrush^ textBrush = gcnew SolidBrush(Color::Black); // setting text brush (color)
			PointF textPosition;
			if (Convert::ToBoolean(displayTime) == true) {
				textPosition = PointF(centerOfPanel.X, centerOfPanel.Y - Convert::ToSingle(static_cast<double>(clockRadius) * 70 / 200));	// setting text coordinate for time text (default offset is 70 and default radius is 200)
				e->Graphics->DrawString(timeText, textFont, textBrush, textPosition, textFormat);	// drawing time text
			}
			if (Convert::ToBoolean(displayDate) == true) {
				textPosition = PointF(centerOfPanel.X, centerOfPanel.Y - Convert::ToSingle(static_cast<double>(clockRadius) * 45 / 200));	// setting text coordinate for date text (default offset is 45 and default radius is 200)
				e->Graphics->DrawString(dateText, textFont, textBrush, textPosition, textFormat);	// drawing date text
			}
		}
		// drawing hands of the clock
		PointF handTipPosition;	// position of the hand tip
		// hour-hand
		Pen^ handBrush = gcnew Pen(Color::Blue, 6); // setting hour-hand brush
		Double ^ handLength = gcnew Double(static_cast<double>(clockRadius) * 13 / 20);
		handTipPosition.X = Convert::ToSingle(Math::Sin(static_cast<int>(Current->Hour) % 12 * piOver6 + static_cast<int>(Current->Minute)*piOver360 + static_cast<int>(Current->Second)*piOver21600) * static_cast<double>(handLength) + centerOfPanel.X);
		handTipPosition.Y = Convert::ToSingle(-Math::Cos(static_cast<int>(Current->Hour) % 12 * piOver6 + static_cast<int>(Current->Minute)*piOver360 + static_cast<int>(Current->Second)*piOver21600) * static_cast<double>(handLength) + centerOfPanel.Y);
		e->Graphics->DrawLine(handBrush, centerOfPanel, handTipPosition);
		// minut-hand
		handBrush = gcnew Pen(Color::Green, 4); // setting minut-hand brush
		handLength = gcnew Double(static_cast<double>(clockRadius) * 17 / 20);
		handTipPosition.X = Convert::ToSingle(Math::Sin(static_cast<int>(Current->Minute)*piOver30 + static_cast<int>(Current->Second)*piOver1800) * static_cast<double>(handLength) + centerOfPanel.X);
		handTipPosition.Y = Convert::ToSingle(-Math::Cos(static_cast<int>(Current->Minute)*piOver30 + static_cast<int>(Current->Second)*piOver1800) * static_cast<double>(handLength) + centerOfPanel.Y);
		e->Graphics->DrawLine(handBrush, centerOfPanel, handTipPosition);
		// second-hand
		handBrush = gcnew Pen(Color::Red, 2); // setting second-hand brush
		handLength = gcnew Double(static_cast<double>(clockRadius) * 19 / 20);
		handTipPosition.X = Convert::ToSingle(Math::Sin(static_cast<int>(Current->Second)*piOver30) * static_cast<double>(handLength) + centerOfPanel.X);
		handTipPosition.Y = Convert::ToSingle(-Math::Cos(static_cast<int>(Current->Second)*piOver30) * static_cast<double>(handLength) + centerOfPanel.Y);
		e->Graphics->DrawLine(handBrush, centerOfPanel, handTipPosition);
		// drawing center-dot
		Pen^ dotBrush = gcnew Pen(Color::Black, 6);
		e->Graphics->DrawEllipse(dotBrush, static_cast<int>(Math::Round(centerOfPanel.X - 3)), static_cast<int>(Math::Round(centerOfPanel.Y - 3)), 6, 6);
	}

	private: System::Void timer_seconds_Tick(System::Object^  sender, System::EventArgs^  e) {
		panel_clock->Refresh();
	}

	private: System::Void checkBox_time_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Convert::ToBoolean(displayTime) == true) { displayTime = gcnew System::Boolean(false); }
		else { displayTime = gcnew System::Boolean(true); }
		panel_clock->Refresh();
	}

	private: System::Void checkBox_date_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Convert::ToBoolean(displayDate) == true) { displayDate = gcnew System::Boolean(false); }
		else { displayDate = gcnew System::Boolean(true); }
		panel_clock->Refresh();
	}

	private: System::Void button_font_Click(System::Object^  sender, System::EventArgs^  e) {
		fontDialog_timedate->ShowDialog();
		panel_clock->Refresh();
	}

	private: System::Void button_close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: System::Void ClockForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		panel_clock->Refresh();
	}


	};
}