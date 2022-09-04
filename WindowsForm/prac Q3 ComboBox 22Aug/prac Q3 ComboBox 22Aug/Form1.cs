using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q3_ComboBox_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //int bonous;
        private void button1_Click(object sender, EventArgs e)
        {
            int bsal=Convert.ToInt32(textBox1.Text);
            string designation = comboBox1.Text;
            float bonus = 0.0f;
            float totalsal = 0.0f;
            switch (designation)
            {
                case "manager":
                    {
                        bonus = bsal * 0.55f;
                        break;
                    }
                case "clerk":
                    {
                        bonus = bsal * 0.35f;
                        break;
                    }
                case "peun":
                    {
                        bonus = bsal * 0.15f;
                        break;
                    }
                    totalsal = bsal + bonus;
                    if (checkBox1.Checked)
                        label4.Text = "bonus " + bonus;
                    if (checkBox2.Checked)
                    {
                        label5.Text = "total sal" + totalsal;
                    }

            }


        }
    }
}
