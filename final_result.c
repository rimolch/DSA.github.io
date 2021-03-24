#include<stdio.h>

int main(){
 int
    ft_marks[7] = {86,78,87,78,87,98,86},
    st_marks[7]= {87,89,81,82,83,85,89},
    final_marks[7]= {85,87,89,80,91,92,93};
    int i;
    int roll_no_count;
    double total_marks[7];
    for( i = 0; i < 7; i++){
        total_marks[i] = ft_marks[i]/4.0 + st_marks[i] /4.0 + final_marks[i] /2.0 ;
        
    }
    for(roll_no_count = 1; roll_no_count <= 7;roll_no_count++){
        printf("Roll No: %d\t Total Marks: %0.0lf\n",roll_no_count,total_marks[roll_no_count-1]);
        }
   
    return 0;
}