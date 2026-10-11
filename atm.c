#include<stdio.h>

int main(){
    int pin;
    int correctPin=1234;
    float amount;
    int choice;
    float balance = 5000.0;

    printf("===== ATM SIMULATION SYSTEM =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &pin);

    
if (pin != correctPin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("\nLogin successful!\n");

    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: Rs. ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance = balance + amount;
                    printf("Deposit successful!\n");
                    printf("New balance: Rs. %.2f\n", balance);
                } else {
                    printf("Amount must be greater than zero.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Amount must be greater than zero.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance = balance - amount;
                    printf("Withdrawal successful!\n");
                    printf("Remaining balance: Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice! Select 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}
    
    



