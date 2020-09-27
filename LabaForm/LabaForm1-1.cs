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
    public partial class LabaForm1 : Form
    {
        public LabaForm1()
        {
            InitializeComponent();
        }

        private void LabaForm1_Click(object sender, EventArgs e)
        {
            LabaForm1_2 f = new LabaForm1_2();
            f.Owner = this;
            f.Show(); this.Hide();
        }

        private void LabaForm1_KeyPress(object sender, KeyPressEventArgs e)
        {
            LabaForm1_2 f = new LabaForm1_2();
            f.Owner = this;
            f.Show(); this.Hide();
        }
    }
}
