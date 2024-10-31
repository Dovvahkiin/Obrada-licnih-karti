#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

 struct licniPodaci {
    char ime [15];
    char prezime [25];
    int dan;
    int mesec;
    int godinaRodjenja;
    signed long long int jmbg;
    int brojLicneKarte;
 }s,temp;

 int main ()
 {
     // meni
     struct licniPodaci s;
        printf(" \n\t\t\tUnosenje podataka za licnu kartu\n\n  ");

      int ch,i,j,n,k,izbor;
      char cha;
      system("COLOR 2");

      printf("\n\n\tMeni:\n");
      printf(" \t1. Pravljenje nove licne karte\n");
      printf(" \t2. Citanje svih licnih karti \n");
      printf(" \t3. Izlaz iz programa\n\n");
      printf(" \tUnesite izbor: ");
      scanf("%d",&izbor);

          switch (izbor) // izbor nakon menija
      {
          case 1: { // Unosenje novog lica

          FILE *unosniFajl;
 unosniFajl = fopen ("licniPodaci.dat","a+");
  if (unosniFajl == NULL)
    {
        fprintf(stderr, "\n Greska pri otvaranju datoteke. \n");
        getch();
        exit (1);
    }
    system("cls");

    printf(" \n ----------------------------------------------------\n");
    fprintf(unosniFajl, " \n --------------------------------\n");
    printf("\n Unesite osnovne podatke lica koje pravi licnu kartu:\n\n");
    printf(" \n ----------------------------------------------------\n");
    fprintf(unosniFajl, "\n   LICNA KARTA REPUBLIKE SRBIJE\n\n");


        printf(" Unesite ime: ");
        scanf("%s",s.ime);
        fprintf(unosniFajl,"  Ime lica: %s\n",s.ime);
        printf(" Unesite prezime: ");
        scanf("%s",s.prezime);
        fprintf(unosniFajl,"  Prezime lica: %s\n",s.prezime);
        printf(" Unesite dan rodjenja: ");
        scanf("%d",&s.dan);
        printf(" Unesite mesec rodjenja: ");
        scanf("%d",&s.mesec);
        printf(" Unesite godinu rodjenja: ");
        scanf("%d",&s.godinaRodjenja);
        fprintf(unosniFajl,"  Datum rodjenja: %d.%d.%d. \n",s.dan,s.mesec,s.godinaRodjenja);
        printf(" Unesite JMBG: ");
        scanf("%lli",&s.jmbg);
        fprintf(unosniFajl,"  JMBG: %lli\n",s.jmbg);
        printf(" Unesite broj licne karte: ");
        scanf("%d",&s.brojLicneKarte);
        fprintf(unosniFajl,"  Broj Licne Karte: %d\n ",s.brojLicneKarte);
        printf(" \n ----------------------------------------------------");
        fprintf(unosniFajl, " \n --------------------------------\n");
            printf(" \n\n\tPritisnite bilo koji taster da bi ste nastavili. \n");
            getch();
        fclose(unosniFajl);
                }break; // case 1

          case 2:  // ucitavanje iz fajla prethodno unetih lica
            {
               FILE *izlazniFajl;
 izlazniFajl = fopen ("licniPodaci.dat","r");
  if (izlazniFajl == NULL)
    {
        fprintf(stderr, "\n Greska pri otvaranju datoteke,\n pritisnite bilo koji taster da bi ste nastavili. \n");
              getch();
        exit (1);

    }
    system("cls");
    printf(" \n --------------------------------\n");
    printf("\n   Spisak predhodno unetih licnih karti: \n\n");
    printf(" --------------------------------\n");


    while((ch = fgetc(izlazniFajl)) != EOF) // petlja za ucitavanje odnosno ucitavanje karaktera sve dok se ne dodje do kraja fajla
       printf("%c", ch);
            printf(" \n\n\tPritisnite bilo koji taster da bi ste nastavili. \n");
            getch();

       fclose(izlazniFajl);
            }break; // case 2


          case 3: // izlaz
            printf(" \n\tPritisnite bilo koji taster da bi ste nastavili. \n");
            getch();
            exit (1);
            break;

      } // switch
            }// main () {}






