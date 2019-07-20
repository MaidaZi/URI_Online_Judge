import java.util.Scanner;

public class E1017 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double temp, vel;
        temp = read.nextDouble();
        vel = read.nextDouble();

        System.out.printf("%.3f\n", temp*vel/12.0);
    }
}
