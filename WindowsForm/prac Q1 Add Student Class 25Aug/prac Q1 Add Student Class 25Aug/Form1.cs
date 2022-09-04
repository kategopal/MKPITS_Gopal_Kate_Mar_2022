using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q1_Add_Student_Class_25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            student obj =new student();
            obj. rno=Convert.ToInt32(textBox1.Text);
            obj.sname=textBox2.Text;
           obj.email=textBox3.Text;
            obj.mob=Convert.ToInt64(textBox4.Text);

            StringBuilder sb=new StringBuilder();
            sb.Append("Roll No=" + obj.rno+"\n");
            sb.Append("student Name=" + obj.sname + "\n");
            sb.Append("Email=" + obj.email + "\n");
            sb.Append("Mob No=" + obj.mob + "\n");
            label5.Text = sb.ToString();
        }
    }
}
