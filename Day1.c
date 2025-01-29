/* #include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d",j);
            
        }
        printf("\n");
    }

return 0;
}*/


//inverted floyds right angle trangle

/*/#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <=i; j++) {
            printf("*  ");
        }
        printf("\n");
    }

return 0;
}*/
//inverted floyds left angle trangle
/*#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <=n-i; j++) {
            printf("  ");
        }
        for (j = 1; j <=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

return 0;
}*/

// star print trangle

/*#include<stdio.h>
int main() {
    int i, j,k,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <=n-i; j++) {
            printf("  ");
        }
        for (j = 1; j <=i; j++) {
            printf(" *  ");
        }
        printf("\n");
    }

return 0;
}*/

//right angle star print

/*#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

return 0;
}*/


//floyd's tringle

/*#include<stdio.h>
int main() {
    int i, j,n,count=1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)

        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

return 0;
}*/

//right angle number pattern
/*#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)

        {
            printf("%d ", j);
            
        }
        printf("\n");
    }

return 0;
}*/


// print trangle 1,22,333,4444 pattern
/*#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)

        {
            printf("%d ", i);
            
        }
        printf("\n");
    }

return 0;
}*/

#include<stdio.h>
int main() {
    int i, j,n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)

        {
            printf("%d ", j);
            
        }
        printf("\n");
    }

return 0;
}
