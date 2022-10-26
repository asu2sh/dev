
using System;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LINQ
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var books = new BookRepository().GetBooks();

            // LINQ Extension Methods
            var cheapBooks = books
                                  .Where(b => b.Price < 10)
                                  .OrderBy(b => b.Price);

            // LINQ Query Operators
            var cheaperbooks =
                                from b in books
                                where b.Price < 10
                                orderby b.Price
                                select b.Title;

            foreach(var book in cheapBooks)
                Console.WriteLine(book.Title + ": " + book.Price);
        }
    }
}
