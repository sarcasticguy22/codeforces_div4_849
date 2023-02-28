#include<stdio.h>

    int main(){
    int tc,n,x,y,flag;
    scanf("%d",&tc);
    while(tc--){
       x=0;y=0;flag=0;
       scanf("%d",&n);
       char str[n+1];
       scanf("%s",&str);
       for(int i=0;i<n;i++){

        if(str[i]=='L')
           x=x-1;
        else if(str[i]=='R')
           x=x+1;   
        else if(str[i]=='U')
           y=y+1;
        else y=y-1;

        if((x==1)&&(y==1)){
          flag=1;
          break;
        }
     }
      
    if(flag==1)
    printf("YES\n");
    else printf("NO\n");

}

return 0;
}
