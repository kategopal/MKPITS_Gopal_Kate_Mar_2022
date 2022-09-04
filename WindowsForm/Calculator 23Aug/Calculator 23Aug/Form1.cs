using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator_23Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
         int num1;
         int num2;
         int res;
        string opt;

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button1.Text;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button2.Text;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button3.Text;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button4.Text;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button5.Text;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button6.Text;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button7.Text;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button8.Text;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button9.Text;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox1.Text + button10.Text;
        }

        private void button11_Click(object sender, EventArgs e)
        {
        }

        private void button12_Click(object sender, EventArgs e)
        {
            opt = "+";
             num1 = Convert.ToInt32(textBox1.Text);

            //textBox1.Text = button12.Text;

            textBox1.Clear();
        }

        private void button13_Click(object sender, EventArgs e)
        {
            opt = "-";
             num1 = Convert.ToInt32(textBox1.Text);

            textBox1.Clear();
        }

        public void button14_Click(object sender, EventArgs e)
        {
            opt = "*";
             num1 = Convert.ToInt32(textBox1.Text);

            textBox1.Clear();
        }

        private void button15_Click(object sender, EventArgs e)
        {
            opt = "/";
           num1 = Convert.ToInt32(textBox1.Text);

            textBox1.Clear();
        }

        private void button16_Click(object sender, EventArgs e)
        {
           //int num1 = Convert.ToInt32(textBox1.Text);
           int num2 = Convert.ToInt32(textBox1.Text);

            if (opt==("+"))
            {
               // MessageBox.Show("hello");
                res = num1 + num2;
            }
            else if (opt == "-")
            {
                res = num1 - num2;
            }
            else if (opt == "*")
            {
                res = num1 * num2;
            }
            else if (opt == "/")
            {
                res = num1 / num2;
            }
            textBox1.Text = res + "";
        }

        private void button17_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
          num1=(0);
            num2=(0);
            res = (0);
        }

       
    }
}
