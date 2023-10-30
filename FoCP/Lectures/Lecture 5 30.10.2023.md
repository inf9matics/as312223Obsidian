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

# iostream
## Syntax example
```cpp
std::cin >> a >> b; //input a then b
std::cout << a; //output stream
std::cerr << b; //error stream
std::clog << b; //log (error) stream
```

# File handling
## Syntax example
```cpp
#include <fstream> //library for file handling

std::ofstream outputFile; //output file stream
std::ifstream inputFile ("fileName"); //input file stream

outputFile.open("fileName"); //tries to reserve the file
if(outputFile.is_open()){ //check if available
	outputFile << value; //pipes value into outputFile (a stream)

}
outputFile.close(); //frees up the file

while(!inputFile.eof()){
	//operations
}
inputFile.close();
```