# CPP-Final
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
https://rosettacode.org/wiki/Abelian_sandpile_model#C.2B.2B - For more code and explaination on the sandpile model


### Results

The results we have gotten at first was a sandpile that only made 1 iteration and then stopped. We had to look and figure out that we didnt include the while loop

In the end the results are that we made a working Abelian sandpile model that works with the .dat  files as well as if you put in 2 parameters. 

![] (https://im3.ezgif.com/tmp/ezgif-3-f45f8df40909.gif)

## What we could have done differently

What we could have done differently is optimize it more, I feel that there are better optimizatoin methods to check if the sandpile is stable or not, rather than running through the matrix after each iteration


