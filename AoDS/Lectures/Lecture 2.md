#AoDS #lecture #selfFilled

# Complements in systems with radix *R*
## Definition
For any non-negative positional number there are 2 types of complements
### R's complement
$$
\begin{align}
	&\overline{\overline{A}}=R^N-A\forall A\not=0,(A=0,\bar{\bar{A}}=0)\\
\end{align}
$$

### R-1's complement (diminished complement)
$$
\begin{align}
	&\overline{A}=R^N-A-R^{-M}\\
\end{align}
$$<br>

# Numbers with signs in binary systems
## Definition
You represent the sign with the leftmost digit

## Complements for negative numbers
### R's complement
$$
\begin{align}
	&|\overline X|=\sum_{i=-M}^{N-1}\overline{x_i}R^i\\
\end{align}
$$

### R-1's complement
$$
\begin{align}
	&|\overline{\overline{X}}|=\sum_{i=-M}^{N-1}\overline{x_i}R^i+R^{-M}\\
\end{align}
$$

# Notations in digital systems
## Fixed-point notation
The placement of the radix point is fixed

## Floating-point notation
The placement of the radix point can change
$$
\begin{align}
	&sign*mantissa*radix^{exponent}\\
\end{align}
$$

# BCD
## Definition
4 digit (tetrad) binary codes representing 2<sup>4</sup> combinations (out of which 6 are not used).
Because there are different codes, each digit can represent a different number.

## Self-complementing
Complements for binary numbers correspond to complements for decimal numbers
### Exceptions
- 8421
- Excess-3