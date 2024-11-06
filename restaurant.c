#include <stdio.h>
#include <ctype.h>

int main() {
    char foodType = '\0';
    int choice = 0;
    puts("Welcome to Madurai Cafe");

    do {
        puts("V:Veg N:Nonveg, Your choice please: ");
        foodType = getc(stdin);
        foodType = tolower(foodType);

        switch (foodType) {
        case 'v':
            puts("1: Banne-Dosa 2: Upma 3: Rava-idli \nYour choice? ");
            scanf("%d", &choice);
            switch (choice) {
            case 1:
                puts("Your Tasty dosa Sir");
                break;
            case 2:
                puts("Your yummy upma Maam");
                break;
            case 3:
                puts("Your delicious idli Sir");
                break;
            default:
                puts("We don't serve Grass Sir");
            }
            break; // Exit after serving Veg menu

        case 'n':
            puts("1: Mutton-pulav 2: Chicken-chilly 3: Fish-fry. Your choice please");
            scanf("%d", &choice);
            switch (choice) {
            case 1:
                puts("Your Tasty Hanumantu");
                break;
            case 2:
                puts("Guntur delicious Chicken Maam");
                break;
            case 3:
                puts("Your spicy fish fry Maam");
                break;
            default:
                puts("We don't serve Lizards Maam");
            }
            break; // Exit after serving Non-Veg menu

        default:
            puts("Invalid choice! Please select V for Veg or N for Non-Veg.");
        }

        puts("Do you wish to have more? 1:Yes 2:No");
        scanf("%d", &choice);

    } while (choice == 1);

    puts("Thank you, visit again!");
    return 0;
}
