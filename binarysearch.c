#include <stdio.h>
int main()
{
int i, first, last, middle, n, j, arr[10];
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter integers\n", n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
printf("Enter value to find\n");
scanf("%d", &j);
first = 0;
last = n - 1;
middle = (first+last)/2;
while (first <= last) {
if (arr[middle] < j)
first = middle + 1;
else if (arr[middle] == j) {
printf("%d found at location %d.\n", j, middle+1)
break;}
else{
last = middle - 1;
middle = (first + last)/2;}}
if (first > last)
printf("Not found!");
return 0;
}
