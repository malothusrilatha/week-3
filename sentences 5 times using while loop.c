 #include <stdio.h>
int main() {
    int i = 1, marks;
    while(i <= 5) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        if(marks >= 90)
            printf("Grade: A\n");
        else if(marks >= 75)
            printf("Grade: B\n");
        else if(marks >= 60)
            printf("Grade: C\n");
        else if(marks >= 40)
            printf("Grade: D\n");
        else
            printf("Grade: Fail\n");
        i++;
    }
	return 0;
}















