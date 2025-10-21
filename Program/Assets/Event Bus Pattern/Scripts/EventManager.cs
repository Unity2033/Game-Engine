using System;
using System.Collections.Generic;

public enum Condition
{
    START,
    PAUSE,
    FINISH
}


public static class EventManager
{
    static Dictionary<Condition, Action> dictionary = new();
    
    public static void Subscribe(Condition condition, Action action)
    {
        if (dictionary.ContainsKey(condition))
        {
            dictionary[condition] += action;
        }
        else
        {
            dictionary[condition] = action;
        }
    }

    public static void Unsubscribe(Condition condition, Action action) 
    { 
        if(dictionary.ContainsKey(condition))
        {
            dictionary[condition] -= action;
        }
    }

    public static void Publish(Condition condition)
    {
        if(dictionary.TryGetValue(condition, out var action))
        {
            action?.Invoke();
        }
    }
}
