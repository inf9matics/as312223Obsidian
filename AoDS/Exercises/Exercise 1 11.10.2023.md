#AoDS #exercise

# Basics of number systems
$$
\begin{align}
	&\text{Positional weighted number systems}\\
	&A_R=x_0*R^0+x_1*R^1+...+x_{n-1}*R^{n-1}\\
\end{align}
$$

# Horner's scheme
```
xs- source number
Rt- target radix
xt- tager number
while(x>0){
	xt.append(x%Rt)
	x = x/Rt
}
xt.reverse
```