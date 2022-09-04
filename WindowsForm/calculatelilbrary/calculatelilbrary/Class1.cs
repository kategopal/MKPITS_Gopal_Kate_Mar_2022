using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace calculatelilbrary
{
    public class calculate
    {
        public int num1;
        public int num2;
        public int res;

        public string addition(int num1,int num2)
        {
            res = num1 + num2;
            return res.ToString();
        }
        public string subtraction(int num1, int num2)
        {
            res = num1 - num2;
            return res.ToString();
        }
    }
}
