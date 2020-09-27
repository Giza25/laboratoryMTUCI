using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Linq.Expressions;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.VisualBasic;

namespace LabaForm
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void exitBtn_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        bool CheckPass()
        {
            string pass, checkpass;
            checkpass = "Dm1324";
            pass = Interaction.InputBox("Введите пароль.", "Ввод пароля");
            if (pass == checkpass)
                return true;
            else if (pass == "")
                return false;
            MessageBox.Show("Неправильный пароль! Попробуйте еще раз!", "Ошибка!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            return false;
        }

        private void changeBtn_Click(object sender, EventArgs e)
        {
            if (!CheckPass())
            {
                return;
            }    
            String laba = pickLabaComboBox.SelectedItem?.ToString() ?? " ";
                switch (laba)
                {
                    case "Лабораторная Работа №1":
                        LabaForm1 f = new LabaForm1();
                        f.Owner = this;
                        f.Show(); this.Hide();
                        break;
                    case "Лабораторная Работа №2":
                    default:
                        MessageBox.Show("Выберите соответствующее значение Лабораторной работы", "Ошибка!", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                        break;
                }
        }
    }
}
