namespace Class11th__Abstract_
{
    internal class Wizard : Character
    {
        public Wizard()
        {
            health = 75;
            attack = 10;
            defense = 1;
        }

        public override void Skill()
        {
            Console.WriteLine("Magic Attack");
        }
    }
}
