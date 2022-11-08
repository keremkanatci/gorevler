#include <iostream>
#include <clocale>
#include <string>

std::string hundred(int x){

x=x/100;
std::string ad;

switch (x)
{
case 1:
    ad="yüz";
    break;
case 2:
    ad="ikiyüz";
    break;
case 3:
    ad="üçyüz";
    break;
case 4:
    ad="dörtyüz";
    break;
case 5:
    ad="beşyüz";
    break;
case 6:
    ad="altıyüz";
    break;
case 7:
    ad="yediyüz";
    break;
case 8:
    ad="sekizyüz";
    break;
case 9:
    ad="dokuzyüz";
    break;


}
return ad;
}
std::string ten(int x){
x=x/10;
std::string ad;

switch (x)
{
case 0:
    ad="";
    break;
case 1:
    ad="on";
    break;
case 2:
    ad="yirmi";
    break;
case 3:
    ad="otuz";
    break;
case 4:
    ad="kırk";
    break;
case 5:
    ad="elli";
    break;
case 6:
    ad="altmış";
    break;
case 7:
    ad="yetmiş";
    break;
case 8:
    ad="seksen";
    break;
case 9:
    ad="doksan";
    break;


}
return ad;
}
std::string one(int x){

std::string ad;

switch (x)
{
case 0:
    ad="";
    break;
case 1:
    ad="bir";
    break;
case 2:
    ad="iki";
    break;
case 3:
    ad="üç";
    break;
case 4:
    ad="dört";
    break;
case 5:
    ad="beş";
    break;
case 6:
    ad="altı";
    break;
case 7:
    ad="yedi";
    break;
case 8:
    ad="sekiz";
    break;
case 9:
    ad="dokuz";
    break;


}
return ad;
}

int main(){

setlocale(LC_ALL, "turkish");

int number;

std::cout<<"Sayı giriniz: ";
std::cin>>number;
int count3 = 100;
int count2 = 10;
int count1 = 1;

if (1000<=number)
{
    std::cout<<"0-999 arasında değer girin";
}
else if (number>=100)
{

    while (number>=count3){
        count3 = count3 +100;

    }
    while ((number-count3+100)>=count2)
    {
        count2 = count2 + 10;
    }
    while ((number-count3+100-count2+10)>=count1)
    {
        count1 = count1 + 1;
    }
    std::cout<<hundred(count3-100)<<ten(count2-10)<<one(count1-1);
}
else if (number>=10)
{
    while (number>=count2)
    {
        count2 = count2 + 10;
    }
    while ((number-count2+10)>=count1)
    {
        count1 = count1 + 1;
    }
    std::cout<<ten(count2-10)<<one(count1-1);
}
else if (number>=1)
{
    std::cout<<one(number);
}
else if (number==0){
    std::cout<<"sıfır";
}
else {
    std::cout<<"0-999 arasında değer girin";
}
}
