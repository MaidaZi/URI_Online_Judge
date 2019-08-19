import java.util.Scanner;

public class E1049 {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        String str1 , str2 , str3;
        str1 = read.nextLine();
        if (str1.equals("vertebrado")){
            str2 = read.nextLine();
            if (str2.equals("ave")){
                str3 = read.nextLine();
                if (str3.equals("carnivoro"))
                    System.out.println("aguia");
                else if (str3.equals("onivoro"))
                    System.out.println("pomba");
            }
            else if (str2.equals("mamifero")){
                str3 = read.nextLine();
                if (str3.equals("onivoro"))
                    System.out.println("homem");
                else if (str3.equals("herbivoro"))
                    System.out.println("vaca");
            }
        }
        else if (str1.equals("invertebrado")){
            str2 = read.nextLine();
            if (str2.equals("inseto")){
                str3 = read.nextLine();
                if (str3.equals("hematofago"))
                    System.out.println("pulga");
                else if (str3.equals("herbivoro"))
                    System.out.println("lagarta");
            }
            else if (str2.equals("anelideo")){
                str3 = read.nextLine();
                if (str3.equals("hematofago"))
                    System.out.println("sanguessuga");
                else if (str3.equals("onivoro"))
                    System.out.println("minhoca");
            }
        }
    }
}
