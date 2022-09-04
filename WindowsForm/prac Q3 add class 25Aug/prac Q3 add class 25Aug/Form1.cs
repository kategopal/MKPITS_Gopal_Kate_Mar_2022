using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q3_add_class_25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        account obj = null;
        private void button1_Click(object sender, EventArgs e)
        {
            obj.actno = Convert.ToInt32(textBox1.Text);
            string str = obj.deposit(Convert.ToInt32(textBox2.Text));
            label3.Text = str;

        }

        private void button2_Click(object sender, EventArgs e)
        {
            obj.actno = Convert.ToInt32(textBox1.Text);
            string str = obj.withdrawl(Convert.ToInt32(textBox2.Text));
            label3.Text = str;

        }

        private void button3_Click(object sender, EventArgs e)
        {
            obj.actno = Convert.ToInt32(textBox1.Text);
            string str = obj.showbalance();
            label3.Text = "account no : " + obj.actno + " : " + str;

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.Text == "saving")
            {
                obj = new saving();
            }
            else if (comboBox1.Text == "current")
            {
                obj = new current();
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

    }
}

