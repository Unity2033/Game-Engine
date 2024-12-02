namespace Class12th__Encapsulation_
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
