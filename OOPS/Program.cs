﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q4_class_5Aug
{
    class Employee
    {
        public int empno;
        public string empname;
        public double salary;
        //creating methods getdata() and showdata()
        public void getdata(int e1, string en, double sa)
        {
            empno = e1;
            empname = en;
            salary = sa;

        }
        public void showdata()
        {
            Console.WriteLine("empno " + empno);
            Console.WriteLine("empname " + empname);
            Console.WriteLine("salary " + salary);
        }
        internal class Program
        {
            static void Main(string[] args)
            {
                //creating an instance(object) of class employee
                //syntax classname objectname = new classname();
                Employee emp = new Employee();
                emp.getdata(11, "amit", 232323);

                emp.showdata();
            }
        }
    }
}
