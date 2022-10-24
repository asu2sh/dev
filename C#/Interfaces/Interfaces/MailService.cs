using System;

namespace Interfaces
{
    public class MailService
    {
        public void Send(Mail mail)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("Sending email...");
        }
    }
}
