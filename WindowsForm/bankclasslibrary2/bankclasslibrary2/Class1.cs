using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bankclasslibrary2
{
    public abstract class account
    {
        public int actno;
        public int bal = 1000;
        public int intrest = 300;

        public abstract string deposit(int amount);
        
        public string withdrawl(int amount)
        {
            bal=bal-amount;
            return deposit(amount);
        }
        public string show()
        {
            return bal.ToString();
        }
    }
    public class saving : account
    { 
        public override string deposit(int amount)
        {
            bal = bal + amount + intrest;
            return bal.ToString();
        }
    }
    public class current:account
    {
        public override string deposit(int amount)
        {
            bal=bal + amount;
            return bal.ToString();
        }
    }

}
