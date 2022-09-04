using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q1_print_smallest_Num_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int num1=Convert.ToInt32(textBox1.Text);
            int num2 = Convert.ToInt32(textBox2.Text);
            if(num1<num2)
            {
                label4.Text = "Num1 is smallest";
            }
            else
            {
                label4.Text = "Num2 is smallest";
            }
        }
    }
}
