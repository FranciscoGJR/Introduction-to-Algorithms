void InsertionSort(int size, int list[]){
	int i, j;

	for(j = 1; j < size; j++){
		int key = list[j];
		i = j - 1;
        while(i > -1 && list[i] > key){
            list[i + 1] = list[i];
            i = i -1;
        }

        list[i + 1] = key;
    }
}


void printList(int size, int list[]){
    int i;
    for(i = 0; i < size; i++)
        printf("%i ", list[i]);
    printf("\n");
}


void main(){
    int list0[6] = {5, 2, 4, 6, 1, 3};
    int list1[6] = {2, 5, 3, 6, 1, 3};
    int list2[6] = {2, 4, 5, 6, 1, 3};
    int list3[6] = {2, 4, 5, 6, 1, 3};
    int list4[6] = {1, 2, 4, 5, 6, 3};
    int list5[6] = {1, 2, 3, 4, 5, 6};

    InsertionSort(6, list0);
    InsertionSort(6, list1);
    InsertionSort(6, list2);
    InsertionSort(6, list3);
    InsertionSort(6, list4);
    InsertionSort(6, list5);

    printList(6, list0);
    printList(6, list1);
    printList(6, list2);
    printList(6, list3);
    printList(6, list4);
    printList(6, list5);
}
