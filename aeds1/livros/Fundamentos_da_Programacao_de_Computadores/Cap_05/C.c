#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415
#endif

void ex_r_05()
{
    int n, j = 0;
    double x, sum = 0;

    scanf("%d", &n);
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++)
    {
        switch (i % 6)
        {
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
            printf("this should never happen: n % 6 E [0, 5]");
            return;
        }

        for (int k = j; k >= 1; --k)
            j *= k;

        if (i % 2 == 0)
            sum += pow(x, 2) / j;
        else
            sum += (-1 * pow(x, 2)) / j;
    }

    printf("%d\n", sum);
}

void ex_r_10()
{
    int age_under_18 = 0;
    int age_sum = 0;
    int height_sum = 0;
    int weight_over_80 = 0;

    double age_avg;
    double height_avg;
    double perc;

    for (int t = 1; t <= 5; t++)
    {
        for (int p = 1; p <= 11; p++)
        {
            int age, height, weight;

            scanf("%d", &age);
            scanf("%d", &height);
            scanf("%d", &weight);

            if (age < 18)
                age_under_18++;

            if (weight > 80)
                weight_over_80++;

            age_sum += age;
            height_sum += height;
        }
    }

    age_avg = age_sum / 55;
    height_avg = height_sum / 55;
    perc = weight_over_80 / 55;

    printf("age < 18: %d\n", age_under_18);
    printf("age avg: %lf\n", age_avg);
    printf("height avg: %lf\n", height_avg);
    printf("weight > 80: %lf\n", perc * 100);
}

void ex_r_15()
{
    double grt_price = 0;
    double sml_price = 0;
    double sum_add = 0;
    double sum_tax = 0;

    int count_cheap = 0;
    int count_norm = 0;
    int count_exp = 0;

    for (int i = 1; i <= 12; i++)
    {
        double price, tax = 0, tprice = 0;
        int stocking = 0;
        char cool, category;

        scanf(" %c", &cool);
        scanf(" %c", &category);

        if (price < 20)
        {
            switch (category)
            {
            case 'A':
                stocking = 2;
                break;

            case 'L':
                stocking = 3;
                break;

            case 'V':
                stocking = 4;
                break;

            default:
                printf("Categoria inserida invalida\n");
                return;
            }
        }
        else if (price >= 20 && price <= 50)
        {
            switch (cool)
            {
            case 'S':
                stocking = 6;
                break;

            case 'N':
                stocking = 0;
                break;

            default:
                printlf("Opcao de refrigeracao inserida invalida");
                return;
            }
        }
        else if (price > 50)
        {
            switch (cool)
            {
            case 'S':
                if (category == 'A')
                    stocking = 5;
                else if (category == 'L')
                    stocking = 2;
                else if (category == 'V')
                    stocking = 4;
                else
                {
                    printf("Opcao de categoria inserida invalida\n");
                    return;
                }
                break;

            case 'N':
                if (category == 'A' || category == 'V')
                    stocking = 0;
                else if (category == 'L')
                    stocking = 1;
                else
                {
                    printf("Opcao de categoria inserida invalida\n");
                    return;
                }
                break;

            default:
                printf("Opcao de refrigeracao inserida invalida\n");
                return;
            }

            if (category == 'A' || cool == 'S')
                tax = 0.02 * price;
            else
                tax = 0.04 * price;

            tprice = price + tax;

            if (tprice < 20)
            {
                printf("barato\n");
                count_cheap++;
            }
            else if (tprice >= 20 && tprice <= 100)
            {
                printf("normal\n");
                count_norm++;
            }
            else
            {
                printf("caro\n");
                count_exp++;
            }

            sum_add += (stocking + tax);
            sum_tax += tax;

            if (tprice > grt_price)
                grt_price = tprice;

            if (tprice < sml_price)
                sml_price = tprice;
        }

        printf("media adicionais: %lf\n", sum_add / 12);
        printf("maior final: %lf\n", grt_price);
        printf("menor final: %lf\n", sml_price);
        printf("imposto total: %lf\n", sum_tax);
        printf("barato: %d\n", count_cheap);
        printf("caro: %d\n", count_exp);
        printf("normal: %d\n", count_norm);
    }
}

int main()
{
    ex_r_05();
    ex_r_10();
    ex_r_15();

    return 0;
}