using System;

class Program
{
    static void Main()
    {
        int N, i, X, j;

        N = int.Parse(Console.ReadLine());

        for(i = 0; i < N; i++)
        {
            X = int.Parse(Console.ReadLine());
            int total = 0;

            if(X == 2)
            {
                Console.WriteLine("Prime");
            }
            else
            {
                if(X % 2 == 0)
                {
                    Console.WriteLine("Not Prime");
                }
                else
                {
                    for(j = 3; j <= Math.Sqrt(X); j += 2)
                    {
                        if(X % j == 0)
                        {
                            total++;
                        }
                    }
                    if(total >= 1)
                    {
                        Console.WriteLine("Not Prime");
                    }
                    else
                    {
                        Console.WriteLine("Prime");
                    }
                }
            }
        }
    }
}
