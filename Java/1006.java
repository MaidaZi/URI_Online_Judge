import java.util.Scanner;

public class 1006 {
	public static void main(String[] args) {
	    Scanner read = new Scanner(System.in);
	    double a, b, c;
	    a = read.nextDouble();
	    b = read.nextDouble();
	    c = read.nextDouble();
		System.out.printf("MEDIA = %.1f\n",  (a*2.0 + b*3.0 + c*5.0)/10.0);
	}
}
