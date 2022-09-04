using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q3_add_class_25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        product obj=new product();
        private void button1_Click(object sender, EventArgs e)
        {
            float dis = obj.calculatetotalamount(Convert.ToSingle(textBox4.Text), Convert.ToSingle(textBox5.Text));
            label6.Text = "Total amount of product="+dis;
        }
    }
}
