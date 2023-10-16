#FoCP #lecture 

# Code file
```embed-cpp
PATH: vault://FoCP/Assets/lecture3_16.10.2023.cpp
```

# Functions
## Defining a function
```
return_type function_name (args) {
	instructions

	return x
}
```

## Difference between declaring arguments
- When declaring an argument as such `(type name)`, the variable will not be changed
- When declaring an argument as such `(type &name)`, the variable will be changed from inside the function (it's referenced directly)

# Switch statement
## Definition
```
switch(int variable)
case n : instructions;
case n-1 : instructions;
case n-2 : instructions;
```

## Behaviour
The default behaviour of `switch` is a fall-through, which can be interpreted as an error by the compiler, (*which can be prevented with `case n : instructions; [[fallthrough]]`*), which means that it executes every case that's \<= variable

# Arrays
- Initializing an array `type array[n]`, where *n* is the size of array