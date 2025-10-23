# ASCII-image-generator
A program to convert images into ascii art using TerminalGraphics Rajas-S  
This project is a branch of my TerminalGraphics project and is merely an advanced demonstration  
  
# How to use:  
1. place your image file in the same place as a python script where it is run (same directory)  
2. copy and past the python script image encoder to get a .txt file called output.txt  
3. create a c++ script - this project uses Visual Studio Community work environment c++ desktop file  
4. place output.txt in the same directory where the c++ scrip is run  
5. copy paste the TerminalGraphics header file in a header script  
6. copy paste the image renderer in a sepreate c++ script that #include s the TerminalGraphics header file  
7. configure the window size in the script which can be edited at the tgl.setWindow() function  
8. run the script and - if you avoided out of bounds errors with the arrays - you should see your image rendered as ascii art  
  
*note - you can configure the tileset string as you wish - to do this you need to edit the cpp file and potentially the python script.  

