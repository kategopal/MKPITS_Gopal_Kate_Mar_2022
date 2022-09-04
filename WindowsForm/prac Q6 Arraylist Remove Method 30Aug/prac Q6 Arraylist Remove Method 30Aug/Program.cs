using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;

namespace prac_Q6_Arraylist_Remove_Method_30Aug
{
    internal class Program
    {
        
        static void Main(string[] args)
        {
            ArrayList  ar=new ArrayList();
            ar.Add(19);
            ar.Add(21);
            ar.Add(13);

          //  StringBuilder sb=new StringBuilder();
            foreach(int i in ar)
            {
                // sb.Append("total Number="+i);
                Console.WriteLine("Total Number=" + i);
            }
            ar.Remove(13);
            
            foreach(int i in ar)
                {
                // sb.Append("Total Number After Remove Number 13"+i);
                Console.WriteLine("Total Number After Remove 13 Number=" + i);
                }
            Console.WriteLine(" ");
            Console.WriteLine(" ");
            ar.Remove(1);
            foreach (int i in ar)
            {
                // sb.Append("Total Number After Remove Number 13"+i);
                Console.WriteLine("Total Number After Remove 1 Number=" + i);
            }
        }
    }
}
