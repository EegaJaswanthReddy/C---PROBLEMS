#include <stdio.h> 
 
struct Student { 
    char name[50]; 
    int roll; 
    int marks; 
}; 
int main() { 
    int n, i, max; 
    struct Student s[100]; 
    // Read number of students 
    scanf("%d", &n); 
 
    // Read student details 
    for (i = 0; i < n; i++) { 
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks); 
    } 
    // Find highest mark 
    max = s[0].marks; 
    for (i = 1; i < n; i++) { 
        if (s[i].marks > max) { 
            max = s[i].marks; 
        } 
    } 
    // Display student(s) with highest mark 
    for (i = 0; i < n; i++) { 
        if (s[i].marks == max) { 
            printf("%s %d %d", s[i].name, s[i].roll, s[i].marks); 
        } 
    } 
    return 0; 
} 

