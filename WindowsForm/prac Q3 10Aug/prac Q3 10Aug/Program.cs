using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q3_10Aug
{
    class student
    {
        int rno;
        string name;

        public student()
        {
            rno = 11;
            name = "amitabh";
        }
        public student(int rno, string name)
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

                s.displaydata();
                student s1 = new student(111, "rajesh");
                s1.displaydata();

            }
        }
    }
}
