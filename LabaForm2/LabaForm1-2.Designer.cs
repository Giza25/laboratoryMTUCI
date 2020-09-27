namespace LabaForm
{
    partial class LabaForm1_2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(LabaForm1_2));
            this.exitBtn = new System.Windows.Forms.Button();
            this.xTB = new System.Windows.Forms.TextBox();
            this.yTB = new System.Windows.Forms.TextBox();
            this.zTB = new System.Windows.Forms.TextBox();
            this.aTB = new System.Windows.Forms.TextBox();
            this.doBtn = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // exitBtn
            // 
            this.exitBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.exitBtn.Location = new System.Drawing.Point(1172, 677);
            this.exitBtn.Name = "exitBtn";
            this.exitBtn.Size = new System.Drawing.Size(310, 100);
            this.exitBtn.TabIndex = 0;
            this.exitBtn.Text = "Выход";
            this.exitBtn.UseVisualStyleBackColor = true;
            this.exitBtn.Click += new System.EventHandler(this.exitBtn_Click);
            // 
            // xTB
            // 
            this.xTB.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.xTB.Location = new System.Drawing.Point(156, 124);
            this.xTB.Name = "xTB";
            this.xTB.Size = new System.Drawing.Size(310, 32);
            this.xTB.TabIndex = 1;
            this.xTB.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.xTB_KeyPress);
            // 
            // yTB
            // 
            this.yTB.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.yTB.Location = new System.Drawing.Point(156, 197);
            this.yTB.Name = "yTB";
            this.yTB.Size = new System.Drawing.Size(310, 32);
            this.yTB.TabIndex = 2;
            this.yTB.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.yTB_KeyPress);
            // 
            // zTB
            // 
            this.zTB.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.zTB.Location = new System.Drawing.Point(156, 270);
            this.zTB.Name = "zTB";
            this.zTB.Size = new System.Drawing.Size(310, 32);
            this.zTB.TabIndex = 3;
            this.zTB.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.zTB_KeyPress);
            // 
            // aTB
            // 
            this.aTB.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.aTB.Location = new System.Drawing.Point(866, 421);
            this.aTB.Name = "aTB";
            this.aTB.Size = new System.Drawing.Size(249, 32);
            this.aTB.TabIndex = 4;
            // 
            // doBtn
            // 
            this.doBtn.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.doBtn.Location = new System.Drawing.Point(156, 391);
            this.doBtn.Name = "doBtn";
            this.doBtn.Size = new System.Drawing.Size(310, 90);
            this.doBtn.TabIndex = 5;
            this.doBtn.Text = "Рассчитать выражение";
            this.doBtn.UseVisualStyleBackColor = true;
            this.doBtn.Click += new System.EventHandler(this.doBtn_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(729, 95);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(497, 175);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox1.TabIndex = 6;
            this.pictureBox1.TabStop = false;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label1.Location = new System.Drawing.Point(108, 127);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(42, 26);
            this.label1.TabIndex = 7;
            this.label1.Text = "x =";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label2.Location = new System.Drawing.Point(108, 200);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(42, 26);
            this.label2.TabIndex = 8;
            this.label2.Text = "y =";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label3.Location = new System.Drawing.Point(108, 273);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(42, 26);
            this.label3.TabIndex = 9;
            this.label3.Text = "z =";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.label4.Location = new System.Drawing.Point(817, 424);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(43, 26);
            this.label4.TabIndex = 10;
            this.label4.Text = "a =";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16F);
            this.button1.Location = new System.Drawing.Point(156, 677);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(310, 100);
            this.button1.TabIndex = 11;
            this.button1.Text = "Назад";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // LabaForm1_2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.ClientSize = new System.Drawing.Size(1584, 861);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.doBtn);
            this.Controls.Add(this.aTB);
            this.Controls.Add(this.zTB);
            this.Controls.Add(this.yTB);
            this.Controls.Add(this.xTB);
            this.Controls.Add(this.exitBtn);
            this.Name = "LabaForm1_2";
            this.Text = "Лабораторная Работа №1 (2/2)";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button exitBtn;
        private System.Windows.Forms.TextBox xTB;
        private System.Windows.Forms.TextBox yTB;
        private System.Windows.Forms.TextBox zTB;
        private System.Windows.Forms.TextBox aTB;
        private System.Windows.Forms.Button doBtn;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Button button1;
    }
}