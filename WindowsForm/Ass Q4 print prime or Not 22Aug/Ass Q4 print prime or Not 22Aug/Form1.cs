using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q4_print_prime_or_Not_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num = Convert.ToInt32(textBox1.Text);
            int count = 0;
            for (int i = 1; i < num; i++)
            {
                if(num%i== 0)
                {
                    count++;
                }
            }
            if(count==2)
            {
               label2.Text ="This is prime Number";
            }
            else
            {
                label2.Text = "This is Not Prime Number";
            }
        }
    }
}
