#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to check if username already exists
bool userExists(string username) {
    ifstream file("users.txt");
    string u, p;

    while (file >> u >> p) {
        if (u == username)
            return true;
    }
    return false;
}

// Registration function
void registerUser() {
    string username, password;
 do {
        cout << "Enter username (min 3 chars, no spaces): ";
        cin >> username;
        if (username.length() < 3) cout << "Username too short!\n";
        if (username.find(' ') != string::npos) cout << "Username cannot have spaces!\n";
        if (userExists(username)) cout << "Username already exists!\n";
    } while (username.length() < 3 || username.find(' ') != string::npos || userExists(username));

    // Password validation
    do {
        cout << "Enter password (min 6 chars): ";
        cin >> password;
        if (password.length() < 6) cout << "Password too short!\n";
    } while (password.length() < 6);


    // Check duplicate username
    if (userExists(username)) {
        cout << "Username already exists! Try another.\n";
        return;
    }

    // Store username and password in file
    ofstream file("users.txt", ios::app);
    if(!file)
    {
    	cout << "Error opening file for writing!\n" << endl;
    	
	}
    file << username << " " << password << endl;
    file.close();

    cout << "Registration successful!\n";
}

// Login function
void loginUser() {
    string username, password;
    string u, p;
    bool success = false;

    cout << "\n--- Login ---\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    while (file >> u >> p) {
        if (u == username && p == password) {
            success = true;
            break;
        }
    }
    file.close();

    if (success)
        cout << "Login successful! Welcome " << username << endl;
    else
        cout << "Invalid username or password!\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n========================\n";
        cout << " 1. Register\n";
        cout << " 2. Login\n";
        cout << " 3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: cout << "Exiting...\n"; return 0;
            default: cout << "Invalid option!\n";
        }
    }

    return 0;
}

