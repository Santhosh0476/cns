#include<stdio.h>
#include<string.h>
int main(){
	int p,q,m,e,n,dn,x,y,c,de,i;
	printf("enter the value of p");
	scanf("%d",&p);
	printf("enter the value of q");
	scanf("%d",&q);
	printf("enter the value of m");
	scanf("%d",&m);
	printf("enter the value of e");
	scanf("%d",&e);
	n=p*q;
	dn=(p-1)*(q-1);
	int d;
	for(i=1;i<dn;i++){
		if(((e%dn)*(i%dn))%dn==1){
		d=1;
		break;
	}
}
	x=pow(m,e);
	c=x%n;
	y=pow(c,d);
	de=y%n;
	printf("enter the encrypted value",c);
	printf("enter the dicrypt value",y);
	return 0;
}
