def print_slash(slash): 
	if (slash == 0): 
		return
	print("' ", end = "") 
	print_slash(slash - 1) 

def print_diamond(dollar): 
	if (dollar == 0): 
		return 
	print("$", end = "")
	print(" ", end = "") 
	print_diamond(dollar - 1) 
 
def pattern_upper(n, num): 

	# base case 
	if (n == 0): 
		return
	print_slash(n) 
	print_diamond(2 * (num - n) + 1) 
	print_slash(n) 
	print() 

	pattern_upper(n - 1, num) 


def pattern_lower(n, num): 

	if (n == 0): 
		return 
	print_slash(num - n + 1) 
	print_diamond(2 * n - 1) 
	print_slash(num - n + 1) 
	print() 

	pattern_lower(n - 1, num) 


def pattern(n, num): 

	pattern_upper(n, num) 
	pattern_lower(n - 1, num)  


if __name__ == '__main__': 
	n = (int(input("Enter the number:")))
	if n > 0:
		pattern(n, n)
	else:
		print("Null")