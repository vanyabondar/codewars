void wave_sort(int arr[], int arr_size) {
	int i, j, x;
	int *sort_arr = new int[arr_size];
	for (i = 0; i < arr_size; i++)
		sort_arr[i] = arr[i];
	for (i = 0; i < arr_size - 1; i++)
		for (j = i + 1; j < arr_size; j++)
			if (sort_arr[i] > sort_arr[j]) {
				x = sort_arr[i];
				sort_arr[i] = sort_arr[j];
				sort_arr[j] = x;
			}

	if (arr_size % 2 == 0)
	  for (i = 0; i < arr_size / 2; i++) {
	  	arr[i * 2] = sort_arr[arr_size - i - 1];
	  	arr[i * 2 + 1] = sort_arr[arr_size / 2 - i - 1];
	  }
  else
  {
	  for (i = 0; i < arr_size / 2 - 1; i++) {
	  	arr[i * 2] = sort_arr[arr_size - i - 1];
	  	arr[i * 2 + 1] = sort_arr[arr_size / 2 - i];
	  }
		arr[arr_size - 1] = sort_arr[0];
  }	
delete[] sort_arr;
  
}
