//BERK AKIN 191307012
#include <iostream>
#include <locale.h>
using namespace std;
#define boyut 10
#define boyut2 8
int top = -1;
int top2 = -1;
int dizi[boyut];
char dizi2[boyut2];

void push(int değer)
{
	if (top == boyut - 1)
	{
		cout << ("Hata Eleman Eklenemedi,Yığın dolu\n");
		return;
	}
	else
	{
		top = top + 1;
		dizi[top] = değer;
		cout << ("Yığına eklendi: ") << değer << "\n";
	}
}
void push(char değer)
{
	if (top2 == boyut2 - 1)
	{
		cout << ("Hata Eleman Eklenemedi,Yığın dolu\n");
		return;
	}
	else
	{
		top2 = top2 + 1;
		dizi2[top2] = değer;
		cout << ("Yığına eklendi: ") << değer << "\n";
	}
}
void pop()
{
	top = top - 1;
	if (top == -1)
	{
		cout << "Hata Çıkartılacak Eleman Yok, Yığın Boş\n";
	}
}
void pop2()
{
	top2 = top2 - 1;
	if (top2 == -1)
	{
		cout << "Hata Çıkartılacak Eleman Yok, Yığın Boş\n";
	}
}
void YAZ()
{
	int i;
	cout << ("Yığın: ");
	for (i = 0;i <= top;i++)
	{
		cout << ("%d  ", dizi[i]);
	}
	cout << ("\n");
}
void YAZ2()
{
	int i;
	cout << ("Yığın: ");
	for (i = -1;i <= top2;i++)
	{
		cout << ("%d  ", dizi2[i]);
	}
	cout << ("\n");
}
int main()
{
	setlocale(LC_ALL, "Turkish");
	for (int h = 0;h <= 9;h++)
	{
		push(h); //YIĞINA 10 ELEMAN EKLEDİM		
	}
	YAZ(); //YIĞININ İÇİ		
	push(15); //YIĞINA 11. ELEMANI EKLEMEYE ÇALIŞTI VE YIĞININ DOLU OLDUĞUNU SÖYLEDİ		
	for (int q = 0;q <= 9;q++)
	{
		pop(); //YIĞINI BOŞALTTIM		
	}
	pop();//YIĞININ BOŞ OLDUĞUNUN HATASI İÇİN ELEMAN ÇIKARMASI YAPTIM
	cout << "\n";

	//------------------------------------------------------------------------------

	//İSİM SOYİSMİ YIĞINA EKLEME VE YAZDIRMA İŞLEMİ	
		push('B');
		YAZ2();
		push('E');
		YAZ2();
		push('R');
		YAZ2();
		push('K');
		YAZ2();
		push('A');
		YAZ2();
		push('K');
		YAZ2();
		push('I');
		YAZ2();
		push('N');
		YAZ2();
	
	cout << "\n";
	for (int b = 0;b <= 7;b++) //AD SOYAD YIĞINI İÇİN ÇIKARMA VE YAZDIRMA İŞLEMİ
	{
		YAZ2();
		pop2();	
	}
	/*Eleman ekleyip çıkarttığımda fark oluşması last in first out
	prensibinden kaynaklanmaktadır.*/

	return 0;
}
