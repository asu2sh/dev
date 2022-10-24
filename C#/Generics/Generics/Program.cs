using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Generics
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var book = new Book { No = "1111", Title = "C# Advanced" };

            var books = new GenericList<Book>();
            books.Add(new Book());

            var numbers = new GenericList<int>();
            numbers.Add(1);

            var dictionary = new GenericDictionary<string, Book>();
            dictionary.Add("2222", new Book());

            var number = new Nullable<int>(5);
            System.Console.WriteLine("Has value ? " + number.HasValue);
            System.Console.WriteLine("Value: " + number.GetValueOrDefault());
        }
    }
}
