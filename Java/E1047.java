import java.util.Scanner;

public class E1047 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        int hi, mi, hf, mf, duracaoH = 0, duracaoM = 0;
        hi = read.nextInt();
        mi = read.nextInt();
        hf = read.nextInt();
        mf = read.nextInt();
        if(hi == hf ){
            duracaoH = 24;
            duracaoM = 0;
            if (mf > mi){
                duracaoM = mf - mi;
                if (duracaoH >= 24 && duracaoM > 0){
                    duracaoH = 0;
                }
            }
            else if (mi > mf){
                duracaoH -= 1;
                duracaoM = 60 -(mi - mf);
            }
        }

        else if (hi < hf){
            for(int i = hi ; i <= hf ; i++){
                duracaoH++;
            }
            if (mf >= mi){
                duracaoH -= 1;
                duracaoM = mf - mi;
            }
            else{
                duracaoH -= 2;
                duracaoM = 60 -(mi - mf);
            }
        }

        else {// hi > hf
            for(int i = hi ; i != hf ; i++){
                if (i == 24){
                    i = 0;
                }
                duracaoH++;
            }
            if (mf > mi){
                duracaoM = mf - mi;
                if (duracaoH >= 24 && duracaoM > 0){
                    duracaoH = 0;
                }

            }
            else if (mi > mf){
                duracaoH -= 1;
                duracaoM = 60 -(mi - mf);
            }
        }
        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoH, duracaoM);
    }
}
