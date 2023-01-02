using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        public interface IDemoTest
        {
            void Display();
        }

        public class Format : IDemoTest
        {
            public void Display()
            {
                Console.WriteLine("Interface Implemented.");
            }
        }

        public class ConstructorInjection
        {
            private IDemoTest _demoTest;

            public ConstructorInjection(IDemoTest demoTest)
            {
                _demoTest = demoTest;
            }

            public void Display()
            {
                _demoTest.Display();
            }
        }
        static void Main(string[] args)
        {
            var conInj = new ConstructorInjection(new Format());
            conInj.Display();
            Console.ReadLine();
        }
    }
}
