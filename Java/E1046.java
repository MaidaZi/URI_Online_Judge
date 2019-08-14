import java.util.Scanner;

public class E1046 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int ini, fim, temp, cont = 0;
	    ini = read.nextInt();
	    fim = read.nextInt();

    	if (ini == fim )
    		System.out.println("O JOGO DUROU 24 HORA(S)");
    	else if (fim > ini){
    		temp = fim - ini;
            System.out.printf("O JOGO DUROU %d HORA(S)\n", temp);
    	}
    	else{
    		for( int i = ini ; i <= 24 ; i++){
    		 	if (i == 24){
    		 		i = 0;
    		 		cont++;
    		 	}
    		 	else {
    		 		cont++;
    			}
    			if (i == fim){
    				cont -=1;
    				break;
    		  	}
    		}
            System.out.printf("O JOGO DUROU %d HORA(S)\n", cont);
     	}
    }
}
