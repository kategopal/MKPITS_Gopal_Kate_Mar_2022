﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q1_pattern_problem_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            StringBuilder sb = new StringBuilder();
            for(int i=0; i<=3; i++)
            {
                for(int j=1; j<=i;j++)
                {
                    sb.Append("*"+" ");
                }
                sb.Append("\n");
            }
            label2.Text = sb.ToString();
        }
    }
}
