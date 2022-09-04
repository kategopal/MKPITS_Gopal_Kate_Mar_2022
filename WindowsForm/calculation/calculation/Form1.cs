using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using calculatelilbrary;

namespace calculation
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        calculate obj = new calculate();
        private void button1_Click(object sender, EventArgs e)
        {
            string res1 = obj.addition(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
           label3.Text ="Addition Of Two Numbers="+ res1;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string res1 = obj.subtraction(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label3.Text ="Subtraction of two Numbers="+ res1;
        }
    }
}
