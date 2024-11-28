namespace Class11th__Abstract_
{
    internal class Warrior : Character
    {
        public Warrior() 
        {
            health = 100;
            attack = 5;
            defense = 5;  
        }

        public override void Skill()
        {
            Console.WriteLine("Short Blade");
        }
    }
}
