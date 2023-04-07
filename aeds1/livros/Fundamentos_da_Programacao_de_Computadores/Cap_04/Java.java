package aeds1.livros.Fundamentos_da_Programacao_de_Computadores.Cap_04;

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
        int n1 = this.scanner.nextInt();
        int n2 = this.scanner.nextInt();
        int n3 = this.scanner.nextInt();
        int n4 = this.scanner.nextInt();

        if (n4 > n3)
            System.out.printf("%d %d %d %d\n", n4, n3, n2, n1);
        if (n4 > n3 && n4 < n3)
            System.out.printf("%d %d %d %d\n", n3, n4, n2, n1);
        if (n4 > n1 && n4 < n2)
            System.out.printf("%d %d %d %d\n", n3, n2, n4, n1);
        if (n4 < n1)
            System.out.printf("%d %d %d %d\n", n3, n2, n1, n4);
    }

    public void ex_p_05() {
        double n1 = this.scanner.nextDouble();
        double n2 = this.scanner.nextDouble();
        int op = this.scanner.nextInt();

        switch (op) {
            case 1:
                double avg = (n1 + n2) / 2;
                System.out.printf("avg: %f\n", avg);
                break;

            case 2:
                double diff = Math.abs(n1 - n2);
                System.out.printf("diff: %f\n", diff);
                break;

            case 3:
                double prod = n1 * n2;
                System.out.printf("prod: %f\n", prod);
                break;

            case 4:
                if (n2 != 0)
                    System.out.printf("div: %f\n", n1 / n2);
                break;

            default:
                System.out.println("invalid option!");
                break;
        }
    }

    public void ex_p_10() {
        double price, cost, perc, tax;

        cost = this.scanner.nextDouble();

        if (cost < 12000) {
            perc = cost * 0.05;
            tax = 0.0;
        } else if (cost >= 12000 && cost <= 25000) {
            perc = cost * 0.1;
            tax = cost * 0.15;
        } else {
            perc = cost * 0.15;
            tax = cost * 0.2;
        }

        price = cost + perc + tax;
        System.out.printf("price: %f\n", price);
    }

    public void ex_p_15() {
        int type = this.scanner.nextInt();
        double value = this.scanner.nextDouble();

        switch (type) {
            case 1:
                value *= 1.03;
                break;

            case 2:
                value *= 1.04;
                break;

            default:
                System.out.println("invalid option!");
                return;
        }

        System.out.printf("final value for investment %d: %f\n", type, value);
    }

    public void ex_p_20() {
        int age = this.scanner.nextInt();

        if (age >= 5 && age <= 7)
            System.out.println("infantil");
        else if (age >= 8 && age <= 10)
            System.out.println("juvenil");
        else if (age >= 11 && age <= 15)
            System.out.println("adolescente");
        else if (age >= 16 && age <= 30)
            System.out.println("adulto");
        else if (age > 30)
            System.out.println("senior");
    }

    public void ex_p_25() {
        int prize;
        int ext = this.scanner.nextInt();
        int abs = this.scanner.nextInt();
        double H = 60 * (ext - 2 * abs / 3);

        if (H < 600)
            prize = 100;
        else if (H >= 600 && H < 1200)
            prize = 200;
        else if (H >= 1200 && H < 1800)
            prize = 300;
        else if (H >= 1800 && H < 2400)
            prize = 400;
        else
            prize = 500;

        System.out.printf("%d\n", prize);
    }

    public static void main(String[] args) {
        Main main = new Main();

        main.ex_r_05();
        main.ex_p_05();
        main.ex_p_10();
        main.ex_p_15();
        main.ex_p_20();
        main.ex_p_25();

        main.close();
    }
}