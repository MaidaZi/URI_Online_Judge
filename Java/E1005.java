import java.util.Scanner;

public class E1005{
	public static void main(String[] args) {
	    Scanner read = new Scanner(System.in);
	    double a, b;
	    a = read.nextDouble();
	    b = read.nextDouble();
		System.out.printf("MEDIA = %.5f\n", (a*3.5 + b*7.5)/11.0);
	}
}
