using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prac_Q5_class_5Aug
{
    class Employee
    {
        int empno;
        String empname;
        float salary;
        //creating methods
        public void getdata(int a, String b, float c)
        {
            empno = a;
            empname = b;
            salary = c;

        }
        public void displaydata()
        {
            Console.WriteLine("empno " + empno);
            Console.WriteLine("empname " + empname);

            Console.WriteLine("salary " + salary);
        }
        internal class Program
        {
            static void Main(string[] args)
            {
                //creating an object(instance) of employee class
                //syntax classname objectname =new classname();
                Employee emp = new Employee();
                Console.WriteLine("enter employee no");
                int eno = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("enter employee name");
                String en = Console.ReadLine();
                Console.WriteLine("enter employee salary");
                float sal = Convert.ToSingle(Console.ReadLine());

                emp.getdata(eno, en, sal);
                emp.displaydata();

                Console.ReadLine();
            }
        }
    }
}
