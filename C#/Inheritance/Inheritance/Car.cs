namespace Inheritance
{
    public class Car : Vehicle
    {
        public Car(string regNumber) : base(regNumber)
        {
            System.Console.WriteLine("Car is being initialized. {0}", regNumber);
        }
    }
}
