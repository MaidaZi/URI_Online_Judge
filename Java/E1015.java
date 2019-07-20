import java.util.Scanner;

public class E1015 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double x1 , x2 , y1, y2;
        x1 = read.nextDouble();
        y1 = read.nextDouble();
        x2 = read.nextDouble();
        y2 = read.nextDouble();
        System.out.printf("%.4f\n", Math.sqrt( Math.pow(x2-x1,2) + Math.pow(y2-y1,2 )));
    }
}
