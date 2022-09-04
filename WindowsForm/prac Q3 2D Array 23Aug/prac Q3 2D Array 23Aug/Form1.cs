using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q3_2D_Array_23Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        string[,] album = new string[2, 2];
       StringBuilder sb=new StringBuilder();
        private void label5_Click(object sender, EventArgs e)
        {
            album[0, 0] = textBox1.Text;
            album[0, 1] = textBox2.Text;
            album[1,0]= textBox3.Text;
            album[1,1]= textBox4.Text;
            sb.Append("album Name=" + album[0, 0] + ": singer Name=" + album[0, 1]+"\n");
            sb.Append("album Name=" + album[0, 0] + ": singer Name=" + album[0, 1] + "\n");
            label6.Text = sb.ToString();
        }
    }
}
