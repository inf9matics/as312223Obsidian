#FoEC  #lecture 

# Principle of Superposition
## Examples
### Example 1
![[attachments/Lecture 4 31.10.2023 31.10.2023 16_05_20.excalidraw]]

### Example 2
![[attachments/Lecture 4 31.10.2023 31.10.2023 16_14_35.excalidraw]]

## Applications
1. Replacement of a complex circuit (multiple-input) analysis by series of analyses of single input circuit
2. **Incremental Analysis**- finding of increments of circuit responses resulting form a increment of single excitation (source)
	1. Calculate increments of initial/final values

## Example of increment analysis
### Simple example without values
![[attachments/Lecture 4 31.10.2023 31.10.2023 16_27_43.excalidraw]]

### Example with values
![[attachments/Lecture 4 31.10.2023 31.10.2023 16_32_30.excalidraw]]

# Thevenin's Theorem and Norton's Theorem
## Passive two-terminal (passive one port)
### Theorem
For any passive two-terminal subcircuit its equivalent resistance can be represented as a single resistor

## Active two-terminal subcircuit
### Thevenin's Theorem
#### Definition
Any active linear two-terminal subcircuit can be replaced by the equivalent circuit that consists of a series connection of an ideal voltage source *E*<sub>0</sub> and a resistance *R*<sub>t</sub>
*E*<sub>0</sub>- the subcircuit open-circuit voltage
*R*<sub>t</sub>- the subcircuit equivalent (internal) resistance

### Norton's Theorem
#### Definition
Any active linear two-terminal subcircuit can be replaced by the equivalent circuit that consists of a parallel connection of an ideal current source *I*<sub>S</sub> and a conductance *G*<sub>t</sub>
*I*<sub>S</sub>- the subcircuit short-circuit current
*G*<sub>t</sub>- the subcircuit equivalent (internal) conductance