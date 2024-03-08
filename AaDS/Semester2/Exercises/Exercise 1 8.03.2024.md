#AaDS #exercise 

# Evaluating sums
## Fourier notation
$$
\begin{align}
	&\sum^{m}_{k=n}a_k\\
	&n\text{ - starting index}\\
	&m\text{ - number of indexes}\\
\end{align}
$$

## Iverson notation
#needToFill
$$
\begin{align}
	&\sum\\
\end{align}
$$

# Sum of geometric series
$$
\begin{align}
	&S_N=\sum_{0<k\leq n}x^k=x^k\\
\end{align}
$$

## Exercises
### Example 1
$$
\begin{align}
	&S_n=\sum^n_{i=1}{(i+c)}=\sum^n_{i+1}{i}+\sum^n_{i=1}{c}=\frac{(1+n)n}{2}+nc=n\frac{(1+n)+2c}{2}\\
\end{align}
$$

### Example 2
$$
\begin{align}
	&S_n=\sum^n_{i=1}{GCD(i,2)}=\lfloor\frac{n}{2}\rfloor2+\lceil\frac{n}{2}\rceil1\\
\end{align}
$$

### Example 3
$$
\begin{align}
	&S_m=\sum_{0\le k\le n}{k^3+(n+1)^3}=\\
	&=0^3+\sum_{0\le k\le n}{(k+1)^3}=\\
	&=\sum{k^3}+3\sum{k^2}+3\sum{k}+\sum{1(n+1)^3}\\
	\\
	&(n+1)^3=3S_n+3\sum{k}+\sum{1}\\
	&(n+1)^3-3\sum^n_{k=0}{k}-\sum^{n}_{k=0}{1}=3S_n\\
	&3S_n=(n+1)^3-3\frac{(0+n)(n+1)}{2}-(n+1)=\\
	&=(n+1)((n+1)^2-\frac{3n}{2}-1)=\\
	&=(n+1)((n+1)^2-\frac{3n+2}{2})=\\
	&=(n+1)(n^2+2n+1-\frac{3n+2}{2})=\\
	&=(n+1)(\frac{2n^2+4n+2-3n-2}{2})=\\
	&=(n+1)\frac{2n^2+n}{2}\\
	&S_n=\frac{(n+1)(2n^2+n)}{6}\\
\end{align}
$$