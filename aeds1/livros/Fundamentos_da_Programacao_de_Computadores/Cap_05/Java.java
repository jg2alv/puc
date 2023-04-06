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
        int j = 0;
        double sum = 0;

        int n = this.scanner.nextInt();
        double x = this.scanner.nextDouble();

        for (int i = 1; i <= n; i++) {
            switch (i % 6) {
                case 1:
                    j = 1;
                    break;

                case 2:
                case 0:
                    j = 2;
                    break;

                case 3:
                case 5:
                    j = 3;
                    break;

                case 4:
                    j = 4;
                    break;

                default:
                    System.out.println("this should never happen: n % 6 E [0, 5]");
                    return;
            }

            for (int k = j; k >= 1; --k) {
                j *= k;
            }

            if(i % 2 == 0) {
                sum += Math.pow(x, 2) / j;
            } else {
                sum += (-1 * Math.pow(x, 2)) / j;
            }
        }

        System.out.printf("%d\n", sum);
    }

    public void ex_r_10() {
        int age_under_18 = 0;
        int age_sum = 0;
        int height_sum = 0;
        int weight_over_80 = 0;
        
        double age_avg;
        double height_avg;
        double perc;

        for(int t = 1; t <= 5; t++) {
            for(int p = 1; p <= 11; p++) {
                int age = this.scanner.nextInt();
                int height = this.scanner.nextInt();
                int weight = this.scanner.nextInt();

                if(age < 18)
                    age_under_18++;

                if(weight > 80)
                    weight_over_80++;

                age_sum += age;
                height_sum += height;
            }
        }

        age_avg = age_sum / 55;
        height_avg = height_sum / 55;
        perc = weight_over_80 / 55;

        System.out.printf("age < 18: %d\n", age_under_18);
        System.out.printf("age avg: %f\n", age_avg);
        System.out.printf("height avg: %f\n", height_avg);
        System.out.printf("weight > 80: %f%\n", perc * 100);
    }

    public void ex_r_15() {
        double grt_price = 0;
        double sml_price = 100000;
        double sum_add = 0;
        double sum_tax = 0;
        
        int count_cheap = 0;
        int count_norm = 0;
        int count_exp = 0;

        for(int i = 1; i <= 12; i++) {
            double tax = 0;
            int stocking = 0;
            double tprice = 0;
            double price = this.scanner.nextDouble();
            String cool = this.scanner.nextLine();
            String category = this.scanner.nextLine();
        
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
                        System.out.println("Categoria inserida invalida");
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
                            System.out.println("Opcao de categoria inserida invalida");
                            return;
                        }
                        break;

                    case "N":
                        if(category.equals("A") || category.equals("V"))
                            stocking = 0;
                        else if(category.equals("L"))
                            stocking = 1;
                        else {
                            System.out.println("Opcao de categoria inserida invalida");
                            return;
                        }
                        break;
                
                    default:
                        System.out.println("Opcao de refrigeracao inserida invalida");
                        return;
                }

                if(category.equals("A") || cool.equals("S"))
                    tax = 0.02 * price;
                else
                    tax = 0.04 * price;
            
                tprice = price + tax;

                if(tprice < 20) {
                    System.out.println("barato");
                    count_cheap++;
                } else if(tprice >= 20 && tprice <= 100) {
                    System.out.println("normal");
                    count_norm++;
                } else {
                    System.out.println("caro");
                    count_exp++;
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
            System.out.printf("barato: %d\n", count_cheap);
            System.out.printf("caro: %d\n", count_exp);
            System.out.printf("normal: %d\n", count_norm);
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