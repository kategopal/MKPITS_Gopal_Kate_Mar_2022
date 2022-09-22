using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q7_for_loop_22Aug
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
            int num=Convert.ToInt32(textBox1.Text);
            int res = 1;
            for(int i=0; i<=10; i++)
            {
                res = num * i;
                sb.Append(num +"*" + i + "=" + res + "\n");
            }
            label2.Text = sb.ToString();
        }
    }
}
