using System;

class MainClass {
    public static void Main () {
        int v, t;

        while (true) {
            string line = Console.ReadLine();
            if (line == null) break;

            string[] values = line.Split(' ');
            v = int.Parse(values[0]);
            t = int.Parse(values[1]);

            Console.WriteLine(2 * v * t);
        }
    }
}
