import java.util.Scanner;

public class E1013 {
    public static int maiorAB(int a, int b) {
        return ( (a+b+Math.abs(a-b) )/2 );
    }

    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int a, b, c;
        a = read.nextInt();
        b = read.nextInt();
        c = read.nextInt();
        System.out.printf("%d eh o maior\n", maiorAB(maiorAB(a,b), c));
    }
}
