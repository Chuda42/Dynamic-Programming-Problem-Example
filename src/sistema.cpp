#include "../include/sistema.h"

matriz_t max_datos_procesados(nat n, nat* datos, nat* rendimiento) {
	matriz_t OPT = crear_matriz(n+1, n+1);
	//inicializo en 0 los inicies con 0 en algun lado
	for(nat i = 0; i<n+1; i++){
		OPT[0][i] = 0;
		OPT[i][0] = 0;
	}
	nat minimoXiSj;
	for (nat k = 1; k < n+1; k++) {
		if(datos[n] < rendimiento[k]){
			minimoXiSj = datos[n];
		}else{
			minimoXiSj = rendimiento[k];
		}
		OPT[n][k] = minimoXiSj;
	}
	for (nat j = n-1; j > 0; j--){
		for (nat i = 1; i < j; i++){
			OPT[i][j] = 0;
		}
	}
	for (nat i = n-1; i > 0; i--){
		for (nat j = 1; j < i + 1; j++){
			if(datos[i] < rendimiento[j]){
				minimoXiSj = datos[i];
			}else{
				minimoXiSj = rendimiento[j];
			}
			if (OPT[i+1][1] < minimoXiSj + OPT[i+1][j+1]){
				OPT[i][j] = minimoXiSj + OPT[i+1][j+1];
			}else if (OPT[i+1][1] >= minimoXiSj + OPT[i+1][j+1]){
				OPT[i][j] = OPT[i+1][1];
			}
		}
	}
	return OPT;
}

Lista planificacion_optima(nat n, matriz_t OPT) {
	Lista reinicios = crear_lista();
	nat i = 1;
	nat j = 1;
	while (i < n) {
		if (OPT[i + 1][1] == OPT[i][j]){
			insertar_al_final(i, reinicios);
			j = 0;
		}
		i++;
		j++;
	}
	return reinicios;
}

