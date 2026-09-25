 #include <stdio.h>

int main()
{
	int first, second;

	printf("Enter two numbers: ");
	scanf("%d %d", &first, &second);

	if (first > second)
		printf("The greatest number is %d\n", first);
	else if (second > first)
		printf("The greatest number is %d\n", second);
	else
		printf("Both numbers are equal.\n");

	return 0;
}
