
#include <stdio.h>

static void sort(void)
{	int v[100], i ,j;
	for(int i = 0; i < n; i++) 
		if (v[i] > v[j]) {
		int aux = v[i];
		v[i] = v[j];
		v[j] = aux;
	} 
}
