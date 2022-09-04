using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q2_Class__bank__25Aug
{
    internal class bank
    {
       public int actno;
        public int amount;
        public int bal = 1000;

        public string deposit(int amount)
        {
            bal = bal + amount;
            return "Diposited Amount=" + bal.ToString();
        }
        public string withdrawl(int amount)
        {
            string res = null;
            if(amount>bal)
            {
                res="Withdrawl is unsuccessfull";
            }
            else
            {
                bal =amount-bal;
                res= "balance After withdrawl="+bal.ToString();
            }
            return res;
           
        }
        public string showbalance()
        {
            return "Balance Amount is=" + bal.ToString();
        }

    }
}
