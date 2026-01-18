#include <iostream>
void swap(int &x, int &y) { // x and y are references to original variables
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10.2, num2 = 20;
    std::cout << "Before swap: num1=" << num1 << ", num2=" << num2 << std::endl;
    swap(num1, num2); // The function modifies num1 and num2 directly
    std::cout << "After swap: num1=" << num1 << ", num2=" << num2 << std::endl;
    return 0;
}




















//#include <stdio.h>
//#include <unistd.h>
//
//int main()
//{
//	int num1= 9, num2 = 3, num3 = 2;
//	printf("Result = %d", num3 * num1 / num2);
////	printf("Loading...");	
////	fflush(stdout);
////	for (int i=0; i<=100;i++)
////	{
////		printf("\rProgress: %d%%", i);
////		fflush(stdout);
////		usleep(50000);
////	}
////	printf("\nDone!");
//}







//#include <stdio.h>
//int main(void)
//{
//	int matrix[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//	int Count=0;
//	for (int i=0; i<3;i++)
//	{
//		for (int j=0;j<3;j++)
//		{
//			if (matrix[i][j] %2 == 1)
//			{
//				Count++;
//			}
//		}
//	}
//	printf("Numbers are: %d", Count);
//	return 0;
//}





//#include <stdio.h>
//
//void func(int x);
//
//int main(void)
//{
//	func(5);
//	func(5);
//	return 0;
//}
//
//void func(int x)
//{
//
//	static int a=1;
//	a =a *x;
//	printf("a=%d \nx=%d \n", a, x);
//}


//#include <stdio.h>
//
//int main(void)
//{
//	int matrix[2][3] = {{1,2,3},{4,5,6}};
//	int *ptr = &matrix[0][0];
//	printf("%d", *(ptr+4));
//	return 0;
//}


















//#include <stdio.h>
//int main(void)
//{
//	int array[10] = {3,0,8,1,12,8,9,2,13,10}, x, y, z;
//	x = ++array[2];
//	y = array[2]++;
//	z = array[x++];
//	
//	printf("%d %d %d", x,y,z);
//}



//#include <stdio.h>
//#include <string.h>
//
//int main() {
//    char str[100], rev[100];
//    int len, i;
//
//    printf("Enter a string: ");
//    gets(str);  // use fgets in real code
//
//    len = strlen(str);
//
//    // reverse the string
//    for(i = 0; i < len; i++) {
//        rev[i] = str[len - 1 - i];
//    }
//    rev[len] = '\0';
//
//    // compare both
//    if(strcmp(str, rev) == 0)
//        printf("Palindrome\n");
//    else
//        printf("Not Palindrome\n");
//
//    return 0;
//}









//#include <stdio.h>
//
//int count_vowels(char str[]);
//
//int main(void)
//{
//	char str[500];
//	printf("Enter a string: ");
//	fgets(str, sizeof(str), stdin);
//	int count = count_vowels(str);
//	printf("Vowels = %d", count);
//	
//	return 0;
//}
//
//int count_vowels(char str[])
//{
//	int count = 0;
//	for (int i =0; i<str[i] != '\0'; i++)
//	{
//		char ch = str[i];
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			ch += 32;
//		}
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//


















//#include <stdio.h>
//int main(void)
//{
//	for (int i = 1; i<=4; i++)
//	{
//		for (int space = 0; space <4-i; space++)
//		{
//			printf(" ");
//		}
//		for (int j=0; j<2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//int i, j, space, rows = 4;
//for (i = 1; i <= rows; i++) {
//        // Print leading spaces
//        for (space = 1; space <= rows - i; space++) {
//            printf(" ");
//        }
//        // Print asterisks
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}