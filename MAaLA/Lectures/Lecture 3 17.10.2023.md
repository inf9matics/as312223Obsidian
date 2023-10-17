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
	&R:=\set{y\in Y:y=f(x)\text{ for some}x\in X},R,R_f\text{ - range of }f\\
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

## Exercise in finding domains
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_38_12.excalidraw|100%]]

## Another exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_43_29.excalidraw|100%]]

# Three dimensional graphs
Let *f* be a real-valued function of *n* real variables
$$
\begin{align}
	&f:D\rightarrow \mathbb{R}&D\subseteq\mathbb{R}^n\\
\end{align}
$$

## Exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_52_30.excalidraw|100%]]

## Another exercise
![[attachments/Lecture 3 17.10.2023 17.10.2023 12_56_44.excalidraw|100%]]

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