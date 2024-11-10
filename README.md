# Encrypted-NP 
The Encrypted Notepad software is designed to provide a safe environment for sensitive data. Users can create new files with password protection, reset passwords securely, and recover access via security questions if needed. The program also includes a straightforward interface to help users navigate through its functions seamlessly.

# Overview 
Developed as a part of a mini-project, this application integrates encryption techniques, ensuring that data remains confidential. This makes Encrypted Notepad ideal for individuals and organizations requiring a secure storage solution.

# Features
File Creation: Create secure files with titles, IDs, and encrypted contents.

Password Protection: Password management for controlled access to each file.

Edit & Display Files: Authorized users can edit or view files after entering the correct password.

Forgot Password: Answer security questions to retrieve a forgotten password.

Encryption & Decryption: Utilizes strong encryption algorithms to secure text data.

# Prerequisites

To run Encrypted Notepad, you will need:
Operating System: Windows 7 or above (or compatible environment)
C Compiler: Turbo C++, GCC, or Visual Studio


# Installation

1. Clone the repository:
git clone https://github.com/your-username/Encrypted-NP.git

2. Navigate to the project directory:
cd Encrypted-NP

3. Compile the program:
gcc encrypted_notepad.c -o encrypted_notepad

4. Run the program:
./encrypted_notepad

# Usage

1. Launch the program to display the main menu.
2. Choose an option:
Create File: Enter a title, ID, and text to create a new file, then set a password.
Edit File: Modify file contents after entering the correct password.
Reset Password: Verify the current password, then set a new password.
Forgot Password: Retrieve the password by answering the security question.
Open File: Enter the correct password to view file contents.
New File: Start a fresh file with title, ID, and encrypted text.
Exit: Close the application.

# Data Structures

Arrays: Used for storing text and managing encryption keys.
Structures: Store user information, including access levels, login credentials, and encryption keys.
Linked Lists: Organize the encrypted text in a secure and efficient format.

# Goals
Maintain the confidentiality and integrity of stored data.
Encrypt text before storing and decrypt when retrieving.
Require user authentication (password or security question) to access files.

# Methodology

1. Encryption: Encrypts text entered into the notepad, making it unreadable to unauthorized users.
2. Authentication: Provides secure login and multi-factor authentication.
3. Data Storage: Stores encrypted text securely on the device.
5. Text Editing: Allows users to make
6. edits without compromising data integrity.
7. User Interface: Simple and intuitive, enabling easy navigation.

# Expected Outcomes

Secure Storage: Protection against unauthorized access.
User-Friendly Interface: Intuitive navigation for file management.
Robust Encryption: Encrypted text that only authorized users can access.
