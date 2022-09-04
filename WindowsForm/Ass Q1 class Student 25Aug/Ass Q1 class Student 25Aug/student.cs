using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//1- create a class result having 3 fields chemistry, physics and maths and method calculatetotal , calculatepercentage and calculategrade design the form and use the class

namespace Ass_Q1_class_Student_25Aug
{
    internal class student
    {
       public int sub1;
        public int sub2;
        public int sub3;

        public string calculatetotal(int sub1,int sub2,int sub3)
        {
            int total;
            total=sub1+sub2+sub3;
            return "Total marks of All Subject=" + total.ToString();
        }
        public string calculatepercentage(int sub1,int sub2,int sub3)
        {
            int total;
            total = sub1 + sub2 + sub3;
            float per;
            per=(total/300.0f)*100;
            return per.ToString();
        }
        public string calculategrade(int sub1, int sub2, int sub3)
        {
            int total;
            total = sub1 + sub2 + sub3;
            float per;
            per = (total / 300.0f) * 100;
            if (per>75)
            {
                return "distintion";
            }
            else if(per>60 && per<75)
            {
                return "first class";
            }
            else if(per>50 && per<60)
            {
                return "second class";
            }
            else
            {
                return "fail";
            }
        }
    }
}
