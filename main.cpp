#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;
void lambda(int n);
void teta(void);
int main(void)
{
    char response;
    int z=0;
    float x1,x2;
    cout<<"Enter two floating-point values :\n";
    cin>>x1 ;
    cin>>x2 ;
    float y= x1/x2;
    printf("x1 divided to x2 is  %.50f\n",y);

    for(int i=0; i<2;i++){
        printf("cought\n ahahah\n");
        lambda(3);
    }
    for(int i=0 ; y<1 ; i++){
        y=y-1;
        printf("float to int nearly:%i\n",i );
    }
    for (int i=0; i<z ;i++){
        for(int j=0 ; j<z ; j++){
                printf("#");
        }
        printf("\n");
    }

    cout<<"If you want to see nonstop running press Y :\n";
    cin>>response ;
    if(response == 'Y' || response=='y')
        {
            for (int i=1; ; i*= 5)
                {
                    printf("will go to overflow %i\n",i);
                    usleep(1000000);
                }

        }
    else{
                    cout<<"End of line \n";
        }

}

void lambda(int n){
    for(int i=0; i<2;i++){
        printf("it s from func\n");
        teta();
    }
}

void teta(void){
    printf("haha \n");
}
