# Abelian Sandpile
### How to run

In order to run the program type

To run a random sandpile based on given parameters
* ./main.exe 4 30 

To run a sandpile from a predefined file

* ./main.exe data/sandpile_10x10_4.dat 



### Problems that we had while making the program:

* Our first problem was fully grasping the information given to us, talking to you really helped us clear up some questions that we had. And reading more about the sandpile helped as well
* Another issues that we had is we had a segementation fault, and through cout testing we found the segmentation fault to be in our try catch function, so we had to figure out
where the error lies. Turns out the error was in checking the boundaries of the square, and in order to fix that we had to modify our code and it ran

* we also had a problem with an infinate loop, but that was solved relitvly easy as well




### Sources we have used for our Sandpile

http://www.cplusplus.com/forum/unices/54404/ - Passing a file as a function reference argument
https://rosettacode.org/wiki/Abelian_sandpile_model#C.2B.2B - For more code and explaination on the sandpile model

