import java.util.Scanner;

public class E1045 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        float a, b, c , maior = 0, menor = 0, medio = 0;
        a = read.nextFloat();
        b = read.nextFloat();
        c = read.nextFloat();

        maior = Math.max(a,Math.max(b,c));

        menor = Math.min(a,Math.min(b,c));

        medio = (a + b + c) - (maior + menor);

        if ( maior >= medio + menor)
            System.out.println("NAO FORMA TRIANGULO");
        else{
            if ( Math.pow(maior,2) == Math.pow(medio,2) + Math.pow(menor,2))
                System.out.println("TRIANGULO RETANGULO");
            if ( Math.pow(maior,2) > Math.pow(medio,2) + Math.pow(menor,2))
                System.out.println("TRIANGULO OBTUSANGULO");
            if ( Math.pow(maior,2) < Math.pow(medio,2) + Math.pow(menor,2))
                System.out.println("TRIANGULO ACUTANGULO");

            if ( maior == medio && medio == menor && menor == maior)
                System.out.println("TRIANGULO EQUILATERO");

            if  ( (maior == medio && medio != menor) ||
                  (medio == menor && menor != maior) ||
                  (menor == maior && maior != medio))
                System.out.println("TRIANGULO ISOSCELES");
        }
    }
}
