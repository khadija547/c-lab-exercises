#include <stdio.h>

int main() {
    int mainCat, subCat;
    printf("1.Greeting 2.Study 3.Weather 4.Help\nSelect: ");
    scanf("%d", &mainCat);

    switch(mainCat){
        case 1:
            printf("1.Hello 2.How are you 3.Goodbye\nSelect: ");
            scanf("%d", &subCat);
            if(subCat==1) printf("Chatbot: Hello! How can I help?\n");
            else if(subCat==2) printf("Chatbot: I am fine!\n");
            else printf("Chatbot: Goodbye, have a nice day!\n");
            break;
        case 2:
            printf("1.Programming 2.Mathematics 3.AI\nSelect: ");
            scanf("%d", &subCat);
            if(subCat==1) printf("Chatbot: Programming is all about logic.\n");
            else if(subCat==2) printf("Chatbot: Mathematics is the base of AI.\n");
            else printf("Chatbot: AI is the future.\n");
            break;
        case 3:
            printf("1.Today 2.Tomorrow 3.Forecast\nSelect: ");
            scanf("%d", &subCat);
            printf("Chatbot: Weather info for option %d\n", subCat);
            break;
        case 4:
            printf("1.About Chatbot 2.Commands 3.Exit\nSelect: ");
            scanf("%d", &subCat);
            printf("Chatbot: Help option %d selected.\n", subCat);
            break;
        default: printf("Invalid\n");
    }
    return 0;
}