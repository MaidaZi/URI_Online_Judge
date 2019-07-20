import java.util.Scanner;

public class 1837 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int a, b, q, r;
        a = read.nextInt();
        b = read.nextInt();
        r = (a % Math.abs(b));
        if (r >= 0) {
            q = (a - r)/b;
            System.out.printf("%d %d\n", q, r);
        }
        else {
            r += Math.abs(b);
            q = (a - r)/b;
            System.out.printf("%d %d\n", q, r);
        }
    }
}
