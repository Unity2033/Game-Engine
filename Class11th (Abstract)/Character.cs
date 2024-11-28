namespace Class11th__Abstract_
{
    abstract class Character
    {
        protected int health;
        protected int attack;
        protected float defense;

        public void Stats()
        {
            Console.WriteLine("health : " + health);
            Console.WriteLine("defense : " + defense);
            Console.WriteLine("attack : " + attack);
        }

        public abstract void Skill();
    }
}
