XOR Encryption/Decryption for Files.
1. This C++ program allows you to perform simple XOR encryption and decryption on a file.
2. It encrypts and decrypts the content of a file using a single character as the key.

Features.
1. Encrypt and decrypt any file.
2. XOR-based encryption/decryption using a single character as the key.
3. Works with binary files.

Requirements.
1. C++ compiler (e.g., gcc)
2. Basic understanding of XOR encryption.
3. IDE (e.g., Visual Studio, Code::Blocks, or any C++ supported IDE)

How to Use.
1. Open the Program
Open the program in your preferred IDE (e.g., Visual Studio, Code::Blocks, etc.).

2. Run the Program
Simply click the "Run" button in your IDE to compile and execute the program.

3. Input the File Name
When prompted in the terminal or console, enter the file name
 (the file should be in the same directory as the program, or provide the full path).

5. Enter the Key
Provide a single character key for encryption or decryption.
This key will be used for the XOR operation.

6. Encryption/Decryption Process
The program will process the file and encrypt or decrypt it in-place.
Once done, you'll see a message confirming that the file has been encrypted or decrypted successfully.

Example:
1. Enter file name: sample.txt
2. Enter Encryption/Decryption key(Single char): K
3. File Encrypted/Decrypted successfully!

How XOR Encryption Works.
1. XOR encryption is a simple symmetric encryption algorithm where thesame key is used 
for both encryption and decryption. In this program:
2. Every byte of the file is XOR'd with the key.
3. Encryption and decryption are identical processes because of the properties
of the XOR operation (A ^ B ^ B = A).
