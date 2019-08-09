import java.util.Scanner;

public class E1036{
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double a, b, c, del;
        a = read.nextDouble();
        b = read.nextDouble();
        c = read.nextDouble();
        del = Math.pow(b,2) - 4 * a * c;

        if (del >= 0 && a != 0.0) {
            System.out.printf("R1 = %.5f\n", (-b + Math.sqrt(del))/(2*a) );
            System.out.printf("R2 = %.5f\n", (-b - Math.sqrt(del))/(2*a) );
        }
        else{
            System.out.printf("Impossivel calcular\n");
        }
    }
}
