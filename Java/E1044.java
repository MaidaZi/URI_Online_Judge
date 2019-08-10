import java.util.Scanner;

public class E1044 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int a, b;
	    a = read.nextInt();
	    b = read.nextInt();

    	if ( a % b == 0 || b % a == 0)
    		System.out.println("Sao Multiplos");
    	else
    		System.out.println("Nao sao Multiplos");
    }
}
