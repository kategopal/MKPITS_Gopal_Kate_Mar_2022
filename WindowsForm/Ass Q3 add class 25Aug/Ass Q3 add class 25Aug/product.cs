using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
//3- create a class orderclass having fields orderno,customername,productname, price and quantity and method calculatetotalamount(price * quantity) design the form and use the class

namespace Ass_Q3_add_class_25Aug
{
    internal class product
    {
        public int ordno;
       public string custname;
        public string pdtname;
        public float pdtprice;
        public float pdtqty;

        public float calculatetotalamount(float pdtprice,float pdtqty)
        {
            float res=pdtprice*pdtqty;
            return res;
        }
    }
}
