//method 1

#include <stdio.h>

 void func(){

 	int i = 0; 	i++;

 	printf("i = %d\n",i);

 }

int main(){

	func();	//1

	func();//1

	func();//1

	func();//1

	return 0;

}

//method 2

#include<stdio.h>

 void func(){

 	static int i = 0;

 	i++;

 	printf("i = %d\n",i);

 }

int main(){

	func();	//1

	func();//2

	func();//3

	func();//4

	return 0;

}

//mrthod 2

#include<stdio.h>

void recurse()

{

    static int count = 1;

    if(count>5)

    {

        return;

    }

    printf("%d\n",count);

    count=count+1;

    recurse();

}

int main()

{

    recurse();//1 2 3 4 5

    return 0;

}
