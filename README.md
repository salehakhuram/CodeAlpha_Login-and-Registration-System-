# CodeAlpha_Login-and-Registration-System-
A console-based program to register users and allow login authentication using a text file for storage. Supports username and password validation.
# C++ User Registration and Login System

A simple console-based C++ program that allows users to **register** and **login**. User credentials are stored in a local text file (`users.txt`) for persistence.

 Features

- **User Registration**:
  - Minimum 3 characters for username (no spaces allowed)
  - Minimum 6 characters for password
  - Prevents duplicate usernames
- **User Login**:
  - Validates username and password against stored data
- **Input Validation**:
  - Ensures valid usernames and passwords
- **Persistent Storage**:
  - Stores user data in `users.txt`  

Prerequisites

- C++ compiler (e.g., g++, Visual Studio, Code::Blocks)
- Basic knowledge of running C++ programs

---

Installation and Usage

1. **Clone the repository**:

```bash
git clone https://github.com/salehakhuram/CodeAlpha_Login-and-Registration-System
cd salehakhuram/CodeAlpha_Login-and-Registration-System
g++ main.cpp -o UserAuth
./UserAuth   # Linux/macOS
UserAuth.exe # Windows

Example Output:
<img width="903" height="952" alt="image" src="https://github.com/user-attachments/assets/62f619a9-43ed-4308-9bba-8f8409b2aaca" />




