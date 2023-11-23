#MAaLA #lecture 

# Homework
## Tasks
- Do an exercise with bisection method on moodle

# Continuity of functions
## Intermediate Value Theorem
### Definition
If a function *f* is continuos on an interval *\[a, b]*, then for every *d* between *f(a)* and *f(b)* there exists *c in (a,b)* such that *f(c)=d*

### Name
The property is named the **Darboux property**

### Examples
#### Example 1
![[attachments/Lecture 8 21.11.2023 21.11.2023 12_35_32.excalidraw]]

### Methods of finding the argument for 0
#### Bisection method
It's just binary search between *a* and *b*

## The Weierstrass Theorem
### Definition
A function *f* attains it's global minimal and maximal value in an interval that it's continuous in

## Oscillation
### Definition
The oscillation of a function *f* is the distance between it's global minimum and maximum

# Derivatives
## Derivative
### Definition 1
The derivative of a function *f* at point *a* is defined as
$$
\begin{align}
	&f'(a)=\lim_{h\rightarrow0}\frac{f(a+h)-f(a)}{h}\\
\end{align}
$$
on condition that the limit exists and is finite
If *f'(a)* exists, then we say that *f* is differentiable at *a*
We also write
$$
\begin{align}
	&f'(a)=\frac{dy}{dx}|_a=\frac{df}{dx}|_a\\
\end{align}
$$

### Examples
#### Example 1
$$
\begin{align}
	&f'(1)=\lim_{h\rightarrow0}\frac{(1+h)^2-1^2}{h}=\lim_{h\rightarrow0}\frac{h^2+2h}{h}=\lim_{h\rightarrow0}(h+2)=2\\
\end{align}
$$

#### Example 2
$$
\begin{align}
	&f'(a)=\lim_{h\rightarrow0}\frac{(a+h)^2-a^2}{h}=\lim_{h\rightarrow0}\frac{h^2+2ah}{h}=\lim_{h\rightarrow0}(h+2a)=2a\\
\end{align}
$$

#### Example 3
$$
\begin{align}
	&f(x)=|x|,\space a=0\\
	&\lim_{h\rightarrow0}\frac{|0+h|-|0|}{h}=\lim_{h\rightarrow0}\frac{|h|}{h}\\
	&\\
	&\lim_{h\rightarrow0^+}\frac{|h|}{h}=1&\lim_{h\rightarrow0^-}\frac{|h|}{h}=-1\\
\end{align}
$$
There fore, it's not differential

#### Example 4
Suppose that *f'(a)* exists, then
$$
\begin{align}
	&\lim_{x\rightarrow a}=x=a+h=\lim_{h\rightarrow0}f(a+h)\\
	&\lim_{h\rightarrow0}[f(a+h)-f(a)+f(a)]\\
\end{align}
$$
#needToFill 

## Theorems
#needToFill
### Proof of theorem #3
![[attachments/Lecture 8 21.11.2023 21.11.2023 12_57_54.excalidraw]]

## Chain Rule
If *f* is differentiable at *a* and *g* is differentiable at *b = f(a)*, then the composite function *g\*f* is differentiable at *a* and
$$
\begin{align}
	&(g*f)'(a)\\
\end{align}
$$
#needToFill 

## Table of derivatives
$$
\begin{align}
	&(c)'=0'\\
	&(x^\alpha)'=\alpha*x^{\alpha-1}\\
	&(a^x)'=\ln a*a^x\\
	&(\log_ax)'=\frac{1}{x*\ln a}\\
	&\\
	&(\sin x)'=\cos x\\
	&(\cos x)'=-\sin x\\
	&(\tan x)'=\frac{1}{\cot^2 x}\\
	&()
	&\\
	&(\arcsin x)'=\frac{1}{\sqrt{1-x^2}}\\
	&(\arccos x)' = -(\arcsin x)'\\
\end{align}
$$

## Evaluation examples
### Example 1
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_10_03.excalidraw]]

### Example 2
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_12_07.excalidraw]]

### Example 3
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_13_57.excalidraw]]

### Example 4
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_16_26.excalidraw]]

### Example 5
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_20_43.excalidraw]]

### Example 6
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_27_52.excalidraw]]

### Example 7
![[attachments/Lecture 8 21.11.2023 21.11.2023 13_33_59.excalidraw]]

## Orders of derivatives
### Definition
If *f'* has a derivative, that derivative is a derivative of higher order
*f'*, *f''*, *f'''*, *f<sup>(1)</sup>*, *f<sup>(2)</sup>*, *f<sup>(n)</sup>*, *f<sup>(∞)</sup>*

## Parametric functions
#needToFill