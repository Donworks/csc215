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

 # More insight into the features
This site shows more about the features of the BDOS ENTRY feastures and what they do https://www.seasip.info/Cpm/bdos.html 

It also shows more about the BIOS ( Basic Input / Output System) functions  for operation and what they do https://www.seasip.info/Cpm/bios.html

# What Devices are needed for us to communicate with the computer

- There are two main devices we use to communicate with the computer for visual age and to help comunicate with the computer we use a keyboard, cpu and a monitor to help us communicate with the computer.

- So it starts with the key board which have buttons but these buttons have a set of numbers specefied (These are called scan code Numbers) to them But When we press the key it makes a small electric current flow which then flow into a small chip withing the keyboard then it sends a binary number which is connected with that key to the CPU
  <img width="671" alt="Screenshot 2024-10-29 at 11 25 58 PM" src="https://github.com/user-attachments/assets/4880435f-4542-493d-8cb6-3e1d91266741">

- It then goes to the CPU which then the operating system the checks to see if any keys have been pressed once the OS sees that a key has been pressed it then figures out were the data needs to go it then creates an event which is already placed in the systems hardware which your OS already knows.
  <img width="1334" alt="Screenshot 2024-10-29 at 11 59 09 PM" src="https://github.com/user-attachments/assets/4503798f-7945-4d50-b281-fa71ce338696">


- The OS then takes the scan code from the keyboard and its associated letter that the scan code represents and creats a ubicode out of this data for the text editor to use to make the image which is represented by  <img width="1304" alt="Screenshot 2024-10-29 at 11 54 25 PM" src="https://github.com/user-attachments/assets/8ca27413-69d7-4a02-b33b-af704029fb4d">

- a binary number which the the text editor sends back to the CPU which is then sent the GPU which finds the location of where it should be on the monitor then makes the pixels and sends the image to the monitor
<img width="1335" alt="Screenshot 2024-10-29 at 11 53 56 PM" src="https://github.com/user-attachments/assets/a36af3e7-e03d-4853-99f5-844cc3cd4458">


Vocab
- GPU: Graphics processing unit
- CPU: Computer Processing unit 
- OS: Operating System

  All images provided and information provided were from FutureLearn.com  " what happens inside your Computer when a key is pressed?"

  Site for better Insight: https://www.futurelearn.com/info/courses/computer-systems/0/steps/53503

# Vocabulary 

1. Vectors: A vector is a statement inside of a computer that tells a program where to go specifically in memory and its unconditional specific action

2. Bdos Entry: Basic Disk Operating System. What this does is that there is a set of software which are program uses to start and connect the software and hardware so the software can connect with the physical device just like how a disk drive holds memory it can then start the program and use the program and use the program to pull memory (BDOS Entry is found in location 5 for most CP/M'S)

3. I/O: INPUT AND OUTPUT

4. CP/M: Central Processing and Memory unit

5. Prom: Programable Read Only Memory (The main thing that the functions inside Prom do is to connect the software to the hardware physically.

6. CBIOS Customized Basic Input and Output System

continuation of the chapter https://github.com/johan-franco/csc215/blob/main/Notes/Chap6.md
