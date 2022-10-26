using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExceptionHandling
{
    internal class Program
    {
        static void Main(string[] args)
        {

            try
            {
                var calculator = new Calculator();
                var result = calculator.Divide(5, 0);
            }
            catch (DivideByZeroException ex)
            {
                Console.WriteLine("You Cannot Divide by 0.");
            }
            catch (Exception ex)
            {
                Console.WriteLine("Sorry, an unexpected error occured...");
            }
            finally
            {
                Console.WriteLine("Finally Executed.");
            }
        }
    }
}
