import java.util.Scanner;

public class E1009 {
	public static void main(String[] args) {
	    Scanner read = new Scanner(System.in);
	    String name;
	    float fix, mount;
	    name = read.nextLine();
	    fix = read.nextFloat();
	    mount = read.nextFloat();
	    System.out.printf("TOTAL = R$ %.2f\n", fix + mount * 0.15);
	}
}
