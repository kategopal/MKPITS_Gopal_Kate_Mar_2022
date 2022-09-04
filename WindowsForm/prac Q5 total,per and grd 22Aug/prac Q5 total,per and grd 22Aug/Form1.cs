using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q5_total_per_and_grd_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int sub1=Convert.ToInt32(textBox1.Text);
            int sub2=Convert.ToInt32(textBox2.Text);
            int sub3=Convert.ToInt32(textBox3.Text);
            int total=sub1+sub2+sub3;
            label4.Text = "Total=" + total;
            float per = (total / 300.0f) * 100;
            label5.Text = "Percentage=" + per;

            if(per>=75)
            {
                label6.Text = "Distinction";
            }
            else if(per>=60 && per<75)
            {
                label6.Text = "First Class";
            }
            else if(per>=40 && per<60)
            {
                label6.Text = "Second Class";
            }
            else
            {
                label6.Text = "Fail";
            }
        }
    }
}
