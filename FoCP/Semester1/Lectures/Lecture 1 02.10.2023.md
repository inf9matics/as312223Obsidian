#FoCP #lecture 

Basics of C++ (syntax, `#include`, "Hello world", etc.)

```
#include <iostream>
#include <cmath>

int main() {
	int a;
	int b;

	a=1;
	b=2;

	std::cout << "Hello world" << a+b << std::endl;
	//Output:
	//Hello world 3

	std::cout << a/b << std::endl;
	//Output:
	//0

	float c;
	c = a/b;
	std::cout << c << std::endl;
	//Output:
	//0.5

	float d {-.45};
	//Initialization that's more "general"

	double e {.765325982053245325432543};
	//Double the precision/length of float

	int n=30;
	std::cout << std::setprecision(n) << e << std::endl;
}
```

Decimals are never precise in computer science