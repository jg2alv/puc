import java.util.*;

class Main
{
    public static void ex_r_1()
    {
        double n1, n2, n3, n4, sum;
        
        try(Scanner scanner = new Scanner(System.in))
        {
            n1 = scanner.nextDouble();
            n2 = scanner.nextDouble();
            n3 = scanner.nextDouble();
            n4 = scanner.nextDouble();
            sum = n1 + n2 + n3 + n4;
            
            System.out.printf("%lf", sum);
        }

    }


    public static void ex_r_5()
    {
        double sal, perc, nsal;

        try(Scanner scanner = new Scanner(System.in))
        {
            sal = scanner.nextDouble();
            perc = scanner.nextDouble();
            nsal = sal * (perc / 100);
        
            System.out.printf("%lf", nsal);
        }

    }


    public static void ex_r_10()
    {
        double radius, area;

        try(Scanner scanner = new Scanner(System.in))
        {
            radius = scanner.nextDouble();
            area = Math.PI * Math.pow(radius, 2);
        
            System.out.printf("%lf", area);
        }
    }


    public static void ex_r_15()
    {
        double price0, perc_prof, perc_tax, price, prof, tax;

        try(Scanner scanner = new Scanner(System.in))
        {
            price0 = scanner.nextDouble();
            perc_prof = scanner.nextDouble();
            perc_tax = scanner.nextDouble();

            prof = price0 * (perc_prof / 100);
            tax = price0 * (perc_tax / 100);
            price = price0 + prof + tax;

            System.out.printf("%lf", price);
        }
    }


    public static void ex_r_20()
    {
        double deg, h, rad, l;

        try(Scanner scanner = new Scanner(System.in))
        {
            deg = scanner.nextDouble();
            h = scanner.nextDouble();
            rad = Math.toRadians(deg);
            l = h * Math.sin(rad);

            System.out.printf("%lf", l);
        }
    }


    public static void ex_r_25()
    {
        double price_total, price_ticket;
        int n;

        try(Scanner scanner = new Scanner(System.in))
        {
            price_total = scanner.nextDouble();
            price_ticket = scanner.nextDouble();
            n = (int)Math.ceil(price_total / price_ticket);

            System.out.printf("%d", n);
        }
    }


    public static void main()
    {
        ex_r_1();
        ex_r_5();
        ex_r_10();
        ex_r_15();
        ex_r_20();
        ex_r_25();
    }
};