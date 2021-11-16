### Trabajo Práctico Informática 2 comisión 12

## Control de Semáforos

__Memoria descriptiva:__ La idea consta de controlar el encendido y apagado de las luces de dos semáforos ubicados en la intersección de dos calles, ambos se inicializarán en rojo para evitar accidentes y tendrán su tiempo de encendido para cada color definido por variables que se podrán cambiar según el flujo de tránsito que haya, el horario en el cual se utilice o cualquiera sea el motivo por el que se quiera cambiar. Las variables: *tiempo_1V, tiempo_2V, tiempo_A, tiempo_seguridad.* serán las que se utilizarán para la transición entra cada color de cada semáforo y para que permanezcan en ese respectivo estado. Los semáforos, ideados como *S1* y *S2* tendrán 3 salidas cada uno, una para cada color.
Ambos semáforos comenzarán en rojo para evitar cualquier tipo de accidente, (*S1 = R ; S2 = R;*) al transcurrir *tiempo_seguridad*, comenzará el ciclo con el semáforo 1 estará en color amarillo mientras que el segundo quedará en rojo por la duración de *tiempo_A* (*S1 = A; S2 = R;*), luego el semáforo 1 cambiará a color verde (*S1 = V ; S2 = R;*) durante *tiempo_1V* para posteriormente volver a ponerse el semáforo 1 en amarillo durante *tiempo_A* (*S1 = A; S2 = R;*), después el semáforo 1 estará en rojo y el semáforo 2 en amarillo (*S1 = R; S2 = A), otra vez utilizando el tiempo *tiempo_A*. Una vez concluído, el semáforo 2 estará en color verde durante *tiempo_2V* (*S2 = V; S1 = R*), luego volverá a estar en amarillo durante *tiempo_A* (*S2 = A; S1 = R;*) para finalmente estar ambos en color rojo y repetir el ciclo (*S2 = R; S1 = R;*).

__Máquina de estado__:

![image](https://user-images.githubusercontent.com/82192142/141989912-cb3609a6-a818-4dec-b3c8-f9e7682d2ff0.png)
