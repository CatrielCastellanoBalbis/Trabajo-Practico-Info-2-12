### Trabajo Práctico Informática 2 comisión 12

## Control de Semáforos

__Memoria descriptiva:__ La idea consta de controlar el encendido y apagado de las luces de dos semáforos ubicados en la intersección de dos calles, ambos se inicializarán en rojo para evitar accidentes y tendrán su tiempo de encendido para cada color definido por variables que se podrán cambiar según el flujo de tránsito que haya, el horario en el cual se utilice o cualquiera sea el motivo por el que se quiera cambiar. Las variables: *tiempo_1, tiempo_2, tiempo_3, tiempo_seguridad.* serán las que se utilizarán para la transición entra cada color de cada semáforo y para que permanezcan en ese respectivo estado. Los semáforos, ideados como *S1* y *S2* tendrán 3 salidas cada uno, una para cada color.
Ambos semáforos comenzarán en rojo para evitar cualquier tipo de accidente, *S1 = R ; S2 = R ;* al transcurrir *tiempo_seguridad* el semáforo 1 estará en color verde mientras que el segundo quedará en rojo por la duración de *tiempo_1*, luego ambos cambiarán a color amarillo *S1 = A ; S2 = A;* durante *tiempo_2* para posteriormente ponerse primero el semáforo 1 en rojo, y luego de *tiempo_seguridad* el semáforo 2 en verde (*S2 = V ; S1 = R ;)* durante lo que dure el *tiempo_3*. Una vez concluído, ambos semáforos pasarán al color amarillo (*S1 = A; S2 = A;*) durante *tiempo_2* hasta que el semáforo 2 vuelva a rojo y se esperará nuevamente *tiempo_seguridad* para colocar en verde el semaforo 1 y continuar con el ciclo.

__Máquina de estado__:
![Máquina de Estado - TP1](https://user-images.githubusercontent.com/82192142/132864300-b7de2a2d-75b6-4bf2-aaa9-c9f73f639d37.png)

