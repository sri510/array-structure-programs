/*
Build a simplified ATM simulation where users can check their balance, withdraw money, and deposit funds. Use arrays to manage user accounts and transactions.



Explanation:

An ATM (Automated Teller Machine) simulation allows users to perform banking transactions such as checking their balance, withdrawing money, and depositing funds. In this project, we'll create a simplified version of an ATM simulation using arrays to manage user accounts and transactions.



Input/Output:-

==== ATM Simulation ====

1. Login

2. Exit

Enter your choice: 1



Enter account number: 1234

Enter PIN: 5678



Invalid account number or PIN



==== ATM Simulation ====

1. Login

2. Exit

Enter your choice: 1



Enter account number: 9876

Enter PIN: 5432



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 1

Your balance: 500.00



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 2

Enter withdrawal amount: 300

Withdrawal successful



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 1

Your balance: 200.00



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 3

Enter deposit amount: 100

Deposit successful



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 1

Your balance: 300.00



Welcome, User 9876

1. Check Balance

2. Withdraw

3. Deposit

4. Logout

Enter your choice: 4



==== ATM Simulation ====

1. Login

2. Exit

Enter your choice: 2

Exiting ATM simulation



Explanation of Code:

1. We define arrays to store user data and transactions, including account numbers, PINs, balances, and transaction details.
2. The main() function contains a loop that displays a menu with options to log in or exit.
3. The user is prompted for a choice, and the program uses a switch-case statement to handle the chosen option.
4. Option 1 allows the user to log in by entering their account number and PIN.
5. If the account number and PIN match, the user is logged in and presented with a menu to check balance, withdraw, deposit, or logout.
6. Option 1 displays the user's balance from the balances array.
7. Option 2 prompts the user to enter a withdrawal amount, deducts the amount from their balance if sufficient, and records the transaction.
8. Option 3 prompts the user to enter a deposit amount, adds the amount to their balance, and records the transaction.
9. Option 4 logs out the user.
10. The program exits when the user chooses to exit.
*/
#include <stdio.h>

#define MAX_USERS 10
#define MAX_TRANSACTIONS 100

// Arrays to store user data and transactions
int accountNumbers[MAX_USERS];
int pins[MAX_USERS];
float balances[MAX_USERS];
int numUsers = 0;

int transactionAccountNumbers[MAX_TRANSACTIONS];
char transactionTypes[MAX_TRANSACTIONS]; // 'W' for withdrawal, 'D' for deposit
float transactionAmounts[MAX_TRANSACTIONS];
int numTransactions = 0;

int main() {
    // Add some sample user accounts
    accountNumbers[numUsers] = 1234;
    pins[numUsers] = 5678;
    balances[numUsers] = 1000.0;
    numUsers++;

    accountNumbers[numUsers] = 9876;
    pins[numUsers] = 5432;
    balances[numUsers] = 500.0;
    numUsers++;

    int choice;
    int currentUserIndex = -1;

    while (1) {
        printf("\n==== ATM Simulation ====\n");
        printf("1. Login\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int accountNumber, pin;
                printf("Enter account number: ");
                scanf("%d", &accountNumber);
                printf("Enter PIN: ");
                scanf("%d", &pin);

                // Check if account number and PIN match
                for (int i = 0; i < numUsers; ++i) {
                    if (accountNumbers[i] == accountNumber && pins[i] == pin) {
                        currentUserIndex = i;
                        break;
                    }
                }

                 if (currentUserIndex != -1) {
                    while (1) {
                        printf("\nWelcome, User %d\n", accountNumbers[currentUserIndex]);
                        printf("1. Check Balance\n");
                        printf("2. Withdraw\n");
                        printf("3. Deposit\n");
                        printf("4. Logout\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);

                        switch (choice) {
                            case 1:
                                printf("Your balance: %.2f\n", balances[currentUserIndex]);
                                break;
                            case 2: {
                                float amount;
                                printf("Enter withdrawal amount: ");
                                scanf("%f", &amount);
                                if (amount <= balances[currentUserIndex]) {
                                    balances[currentUserIndex] -= amount;
                                    transactionAccountNumbers[numTransactions] = accountNumbers[currentUserIndex];
                                    transactionTypes[numTransactions] = 'W';
                                    transactionAmounts[numTransactions] = amount;
                                    numTransactions++;
                                    printf("Withdrawal successful\n");
                                } else {
                                    printf("Insufficient balance\n");
                                }
                                break;
                            }
                            case 3: {
                                float amount;
                                printf("Enter deposit amount: ");
                                scanf("%f", &amount);
                                balances[currentUserIndex] += amount;
                                transactionAccountNumbers[numTransactions] = accountNumbers[currentUserIndex];
                                transactionTypes[numTransactions] = 'D';
                                transactionAmounts[numTransactions] = amount;
                                numTransactions++;
                                printf("Deposit successful\n");
                                break;
                            }
                            case 4:
                                currentUserIndex = -1;
                                break;
                            default:
                                printf("Invalid choice\n");
                        }
                    }
                } else {
                    printf("Invalid account number or PIN\n");
                }
                break;
            }
            case 2:
                printf("Create your accno");
                
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
