#AoDS #exercise

# Basics of number systems
$$
\begin{align}
	&\text{Positional weighted number systems}\\
	&A_R=x_0*R^0+x_1*R^1+...+x_{n-1}*R^{n-1}\\
	&\\
	&R\text{ is the root of a number system}\\
	&x\text{ is the value on a given position}\\
	&\sum_{n=1}^{n}{x_{n-1}*R^{n-1}}\\
\end{align}
$$

# Horner's scheme
```
Higher to smaller radix

xs- source number
Rt- target radix
xt- tager number

i = 0
while(n>0){
	xt.append(x % Rt)
	x = x / Rt
}
xt.reverse
```
```
Smaller to higher radix

xs- source number
Rt- target radix
xt- target number

i = 0
while(i < xs.length){
	xt = xt + xs[i] * Rt^i
}
```