import java.util.Scanner;

public class E1029 {
    public static int calls;

    public static long fib(int num){
        if (num == 0){
            E1029.calls ++;
            return 0;
        }
        else if (num == 1){
            E1029.calls ++;
            return 1;
        }
        else{
            E1029.calls ++;
            return fib(num - 1) + fib(num - 2);
        }
    }

    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int it, num;
        it = read.nextInt();
        for (int i = 0; i < it; i++) {
            calls = 0;
            num = read.nextInt();
            long val = fib(num);
            System.out.printf("fib(%d) = %d calls = %d\n", num, calls - 1, val);
        }
    }
}
