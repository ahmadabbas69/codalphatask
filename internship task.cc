#include<iostream>
using namespace std;

// This is a task-checking application
int main() {
    // Welcome message
    cout << "\t\t<<***Welcome to To-Do List Application***>>" << endl;
    cout << "\t\t\t\t\t<-------------------->" << endl;
    cout << "\t\t\t\t\t<-------------------->" << endl;
    cout << "\t\t\t\t\t<-------------------->" << endl;
    cout << "\t\t\t\t\t<-------------------->" << endl;
    
    cout << "\t\t\t\tPress M or m for menu:" << endl;

    char choice;
    // Use do-while loop because it checks the condition at least once
    do {
        cin >> choice;

        if (choice == 'M' || choice == 'm') {
            // Display menu options
            cout << "\t\t\tMenu :" << endl;
            cout << "\t\t\t 1) Press 1 to Add task" << endl;
            cout << "\t\t\t 2) Press 2 for Task marks" << endl; 
            cout << "\t\t\t 3) Press 3 to View current task" << endl;
            cout << "\t\t\t\t\t<-------------------->" << endl;
            cout << "\t\t\t\t\t<-------------------->" << endl;

            // Prompt user to enter their choice from the menu
            int menu_choice;
            cin >> menu_choice;

            // Use switch case for menu handling
            switch (menu_choice) {
                case 1: {
                    // Ask the user what type of task they want to do
                    cout << "\t\t\tWhat type of task you want to do" << endl;
                    cout << "\t\t\t a) Addition" << endl;
                    cout << "\t\t\t b) Subtraction" << endl;
                    cout << "\t\t\t c) Multiplication" << endl;

                    // Prompt the user to enter sub-choice to select the task
                    char sub_choice;
                    cin >> sub_choice;

                    // Variables for number input
                    int num1, num2;

                    // Perform the chosen operation
                    if (sub_choice == 'a') {
                        cout << "Enter the 1st number: ";
                        cin >> num1;
                        cout << "Enter the 2nd number: ";
                        cin >> num2;
                        int sum = num1 + num2;
                        cout << "Sum: " << sum << endl;
                    } else if (sub_choice == 'b') {
                        cout << "Enter the 1st number: ";
                        cin >> num1;
                        cout << "Enter the 2nd number: ";
                        cin >> num2;
                        int sub = num1 - num2;
                        cout << "Difference: " << sub << endl;
                    } else if (sub_choice == 'c') {
                        cout << "Enter the 1st number: ";
                        cin >> num1;
                        cout << "Enter the 2nd number: ";
                        cin >> num2;
                        int multi = num1 * num2;
                        cout << "Product: " << multi << endl;
                    } else {
                        // If the user enters an invalid sub-choice
                        cout << "Invalid sub-choice. Please enter a, b, or c." << endl;
                    }
                    break;
                }

                case 2: {
                    // Check the status of a task
                    cout << "\t\t\tEnter D or d for task done: ";
                    char choice_done;
                    cin >> choice_done;
                    if (choice_done == 'D' || choice_done == 'd') {
                        cout << "\t\t\tTask is done" << endl;
                    } else {
                        cout << "\t\t\tPlease enter a valid choice" << endl;
                    }
                    break;
                }

                case 3:
                    // View the current task
                    cout << "\t\t\tPress a to see addition" << endl;
                    cout << "\t\t\tPress s to see subtraction" << endl;
                    cout << "\t\t\tPress m to see Multiplication" << endl;

                    // Prompt the user to enter their choice
                    char task_done;
                    cin >> task_done;
                    if(task_done == 'a' || task_done == 'A') {
                        cout << "\t\t\tThe current task is Addition" << endl;
                    } else if(task_done == 's' || task_done == 'S') {
                        cout << "\t\t\tThe current task is Subtraction" << endl;
                    } else if(task_done == 'm' || task_done == 'M') {
                        cout << "\t\t\tThe current task is Multiplication" << endl;
                    } else {
                        // If the user enters an invalid choice
                        cout << "\t\t\tPlease enter a valid choice" << endl;
                    }
                    break;

                default:
                    // If the user enters an invalid menu choice
                    cout << "\t\t\tInvalid choice. Please enter a valid option." << endl;
                    break;
            }
        } else {
            // If the user enters an invalid choice outside the menu
            cout << "\t\t\tInvalid choice. Please press M or m for menu." << endl;
        }

        cout << "\t\t\tPress M or m for menu or any other key to exit" << endl;
        cout << "\t\t\t\t\t<-------------------->" << endl;
        cout << "\t\t\t\t\t<-------------------->" << endl;
        cout << "\t\t\t\t\t<--Thanks for visiting our app-->"<<endl;
    

    } while (choice == 'M' || choice == 'm');

    

    return 0;
}

