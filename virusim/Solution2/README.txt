Uso: virusim <numero-de-threads> <tamanho-da-populacao> <nro. experimentos> <probab. maxima>
Exemplo: virusim 2 30 5000 101

Dados experimentais:
Para população de tamanho 30 e 5000 experimentos e probabilidades de 0 a 100%

Single thread = 223 segundos
Speedup de 2 threads = 1.402
Speedup de 4 threads = 1.467

Para população de tamanho 128 e 5000 experimentos e probabilidades de 0 a 100%

Single thread = 223 segundos
Speedup de 2 threads = 1.402
Speedup de 4 threads = 1.467

População = 20
  ./virusim 1 20 5000 101 	54 total time
  ./virusim 2 20 5000 101		62 total time
  ./virusim 4 20 5000 101		78 total time

População = 50
  ./virusim 1 50 5000 101		638 total time
  ./virusim 2 50 5000 101		550 total time
  ./virusim 4 50 5000 101		526 total time

Populaçao = 80
  ./virusim 1 80 5000 101		2631 total time
  ./virusim 2 80 5000 101		2014 total time
  ./virusim 4 80 5000 101		1926 total time


