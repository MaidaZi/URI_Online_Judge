import java.util.Scanner;

public class E1051 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double num, imp;
        num = read.nextFloat();
        if (num <= 2000)
            System.out.println("Isento");
        else if (num <= 3000){
            imp = (num - 2000.0)*0.08;
            System.out.printf("R$ %.2f\n", imp);
        }
        else if (num <= 4500){
            imp = 1000 * 0.08;
            imp += ((num - 3000) * 0.18);
            System.out.printf("R$ %.2f\n", imp);
        }
        else {
            imp = 1000 * 0.08;
            imp = imp + (1500 * 0.18);
            imp = imp + ((num - 4500) * 0.28);
            System.out.printf("R$ %.2f\n", imp);
        }
    }
}
