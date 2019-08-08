import java.util.Scanner;

public class E1035{
    public static void main(String[] args) {
        int a, b, c, d;
        Scanner read = new Scanner(System.in);
        a = read.nextInt();
        b = read.nextInt();
        c = read.nextInt();
        d = read.nextInt();
        if ( b > c && d > a && c + d > a + b && c > 0  && d > 0 && a % 2 == 0 ) {
            System.out.print("Valores aceitos\n");
        }
        else
            System.out.print("Valores nao aceitos\n");
    }
}
