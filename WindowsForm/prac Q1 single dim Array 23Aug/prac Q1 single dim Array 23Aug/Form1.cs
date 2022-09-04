using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q1_single_dim_Array_23Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int[]num=new int[5];
        int sum = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            for (int i = 0; i <= 5; i++)
            {
                if (i < 5)
                {
                    num[i] = Convert.ToInt32(textBox1.Text);
                    sum = sum + num[i];
                    textBox1.Clear();
                    textBox1.Focus();
                    if (i == 5)
                    {
                        label2.Text = "sum of 5 Num=" + sum;
                    }

                    //    num[i] = Convert.ToInt32(textBox1.Text);
                    //    sum = sum + num[i];

                    //    textBox1.Clear();
                    //    textBox1.Focus();
                    //    if (i == 5)
                    //    {
                    //        label2.Text = "sum of 5 no." + sum;
                    //    }

                    //}
                    //else
                    //{

                    //}

                }
            }
        }
    }
}
