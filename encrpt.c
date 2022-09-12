#include <stdio.h>

int main() {

	char in_arr[10], odd_arr[10], even_arr[10],out_arr[10];
    char str_in_arr[10];
	int i,j,k;

	void printArray(char arr[], int x);
	void printArrayWOnewLine(char arr[], int x);
	void encryptArr(char split_it[], int pSize, char even_arr[], char odd_arr[]);
	void mergeArr(char output_arr[], int i, char even_arr[], char odd_arr[], int z);

	//Running the program for continous inputs until ctrl-c
    while (1) {
	    // Read the array
	    printf("Enter the phone number to be encrypted\n");
	    for (i=0;i<10;i++) {
	    	scanf("%c", &str_in_arr[i]);
	    }

        printf("1111\n");
	    printArray(str_in_arr, 10);

	    encryptArr(str_in_arr, 10, even_arr, odd_arr);

	    // printing the even and odd array
	    printArray(even_arr, 5);
	    printArray(odd_arr, 5);
/* P    ree-Neh-wij => below would have the code if not wrote printArray function 
	    for (i=0; i<5; i++) {
	    	printf("%d  ", even_arr[i]);
	    }

	    // printing the ofdd array
	    for (i=0; i<5; i++) {
	    	printf("%d  ", odd_arr[i]);
	    }
*/

	    mergeArr(out_arr, 10, even_arr, odd_arr, 5); //How about #define 10 and 5 array sizes
	    printf(" \n *** The encrypted Array is ***\n");
	    printArray(out_arr, 10);
	    printf("\n *** Input phone number before Encryption \n");;
	    printArrayWOnewLine(str_in_arr, 10);
	    printf("\n *** Output phone number before Encryption \n");;
	    printArrayWOnewLine(out_arr, 10);

	    printf(" \n ...Repeating for another input \n");

	    } //while 1's

	return(0);
} //End of Main functuion


// ################################

void printArray(char pArr[], int pSize) {

	int i=0;
	printf("2222\n");
	for (i=0; i<pSize; i++) {
		printf("%c\n", pArr[i]);
	}
}

void printArrayWOnewLine(char pArr[], int pSize) {

	int i=0;
	for (i=0; i<pSize; i++) {
		printf("%c", pArr[i]);
	}
}

//Function2: to split the array

void encryptArr(char split_it[], int pSize, char even_arr[], char odd_arr[]) {

	int i,j=0,k=0; //Try not initializing and you will hit seg fault bcos of junk values
	printf("3333 Inside emcrptArr funct \n");
	for (i=0; i<pSize; i++) {
		if (i % 2 == 0) {
			printf("4444 inside even\n");
			even_arr[j] = split_it[i];
			j++;
		} else {
			odd_arr[k] = split_it[i];
			k++;
		}
	}
}


void mergeArr(char final_arr[], int fSize, char arr1[], char arr2[], int hSize) {

	int i=0, j=0, k=0;
	int endIndex=5; //This is where i want to copy in fi
	// Merge(append arr2 to arr1) 
	
	for (i=0; i< hSize; i++) {
		final_arr[i] = arr1[i];
	}

	for (j=0; j < hSize; j++) {
		final_arr[i] = arr2[j];
		i++;
	}
}
