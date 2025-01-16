#include <stdio.h>
#include <stdlib.h>

// Function declarations
void DisplayIntro();
void Rules();
void end();
void win();

void main() {
    int c;
    DisplayIntro();
  
    int choice;

    printf("\033[1mDO YOU WANT TO PLAY? (1 - YES / 0 - NO):\033[0m\n"); 
    
    scanf("%d", &choice);

    if (choice == 1) {
        Rules();
        label2:
        printf("\033[1mYou find yourself in a dimly lit room. The air is thick with tension. A mysterious figure stands in the shadows.\033[0m\n");
        printf("1. Approach the figure.\n");
        printf("2. Look for an exit.\n");
        printf("Choose either option 1 or 2.\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\033[32mAs you approach, the figure hands you an old photograph. It shows a hidden location in the woods. There seems to be a clue.\033[0m\n");
                break;
            case 2:
                printf("\033[31You enter a random code, but it's incorrect. An alarm sounds, and you hear footsteps approaching. You have failed to escape!\033[0m\n");
                printf("DO YOU WANT TO TRY AGAIN?(1 - YES / 0 - NO):\n");
                scanf("%d", &c);
                if (c == 1) {
                    goto label2;
                } else {
                    end();
                }
                break;
            default: 
                printf("Choose either 1 or 2.\n");
                goto label2;
        }

        label3:
        printf("What will you do next?\n");
        printf("1.Examine the photograph.\n");
        printf("2. Try to guess the code for the door.\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\033[32mUpon closer inspection, you notice a hidden message on the back of the photograph: 'Follow the North Star.\033[0m\n");
                
                break;
            case 2:
                printf("\033[31mYou enter a random code, but it's incorrect. An alarm sounds, and you hear footsteps approaching.You have failed to escape.\033[0m\n");
                printf("DO YOU WANT TO TRY AGAIN?(1 - YES / 0 - NO):\n");
                scanf("%d", &c);
                if (c == 1) {
                    goto label3;
                } else {
                    end();
                }
                break;

            default: 
                printf("Invalid option. Choose either 1 or 2.\n");
                goto label3;
        }

        label4:
        printf("Now that you have a clue, what's your next move?\n");
        printf("1. Head to the woods.\n");
        printf("2. Search for more clues in the room.\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                printf("\033[32mYou follow the North Star into the woods. Deep in the forest, you discover a hidden cabin.\033[0m\n");
                break;
            case 2:
                printf("\033[32mYou search the room and find a hidden compartment with another clue: 'The answer lies in the books.\033[0m\n");
                break;
           
            default: 
                printf("Invalid option.Choose either 1,2 or 3.\n");
                goto label4;
        }
        label5:
         printf("What's your next action?\n");
        printf("1. Enter the hidden cabin.\n");
        printf("2. Investigate the books in the room.\n");
        scanf("%d", &choice);
         switch (choice) {
            case 1:
                printf("Inside the cabin, you find a secret passage leading to an underground chamber. You're on the right track.\n");
                break;
            case 2:
                printf("\033[32mYou examine the books and find a lever hidden behind one of them. Pulling the lever reveals a secret passage.\033[0m\n");
                break;

            default: 
                printf("Invalid option.Choose either 1,2 or 3.\n");
                goto label5;
        }
        label6:
        printf("As you progress, you reach a locked gate. What will you do?\n");
        printf("1. Look for a key.\n");
        printf("2. Try to pick the lock.\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\033[32mYou find a key hidden in a nearby drawer. It fits the lock perfectly, and the gate opens.\033[0m\n");
                break;
            case 2:
                printf("\033[31mYour attempt to pick the lock fails, and the noise attracts the attention of guards. They capture you!\033[0m\n");
                printf("DO YOU WANT TO TRY AGAIN?(1 - YES / 0 - NO):\n");
                scanf("%d", &c);
                if (c == 1) {
                    goto label6;
                } else {
                    end();
                }
                break;

            default: 
                printf("Invalid option.Choose either 1 or 2.\n");
                goto label6;
                }
        
        printf("\033[32mYou enter the chamber and discover a hidden artifact. Congratulations, you've solved the mystery!\033[0m\n");
        win();
        
        }
        else if(choice==0)
        end();
        else
        printf("enter either 1 or 2\n");
    
}
   

void DisplayIntro() {
 printf("  ========================================================================================================================================  \n");    
 printf("\n                                                    WELCOME TO MYSTERY ADVENTURE!                                        \n\n");
 printf("  ========================================================================================================================================  \n");
 printf("PROLOGUE:\nAMIDST THE SHADOWS OF A FORGOTTEN TOWN, YOU RECEIVE A MYSTERIOUS INVITATION, DRAWING YOU TO AN ENIGMATIC ROOM. AS YOU ENTER, A CLOAKED FIGURE AWAITS, SETTING THE STAGE FOR AN ADVENTURE SHROUDED IN SECRETS. WILL YOU UNRAVEL THE MYSTERY THAT AWAITS, OR SUCCUMB TO THE UNKNOWN FORCES THAT LINGER IN THE DIMLY LIT SPACE? THE CHOICES ARE YOURS, AND THE JOURNEY BEGINS NOW.");
}

void Rules() {
    printf("RULE 1: Pay attention to clues.\n");
    printf("RULE 2: Think carefully; your decisions matter.\n");
    printf("RULE 3: Stay vigilant; danger may lurk in unexpected places.\n");
}

void end() {
    printf("GAME OVER!\nTHANK YOU FOR PLAYING\n");
    exit(0);
}

void win() {
    printf("YOU SUCCESSFULLY COMPLETED THE GAME AND ESCAPED\nTHANK YOU FOR PLAYING\n");
    exit(0);
    }
