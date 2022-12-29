x = open('/Users/12512/Documents/GitHub/AdventCode/Day4/input.txt', 'r')

total = 0
for line in x:
	pair = line.rstrip().split(',')
	(a, b) = list(map(int, pair[0].split('-')))
	(c, d) = list(map(int, pair[1].split('-')))

	# Swap them so the first one starts first.
	# ... OR if the starts are tied but the ends are wrong.
	if (a > c) or (a == c and d > b):
		a, b, c, d = c, d, a, b

	# Check for full containment of the second pair within the first.
	if a <= c and b >= d:
		total += 1

print(total)