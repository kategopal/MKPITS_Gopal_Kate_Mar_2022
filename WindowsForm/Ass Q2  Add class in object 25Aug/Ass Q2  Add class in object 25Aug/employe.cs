using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//2- create a class employee having fields empno, empname and basicsalary and method calculatebonus(45% of basicsalary)  and calulatetotalsalary(basicsalary+bonus) design the form and use the class

namespace Ass_Q2__Add_class_in_object_25Aug
{
    internal class employe
    {
       public int empid;
        public string empname;
        public float basicsal;

        public float calculatebonus( float basicsal)
        {
            float res;
            res = 0.45f * basicsal;
            return res;
        }
        public float calulatetotalsalary(float basicsal,float bonus )
        {
            float res1;
            res1= basicsal + bonus;
            return res1;
        }
    }
}
