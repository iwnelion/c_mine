#include <stdio.h>

int main()
{
int d,m,y , dd,mm,yy, dy, dyy, rslt;
printf("Υπολογισμός ημερών μεταξύ δύο ημερομηνιών\n");
printf("-----------------------------------------\n");

printf("Δώσε την αρχική ημερομηνία:\n");
printf("Μέρα: ");
scanf("%d",&d);
printf("Μήνας: ");
scanf("%d",&m);
printf("Έτος: ");
scanf("%d",&y);

printf("Δώσε την τελική ημερομηνία:\n");
printf("Μέρα: ");
scanf("%d",&dd);
printf("Μήνας: ");
scanf("%d",&mm);
printf("Έτος: ");
scanf("%d",&yy);

dy=(y*365)+(m*30)+d;
dyy=(yy*365)+(mm*30)+dd;
rslt=dyy-dy;

printf("Από %d/%d/%d μέχρι %d/%d/%d έχουν περάσει %d μέρες",d,m,y,dd,mm,yy,rslt);

    return 0;
}
