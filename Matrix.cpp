#include <stdio.h>
int arr_set1[3][3],arr_set2[3][3],arr_set3[3][3],num_case=0;

	fung_arr1(){
		printf("-------------------Enter MatA-----------------\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("MatA[%d][%d] : ",i,j);
			scanf("%d",&arr_set1[i][j]);
		}}}
			
	fung_arr2(){
		printf("-------------------Enter MatB-----------------\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("MatA[%d][%d] : ",i,j);
			scanf("%d",&arr_set2[i][j]);
		}}}
	
	star(){
	printf("Case1 PlusMatrix()\n");
	printf("Case2 MinusMatrix()\n");
	printf("Plese Enter Case : ");
	scanf("%d",&num_case);
	}
	
	show_arr1(){
		printf("-------------------MatA-----------------\n");
		for(int i=0;i<3;i++){
		printf("%d %d %d \n",arr_set1[i][0],arr_set1[i][1],arr_set1[i][2]);	
	}}
	
	show_arr2(){
		printf("-------------------MatB-----------------\n");
		for(int i=0;i<3;i++){
		printf("%d %d %d \n",arr_set2[i][0],arr_set2[i][1],arr_set2[i][2]);	
	}}
	
	show_arr3(){
		for(int i=0;i<3;i++){
		printf("%d %d %d \n",arr_set3[i][0],arr_set3[i][1],arr_set3[i][2]);	
	}}
		
	plus_arr(){
		printf("\n\n\n------------Positive Matrix A+B ---------\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr_set3[i][j]=arr_set1[i][j]+arr_set2[i][j];
	}}}	

	Minus_arr(){
		printf("\n\n\n------------Positive Matrix A-B ---------\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr_set3[i][j]=arr_set1[i][j]-arr_set2[i][j];
	}}}	
		
	
	fung_arr3(){
		switch(num_case){
			case 1 :	plus_arr();break;
			case 2 : 	Minus_arr();break;
			default :	printf("Enter Number 1,2 only\n");
	}}
	
	
main(){
	star();
	fung_arr1();
	fung_arr2();
	show_arr1();
	show_arr2();
	fung_arr3();
	show_arr3();
	
	return 0;
}
	
