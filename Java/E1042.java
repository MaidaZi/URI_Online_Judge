import java.util.Scanner;
import java.util.Arrays;

public class E1042 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int[] v1 = new int[3];
        int[] v2 = new int[3];
        int num;
        for (int i = 0; i < 3; i++) {
            num = read.nextInt();
            v1[i] = num;
            v2[i] = num;
        }
        Arrays.sort(v2);
        for (int i = 0; i < 3; i++) {
            System.out.println(v2[i]);
        }
        System.out.println();
        for (int i = 0; i < 3; i++) {
            System.out.println(v1[i]);
        }
    }
}
