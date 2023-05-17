#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char start[20], jawab[20], jawab2[20], jawab3[20], jawab4[20], jawab5[20];
  int benar = 0, salah = 0, uang = 0;

  printf("\n\t\t\t\t++-----------------------------++");
  printf("\n\t\t\t\t||----------------------------|");
  printf("\n\t\t\t\t||  want to be a millioner!  ||");
  printf("\n\t\t\t\t||---------------------------||");
  printf("\n\t\t\t\t++---------------------------++");
  printf("\n\nselamat datang di game 'want to be a millioner'\n");
  printf("\ndalam game ini kami akan memberikan 5 soal bertentangan dengan indonesia");

  printf("\nTekan Enter untuk memulai game...\n");
  fgets(start, sizeof(start), stdin);

    system("cls");
    printf("jika berhasil menjawab pertanyaan ini,total hadiah anda = Rp50.000");
    printf("\nUang yang telah anda kumpulkan = Rp%d", uang);
    printf("\n\n1. siapa yang menjahit bendera indonesia...?");
    printf("\n\tA. fatmawati\n");
    printf("\tB. soekarnoe\n");
    printf("\tC. gusdur\n");
    printf("Jawaban anda (A/B/C) : ");
    gets(jawab);
    fflush(stdin);

    if (jawab[0] == 'A')
    {
      printf("selamat jawaban anda benar\n\n");
      uang = +50000;
      printf("Rp.%d", uang);
      system("cls");
    }
    else
    {
      printf("jawaban anda salah, uang yang anda bawa Rp.%d", uang);
      exit(1);
    }

    printf("jika berhasil menjawab pertanyaan ini,total hadiah anda = Rp100.000");
    printf("\nUang yang telah anda kumpulkan = Rp%d", uang);
    printf("\n\n2. kapan indonesia merdeka ?");
    printf("\n\tA. 2003\n");
    printf("\tB. 1999\n");
    printf("\tC. 1945\n");
    printf("Jawaban anda (A/B/C) : ");
    gets(jawab2);
    fflush(stdin);

    if (jawab2[0] == 'C')
    {
      printf("selamat jawaban anda benar");
      uang = +100000;
      printf("Rp.%d", uang);
      system("cls");
    }
    else
    {
      printf("\njawaban anda salah ,uang yang anda bawa pulang Rp.%u uang\n", uang);

      exit(1);
    }

    printf("jika berhasil menjawab pertanyaan ini,total hadiah anda = Rp150.000");
    printf("\nUang yang telah anda kumpulkan = Rp%d", uang);
    printf("\n\n3. siapa presiden pertama indonesia ?");
    printf("\n\tA. soekarnoe\n");
    printf("\tB. megachan\n");
    printf("\tC. prabowo\n");
    printf("Jawaban anda (A/B/C) : ");
    gets(jawab);
    fflush(stdin);

    if (jawab[0] == 'A')
    {
      printf("selamat jawaban anda benar");
      uang = +150000;
      printf("Rp.%d", uang);
      system("cls");
    }
    else
    {
      printf("\njawaban anda salah ,uang yang anda bawa pulang Rp.%uuang\n", uang);

      exit(1);
    }
  printf("jika berhasil menjawab pertanyaan ini,total hadiah anda = Rp150.000");
    printf("\nUang yang telah anda kumpulkan = Rp%d", uang);
    printf("\n\n4.kapan hari sumpah pemuda?");
    printf("\n\tA. 28 oktober\n");
    printf("\tB. 20 oktober\n");
    printf("\tC. 11 juni\n");
    printf("Jawaban anda (A/B/C) : ");
    gets(jawab);
    fflush(stdin);

    if (jawab[0] == 'A')
    {
      printf("selamat jawaban anda benar");
      uang = +200000;
      printf("Rp.%d", uang);
      system("cls");
    }
    else
    {
      printf("\njawaban anda salah ,uang yang anda bawa pulang Rp.%uuang\n", uang);

      exit(1);
    }  
  printf("jika berhasil menjawab pertanyaan ini,total hadiah anda = Rp150.000");
    printf("\nUang yang telah anda kumpulkan = Rp%d", uang);
    printf("\n\n5.siapa saja yang pernah menjajah indonesia?");
    printf("\n\tA. belanda,chile,malaysia\n");
    printf("\tB. belanda,jepang,portugis\n");
    printf("\tC. inggris,denmark,arab saudi\n");
    printf("Jawaban anda (A/B/C) : ");
    gets(jawab);
    fflush(stdin);

    if (jawab[0] == 'B')
    {
      printf("selamat jawaban anda benar");
      uang = +250000;
      printf("Rp.%d", uang);
      system("cls");
      printf("selamat anda benar semua,total hadiah yang anda dapatkan adalah Rp.%d",uang);
    }
    else
    {
      printf("\njawaban anda salah ,uang yang anda bawa pulang Rp.%u\n", uang);

      exit(1);
    }  
  }
 char usernameinput[20], passwordinput[20];
    strcpy(usernameinput, argv[1]);
    strcpy(passwordinput, argv[2]);

    FILE *fpr;
    if ((fpr = fopen("database/login.bin", "rb")) == NULL)
    {
        printf("Couldn't open database");
        return 0;
    }
    char akun[20];
    fread(akun, sizeof(akun), sizeof(akun) / sizeof(char), fpr);
    fclose(fpr);

    char *string[3];
    char username[20], password[20];
    int ctrl = 0;

    string[0] = strtok(akun, "@");
    while (string[ctrl++] != NULL)
    {
        string[ctrl] = strtok(NULL, "@");
    }

    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if (strcmp(usernameinput, username) == 0 && strcmp(passwordinput, password) == 0)
    {
        play_game();
    }
    else
    {
        printf("Username dan password anda salah");
    }

    return 0;
}

 

