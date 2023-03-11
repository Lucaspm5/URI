using System;

class Program {
    static void Main(string[] args) {
        int[] v = new int[123];
        int m, c, f, x = 0;
        string a;

        for(int i=48;i<58;i++){
            v[i]=x;
            x++;
        }
        for(int i=65;i<91;i++){
            v[i]=x;
            x++;
        }
        for(int i=97;i<123;i++){
            v[i]=x;
            x++;
        }

        while ((a = Console.ReadLine()) != null) {
            m = 0;
            f = 0;
            c = 0;
            if(a[0] == '-' )
                a = a.Substring(1);
            
            foreach (char ch in a) {
                c = v[ch];
                f += c;
                if( c > m )
                    m = c;
            }
            if( f < 3 ){
                Console.WriteLine("2");
            } else {
                while(m<62){
                    if(f%m==0){
                        Console.WriteLine(m+1);
                        break;
                    }
                    m++;
                }
                if(m==62){
                    Console.WriteLine("such number is impossible!");
                }
            }
        }
    }
}
