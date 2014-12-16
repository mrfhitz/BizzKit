﻿using WebDev.DAL;
using WebDev.Models;
using Microsoft.AspNet.Identity;
using System.Linq;
using WebDev.Controllers;
using Microsoft.AspNet.Identity.EntityFramework;

namespace WebDev.Services
{
    // NOTE: You can use the "Rename" command on the "Refactor" menu to change the class name "Service" in code, svc and config file together.
    // NOTE: In order to launch WCF Test Client for testing this service, please select Service.svc or Service.svc.cs at the Solution Explorer and start debugging.
    public class Service : IService
    {
        public string Login(string username, string password)
        {
            var db = new WebDevContext();

            var user = from u in db.Users
                       where u.Username == username
                       select u;

            return user.First().PasswordHash;
        }
    }
}
