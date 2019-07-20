import java.util.Scanner;

public class 1012 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double a, b, c;
        a = read.nextDouble();
        b = read.nextDouble();
        c = read.nextDouble();
        System.out.printf("TRIANGULO: %.3f\n", (a*c)/2.0);
        System.out.printf("CIRCULO: %.3f\n", 3.14159*c*c);
        System.out.printf("TRAPEZIO: %.3f\n", ((a+b)/2.0)*c);
        System.out.printf("QUADRADO: %.3f\n", b*b);
        System.out.printf("RETANGULO: %.3f\n", a*b);
    }
}
