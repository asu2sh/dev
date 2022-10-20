using System;

namespace ClassesInCSharp
{
    public class Installer
    {
        private readonly Logger logger;

        public Installer(Logger logger)
        {
            this.logger = logger;
        }

        public void Install()
        {
            logger.Log("We are Installing the blah blah blah ...");
        }
    }
    public class DbMigrator
    {
        private readonly Logger _logger;

        public DbMigrator(Logger logger)
        {
            _logger = logger;
        }

        public void Migrate()
        {
            _logger.Log("We are migrating blah blah blah ...");
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            //* INSTANCE
            //var person = new Person();
            //person.Name = "Ashutosh";
            //person.Introduce("Mosh");

            //* ENCAPSULATION
            //person.SetBirthDate(new DateTime(1999, 10, 02));
            //Console.WriteLine(person.GetBirthDate());



            //person.BirthDate = new DateTime(1999, 10, 02);
            var person = new Person(new DateTime(1999, 10, 02));
            Console.WriteLine(person.Age);


            ////* STATIC
            //var p = Person.Parse("asu2sh");
            //p.Introduce("Mosh");


            var customer = new Customer(13, "Ashutosh");
            Console.WriteLine(customer.Id);
            Console.WriteLine(customer.Name);

            customer.Orders.Add(new Order());
            customer.Orders.Add(new Order());
            Console.WriteLine(customer.Orders.Count);


            UsePoints();

            var calculator = new Calculator();
            Console.WriteLine(calculator.Add(1, 2));
            Console.WriteLine(calculator.Add(1, 2, 3));
            Console.WriteLine(calculator.Add(new int[] { 3, 4, 5 }));


            var cookie = new HttpCookie();
            cookie["name"] = "Ashutosh";
            Console.WriteLine(cookie["name"]);

            //Inheritance
            var text = new Text();
            text.Copy();


            //Composition

            var dbMigrator = new DbMigrator(new Logger());

            var logger = new Logger();
            var installer = new Installer(logger);

            dbMigrator.Migrate();
            installer.Install();
        }


        static void UsePoints()
        {
            try
            {
                var point = new Point(10, 20);
                point.Move(5, 10);
                Console.WriteLine("{0} {1}", point.X, point.Y);
                point.Move(new Point(15, 30));
                Console.WriteLine("{0} {1}", point.X, point.Y);
                point.Move(null);
                Console.WriteLine("{0} {1}", point.X, point.Y);
            }
            catch (Exception)
            {
                    Console.WriteLine("An Unexpected error Occured.");
            }
        }
    }
}
