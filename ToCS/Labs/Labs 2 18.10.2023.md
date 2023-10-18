#ToCS #labs 

# Tasks
## fr1(15)
```python
def f1(n):
	if(n <= 1):
		return n
	if(n%3 == 0):
		return n + fr(n-2)
	else:
		return n + fr(n-1)
```
![[attachments/Labs 2 18.10.2023 18.10.2023 12_06_47.excalidraw|80%center]]