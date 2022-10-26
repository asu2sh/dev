using System;

namespace Delegates
{
    public class PhotoFilters
    {
        public void ApplyBrightness(Photo photo)
        {
            Console.WriteLine("Brightness Increased...");
        }
        public void ApplyContrast(Photo photo)
        {
            Console.WriteLine("Contrast Applied...");
        }
        public void Resize(Photo photo)
        {
            Console.WriteLine("Photo Resized...");
        }
    }
}
