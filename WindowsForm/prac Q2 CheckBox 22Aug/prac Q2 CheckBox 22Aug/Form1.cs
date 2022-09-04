using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q2_CheckBox_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
       // int bonus = 5500;
        private void button1_Click(object sender, EventArgs e)
        {
            //string empname = textBox1.Text;
           int bsal=Convert.ToInt32(textBox2.Text);
            float bonus = bsal * 0.40f;
            float totalsal = bsal + bonus;
            if(checkBox1.Checked)
            {
                label4.Text = "Bonus=" + bonus;
            }
           if(checkBox2.Checked)
            {
                label3.Text = "totalsal=" + totalsal;
            }
            
        }
    }
}
