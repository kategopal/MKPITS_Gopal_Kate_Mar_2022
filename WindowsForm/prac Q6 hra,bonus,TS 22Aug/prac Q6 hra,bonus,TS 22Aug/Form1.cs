using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace prac_Q6_hra_bonus_TS_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string empname = (textBox1.Text);
            int basicsal=Convert.ToInt32(textBox2.Text);
            string designation=(textBox3.Text);

            float hra = 0;
            float bonus=0;
            float totalsal = 0;

            switch(designation)
            {
                case "manager":
                    {
                      hra=basicsal * 0.35f;
                        bonus = basicsal * 0.5f;
                        break;
                    }
                case "Clerk":
                    {
                        hra = basicsal * 0.25f;
                        bonus = basicsal * 0.3f;
                        break;
                    }
                case "peun":
                    {
                        hra = basicsal * 0.15f;
                        bonus = basicsal * 0.2f;
                        break;
                    }
                    
            }
            label4.Text = "hra=" + hra;
            label5.Text = "Bonus=" + bonus;
            totalsal = hra + bonus + basicsal;
            label6.Text = "Total Sallery=" + totalsal;

        }
    }
}
