using System;
using System.Collections.Generic;

public class Program
{
    public static void Main()
    {
        Console.WriteLine("how many people are interested");

        int peopleIntrested = Convert.ToInt32(Console.ReadLine());
        List<int> highest = new List<int>() { 0 };
        List<int> highestDays = new List<int>() { 0 };

        int[] availableDays = new int[5];

        for (int i = 0; i < peopleIntrested; i++)
        {
            string schedueleOfPerson = Console.ReadLine();
            for (int r = 0; r < schedueleOfPerson.Length; r++)
            {
                if (schedueleOfPerson[r] == 'Y')
                {
                    availableDays[r] = availableDays[r] + 1;
                }
            }
        }

        for (int i = 0; i < availableDays.Length; i++)
        {
            if (availableDays[i] > highest[0])
            {
                highestDays.Clear();
                highest[0] = availableDays[i];
                highestDays.Add(i);
            }
            else if (availableDays[i] == highest[0])
            {
                highest.Add(highest[0]);
                highestDays.Add(i);
            }
        }

        foreach (var day in highestDays)
        {
            Console.WriteLine(day + 1);
        }
    }
}
