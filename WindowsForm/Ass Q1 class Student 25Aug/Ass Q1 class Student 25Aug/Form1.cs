using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q1_class_Student_25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        student obj=new student();
        private void button1_Click(object sender, EventArgs e)
        {
            obj.sub1 = Convert.ToInt32(textBox1.Text);
            obj.sub2 = Convert.ToInt32(textBox2.Text);
            obj.sub3 = Convert.ToInt32(textBox3.Text);

            string str = obj.calculatetotal(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text), Convert.ToInt32(textBox3.Text));
            label4.Text =str;

        }

        private void button2_Click(object sender, EventArgs e)
        {
            obj.sub1 = Convert.ToInt32(textBox1.Text);
            obj.sub2 = Convert.ToInt32(textBox2.Text);
            obj.sub3 = Convert.ToInt32(textBox3.Text);

            string str = obj.calculatepercentage(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text), Convert.ToInt32(textBox3.Text));
            label4.Text = "percentage=" + str;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            obj.sub1 = Convert.ToInt32(textBox1.Text);
            obj.sub2 = Convert.ToInt32(textBox2.Text);
            obj.sub3 = Convert.ToInt32(textBox3.Text);

            string str = obj.calculategrade(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text), Convert.ToInt32(textBox3.Text));
            label4.Text = "Grade= " + str;
        }
    }
}
