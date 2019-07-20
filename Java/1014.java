import java.util.Scanner;

public class 1014 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double km , l;
        km = read.nextDouble();
        l = read.nextDouble();
        System.out.printf("%.3f km/l\n", km/l);
    }
}
