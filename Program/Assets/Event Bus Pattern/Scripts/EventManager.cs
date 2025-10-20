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
    
}
