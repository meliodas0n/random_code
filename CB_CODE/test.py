num = input()

even = 0
odd = 0
for i in range(len(num)):
	if i % 2 == 0:
		odd += int(num[i])
	else:
		even += int(num[i])

print(even, odd)