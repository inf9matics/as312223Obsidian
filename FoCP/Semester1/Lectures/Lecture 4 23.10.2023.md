#FoCP #lecture 

# Blocks and local variables
```cpp
{
	int i = 1;
	{
		int a;
		i = 2;
		int i = -1;
		{
			i = 3;
			int i = 4;
		}
		i = 5;
	}
}
```