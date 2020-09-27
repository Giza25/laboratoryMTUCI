using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace LabaForm
{
    public partial class LabaForm1_2 : Form
    {
        public LabaForm1_2()
        {
            InitializeComponent();
        }

        private void exitBtn_Click(object sender, EventArgs e)
        {
            this.Owner.Owner.Close();
        }

        private void doBtn_Click(object sender, EventArgs e)
        {
            double x, y, z;
            x = Convert.ToDouble(xTB.Text);
            y = Convert.ToDouble(yTB.Text);
            z = Convert.ToDouble(zTB.Text);
            aTB.Text = Convert.ToString(laba1Func(x, y, z));
        }

        double laba1Func(double x, double y, double z)
        {
            double res;
            try
            {
                res = Math.Pow(2, -1 * x) * Math.Sqrt(x + Math.Pow(Math.Abs(y), 0.25)) * Math.Pow(Math.Exp(x - 1 / Math.Sin(z)), 0.333334) * 100000;
            }
            catch(DivideByZeroException)
            {
                MessageBox.Show("Невозможно рассчитать выражение. Попробуйте изменить значения переменных.");
                return 0;
            }
            res = Math.Round(res);
            res /= 100000;
            return res;
        }

        private void xTB_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && xTB.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-") && !(e.KeyChar.ToString() == "E"))
                    e.Handled = true;
            }
            if (e.KeyChar.Equals((char)13))
                yTB.Focus();
        }

        private void yTB_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && yTB.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-") && !(e.KeyChar.ToString() == "E"))
                    e.Handled = true;
            }
            if (e.KeyChar.Equals((char)13))
                zTB.Focus();
        }

        private void zTB_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!Char.IsDigit(e.KeyChar) && !(Char.IsControl(e.KeyChar)))
            {
                if (!(e.KeyChar.ToString() == "," && zTB.Text.IndexOf(",") == -1) && !(e.KeyChar.ToString() == "-") && !(e.KeyChar.ToString() == "E"))
                    e.Handled = true;
            }
            if (e.KeyChar.Equals((char)13))
                doBtn.Focus();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Owner.Owner.Show();
            this.Owner.Close();
        }
    }
}
