#FoCP #lecture 

# Static variables
## Function
They aren't destroyed after exiting the function

## Syntax example
```cpp
type function(){
	static type variableName;
	return operation(variableName);
}
```

# Default parameters
## Syntax example
```cpp
type function(const type argument=value){
	//operations
	return argument;
}
```

# Iostream
## Syntax example
```cpp
std::cin >> a >> b; //input a then b
std::cout << a; //output stream
std::cerr << b; //error stream
std::clog << b; //log (error) stream
```