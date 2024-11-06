#include <stdio.h>
#include <ctype.h>

int main()
{
    int foodType = 0;
    int choice = 0;

    puts("Welcome to Madurai Cafe");

    do {
        puts("1:Veg 2:Nonveg, Your choice please: ");
        scanf("%d", &foodType);
        getchar();  

        switch (foodType) {
        case 1:
           
            puts("Veg Menu, Sir!");
            puts("1: Banne-Dosa 2: Upma 3: Rava-idli \nYour choice? ");
            scanf("%d", &choice);
            switch (choice) {
            case 1:
                puts("Your Tasty dosa, Sir!");
                break;
            case 2:
                puts("Your yummy upma, Ma'am!");
                break;
            case 3:
                puts("Your delicious idli, Sir!");
                break;
            default:
                puts("We don't serve grass, Sir!");
            }
            break;  

        case 2:
            
            puts("Non-Veg Menu, Sir!");
            puts("1: Mutton-pulav 2: Chicken-chilly 3: Fish-fry \nYour choice please: ");
            scanf("%d", &choice);
            switch (choice) {
            case 1:
                puts("Your tasty mutton pulav, Sir!");
                break;
            case 2:
                puts("Your delicious chicken chilly, Ma'am!");
                break;
            case 3:
                puts("Your spicy fish fry, Ma'am!");
                break;
            default:
                puts("We don't serve lizards, Ma'am!");
            }
            break;  

        default:
            puts("Invalid choice, please enter V for Veg or N for Non-Veg.");
            break;
        }

        puts("Do you wish to have more? 1: Yes 2: No");
        scanf("%d", &choice);
        getchar();  

    } while (choice == 1);  

    puts("Thank you! Visit again.");
    return 0;
}
