using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q4_Resigtration_Form_22Aug
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
            sb.Append("UserName="+ textBox1.Text+"\n" );
            sb.Append("PassWord="+textBox2.Text +"\n");
            string gender = null;
            string courses = null;
            
            if(radioButton1.Checked)
            {
                gender = radioButton1.Text;
            }
            if(radioButton2.Checked)
            {
                gender = radioButton2.Text;
            }
            sb.Append("Gender=" + gender +"\n");
            if(checkBox1.Checked)
            {
               // sb.Append("course joined :" + checkBox1.Text + "\n");
                courses=checkBox1.Text;
            }
            if(checkBox2.Checked)
            {
               // sb.Append("course joined :" + checkBox2.Text + "\n");
                courses = checkBox2.Text;
            }
            sb.Append("Courses Join=" + courses +"\n");
            sb.Append("city :" + comboBox1.Text + "\n");
            label3.Text=sb.ToString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
