# This is a project of TBS Game, inspired in civilization and other games

## this is a little tutorial for setup this project


## step 1

first you go to dowload SDL in this link -> (https://www.libsdl.org/)
<br/>
![image](https://github.com/user-attachments/assets/5d04db4b-fb33-4d9b-a9cc-25a932263897)
<br/>
after the install you go to extract file in a folder you gonna make the project

## step 2

now in visual studio (recomended) after clone the repositori, click with left bottom in mouse on the project and select properties (propriedades)
<br/>
![image](https://github.com/user-attachments/assets/e37acddf-d2b9-42ea-affb-3bcc792f8621)
<br/>
in properties select general (geral) in C/C++
<br/>
![image](https://github.com/user-attachments/assets/a6738f8d-0e69-4d92-b609-0511bf56c3aa)
<br/>
and click in (diretórios de inclusão adicionais) and ckick in down arrow and edit
<br/>
![image](https://github.com/user-attachments/assets/495d9bef-ac6e-4343-a9af-ea340e40113c)
<br/>
now click in (nova linha)
<br/>
![image](https://github.com/user-attachments/assets/33ee8bf2-fbd2-4c1c-817b-4009c4ce65fd)
<br/>
and click in three points
<br/>
![image](https://github.com/user-attachments/assets/a0d3498d-caab-4700-9754-d7ff4e423e36)
<br/>
and select the folder (include) in the folder SDL

## step 3

click in (vinculador) in (geral) and edit (Diretórios de Biblioteca adicionais) and add a line like the last one, select the folder x64 in lib in SDL
<br/>
![image](https://github.com/user-attachments/assets/6d9ecef8-a37f-466d-aa2e-89caf4ca3e18)
<br/>

now go to (sistema), click in SubSystem and select Console (/SUBSYSTEM:CONSOLE)
<br/>
![image](https://github.com/user-attachments/assets/28fc07f0-7e8b-44b0-b9f1-eeaa4edbbf77)
<br/>

## step 4

to finish go to (entrada) and edit (Dependências adicionais), just add a line and write SDL3.lib
<br/>
![image](https://github.com/user-attachments/assets/44f7e7e5-e676-4bdb-9d71-86a26f7db9a9)
<br/>










