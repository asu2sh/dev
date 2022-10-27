using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using Microsoft.SqlServer.Server;

namespace Async
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hi, ");
            NameAsync("Ashutosh");
            Console.WriteLine("My name is ");
        }

        public static async Task NameAsync(string message)
        {
            await Task.Delay(1000);
            Console.WriteLine(message);
        }
    }
}
