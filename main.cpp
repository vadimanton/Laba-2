
/*Вариант 1:
1.	Одномерный символьный массив:
2.	Указатель  на тип char:
3.	Статический одномерный массив целых чисел:
4.	Указатель на массив целых чисел:
5.	Трехмерный массив целых чисел;
6.	Указатель на двумерный массив целых чисел.
*/
#include <iostream>

using namespace std;

int main()
{
char mas[5];
char *p;
int a[5];
int **b;
int c [5][5][5];
int (*f)[5][5];
//1. Проверить содержимое массива №1 (с помощью цикла forи операции вывода cout«).
  for (int i=0; i<5; i++){
cout << mas[i] << " ";
}
cout << endl;
//2. Ввести данные в массив №1 (с помощью цикла for и операции ввода cin»).
  cout<<"Vvedite elementy massiva: "<<endl;
for (int i=0;i<5;i++)
cin>> mas[i];
//3. Еще раз проверить содержимое этого массива, сделать выводы.
  for (int i=0; i<5; i++){
cout << mas[i] << " ";
}
cout << endl;
//4. Присвоить указателю №2 адрес массива №1, вывести на экран адреса массива и указателя и содержимое указателя. Сделать выводы.
p= mas;
//cout<<"PRIVET";

cout <<(int*)p << endl;
cout << *p << endl;
cout << &p <<endl;
cout << (int*)mas << endl;
cout << *mas << endl;
cout << &mas << endl;
//5. Повторить пункт 3 для указателя, содержащего адрес массива. Сделать выводы.
  for (int i=0; i<5; i++){
cout << p[i] << " ";
}
cout << endl;
//6. Повторить пункты 1 - 3 для статического массива №3. Сделать выводы.
  for (int i=0; i<5; i++){
cout << a[i] << " ";
}
cout << endl;

cout<<"Vvedite elementy massiva: "<<endl;
for (int i=0;i<5;i++)
cin>>a[i];


for (int i=0; i<5; i++){
cout << a[i] << " ";
}
cout << endl;
//7. Используя имеющийся указатель №2, создать динамический массив и повторить для него пункты 1—3. Сделать выводы.
  p = new char[5];
//cout <<"Vdim";
for (int i=0; i<5; i++)
{
cout << p[i] << " ";}
cout << endl;

cout<<"Vvedite elementy massiva:"<<endl;
for (int i=0;i<5;i++)
cin>>p[i];


for (int i=0; i<5; i++){
cout << p[i] << " ";
}
cout << endl;
//8. Удалить динамический массив. Используя указатель №4, создать двумерный динамический массив и повторить для него пункты 2. 3. Сделать выводы. Удалить двумерный динамический массив.
delete[] p;

b = new int *[5];
cout<<"Vvedite element masiva: "<<endl;
for (int i= 0; i< 5 ; i++)
b[i] = new int [5];
for (int i = 0; i < 5; i++)
for (int j = 0; j< 5; j++)
cin >> b[i][j];
cout<<"vadim";
for (int i = 0; i < 5; i++)
{
for (int j = 0; j < 5; j++)
cout << b[i][j] << " ";
cout << endl;
}
for (int i = 0; i < 5; i++)
delete [] b[i];
delete[] b;
//9
cout<<"c massiv";
for (int i = 0; i < 5; i++)
for (int j = 0; j< 5; j++)
for (int k=0; k < 5 ; k++)
cout << c[i][j][k];
//10
cout<<"fmassiv";
for (int i = 0; i < 5; i++)
for (int j = 0; j< 5; j++)
for (int k=0; k < 5 ; k++)
cout << *(*(*(c+i)+j)+k) <<endl;
//11
cout<<"Rezul";
f = c;
for (int i = 0; i < 5; i++)
for (int j = 0; j< 5; j++)
for (int k=0; k < 5 ; k++)
cout << *(*(*(f+i)+j)+k) << endl;

}
