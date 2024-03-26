#ToCS #exercise 

# Exercises
## Exercise 2
### Task
Remove insignificant zeros from a base 3 number

### Solution
q<sub>0</sub>- start
q<sub>1</sub>- zerosFromRight
q<sub>2</sub>- firstNumberFromRight
q<sub>3</sub>- zerosFromLeft
q<sub>4</sub>- firstNumberFromLeft
q<sub>5</sub>- stop


|       | q0   | q1   | q2   | q3   | q4   | q5   |
| ----- | ---- | ---- | ---- | ---- | ---- | ---- |
| **n** | nq0R | nq3L | nq3L | nq5N | nq5N | nq5N |
| **0** | nq1R | nq1R | 0q2R | nq3L | 0q4L | -    |
| **1** | 1q2R | 1q2R | 1q2R | 1q4L | 1q4L | -    |
| **2** | 2q2R | 2q2R | 2q2R | 2q4L | 2q4L | -    |
