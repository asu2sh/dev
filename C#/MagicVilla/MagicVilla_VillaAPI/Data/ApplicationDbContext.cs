using MagicVilla_VillaAPI.Models;
using Microsoft.EntityFrameworkCore;

namespace MagicVilla_VillaAPI.Data
{
    public class ApplicationDbContext : DbContext
    {
        public ApplicationDbContext(DbContextOptions<ApplicationDbContext> options)
            : base(options)
        {
        }
        public DbSet<Villa> Villas { get; set; }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            modelBuilder.Entity<Villa>().HasData(
                new Villa()
                {
                    Id = 1,
                    Name = "Roy Villa",
                    Details = "xyz",
                    ImageUrl = "https://www.google.com/images/branding/googlelogo/1x/googlelogo_light_color_272x92dp.png",
                    Occupancy = 5,
                    Rate = 200,
                    Sqft = 550,
                    Amenity = "",
                    UpdatedDate = DateTime.Now
                },
                new Villa()
                {
                    Id = 2,
                    Name = "Royal Villa",
                    Details = "xyzomg",
                    ImageUrl = "https://www.google.com/images/branding/googlelogo/1x/googlelogo_light_color_272x92dp.png",
                    Occupancy = 5,
                    Rate = 300,
                    Sqft = 650,
                    Amenity = ""
                },
                new Villa()
                {
                    Id = 3,
                    Name = "Royal Pool Villa",
                    Details = "omgxyz",
                    ImageUrl = "https://www.google.com/images/branding/googlelogo/1x/googlelogo_light_color_272x92dp.png",
                    Occupancy = 5,
                    Rate = 400,
                    Sqft = 750,
                    Amenity = ""
                },
                new Villa()
                {
                    Id = 4,
                    Name = "Diamond Villa",
                    Details = "xomgyz",
                    ImageUrl = "https://www.google.com/images/branding/googlelogo/1x/googlelogo_light_color_272x92dp.png",
                    Occupancy = 5,
                    Rate = 500,
                    Sqft = 850,
                    Amenity = ""
                },
                new Villa()
                {
                    Id = 5,
                    Name = "Diamond Pool Villa",
                    Details = "xyomgz",
                    ImageUrl = "https://www.google.com/images/branding/googlelogo/1x/googlelogo_light_color_272x92dp.png",
                    Occupancy = 5,
                    Rate = 600,
                    Sqft = 950,
                    Amenity = ""
                }

            );
        }
    }
}
