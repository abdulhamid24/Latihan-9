#include<stdio.h>
#include<conio.h>
int main()
{
    char nama[50];
    long upah,jam;
    printf("masukan nama karyawan : ");scanf("%[^\n])",&nama);
    printf("jam kerja : ");scanf("%i",&jam);
    printf("-------------------------------------------------\n");
    upah=50000*jam;
    printf("nama karyawan : %s\n",nama);
    printf("upah kerja : Rp %d ",upah);
    getch();

}
