import java.util.Scanner;

public class 1008 {
	public static void main(String[] args) {
	    Scanner read = new Scanner(System.in);
	    int num, time;
	    double byTime;
	    num = read.nextInt();
	    time = read.nextInt();
	    byTime = read.nextDouble();
	    System.out.printf("NUMBER = %d\n", num);
	    System.out.printf("SALARY = U$ %.2f\n", (double)time * byTime);
	}
}
