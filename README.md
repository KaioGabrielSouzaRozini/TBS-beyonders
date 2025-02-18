# TBS Game Project

This is a turn-based strategy (TBS) game inspired by Civilization and other similar games.

## Setup Guide
Follow these steps to set up and run the project.


## step 1: Download and Install SDL

**1. Download SDL from the official website: (https://www.libsdl.org/)**
<br/>
![image](https://github.com/user-attachments/assets/5d04db4b-fb33-4d9b-a9cc-25a932263897)
<br/>
**2. After downloading, extract the files into a folder where you will set up your project.**

## step 2: Configure Visual Studio (Recommended)

After cloning the repository, follow these steps to configure Visual Studio.

**1. Right-click on the project and select Properties (Propriedades).**
<br/>
![image](https://github.com/user-attachments/assets/e37acddf-d2b9-42ea-affb-3bcc792f8621)
<br/>
**2. In the Properties window, go to C/C++ → General (Geral).**
<br/>
![image](https://github.com/user-attachments/assets/a6738f8d-0e69-4d92-b609-0511bf56c3aa)
<br/>
**3. Click on "Additional Include Directories (Diretórios de Inclusão Adicionais)", then click the dropdown arrow and select Edit.**
<br/>
![image](https://github.com/user-attachments/assets/495d9bef-ac6e-4343-a9af-ea340e40113c)
<br/>
**4. Click on New Line (Nova Linha).**
<br/>
![image](https://github.com/user-attachments/assets/33ee8bf2-fbd2-4c1c-817b-4009c4ce65fd)
<br/>
**5. Click on the three dots button.**
<br/>
![image](https://github.com/user-attachments/assets/a0d3498d-caab-4700-9754-d7ff4e423e36)
<br/>
**6. Select the Include folder inside the SDL directory.**

## step 3: Configure the Linker

**1. In the Properties window, go to Linker (Vinculador) → General (Geral).**
**2. Edit "Additional Library Directories (Diretórios de Biblioteca Adicionais)", add a new line, and select the x64 folder inside the lib directory of SDL.**
<br/>
![image](https://github.com/user-attachments/assets/6d9ecef8-a37f-466d-aa2e-89caf4ca3e18)
<br/>
**3. Now, go to System (Sistema), click on Subsystem (SubSystem), and select Console (/SUBSYSTEM:CONSOLE).**
<br/>
![image](https://github.com/user-attachments/assets/28fc07f0-7e8b-44b0-b9f1-eeaa4edbbf77)
<br/>

## step 4: Finalizing Setup

**1.In the Properties window, go to Linker → Input (Entrada).**

**2.Edit "Additional Dependencies (Dependências Adicionais)", add a new line, and type: SDL3.lib**
<br/>
![image](https://github.com/user-attachments/assets/44f7e7e5-e676-4bdb-9d71-86a26f7db9a9)
<br/>










