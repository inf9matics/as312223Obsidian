#FoEC #lecture 

# Terms of circuit/graph
## Cutset
### Definition
It's a closed line around one or more nodes, crossing two or more branches, each branch only one

## Loop
### Definition
It's two or more branches that form a closed path

## Planar circuit
### Definition
It's a circuit whose graph can be drawn on a plane surface so that no branches cross. Then, the plane is divided by the circuit graph into distinct areas, windowpane areas

## Mesh
### Definition
It's the closed boundary of each windowpane area, a loop does not contain any other loop within it

# Fundamental laws
## Kirchhoff's laws
### Kirchhoff's Current Law (KCL)
#### Theorem
The algebraic sum of currents entering or leaving arbitrary node/cutset equals zero
$$
\begin{align}
	&\sum_\cdot I=0\\
\end{align}
$$

#### Convention
- + sign if the current arrowhead is directed into the node/cutset
- - sign if the current arrowhead is directed from the node/cutset

#### Number of equations
For given *n* nodes/branches the number of equations=n-1

### Kirchhoff's Voltage Law (KVL)
#### Theorem
Algebraic sum of voltages around arbitrary closed path equals zero
$$
\begin{align}
	&\sum U=0\\
\end{align}
$$

#### Convention
- + sign if the voltage arrowhead has a clockwise direction
- - sign if the voltage arrowhead has a counterclockwise direction

## Energy/Power Conservation Principle
### Theorem
The algebraic sum of power in a circuit, at any instant of time, must be zero
$$
\begin{align}
	&\sum W=\sum P*t=0&&\sum P=0\\
	&&&\sum P_{\text{supplied}}=\sum P_{\text{absorbed}}
\end{align}
$$