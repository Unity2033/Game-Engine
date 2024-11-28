namespace Class11th__Abstract_
{
    internal class Rogue : Character
    {
        public Rogue() 
        {
            health = 80;
            attack = 15;
            defense = 2.5f;
        }

        public override void Skill()
        {
            Console.WriteLine("Sting");
        }
    }
}
