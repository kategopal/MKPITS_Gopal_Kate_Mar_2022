using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q1_switch_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num1 =Convert.ToInt32(textBox1.Text);
            int num2=Convert.ToInt32(textBox2.Text);
            char opt=Convert.ToChar(textBox3.Text);
            int res = 0;
            switch(opt)
            {
                case '+':
                    {
                        res = num1 + num2;
                        break;
                    }
                case '-':
                    {
                        res = num1 - num2;
                        break;
                    }
                case '*':
                    {
                        res = num1 * num2;
                        break;
                    }

                    
            }
            label4.Text = "Result=" + res;
        }
    }
}
