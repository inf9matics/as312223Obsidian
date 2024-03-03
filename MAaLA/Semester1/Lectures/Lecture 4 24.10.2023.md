#MAaLA #lecture 

# Definition and properties
## Parity

## Boundedness
### Definition
A function *f* is **bounded** if its range is bounded

## Sketching graphs of functions
$$
\begin{align}
	&\text{Translation by vector }[p,q]&&y=f(x)\rightarrow y=f(x-p)+q\\
	&\text{Horizontal scaling}&&y=f(x)\rightarrow y=f(\alpha x),(\alpha>0)\\
	&\text{Vertical scaling}&&y=f(x)\rightarrow y=\alpha f(x),(\alpha>0)\\
	&\text{Refecltion across }Y\text{-axis}&&y=f(x)\rightarrow y=f(-x)\\
	&\text{Refecltion across }X\text{-axis}&&y=f(x)\rightarrow y=-f(x)\\
\end{align}
$$

## Elementary functions
### Elementary functions
$$
\begin{align}
	&\text{U}(x)=1&&\forall x\in\mathbb{R}\\
	&\text{id}(x)=x&&\forall x\in\mathbb{R}\\
	&\exp(x)=e^x&&\forall x\in\mathbb{R}\\
	&\sin(x)=\sin x&&\forall x\in\mathbb{R}\\
\end{align}
$$

### Definition
A function is called an elementary function if it is
- a basic elementary function
- a constant multiple of an elementary function
- a sum, difference, product or quotient of two elementary functions
- a composition of two elementary functions
- the inverse of some elementary function
- an elementary function with restricted domain

## Inverses of trigonometric functions
### Exercise
![[attachments/Lecture 4 24.10.2023 24.10.2023 13_01_29.excalidraw]]

### Another exercise
![[attachments/Lecture 4 24.10.2023 24.10.2023 13_05_13.excalidraw]]

# Metric spaces
## Definition
Let *X* be a nonempty set; we say that a function
*d* : *X* × *X* → <0, ∞) is a **metric** if for all *x*, *y*, *z* in *X* the following conditions are satisfied
$$
\begin{align}
	&d(x,y)=0\Leftrightarrow x=y\\
	&\\
	&\\
\end{align}
$$

## Euclidean metrics
$$
\begin{align}
	&X=\mathbb{R},d(x_1,x_2)=|x_1-x_2|\\
	&X=\mathbb{C},d(z_1,z_2)=|z_1-z_2|\\
	&X=\mathbb{R}^2,d((x_1,y_1),(x_2,y_2))=|x_1-x_2|+|y_1-y_2|\\
\end{align}
$$

## Ball
A **ball** of radius *r* about the point *P* is the set
$$
\begin{align}
	&B(P,r)=\set{Q\in X:d(P,Q)<r}\\
\end{align}
$$

## Boundedness
A set *S* is **bounded** if it is contained in some ball

## A cluster point
A point *P* is called a **cluster point** of a set *S*, if any neighbourhood of *P* contains at least one point from *S*

### Exercise
Find the cluster points of the sets
$$
\begin{align}
	&1°(0,1)&&3°\mathbb{Q}\cap \langle 0,1\rangle\\
	&2°\langle 0,1\rangle&&4°\langle \frac{1}{n}:n\in\mathbb{N}\rangle\\
\end{align}
$$

## Closed sets
A set *S* is **closed** if it contains all its cluster points

The **closure** of a set *S* is the smallest closed set that contains *S*. The closure of *S* is denoted as *cl*(*S*)