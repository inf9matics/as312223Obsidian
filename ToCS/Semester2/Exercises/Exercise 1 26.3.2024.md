#ToCS #exercise 

# Exercises
## Exercise 2
### Task
Remove insignificant zeros from a base 3 number

### Solution
q<sub>0</sub>- start, removeZerosFromLeft
q<sub>1</sub>- goToRight
q<sub>2</sub>- removeZerosFromRight
q<sub>3</sub>- toToLeft
q<sub>4</sub>- stop
q<sub>5</sub>- correct0

|       | q0   | q1   | q2   | q3   | q4   | q5   |
| ----- | ---- | ---- | ---- | ---- | ---- | ---- |
| **n** | nq0R | nq2L | nq4N | nq4N | nq4N | -    |
| **0** | nq0R | 0q1R | nq2L | 0q3L | -    | 0q4L |
| **1** | 1q1R | 1q1R | 1q3L | 1q3L | -    | -    |
| **2** | 2q1R | 2q1R | 2q3L | 2q3L | -    | -    |
| **.** | .q5L | .q1R | nq3L | .q3L | -    | -    |

## Exercise 3
Task
Multiplication by 3 of a base 3 number

### Solution
q<sub>0</sub>- start
q<sub>1</sub>- multiply,0carry
q<sub>2</sub>- multiply,1carry
q<sub>3</sub>- stop


|       | q0   | q1   | q2   | q3   |
| ----- | ---- | ---- | ---- | ---- |
| **n** | nq1L | nq3N | 1q3L | nq3N |
| **0** | -    | 0q1L | 1q1L | -    |
| **1** | -    | 2q1L | 0q2L | -    |
| **2** | -    | 1q2L | 2q2L | -    |

## Exercise 4
### Task
Multiplication by 3 of a binary number

### Solution
q<sub>0</sub>- start
q<sub>1</sub>- multiply,0carry
q<sub>2</sub>- multiply,1carry
q<sub>3</sub>- multiply,2carry
q<sub>4</sub>- stop


|       | q0   | q1   | q2   | q3   | q4   |
| ----- | ---- | ---- | ---- | ---- | ---- |
| **n** | nq1L | nq4N | 0q2L | 1q1L | nq4N |
| **0** | -    | 0q1L | 1q1L | 1q2L | -    |
| **1** | -    | 1q2L | 0q3L | 1q3L | -    |
