package aeds1.livros.Fundamentos_da_Programacao_de_Computadores.Cap_05;
import java.util.*;

class Main {
    private Scanner scanner;

    public Main() {
        this.scanner = new Scanner(System.in);
    }

    public void close() {
        this.scanner.close();
    }

    public void ex_r_05() {

    }

    public void ex_r_10() {
        
    }

    public void ex_r_15() {
        double grt_price = 0;
        double sml_price = 100000;
        double sum_add;
        double sum_tax;
        int sum_cheap;
        int sum_norm;
        int sum_exp;

        for(int i = 1; i <= 12; i++) {
            double tax;
            int stocking;
            double tprice;
            double price = this.scanner.nextDouble();
            String cool = this.scanner.nextString();
            String category = this.scanner.nextString();
        
            if(price < 20) {
                switch(category) {
                    case "A":
                        stocking = 2;
                        break;

                    case "L":
                        stocking = 3;
                        break;

                    case "V":
                        stocking = 4;
                        break;

                    default:
                        System.out.println("Categoria inserida invalida...");
                        return;
                }
            } else if(price >= 20 && price <= 50) {
                switch(cool) {
                    case "S":
                        stocking = 6;
                        break;

                    case "N":
                        stocking = 0;
                        break;

                    default:
                        System.out.println("Opcao de refrigeracao inserida invalida");
                        return;
                }
            } else if(price > 50) {
                switch(cool) {
                    case "S":
                        if(category.equals("A"))
                            stocking = 5;
                        else if(category.equals("L"))
                            stocking = 2;
                        else if(category.equals("V"))
                            stocking = 4;
                        else {
                            System.out.println("Opcao de categoria inserida invalida")
                            return;
                        }
                        break;

                    case "N":
                        if(category.equals("A") || category.equals("V")) {
                            stocking = 0;
                        else if(category.equals("L")) {
                            stocking = 1;
                        else {
                            System.out.println("Opcao de categoria inserida invalida");
                            return;
                        }
                        break;
                
                    default:
                        System.out.println("Opcao de refrigeracao inserida invalida");
                }

                if(category.equals("A") || cool.equals("S"))
                    tax = 0.02 * price;
                else
                    tax = 0.04 * price;
            
                tprice = price + tax;

                if(tprice < 20) {
                    System.out.println("barato");
                    sum_cheap++;
                } else if(tprice >= 20 && tprice <= 100) {
                    System.out.println("normal");
                    sum_norm++;
                } else {
                    System.out.println("caro");
                    sum_exp++;
                }

                sum_add += (stocking + tax);
                sum_tax += tax;

                if(tprice > grt_price)
                    grt_price = tprice;

                if(tprice < sml_price)
                    sml_price = tprice;
            }

            System.out.printf("media adicionais: %f\n", sum_add / 12);
            System.out.printf("maior final: %f\n", grt_price);
            System.out.printf("menor final: %f\n", sml_price);
            System.out.printf("imposto total: %f\n", sum_tax);
            System.out.printf("barato: %f\n", sum_cheap);
            System.out.printf("caro: %f\n", sum_exp);
            System.out.printf("normal: %f\n", sum_norm);
        }
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.ex_r_05();
        main.ex_r_10();
        main.ex_r_15();
        
        main.close();
    }
}