using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q2_Class__bank__25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        bank obj = new bank();
        private void button1_Click(object sender, EventArgs e)
        {
            obj. actno =Convert.ToInt32 (textBox1.Text);
            //obj.amount=Convert.ToInt32 (textBox2.Text);
            string dep = obj.deposit(Convert.ToInt32(textBox2.Text));
            label3.Text = dep;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            obj.actno =Convert.ToInt32 (textBox1.Text);
            string dep=obj.withdrawl(Convert.ToInt32(textBox2.Text));
            label3.Text=dep;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            obj.actno=Convert.ToInt32 (textBox1.Text);
            string dep = obj.showbalance();
            label3.Text = dep;
        }
    }
}
