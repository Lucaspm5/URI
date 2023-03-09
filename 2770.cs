using System;

class MainClass {
  public static void Main (string[] args) {
    while (true) {
      string line = Console.ReadLine();
      if (string.IsNullOrEmpty(line)) {
        break;
      }
      string[] input = line.Split(' ');
      int x = int.Parse(input[0]);
      int y = int.Parse(input[1]);
      int m = int.Parse(input[2]);

      for (int i = 0; i < m; i++) {
        line = Console.ReadLine();
        input = line.Split(' ');
        int xi = int.Parse(input[0]);
        int yi = int.Parse(input[1]);

        if ((xi <= x && yi <= y) || (xi <= y && yi <= x)) {
          Console.WriteLine("Sim");
        } else {
          Console.WriteLine("Nao");
        }
      }
    }
  }
}
