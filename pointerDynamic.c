+ACM-include+ADw-stdio.h+AD4-
+ACM-include +ADw-stdlib.h+AD4-
void myLocExample()+AHs-

	printf(+ACI-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+AFw-n+ACI-)+ADs-
	int +ACo-ptr +AD0- (int +ACo-)malloc(sizeof(int))+ADs-  // Allocating memory for one integer
	printf(+ACI-Hellow this frist value +ACU-p  +AFw-n+ACI-,ptr)+ADs-
	
	if (ptr +AD0APQ- NULL)+AHs-
		printf(+ACI-Memory allocation+ACEAXA-n+ACI-)+ADs-
		return 1+ADs-
	+AH0-
	// assiginging values 
	+ACo-ptr +AD0- 10+ADs-  // Assigning value to the allocated memory
    printf(+ACI-Value: +ACU-d+AFw-n+ACI-, +ACo-ptr)+ADs-  // Printing the value

    free(ptr)+ADs-  // Freeing the allocated memory
	
	
	
		printf(+ACI-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ACI-)+ADs-
	
+AH0-
int main()+AHs-
	
	
	myLocExample()+ADs-
	return 0+ADs-
+AH0-
