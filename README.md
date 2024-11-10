# Encrypted-NP 
#ENP is a secure C program designed to create, edit, and manage text files with encrypted contents. By implementing file locking and password protection, this program provides an additional security layer, ideal for storing sensitive information. Key functionalities include creating encrypted files, setting and resetting passwords, editing file contents with access restrictions, and displaying stored information securely. The user-friendly command-line interface supports strong encryption practices, making this a reliable tool for maintaining confidentiality of personal or professional data.

#Features

Secure File Creation: Create new files with unique IDs, titles, and encrypted content.
Password Protection: Set and reset passwords to prevent unauthorized access.
Content Editing: Modify existing files after entering the correct password.
Forgot Password Recovery: Retrieve access through security questions in case of a forgotten password.
File Display: View encrypted content securely by providing the correct password.
Additional Security: Uses strong encryption algorithms to protect data from unauthorized access.


#Project Structure

createFile(): Prompts users to enter a title, ID, and content for a new file, then saves this information securely.
setPassword(): Sets a password for the created file, providing the first layer of security.
editFile(): Allows the user to edit a file’s content, accessible only with the correct password.
resetPassword(): Enables users to change the password after verifying the current password.
forgotPassword(): Facilitates password recovery by verifying answers to a custom security question.
showFile(): Displays file content to authorized users after successful password entry.

#Installation

Prerequisites
C Compiler (GCC, Turbo C++, or Visual Studio)
Operating System: Windows 7 or higher (or compatible C environment on other OS)