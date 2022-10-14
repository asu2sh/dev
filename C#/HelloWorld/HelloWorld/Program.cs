
using System;

namespace HelloWorld
{
    public class Program
    {
        static void Main(string[] args)
        {

            Console.Beep();
            Console.WriteLine("{0} {1}", byte.MinValue, byte.MaxValue);

            float f = 1.3f;
            int i = (int)f;
            Console.WriteLine(i);

            string s = "10";
            int j = Convert.ToInt32(s);
            string str = "11";
            int k = int.Parse(str);

            Console.WriteLine("{0} {1}", j, k);

            var asu = new Person();
            asu.greet();

        }
    }
 }
