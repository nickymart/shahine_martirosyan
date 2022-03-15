int my_atoi(char* arr)
{
	int res = 0;
	for (int i = 0; arr[i] >= 48 && arr[i] <= 57 ; i++){
		res = res * 10 + arr[i] - '0';
    	}
	return res;
}
