using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q2_Switch_22Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            char ch=Convert.ToChar(textBox1.Text);
            switch(ch)
            {
                case 'a':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                
                case 'e':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'i':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'o':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'u':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'A':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'E':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'I':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'O':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                case 'U':
                    {
                        label3.Text = "It is an Vowel";
                        break;
                    }
                default:
                    {
                        label3.Text = "Invalid";
                        break;
                    }
            }
        }
    }
}
