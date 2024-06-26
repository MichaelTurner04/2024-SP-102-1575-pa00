
Programming Assignment 0 - PA00

# Development Environment Setup

---
### Task 1: Environment Setup

Start by reading through [[Dev Environment]] and following the instructions that pertain to you to obtain a Linux development environment.

Once set-up, open a _terminal_ and run the following command to test your environment:
  ```sudo -v```

In a properly configured environment, you may be prompted for your password but otherwise nothing will happen. If an error message appears, contact me or attend office hours for help. ==Take a screenshot of the results and save it as “env.png”== (CASE SENSITIVE)

---
## Task 2: Git-classes

Navigate to https://git-classes.mst.edu and log in. You should see an assignment (this one) posted. If you do not, contact me by email or come to office hours as soon as possible. Otherwise, ==take another screenshot and name it “git.png”== (CASE SENSITIVE)

Next, read [[Assignment Tutorial]] thoroughly before proceeding to the final task.

---
## Task 3: C++ Warm-up

For your first assignment, you’ll be tackling a million dollar problem 💰🤑💸 ! In May 24, 2000, The Clay Mathematics Institute the Millennium Prize Problems consisting of seven of the most challenging and important unsolved problems in all of Mathematics.

One of the most famous problems is the [Collatz Conjecture](https://en.wikipedia.org/wiki/Collatz_conjecture), which is notable for being easy to understand but seemingly impossible to solve! It goes like this ...

```
Start with any positive integer (i)
  while i is greater than 1
    if i is even, divide it by 2
    else, multiply i by 3 and add 1

EX: 42 -> 21 -> 64 -> 32 -> 16 -> 8 -> 4 -> 2 -> 1
```

Lothar Collatz conjectured that the process will _eventually_ reach 1 for _any_ positive integer starting point, but it has never been proven despite nearly a century of work and a $1,000,000 incentive!

Your assignment will have you compute the **total stopping time** of an integer, which is the number of iterations it takes to reach 1. For example, 42 has a total stopping time of 8 as illustrated above.

## Input / Output:

The input will consist of an integer _n_ followed by _n_ integers _k_, where 1 <= _k_ <= 10,000.

For each integer _k_, compute the _total stopping time_ (t) and output 
```
Total stopping time of <t>
```

### Sample I/O:

For an input of:

```
3
1
9
1024
```

Your main.cpp should produce an output of:

```
Total stopping time of 0
Total stopping time of 19
Total stopping time of 10
```

Notice that the first line of the input is not a number to compute total stopping time for, but instead an indicator of how many numbers will be inputted. **Your output should match this exactly**, that means **do not** add any _extra_ output such as prompting the user or you will lose points. 

## Screenshots:

Place the screenshots for the previous tasks (env.png and git.png) inside the assignment folder. Make sure to use these exact names and do not forget to commit these files to the repository.

## Scoring:

To get full points on the assignment...
* Include the necessary screenshots in your assignment folder
* Implement the functions in _Collatz.h_ **(unit_tests)**
* Complete the _main()_ function to compute the total stopping times for a collection of integers **(stdio_tests)**
* Address any warnings given by cppcheck **(static analysis)**
* Format your code using the clang-format utility **(style check)**

---
# General information regarding this repository

## Coding
Tips for coding.

### What to name my files?
We give you empty files corresponding to those you should complete!

### Where to code?
We assume you're on a Linux machine, and can install all the software needed by this auto-grader.
See the syllabus for more details.

### How to get this code?
Find the blue button that says "clone", on the home page of this repository.
If you have an ssh key set up:
 `git clone git@... `
If you don't have an ssh set up, or know what that is:
 `git clone https://.. `

### Where to read this file?
This file is nicely displayed in the Gitlab web interface, but you can read it wherever.

### What to install?
See the script's warnings.

### How to code?
Using this script, we strongly encourage you to program incrementally. 
Program code required by the unit tests, in the requested order. 
In general, don't proceed to a later function if you are not passing the first one.
If you get stuck, instead of moving on, get help!
See the syllabus for extended coding tips.

## Auto-grader

### How to run the auto-grader on your machine?
Run the following in the root directory of your repository:
 `./grade.sh `

## How to run the auto-grader on Gitlab-CI?
Make sure all your files are added, committed, and pushed to the appropriate branch (see Git section below).
Navigate to the Gitlab web interface to confirm these changes exist on the server.

## How to make sure I'm getting points?
 * Click on CI/CD -> Jobs -> the latest job.
 * Is it passing, green, etc? 
 * What grade does it say you have?
 * Whatever grade the latest job says, is what we think you have!

## std-io tests: differences between your std-out and the desired std-out
See:  `your _diffs/ ` and  `your _outputs ` to determine what went wrong. 
We run these diffs automatically, so you may not need to manually inspect these files.

## Unit tests: we're micromanaging your functions!
See the unit tests themselves, and run them in your favorite debugger:
 `unit _tests/ `

## Git
Git happens...

### add, commit, push
From within your git repository (folder), add, commit, and push all the non-generated files. 
This means add your cpp and png files, but not a.out, etc.
Verify you can see the files on git-classes in the web interface.
If you can see the correct files on git-classes in your master branch, your submission is complete.
Make sure all the requested files are in the root directory of the repository unless otherwise specified.

## Errors
You should not change any of the grading files themselves. 
If you do, you will see a warning, and it will give you a 0.
If you accidentally did that:
`git checkout firstfourcharactersoflastcommitbyus graderfileyoubroke`

### Is the auto-grader broken?
Is the error you're encountering our fault or yours?
Either may be possible, while the latter is a bit more likely.
Double-check all the diffs, and step through all code to see.
If you think you found a bug, please let us know!

## When is this due?
See the syllabus!

## grade.sh: this automated grading framework
For more details on the generalized auto-grader, see:
https://gitlab.com/classroomcode/grade-sh/grade-sh
