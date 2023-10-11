/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 4 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/

#include <stdio.h>
struct Person {
	    char  Name[20] ;
	    float Score ;
	} ;
void student(int std){
    if (std == 1)
    {
        printf( "Student A" ) ;
    }else if (std == 2)
    {
        printf( "Student B" ) ;
    }else if (std == 3)
    {
        printf( "Student C" ) ;
    }else{
        printf( "Student D" ) ;
    }
}

int main(){
    Person A[4] ;
    for (int i = 0 ; i < 4 ; i++)
    {
        student(i+1);
        printf( "\nName : \n" ) ;
        scanf( "%s",&A[i].Name) ;
        printf( "Score : \n") ;
        scanf( "%f",&A[i].Score) ;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4 ; j++) {
            if (A[i].Score < A[j].Score) {
                struct Person Box = A[i] ;
                A[i] = A[j] ;
                A[j] = Box ;
            }
        }
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        printf( "%s ", A[i].Name) ;
    }
    printf("\n") ;
    for (int i = 0 ; i < 4 ; i++)
    {
        printf( "%.2f ", A[i].Score) ;

       
    }
 
    
    return 0 ;
}

//  printf("Person A\nName : \n") ;
//     scanf("%s",A.Name) ;
//     printf("Score : \n") ;
//     scanf("%f",&A.Score) ;

//     printf("Person B\nName : \n") ;
//     scanf("%s",B.Name) ;
//     printf("Score : \n") ;
//     scanf("%f",&B.Score) ;

//     printf("--| Person A Information |--\n") ;
//     printf("Name : %s (%c)\n", A.Name) ;
//     printf("Score : %.2f points\n", A.Score) ;

//     printf("--| Person B Information |--\n") ;
//     printf("Name : %s (%c)\n", B.Name) ;
//     printf("Score : %.2f points\n", B.Score) ;
    