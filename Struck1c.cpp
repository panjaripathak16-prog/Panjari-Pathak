//#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

struct book
{
    char title[20];
    char author[20];
    int edition;
    char isbn[14];
    char publisher[20];
    float price;
};
int main()
{
    //clrscr();
    printf("Structure Called book is already created.\n");

    struct book b1, b2;
    printf("Objects b1 & b2 of structure book are created.\n");

    struct book b3 = { "Let Us C","YK",4,"81-7656-940-2","BPB",180 };

    printf("The content of object b3 is ... \n");
    printf("Title : %s\n",b3.title);
    printf("Author : %s\n",b3.author);
    printf("Edition : %d\n",b3.edition);
    printf("ISBN : %s\n",b3.isbn);
    printf("Publisher : %s\n",b3.publisher);
    printf("Price : %.2fs\n",b3.price);

b1 = b3;

void display(struct book);

printf("The content of object b1 is ... \n");
display(b1);

    printf("Enter information for b2 object.\n");
    printf("Enter a Book Name : ");
    gets(b2.title);
    printf("Enter Author Name : ");
    gets(b2.author);
    printf("Enter Edition No. : ");
    scanf("%d",&b2.edition);
    printf("Enter ISBN : ");
    fflush(NULL);
    gets(b2.isbn);
    printf("Enter Name of Publisher : ");
    gets(b2.publisher);
    printf("Enter Price of the Book : ");
    fflush(NULL);
    scanf("%f",&b2.price);
    printf("The content of object b2 is ... \n");
    display(b2);

void display_price(float,char *);
    display_price(b1.price,"Book 1");
    display_price(b2.price,"Book 2");
    display_price(b3.price,"Book 3");
    getch();
};
void display(struct book b)
{

    printf("Title : %s\n",b.title );
    printf("Author : %s\n",b.author );
    printf("Edition : %d\n",b.edition );
    printf("ISBN : %s\n",b.isbn );
    printf("Publisher : %s\n",b.publisher );
    printf("Price : %.2f\n",b.price );
    }
void display_price(float cost,char * message)
{
    printf("%s\'s cost is %.2f\n",message, cost );
}
