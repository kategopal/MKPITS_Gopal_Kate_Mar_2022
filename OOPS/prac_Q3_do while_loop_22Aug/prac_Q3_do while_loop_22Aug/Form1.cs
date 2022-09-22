using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q3_do_while_loop_22Aug
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
            int i = 1;
            do
            {
                sb.Append(i+"\n");
                i++;
            }while(i<num);
            label2.Text = sb.ToString();
        }
    }
}
