﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q4_for_loop_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
           // StringBuilder sb = new StringBuilder();
            int num = Convert.ToInt32(textBox1.Text);
            int fact = 1;
            for(int i = 1; i<=num; i++)
            {
                fact = fact * i;
               
            }
            label2.Text ="Factorial of Number="+fact;
        }
    }
}
