#DCT #exercise 

# Boolean algebra
## Operations in boolean algebra
### Sum
|     | **L**   | **H**   |
| --- | --- | --- |
| **L**   | L    | H    |
| **H**    | H    | H    |
### Multiplication
|     | **L**   | **H**   |
| --- | --- | --- |
| **L**   | L   | L   |
| **H**    | L    | H    |

### Complementing
| **L**   | **H**   |
| --- | --- |
| H    | L    |

## Identity law
$$
\begin{align}
	&x+0=x&x*0=0\\
	&x+1=1&x*1=x\\
\end{align}
$$

## Associative law
$$
\begin{align}
	&(a+b)+c=a+(b+c)\\
	&(ab)c=a(bc)\\
\end{align}
$$

## Distributive law
$$
\begin{align}
	&(a+b)c=ac+bc\\
	&a+bc=(a+b)(a+c)\\
\end{align}
$$

## Absorption law
$$
\begin{align}
	&1.&&x+xy=x&&x(x+y)=x\\
	&&&x*1=xy=x(1+y)=x&&x*x+xy=x+xy\\
	&\\
	&2.&&x+\overline{x}y=x+y&&x(\overline{x}+y)=xy\\
	&&&x+\overline{x}y=(x+\overline{x})(x+y)=x+y&&x\overline{x}+xy=xy\\
\end{align}
$$

## De Morgan's law
$$
\begin{align}
	&\overline{a+b}=\overline{a}*\overline{b}\\
	&\overline{ab}=\overline{a}+\overline{b}\\
\end{align}
$$

## Examples
### Getting polynomial
![[attachments/Exercise 1 18.10.2023 18.10.2023 10_29_49.excalidraw|80%center]]

### Simplification
![[attachments/Exercise 1 18.10.2023 18.10.2023 10_38_07.excalidraw|80%center]]

### Example
![[attachments/Exercise 1 18.10.2023 18.10.2023 10_43_45.excalidraw|80%center]]

### De Morgan's example
![[attachments/Exercise 1 18.10.2023 18.10.2023 10_47_10.excalidraw|80%center]]

# Usecases
## Voting
### Truth table
| a   | b   | c   | d   |     | A   | P   |
| --- | --- | --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 0   |     | 0   | 0   |
| 0   | 0   | 0   | 1   |     | 0   | 0   |
| 0   | 0   | 1   | 0   |     | 0   | 0   |
| 0   | 0   | 1   | 1   |     | 0   | 1   |
|     |     |     |     |     |     |     |
| 0   | 1   | 0   | 0   |     | na  | na  |
| 0   | 1   | 0   | 1   |     | na  | na  |
| 0   | 1   | 1   | 0   |     | na  | na  |
| 0   | 1   | 1   | 1   |     | na  | na  |
|     |     |     |     |     |     |     |
| 1   | 0   | 0   | 0   |     | na  | na  |
| 1   | 0   | 0   | 1   |     | na  | na  |
| 1   | 0   | 1   | 0   |     | na  | na  |
| 1   | 0   | 1   | 1   |     | na  | na  |
|     |     |     |     |     |     |     |
| 1   | 1   | 0   | 0   |     | 0   | 1   |
| 1   | 1   | 0   | 1   |     | 1   | 0   |
| 1   | 1   | 1   | 0   |     | 1   | 0   |
| 1   | 1   | 1   | 1   |     | 1   | 0   |

### Vector representation
#### Binary
$$
\begin{align}
	&A^1=[<1101>,<1110>,<1111>]_{abcd}\\
	&A^0=[<0000>,<0001>,<0010>,<0011>,<1100>]_{abcd}\\
	&P^1=[<0011>,<1100>]_{abcd}\\
\end{align}
$$

#### Decimal
$$
\begin{align}
	&A^1=[<13>,<14>,<15>]_{abcd}\\
	&A^0=[<0>,<1>,<2>,<3>,<12>]_{abcd}\\
	&P^1=[<3>,<12>]_{abcd}\\
\end{align}
$$

### Karnaugh maps
|        | 00   | 01   | 11   | 10   |
| ------ | ---- | ---- | ---- | ---- |
| **00** | 0 1  | 0 2  | 0 4  | 0 3  |
| **01** | - 5  | - 6  | - 8  | - 7  |
| **11** | 0 13 | 114  | 1 16 | 1 15 |
| **10** | - 9  | - 10 | - 12 | - 11 |
