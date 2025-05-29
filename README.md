Ejercicio 1:
Para este ejercicio se definen variables que almacenen los datos provistos por el usuario. Se solicita cual caracter se quiere contar y se compara caracter por caracter
mediante un "for" desde que inicia la cadena hasta que termina (espacio vacío) y se compara con el caracter que el usuario solicitó, si se cumple la condición, se aumenta el contador.
Para la lógica de invertir la cadena de texto, se recorre la cadena de texto de forma inversa mediante un "for" y se va disminuyendo en "1" el iterador, hasta que se alcanza el inicio,
el cual es el último caracter a imprimir.


Ejercicio 2:
Para este ejercicio, fue necesario utilizar la biblioteca "ctype.h" y "string.h". Se establece una función para validar si una cadena de texto tiene algún caracter no numérico incluido, 
de modo que si se identifica uno, se devuelve una condición de falso, a la cual el algoritmo lo envía al archivo de texto de "errores" sea cual sea el nombre definido. Cabe recalcar que,
la entrada de los datos de este algoritmo, será un archivo de texto plano el cual contendrá las líneas que serán analizadas. Para transportar estos datos del archivo al algoritmo, se utilizó
el stdin que extrae dichos datos. Si las líneas de estos archivos son válidas, serán exportadas al archivo de salidas válidas, donde se mostrará cada línea.
