namespace Inheritance
{
    public class Vehicle
    {
        private readonly string _regNumber;
        //public Vehicle()
        //{
        //    System.Console.WriteLine("Vehicle is being initialized.");
        //}
        public Vehicle(string regNumber)
        {
            _regNumber = regNumber;
            System.Console.WriteLine("Vehicle is being initialized. {0}", regNumber);
        }
    }
}
