import java.util.Scanner;

public class E1021 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        	float x;
        	x = read.nextFloat();
        	x *= 100.0;
        	System.out.printf("NOTAS:\n");
        	// Para 100 reais
        	int cem = 0;
        	while ( x >= 10000 ){
        		x = x - 10000;
        		cem ++;
        	}
        	System.out.printf("%d nota(s) de R$ 100.00\n", cem);
        	// Para 50 reais
        	int cinq = 0;
        	while ( x >= 5000 ){
        		x = x - 5000;
        		cinq ++;
        	}
        	System.out.printf("%d nota(s) de R$ 50.00\n", cinq);
        	// Para 20 reais
        	int vin = 0;
        	while ( x >= 2000 ){
        		x = x - 2000;
        		vin ++;
        	}
        	System.out.printf("%d nota(s) de R$ 20.00\n", vin);
        	// Para 10 reais
        	int dez = 0;
        	while ( x >= 1000 ){
        		x = x - 1000;
        		dez ++;
        	}
        	System.out.printf("%d nota(s) de R$ 10.00\n", dez);
        	// Para 5 reais
        	int cinc = 0;
        	while ( x >= 500 ){
        		x = x - 500;
        		cinc ++;
        	}
        	System.out.printf("%d nota(s) de R$ 5.00\n", cinc);
        	// Para 2 reais
        	int dois = 0;
        	while ( x >= 200 ){
        		x = x - 200;
        		dois ++;
        	}
        	System.out.printf("%d nota(s) de R$ 2.00\n", dois);
        	System.out.printf("MOEDAS:\n");
        	// Para 1 real
        	int um = 0;
        	while ( x >= 100 ){
        		x = x - 100;
        		um ++;
        	}
            System.out.printf("%d moeda(s) de R$ 1.00\n", um);
        	// Para 0.5 centavos
        	int meio = 0;
        	while ( x >= 50 ){
        		x = x - 50;
        		meio ++;
        	}
        	System.out.printf("%d moeda(s) de R$ 0.50\n", meio);
        	// Para 0.25 centavos
        	int umQuarto = 0;
        	while ( x >= 25 ){
        		x = x - 25;
        		umQuarto ++;
        	}
        	System.out.printf("%d moeda(s) de R$ 0.25\n", umQuarto);
        	// Para 0.10 centavos
        	int dezCent = 0;
        	while ( x >= 10 ){
        		x = x - 10;
        		dezCent ++;
        	}
        	System.out.printf("%d moeda(s) de R$ 0.10\n", dezCent);
        	// Para 0.05 centavos
        	int cincoCent = 0;
        	while ( x >= 5 ){
        		x = x -5;
        		cincoCent ++;
        	}
        	System.out.printf("%d moeda(s) de R$ 0.05\n", cincoCent);
        	// Para 0.01 centavos
        	int umCent = 0;
        	while ( x >= 1 ){
        		x = x - 1;
        		umCent ++;
        	}
        	System.out.printf("%d moeda(s) de R$ 0.01\n", umCent);
    }
}
