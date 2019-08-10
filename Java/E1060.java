import java.util.Scanner;

public class E1060 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        double num;
        int count = 0;
        for (int i = 0; i < 6; i++) {
            num = read.nextDouble();
            if (num >= 0.0)
                count++;
        }
        System.out.println(count + " valores positivos");
    }
}
