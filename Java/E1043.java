import java.util.Scanner;

public class E1043 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        float a, b, c;
        a = read.nextFloat();
        b = read.nextFloat();
        c = read.nextFloat();
        if (a + b > c && a + c > b && b + c > a)
            System.out.printf("Perimetro = %.1f\n", a + b + c);
        else
            System.out.printf("Area = %.1f\n", ((a + b) * c )/2);
    }
}
