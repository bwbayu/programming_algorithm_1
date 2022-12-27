#include <stdio.h>
//blm diupload yg ada komen
int main(){
	int n1, n2, n3, i;
	
	scanf("%d", &n1);
	int arr1[n1];
	for(i = 0; i < n1; i++){
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d", &n2);
	int arr2[n2];
	for(i = 0; i < n2; i++){
		scanf("%d", &arr2[i]);
	}
	
	scanf("%d", &n3);
	int arr3[n3];
	for(i = 0; i < n3; i++){
		scanf("%d", &arr3[i]);
	}
	
	int setn1=n1/2, setn2=n2/2, setn3=n3/2;
	
	int totaln1=0;
	for(i = 0; i < setn1; i++){
		totaln1 += arr1[i];
	}
	totaln1 = totaln1/setn1;
	
	int totaln2=0;
	for(i = 0; i < setn2; i++){
		totaln2 += arr2[i];
	}
	totaln2 = totaln2/setn2;
	
	int totaln3=0;
	for(i = 0; i < setn3; i++){
		totaln3 += arr3[i];
	}
	totaln3 = totaln3/setn3;
	
	if((totaln1 > totaln2) && (totaln1 > totaln3) && (totaln2 > totaln3)){
		printf("%d %d %d\n", totaln1, totaln2, totaln3);
	}
	else if((totaln1 > totaln2) && (totaln1 > totaln3) && (totaln3 > totaln2)){
		printf("%d %d %d\n", totaln1, totaln3, totaln2);
	}
	else if((totaln2 > totaln1) && (totaln2 > totaln3) && (totaln1 > totaln3)){
		printf("%d %d %d\n", totaln2, totaln1, totaln3);
	}
	else if((totaln2 > totaln1) && (totaln2 > totaln3) && (totaln3 > totaln1)){
		printf("%d %d %d\n", totaln2, totaln3, totaln1);
	}
	else if((totaln3 > totaln1) && (totaln3 > totaln2) && (totaln1 > totaln2)){
		printf("%d %d %d\n", totaln3, totaln1, totaln2);
	}
	else{
		printf("%d %d %d\n", totaln3, totaln2, totaln1);
	}
	
	int total1= 0; 
	for(i = setn1; i < n1; i++){
		total1 += arr1[i];
	}
	total1 = total1/setn1;
	
	int total2=0;
	for(i = setn2; i < n2; i++){
		total2 += arr2[i];
	}
	total2 = total2/setn2;
	
	int total3=0;
	for(i = setn3; i < n3; i++){
		total3 += arr3[i];
	}
	total3 = total3/setn3;
	
	if((total1 > total2) && (total1 > total3) && (total2 > total3)){
		printf("%d %d %d\n", total1, total2, total3);
	}
	else if((total1 > total2) && (total1 > total3) && (total3 > total2)){
		printf("%d %d %d\n", total1, total3, total2);
	}
	else if((total2 > total1) && (total2 > total3) && (total1 > total3)){
		printf("%d %d %d\n", total2, total1, total3);
	}
	else if((total2 > total1) && (total2 > total3) && (total3 > total1)){
		printf("%d %d %d\n", total2, total3, total1);
	}
	else if((total3 > total1) && (total3 > total2) && (total1 > total2)){
		printf("%d %d %d\n", total3, total1, total2);
	}
	else{
		printf("%d %d %d\n", total3, total2, total1);
	}
	return 0;
}