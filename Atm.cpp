import java.util.Scanner;

public class ATMMachine {
    private static double balance = 1000; // initial balance

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Welcome to the ATM Machine!");
            System.out.println("1. Check Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = scanner.nextDouble();
                    deposit(depositAmount);
                    break;
                case 3:
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = scanner.nextDouble();
                    withdraw(withdrawAmount);
                    break;
                case 4:
                    System.out.println("Thank you for using the ATM!");
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    private static void checkBalance() {
        System.out.println("Your balance is: $" + balance);
    }

    private static void deposit(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid deposit amount.");
        } else {
            balance += amount;
            System.out.println("$" + amount + " deposited successfully.");
            checkBalance();
        }
    }

    private static void withdraw(double amount) {
        if (amount <= 0) {
            System.out.println("Invalid withdrawal amount.");
        } else if (amount > balance) {
            System.out.println("Insufficient funds.");
        } else {
            balance -= amount;
            System.out.println("$" + amount + " withdrawn successfully.");
            checkBalance();
        }
    }
}
