using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q3_Eligible_for_Vote_or_Not_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int age=Convert.ToInt32(textBox1.Text);
            if(age>=18)
            {
                label3.Text = "Eligible for Vote";
            }
            else
            {
                label3.Text = "Not Eligible for Vote";
            }
        }
    }
}
