#include<stdio.h>
int main(){
    int i,n,a,num;
    int check =0;
    scanf("%d",&n);
   
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
     scanf("%d",&a);
    for(i=0;i<n;i++){
        if(a==arr[i]){
            check=1;
            num =i;
            break;
        }else{
            check=0;
        }
}
if(check==1){
    printf("%d",num);
}else{
    printf("-1");
}


}