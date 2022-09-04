using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q6_do_while_loop_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num = Convert.ToInt32(textBox1.Text);
            int fact = 1;
            int i = 1;
           do
            {
                fact = fact * i;
                i++;
            } while (i <= num) ;
                label2.Text = "Factorial of Number=" + fact;
        }
    }
}
