#pragma once


namespace CarolProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Button^  btnExecutar;

	private: System::Windows::Forms::TextBox^  txbUsuario;
	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;



	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbComidas;



	private: System::Windows::Forms::RadioButton^  rdbVermelho;

	private: System::Windows::Forms::GroupBox^  grpCores;
	private: System::Windows::Forms::RadioButton^  rdbAzul;


	private: System::Windows::Forms::RadioButton^  rdbBranco;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->btnExecutar = (gcnew System::Windows::Forms::Button());
			this->txbUsuario = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->rdbVermelho = (gcnew System::Windows::Forms::RadioButton());
			this->grpCores = (gcnew System::Windows::Forms::GroupBox());
			this->rdbAzul = (gcnew System::Windows::Forms::RadioButton());
			this->rdbBranco = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->grpCores->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnExecutar
			// 
			this->btnExecutar->ForeColor = System::Drawing::Color::BlueViolet;
			this->btnExecutar->Location = System::Drawing::Point(12, 382);
			this->btnExecutar->Name = L"btnExecutar";
			this->btnExecutar->Size = System::Drawing::Size(75, 23);
			this->btnExecutar->TabIndex = 0;
			this->btnExecutar->Text = L"Executar";
			this->btnExecutar->UseVisualStyleBackColor = true;
			this->btnExecutar->Click += gcnew System::EventHandler(this, &Form1::btnExecutar_Click);
			// 
			// txbUsuario
			// 
			this->txbUsuario->Location = System::Drawing::Point(12, 74);
			this->txbUsuario->Name = L"txbUsuario";
			this->txbUsuario->Size = System::Drawing::Size(241, 20);
			this->txbUsuario->TabIndex = 1;
			this->txbUsuario->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(12, 111);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(12, 134);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 3;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->AutoSize = true;
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Script MT Bold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->ForeColor = System::Drawing::Color::Magenta;
			this->lblMensagem->Location = System::Drawing::Point(12, 33);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(144, 29);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"Cheers to love\r\n";
			this->lblMensagem->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cmbComidas
			// 
			this->cmbComidas->FormattingEnabled = true;
			this->cmbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Ração", L"Insetos", L"Pequenos Mamíferos", L"Osso", 
				L"Lixo"});
			this->cmbComidas->Location = System::Drawing::Point(12, 172);
			this->cmbComidas->Name = L"cmbComidas";
			this->cmbComidas->Size = System::Drawing::Size(139, 21);
			this->cmbComidas->TabIndex = 5;
			this->cmbComidas->Text = L"Selecione uma opção";
			this->cmbComidas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::cmbComidas_SelectedIndexChanged);
			// 
			// rdbVermelho
			// 
			this->rdbVermelho->AutoSize = true;
			this->rdbVermelho->Location = System::Drawing::Point(6, 31);
			this->rdbVermelho->Name = L"rdbVermelho";
			this->rdbVermelho->Size = System::Drawing::Size(69, 17);
			this->rdbVermelho->TabIndex = 6;
			this->rdbVermelho->TabStop = true;
			this->rdbVermelho->Text = L"Vermelho";
			this->rdbVermelho->UseVisualStyleBackColor = true;
			this->rdbVermelho->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// grpCores
			// 
			this->grpCores->BackColor = System::Drawing::Color::Transparent;
			this->grpCores->Controls->Add(this->rdbAzul);
			this->grpCores->Controls->Add(this->rdbBranco);
			this->grpCores->Controls->Add(this->rdbVermelho);
			this->grpCores->Location = System::Drawing::Point(42, 215);
			this->grpCores->Name = L"grpCores";
			this->grpCores->Size = System::Drawing::Size(109, 132);
			this->grpCores->TabIndex = 7;
			this->grpCores->TabStop = false;
			this->grpCores->Text = L"Cores";
			this->grpCores->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// rdbAzul
			// 
			this->rdbAzul->AutoSize = true;
			this->rdbAzul->Location = System::Drawing::Point(6, 77);
			this->rdbAzul->Name = L"rdbAzul";
			this->rdbAzul->Size = System::Drawing::Size(45, 17);
			this->rdbAzul->TabIndex = 8;
			this->rdbAzul->TabStop = true;
			this->rdbAzul->Text = L"Azul";
			this->rdbAzul->UseVisualStyleBackColor = true;
			// 
			// rdbBranco
			// 
			this->rdbBranco->AutoSize = true;
			this->rdbBranco->Location = System::Drawing::Point(6, 54);
			this->rdbBranco->Name = L"rdbBranco";
			this->rdbBranco->Size = System::Drawing::Size(59, 17);
			this->rdbBranco->TabIndex = 7;
			this->rdbBranco->TabStop = true;
			this->rdbBranco->Text = L"Branco";
			this->rdbBranco->UseVisualStyleBackColor = true;
			this->rdbBranco->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdbBranco_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(268, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 280);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 438);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->grpCores);
			this->Controls->Add(this->cmbComidas);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txbUsuario);
			this->Controls->Add(this->btnExecutar);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Doguinhos";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpCores->ResumeLayout(false);
			this->grpCores->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbComidas->SelectedIndex = 0;
			 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rdbBranco_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btnExecutar_Click(System::Object^  sender, System::EventArgs^  e) {
			 lblMensagem->Text = "Meu douguinho, ";
			 if(chkNome->Checked)
				 lblMensagem->Text = lblMensagem->Text + "Baby, ";
			 if(chkIdade->Checked)
				 lblMensagem->Text = lblMensagem->Text + "2 anos, ";
			 lblMensagem->Text = lblMensagem->Text + "gosta de " +
			 cmbComidas->SelectedItem->ToString() + ", ";
			 lblMensagem->Text = lblMensagem->Text + txbUsuario->Text + ".";
			 if(rdbVermelho->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::DarkRed;
		     if(rdbBranco->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::White;
			 if(rdbAzul->Checked)
				 lblMensagem->ForeColor = System::Drawing::Color::Aquamarine;
		 }
private: System::Void cmbComidas_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //
		 }
};
}

