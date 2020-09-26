#include <stdio.h>
#include <conio.h>
#include <iostream>
#define N 20 /* сколько первых чисел посчитать */

int main()
{
    int nums[N];
    int k;   // Кол-во чисел в файле.
    FILE *f = fopen("file.txt", "r");
        // Считали файл.
    for (k = 0; !feof(f); k++)
        fscanf(f, "%i", &nums[k]); //Функция fscanf() возвращает количество аргументов, которым действительно были присвоены значения.
    fclose(f);

        // Сортируем числа.
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j < k; j++)
        {
            if (nums[j] < nums[j - 1])
            {
                int tmp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = tmp;
            }
        }
    }

        // Открыли файл для записи.
    FILE *g = fopen("out.txt", "w");
    fprintf(g, "%i\n", nums[0]);   // Записали 1-е число. //fprintf выполняет форматированный вывод в поток
    for (int i = 1; i < k; i++)
    {
        if (nums[i] != nums[i - 1])          // Если [i-1]-е число не равно i-му числу
            fprintf(g, "%i\n", nums[i]); // вписать i-е число в файл.
    }
    fclose(g);
}
