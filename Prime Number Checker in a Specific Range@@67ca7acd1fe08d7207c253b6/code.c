int printPrimesInRange(int a, int b){
    int i;
    int count=0;
    for( i=a;i<=b;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d",i);
        }

    }
}