﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q4_10Aug
{
    class student
    {
        int rno;
        string name;

        public void getstudentdata()
        {
            rno = 11;
            name = "amitabh";
        }
        public void getstudentdata(int rno, string name)
        {
            this.rno = rno;
            this.name = name;
        }
        public void getstudentdata(string name, int rno)
        {

            this.rno = rno;
            this.name = name;
        }
        public void displaydata()
        {
            Console.WriteLine("rno " + rno);
            Console.WriteLine("name " + name);
        }
        internal class Program
    {
        static void Main(string[] args)
        {
                student s = new student(); //this will call constructor automatically
                s.getstudentdata();
                s.displaydata();
                Console.WriteLine("calling method with parameters");
                s.getstudentdata(1111, "rejesh");
                s.displaydata();

                Console.WriteLine("calling method with string first and then int");
                s.getstudentdata("rajeshri", 222);
                s.displaydata();

            }
        }
    }
}
