#MAaLA #lecture 

# Elementary functions
## Definition
A function *f* from a set *X* to a set *Y* is a rule (or a method) of assigning one element in *Y* to each element in *X*
$$
\begin{align}
	&f:X\rightarrow Y\\
	&x\rightarrow f(x)\\
\end{align}
$$

$$
\begin{align}
	&X,D,D_f\text{ - domain of a function }f\\
	&Y\text{ - codomain of function }f\\
	&R:=\set{y\in Y:y=f(x)\text{ for some }x\in X},R,R_f\text{ - range of }f\\
\end{align}
$$

## Domain
If the domain is not given, we assume that its domain is equal to the greatest subset of R such that formula *f* has sense

## Examples of domains
$$
\begin{align}
	&\frac{1}{g(x)}&g(x)\not=0\\
	&\sqrt[2n]{g(x)}&g(x)\ge0\\
	&\frac{1}{\sqrt[2n]{g(x)}}&g(x)>0\\
\end{align}
$$

## Exercises
### Exercise in finding domains
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_38_12.excalidraw|100%]]

### Another exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_43_29.excalidraw|100%]]

# Three dimensional graphs
Let *f* be a real-valued function of *n* real variables
$$
\begin{align}
	&f:D\rightarrow \mathbb{R}&D\subseteq\mathbb{R}^n\\
\end{align}
$$

## Exercises
### Exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_52_30.excalidraw|100%]]

### Another exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_56_44.excalidraw|100%]]

# Function properties
## Surjectivity
Let *f* : *X* → *Y* be a function and let *R* be its range. If *Y* = *R*, i.e
$$
\begin{align}
	&\forall y\in Y\exists x \in X\space f(x)=y\\
\end{align}
$$
then we say that *f* is a **surjection/ a surjective function/ an onto function**

## Injectivity
If a function *f* : *X* → *Y* sends different elements of *X* to different elements of *Y*, i.e
$$
\begin{align}
	&\forall x_1,x_2\in X(x_1\not=x_2\implies f(x_1)\not=f(f_2))\\
\end{align}
$$
or equivalenty
$$
\begin{align}
	&\forall x_1,x_2\in X(f(x_1)=f(f_2)\implies x_1=x_2)\\
\end{align}
$$

## Bijectivity
If a function is both **injective** and **surjective** a function is **bijective**

# Bijectivity nad inverse function
Let *f* : *X* → *Y* be a function. If there exists a function *g* : *Y* → *X* such that
$$
\begin{align}
	&g(y)=x\Leftrightarrow f(x)=y\\
\end{align}
$$
we say that *g* is the **inverse function** to *f* and we write *g* = *f* ¯¹

## Examples
### Example
![[attachments/Lecture 3 17.10.2023 17.10.2023 13_23_43.excalidraw|100%]]

## Another example
![[attachments/Lecture 3 17.10.2023 17.10.2023 13_27_56.excalidraw|100%]]

### Third example
![[attachments/Lecture 3 17.10.2023 17.10.2023 13_31_23.excalidraw|100%]]

## Composition
Suppose that *f* : *X* → *Y* and *g* : *Y* → *Z*, then **the composition of *g* and *f*** is the function *h* : *X* → *Z* defined by the formula
$$
\begin{align}
	&h(x)=g(f(x))\\
\end{align}
$$

## Examples
### Example
$$
\begin{align}
	&h(x)=\cos^5 x,&f(x)=\cos x,g(x)=x^4\\
	&h(x)=6^{(3x-1)^2},&f(x)=(3x-1)^2,g(x)=6^x\\
\end{align}
$$

## Theorem
Suppose *f* : *X* → *Y* has the inverse function. Then (*f* ¯¹ ° *f*)(*x*) = *x*