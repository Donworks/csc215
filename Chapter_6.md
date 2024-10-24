  # Interfacing with the CPM
- The operating system can do a lot of things. the operating system contains a single line command and editing features. this system provide time saving facilities that should be used in everybodys programs and it would be help and less of a burden on the programer


- # The "Giant hook" Location 5
   <img width="334" alt="Screenshot 2024-10-17 at 11 24 03 PM" src="https://github.com/user-attachments/assets/86710558-d83f-4162-b06b-a0fd5a4df4a9">

  - When looking at fig 5-1 the user transient program acesses the facilities using the BDOS call vector that the operating system wrote in its memory location 5
  - The table above shows the facilities provided by the CPM'S operating system which is represented in the table above 
 - hook is were we hang all the request for input and output and the disk access, programs can be written on any CP/M
 - There are different size and vesions of CP/M and the CBIOS (computer basic input output system) has a different address the program would have to find that address
 - In each version of the CP/M BDOS entry is going to be located in the RAM, BDOS Entry: means Basic disk operarting system entry. what this does is that there is a set of software already placed in the system that are program uses to connect the software with the Hardware. and the program would run on teh hardware configuration

- Note: stated in the book That if you want to avoid any conflicts updating your system you should limit your systems functions to whats in table 6.1

  <img width="333" alt="Screenshot 2024-10-23 at 11 35 54 PM" src="https://github.com/user-attachments/assets/30393474-3dac-4bd2-a6ef-88fbf08f9fdb">

# Vocabulary 

1. Vectors: A vector is a statement inside of a computer that tells a program where to go specifically in memory and its unconditional specific action

2. Bdos Entry: Basic Disk Operating System. What this does is that there is a set of software which are program uses to start and connect the software and hardware so the software can connect with the physical device just like how a disk drive holds memory it can then start the program and use the program and use the program to pull memory (BDOS Entry is found in location 5 for most CP/M'S)

3. I/O: INPUT AND OUTPUT

4. CP/M: Central Processing and Memory unit

5. Prom: Programable Read Only Memory (The main thing that the functions inside Prom do is to connect the software to the hardware physically.

6. CBIOS Customized Basic Input and Output System
