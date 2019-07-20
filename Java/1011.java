import java.util.Scanner;

public class 1011 {
    public static void main(String[] args) {
        double r;
        Scanner read = new Scanner(System.in);
        r = read.nextDouble();
        System.out.printf("VOLUME = %.3f\n", (4.0/3.0)*3.14159*r*r*r);
    }
}
