using System.Collections.Generic;

namespace LINQ
{
    public class BookRepository
    {
        public IEnumerable<Book> GetBooks()
        {
            return new List<Book>
            {
                new Book(){Title = "ADO.NET", Price = 5},
                new Book(){Title = "ASP.NET MVC", Price = 9.99f},
                new Book(){Title = "ASP.NET Web API", Price = 12},
                new Book(){Title = "C# Advanced", Price = 7},
                new Book(){Title = "C# ULTIMATE", Price = 9}
            };
        }
    }
}
