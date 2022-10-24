using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Interfaces
{
    public class Video
    {
    }
    public class Mail
    {
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            var orderProcessor = new OrderProcessor(new ShippingCalculator());
            var order = new Order { DatePlaced = DateTime.Now, TotalPrice = 100f };
            orderProcessor.Process(order);


            var dbMigrator = new DbMigrator(new ConsoleLogger());
            dbMigrator.Migrate();

            var DBM = new DbMigrator(new FileLogger("C:\\Users\\skull\\dev\\C#\\Interfaces\\log.txt"));
            DBM.Migrate();


            var encoder = new VideoEncoder();
            encoder.RegisterNotificationChannel(new MailNotificationChannel());
            encoder.RegisterNotificationChannel(new SmsNotificationChannel());
            //encoder.Encode(new Video());
        }
    }
}
