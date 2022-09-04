using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q3_add_class_25Aug
{
    internal abstract  class account
    {
       public int actno;
        public int balance = 1000;
        // string acttype;

        public abstract string deposit(int amount);

        public string withdrawl(int amount)
        {
            string res = null;
            if (amount > balance)
            {
                res = "insufficient fund , cannot withdraw money";
            }
            else
            {
                balance = balance - amount;
                res = "amount withdrawl successfully, bal is " + balance.ToString();
            }
            return res;
        }
        public string showbalance()
        {
            return "balance amount is " + balance.ToString();
        }

    }
    class saving : account
    {
        public override string deposit(int amount)
        {
            int interest = 500;
            balance = balance + amount + interest;
            return "amount deposited successfully with interest , bal is " + balance.ToString();

        }
    }
    class current : account
    {
        public override string deposit(int amount)
        {

            balance = balance + amount;
            return "amount deposited successfully without interest , bal is " + balance.ToString();

        }

    }
}
