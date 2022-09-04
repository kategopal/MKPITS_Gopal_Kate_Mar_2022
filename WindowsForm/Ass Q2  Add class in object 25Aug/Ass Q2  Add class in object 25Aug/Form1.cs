using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ass_Q2__Add_class_in_object_25Aug
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        employe obj=new employe();
        float dis = 0;
        private void button1_Click(object sender, EventArgs e)
        {
          
            dis = obj.calculatebonus(Convert.ToSingle(textBox3.Text));
            label4.Text = "Bonus= " + dis;
        }

        private void button2_Click(object sender, EventArgs e)
        {
          
            float dis1 = obj.calulatetotalsalary(Convert.ToSingle(textBox3.Text), Convert.ToSingle(dis));
            label4.Text = "Total Salary= " + dis1;
        }
    }
}
