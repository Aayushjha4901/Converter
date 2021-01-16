#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{ printf("Converter\n\nEnter the number corresponding to your choices\n\n");

while(1){
printf("1.Length\n2.Mass\n3.Temperature\n\nWhat do you want to convert?  ");
int a;
scanf("%d",&a);
if(a==1){printf("\n\n1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Yard\n8.Mile\n\nWhich unit is your data in?  ");
int u1;scanf("%d",&u1);
double data1;
printf("\n\nEnter your data :  ");scanf("%lf",&data1);
printf("\n\n1.Millimeters\n2.Centimeters\n3.Meters\n4.Kilometers\n5.Inches\n6.Feet\n7.Yard\n8.Mile\n\nWhich unit do you want to convert your data in ?  ");
int u2;scanf("%d",&u2);
double data2;
if(u1==u2){data2=data1;printf("\n\nData already in required unit.\n");}
else if(u1==1 && u2==2){data2=data1/10;printf("\n\n%lf Millimeters is %lf Centimeters\n",data1,data2);}
else if(u1==1 && u2==3){data2=data1/1000;printf("\n\n%lf Millimeters is %lf Meters\n",data1,data2);}
else if(u1==1 && u2==4){data2=data1/1000000;printf("\n\n%lf Millimeters is %lf Kilometers\n",data1,data2);}
else if(u1==1 && u2==5){data2=data1*0.03937;printf("\n\n%lf Millimeters is %lf Inches\n",data1,data2);}
else if(u1==1 && u2==6){data2=data1*0.00328;printf("\n\n%lf Millimeters is %lf Feet\n",data1,data2);}
else if(u1==1 && u2==7){data2=data1*0.00109;printf("\n\n%lf Millimeters is %lf Yard\n",data1,data2);}
else if(u1==1 && u2==8){data2=data1*0.000621371/1000;printf("\n\n%lf Millimeters is %lf Mile\n",data1,data2);}
else if(u1==2 && u2==1){data2=data1*10;printf("\n\n%lf Centimeters is %lf Millimeters\n",data1,data2);}
else if(u1==2 && u2==3){data2=data1/100;printf("\n\n%lf Centimeters is %lf Meters\n",data1,data2);}
else if(u1==2 && u2==4){data2=data1/100000;printf("\n\n%lf Centimeters is %lf Kilometers\n",data1,data2);}
else if(u1==2 && u2==5){data2=data1*0.3937;printf("\n\n%lf Centimeters is %lf Inches\n",data1,data2);}
else if(u1==2 && u2==6){data2=data1*0.0328;printf("\n\n%lf Centimeters is %lf Feet\n",data1,data2);}
else if(u1==2 && u2==7){data2=data1*0.0109;printf("\n\n%lf Centimeters is %lf Yard\n",data1,data2);}
else if(u1==2 && u2==8){data2=data1*0.000621371/100;printf("\n\n%lf Centimeters is %lf Mile\n",data1,data2);}
else if(u1==3 && u2==1){data2=data1*1000;printf("\n\n%lf Meters is %lf Millimeters\n",data1,data2);}
else if(u1==3 && u2==2){data2=data1*100;printf("\n\n%lf Meters is %lf Centimeters\n",data1,data2);}
else if(u1==3 && u2==4){data2=data1/1000;printf("\n\n%lf Meters is %lf Kilometers\n",data1,data2);}
else if(u1==3 && u2==5){data2=data1*39.37;printf("\n\n%lf Meters is %lf Inches\n",data1,data2);}
else if(u1==3 && u2==6){data2=data1*3.28;printf("\n\n%lf Meters is %lf Feet\n",data1,data2);}
else if(u1==3 && u2==7){data2=data1*1.09;printf("\n\n%lf Meters is %lf Yard\n",data1,data2);}
else if(u1==3 && u2==8){data2=data1*0.000621371;printf("\n\n%lf Meters is %lf Mile\n",data1,data2);}
else if(u1==4 && u2==1){data2=data1/1000000;printf("\n\n%lf Kilometers is %lf Millimeters\n",data1,data2);}
else if(u1==4 && u2==2){data2=data1/100000;printf("\n\n%lf Kilometers is %lf Centimeters\n",data1,data2);}
else if(u1==4 && u2==3){data2=data1/1000;printf("\n\n%lf Kilometers is %lf Meters\n",data1,data2);}
else if(u1==4 && u2==5){data2=data1*39370;printf("\n\n%lf Kilometers is %lf Inches\n",data2);}
else if(u1==4 && u2==6){data2=data1*3280.83;printf("\n\n%lf Kilometers is %lf Feet\n",data2);}
else if(u1==4 && u2==7){data2=data1*1093.6133;printf("\n\n%lf Kilometers is %lf Yard\n",data1,data2);}
else if(u1==4 && u2==8){data2=data1*0.62137;printf("\n\n%lf Kilometers is %lf Mile\n",data1,data2);}
else if(u1==5 && u2==1){data2=data1/0.03937;printf("\n\n%lf Inches if %lf Millimeters\n",data1,data2);}
else if(u1==5 && u2==2){data2=data1/0.3937;printf("\n\n%lf Inches if %lf Centimeters\n",data1,data2);}
else if(u1==5 && u2==3){data2=data1/39.37;printf("\n\n%lf Inches if %lf Meters\n",data1,data2);}
else if(u1==5 && u2==4){data2=data1/39370;printf("\n\n%lf Inches if %lf Kilometers\n",data1,data2);}
else if(u1==5 && u2==6){data2=data1*0.08333;printf("\n\n%lf Inches if %lf Feet\n",data1,data2);}
else if(u1==5 && u2==7){data2=data1*0.027777;printf("\n\n%lf Inches if %lf Yard\n",data1,data2);}
else if(u1==5 && u2==8){data2=data1*0.00001578;printf("\n\n%lf Inches if %lf Mile\n",data1,data2);}
else if(u1==6 && u2==1){data2=data1/0.00328;printf("\n\n%lf Feet is %lf Millimeters\n",data1,data2);}
else if(u1==6 && u2==2){data2=data1/0.0328;printf("\n\n%lf Feet is %lf Centimeters\n",data1,data2);}
else if(u1==6 && u2==3){data2=data1/3.28;printf("\n\n%lf Feet is %lf Meters\n",data1,data2);}
else if(u1==6 && u2==4){data2=data1/3280.83;printf("\n\n%lf Feet is %lf Kilometers\n",data1,data2);}
else if(u1==6 && u2==5){data2=data1/0.08333;printf("\n\n%lf Feet is %lf Inches\n",data1,data2);}
else if(u1==6 && u2==7){data2=data1*0.3333;printf("\n\n%lf Feet is %lf Yard\n",data1,data2);}
else if(u1==6 && u2==8){data2=data1*0.00018939;printf("\n\n%lf Feet is %lf Mile\n",data1,data2);}
else if(u1==7 && u2==1){data2=data1/0.00109;printf("\n\n%lf Yard is %lf Millimeters\n",data1,data2);}
else if(u1==7 && u2==2){data2=data1/0.01019;printf("\n\n%lf Yard is %lf Centimeters\n",data1,data2);}
else if(u1==7 && u2==3){data2=data1/1.09;printf("\n\n%lf Yard is %lf Meters\n",data1,data2);}
else if(u1==7 && u2==4){data2=data1/1093.6133;printf("\n\n%lf Yard is %lf Kilometers\n",data1,data2);}
else if(u1==7 && u2==5){data2=data1/0.02777;printf("\n\n%lf Yard is %lf Inches\n",data1,data2);}
else if(u1==7 && u2==6){data2=data1/0.33333;printf("\n\n%lf Yard is %lf Feet\n",data1,data2);}
else if(u1==7 && u2==8){data2=data1*0.0005681818;printf("\n\n%lf Yard %lf Mile\n",data1,data2);}
else if(u1==8 && u2==1){data2=data1*1000/0.000621371;printf("\n\n%lf Mile is %lf Milliimeters\n",data1,data2);}
else if(u1==8 && u2==2){data2=data1*100/0.000621371;printf("\n\n%lf Mile is %lf Centimeters\n",data1,data2);}
else if(u1==8 && u2==3){data2=data1/0.000621371;printf("\n\n%lf Mile is %lf Meters\n",data1,data2);}
else if(u1==8 && u2==4){data2=data1/0.62137;printf("\n\n%lf Mile is %lf Kilometers\n",data1,data2);}
else if(u1==8 && u2==5){data2=data1/0.00001578;printf("\n\n%lf Mile is %lf Inches\n",data1,data2);}
else if(u1==8 && u2==6){data2=data1/0.00018939;printf("\n\n%lf Mile is %lf Feet\n",data1,data2);}
else if(u1==8 && u2==7){data2=data1/0.0005681818;printf("\n\n%lf Mile is %lf Yard\n",data1,data2);}
else {printf("\n\nInvalid Input\n");}


}

else if(a==2){printf("\n\n1.Milligram(mg)\n2.Gram(g)\n3.Kilogram(kg)\n4.Tonne\n5.Ounce\n6.Pound\n7.Stone\n\nWhich unit is your data in?  ");
int u1,u2;scanf("%d",&u1);
double data1;printf("\n\nEnter your data :  ");scanf("%lf",&data1);
printf("\n\n1.Milligram(mg)\n2.Gram(g)\n3.Kilogram(kg)\n4.Tonne\n5.Ounce\n6.Pound\n7.Stone\n\nWhich unit do you want your data to convert in?  ");scanf("%d",&u2);
double data2;
if(u1==u2){printf("\n\nData is already in the required unit.");}
else if(u1== 1 && u2== 2){data2=data1/1000 ;printf("\n\n%lf Milligram is %lf Gram\n",data1,data2);}
else if(u1== 1 && u2== 3){data2=data1/1000000 ;printf("\n\n%lf Milligram is %lf Kilogram\n",data1,data2);}
else if(u1== 1 && u2== 4){data2=data1/1000000000 ;printf("\n\n%lf Milligram is %lf Tonne\n",data1,data2);}
else if(u1== 1 && u2== 5){data2=data1*0.00003527 ;printf("\n\n%lf Milligram is %lf Ounce\n",data1,data2);}
else if(u1== 1 && u2== 6){data2=data1*0.00220462262/1000 ;printf("\n\n%lf Milligram is %lf Pound\n",data1,data2);}
else if(u1== 1 && u2== 7){data2=data1*0.000157473044/1000 ;printf("\n\n%lf Milligram is %lf Stone\n",data1,data2);}
else if(u1== 2 && u2== 1){data2=data1*1000 ;printf("\n\n%lf Gram is %lf Milligram\n",data1,data2);}
else if(u1== 2 && u2== 3){data2=data1/1000 ;printf("\n\n%lf Gram is %lf Kilogram\n",data1,data2);}
else if(u1== 2 && u2== 4){data2=data1/1000000 ;printf("\n\n%lf Gram is %lf Tonne\n",data1,data2);}
else if(u1== 2 && u2== 5){data2=data1*0.03527 ;printf("\n\n%lf Gram is %lf Ounce\n",data1,data2);}
else if(u1== 2 && u2== 6){data2=data1*2.204622 ;printf("\n\n%lf Gram is %lf Pound\n",data1,data2);}
else if(u1== 2 && u2== 7){data2=data1*0.00015747 ;printf("\n\n%lf Gram is %lf Stone\n",data1,data2);}
else if(u1== 3 && u2== 1){data2=data1*1000000 ;printf("\n\n%lf Kilogram is %lf Milligram\n",data1,data2);}
else if(u1== 3 && u2== 2){data2=data1*1000 ;printf("\n\n%lf Kilogram is %lf Gram\n",data1,data2);}
else if(u1== 3 && u2== 4){data2=data1/1000 ;printf("\n\n%lf Kilogram is %lf Tonne\n",data1,data2);}
else if(u1== 3 && u2== 5){data2=data1*35.27 ;printf("\n\n%lf Kilogram is %lf Ounce",data1,data2);}
else if(u1== 3 && u2== 6){data2=data1*2204.622 ;printf("\n\n%lf Kilogram is %lf Pound\n",data1,data2);}
else if(u1== 3 && u2== 7){data2=data1*0.15747 ;printf("\n\n%lf Kilogram is %lf Stone\n",data1,data2);}
else if(u1== 4 && u2== 1){data2=data1*1000000000 ;printf("\n\n%lf Tonne is %lf Milligram\n",data1,data2);}
else if(u1== 4 && u2== 2){data2=data1*1000000 ;printf("\n\n%lf Tonne is %lf Gram\n",data1,data2);}
else if(u1== 4 && u2== 3){data2=data1*1000 ;printf("\n\n%lf Tonne is %lf Kilogram\n",data1,data2);}
else if(u1== 4 && u2== 5){data2=data1*35273.3686 ;printf("\n\n%lf Tonne is %lf Ounce\n",data1,data2);}
else if(u1== 4 && u2== 6){data2=data1*2204.62262 ;printf("\n\n%lf Tonne is %lf Pound\n",data1,data2);}
else if(u1== 4 && u2== 7){data2=data1*157.473044 ;printf("\n\n%lf Tonne is %lf Stone\n",data1,data2);}
else if(u1== 5 && u2== 1){data2=data1*28350 ;printf("\n\n%lf Ounce is %lf Milligram\n",data1,data2);}
else if(u1== 5 && u2== 2){data2=data1*28.35 ;printf("\n\n%lf Ounce is %lf Gram\n",data1,data2);}
else if(u1== 5 && u2== 3){data2=data1*0.02835 ;printf("\n\n%lf Ounce is %lf Kilogram\n",data1,data2);}
else if(u1== 5 && u2== 4){data2=data1*0.00002835 ;printf("\n\n%lf Ounce is %lf Tonne\n",data1,data2);}
else if(u1== 5 && u2== 6){data2=data1*0.0625010513 ;printf("\n\n%lf Ounce is %lf Pound\n",data1,data2);}
else if(u1== 5 && u2== 7){data2=data1*0.0625010513 ;printf("\n\n%lf Ounce is %lf Stone\n",data1,data2);}
else if(u1== 6 && u2== 1){data2=data1*453592.37 ;printf("\n\n%lf Pound is %lf Milligram\n",data1,data2);}
else if(u1== 6 && u2== 2){data2=data1*453.59237 ;printf("\n\n%lf Pound is %lf Gram\n",data1,data2);}
else if(u1== 6 && u2== 3){data2=data1*0.45359237 ;printf("\n\n%lf Pound is %lf Kilogram\n",data1,data2);}
else if(u1== 6 && u2== 4){data2=data1*0.00045359237 ;printf("\n\n%lf Pound is %lf Tonne\n",data1,data2);}
else if(u1== 6 && u2== 5){data2=data1*15.9997309 ;printf("\n\n%lf Pound is %lf Ounce\n",data1,data2);}
else if(u1== 6 && u2== 7){data2=data1*0.0714285714 ;printf("\n\n%lf Pound is %lf Stone\n",data1,data2);}
else if(u1== 7 && u2== 1){data2=data1*1000/0.000157473044 ;printf("\n\n%lf Stone is %lf Milligram\n",data1,data2);}
else if(u1== 7 && u2== 2){data2=data1/0.15747 ;printf("\n\n%lf Stone is %lf Gram\n",data1,data2);}
else if(u1== 7 && u2== 3){data2=data1/0.15747 ;printf("\n\n%lf Stone is %lf Kilogram\n",data1,data2);}
else if(u1== 7 && u2== 4){data2=data1/157.47 ;printf("\n\n%lf Stone is %lf Tonne\n",data1,data2);}
else if(u1== 7 && u2== 5){data2=data1/0.062501 ;printf("\n\n%lf Stone is %lf Pound\n",data1,data2);}
else if(u1== 7 && u2== 6){data2=data1/0.0714285714 ;printf("\n\n%lf Stone is %lf Ounce\n",data1,data2);}
else {printf("\n\nInvalid Input\n");}

}

else if(a==3){printf("\n\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n\nWhich unit is your data in?  ");
int u1;scanf("%d",&u1);
double data1;printf("\n\nEnter your data : ");scanf("%lf",&data1);
printf("\n\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n\nWhich unit do you want to convert your data in?  ");
int u2;scanf("%d",&u2);
double data2;
if(u1==u2){printf("\n\nData is already in required unit.\n");}
else if(u1==1 && u2==2){data2=(data1*9/5)+32 ;printf("\n\n%lf Celsius is %lf Fahrenheit\n",data1,data2);}
else if(u1==1 && u2==3){data2=data1+273.15 ;printf("\n\n%lf Celsius is %lf Kelvin\n",data1,data2);}
else if(u1==2 && u2==1){data2=(data1-32)*5/9;printf("\n\n%lf Fahrenheit is %lf Celsius\n",data1,data2);}
else if(u1==2 && u2==3){data2=((data1-32)*5/9)+273.15 ;printf("\n\n%lf Fahrenheit is %lf Kelvin\n",data1,data2);}
else if(u1==3 && u2==1){data2=data1-273.15 ;printf("\n\n%lfKelvin is %lf Celsius\n",data1,data2);}
else if(u1==3 && u2==2){data2=((data1-273.15)*9/5)+32 ;printf("\n\n%lfKelvin is %lf Fahrenheit\n",data1,data2);}

else {printf("\n\nInvalid Input\n");}

}
int input;
printf("Enter 0 to quit. Press any other key to continue.: ");
scanf("%d",&input);
if(input ==0){break;}
}
return 0;
}



