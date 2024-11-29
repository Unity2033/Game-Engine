using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Program
{
    internal class Vitamin
    {
        private int protein;

        public int Protein
        {
            set 
            {
                if (value >= 100)
                {
                    Console.WriteLine("Can't Get Value");
                }
                else
                {
                    protein = value;
                }
            }
            get { return protein; }
        }
    }
}
