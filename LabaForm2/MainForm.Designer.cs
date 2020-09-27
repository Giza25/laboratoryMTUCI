namespace LabaForm
{
    partial class MainForm
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.exitBtn = new System.Windows.Forms.Button();
            this.changeBtn = new System.Windows.Forms.Button();
            this.pickLabaComboBox = new System.Windows.Forms.ComboBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // exitBtn
            // 
            this.exitBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.exitBtn.Location = new System.Drawing.Point(110, 674);
            this.exitBtn.Name = "exitBtn";
            this.exitBtn.Size = new System.Drawing.Size(360, 100);
            this.exitBtn.TabIndex = 0;
            this.exitBtn.Text = "Выход";
            this.exitBtn.UseVisualStyleBackColor = true;
            this.exitBtn.Click += new System.EventHandler(this.exitBtn_Click);
            // 
            // changeBtn
            // 
            this.changeBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.changeBtn.Location = new System.Drawing.Point(101, 322);
            this.changeBtn.Name = "changeBtn";
            this.changeBtn.Size = new System.Drawing.Size(360, 100);
            this.changeBtn.TabIndex = 2;
            this.changeBtn.Text = "Перейти";
            this.changeBtn.UseVisualStyleBackColor = true;
            this.changeBtn.Click += new System.EventHandler(this.changeBtn_Click);
            // 
            // pickLabaComboBox
            // 
            this.pickLabaComboBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.pickLabaComboBox.FormattingEnabled = true;
            this.pickLabaComboBox.Items.AddRange(new object[] {
            "Лабораторная Работа №1",
            "Лабораторная Работа №2"});
            this.pickLabaComboBox.Location = new System.Drawing.Point(110, 157);
            this.pickLabaComboBox.Name = "pickLabaComboBox";
            this.pickLabaComboBox.Size = new System.Drawing.Size(360, 33);
            this.pickLabaComboBox.TabIndex = 3;
            this.pickLabaComboBox.Text = "Выберите лабораторную работу";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label1.Location = new System.Drawing.Point(832, 94);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(525, 156);
            this.label1.TabIndex = 4;
            this.label1.Text = resources.GetString("label1.Text");
            this.label1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label2.Location = new System.Drawing.Point(1011, 685);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(162, 78);
            this.label2.TabIndex = 5;
            this.label2.Text = "БСТ1902\r\nМкртычян Д.Г.\r\nВариант 10\r\n";
            this.label2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.ClientSize = new System.Drawing.Size(1584, 861);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pickLabaComboBox);
            this.Controls.Add(this.changeBtn);
            this.Controls.Add(this.exitBtn);
            this.Name = "MainForm";
            this.Text = "Меню";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button exitBtn;
        private System.Windows.Forms.Button changeBtn;
        private System.Windows.Forms.ComboBox pickLabaComboBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}

