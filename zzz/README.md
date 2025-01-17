## Jornada durante a busca pela solução


### Entrega Parcial

<details>
<summary>Dificuldades</summary>

1. Entender o que exatamente é o Giroscópio e como ele é usado no robô
2. Saber como funciona o sensor MPU-6050
3. Saber como funciona o microcontrolador STM32F767ZI
4. Saber como usar esses dois no platformIO dentro do VS
5. 
6. Fazer a comunicação entre o sensor e o microcontrolador sem os equipamentos

</details>
---
<details>
<summary>Abordagens</summary>

1. Pesquisar sobre o Giroscópio e seu uso em robôs terrestres. 
 1.1 Só tem materiais sobre o uso em robôs do sensor no arduíno. 
2. Ler o datasheet e anotar as informações relevantes para o desafio
2.1 Ver vídeos e códigos do sensor sendo usado
3. Ver vídeos e códigos do microcontrolador sendo usado
4. Pesquisar sobre o platformIO na board e no framework usado no desafio, além de ver vídeos e códigos dele sendo usado. 
5. 

</details>
---
<details>
<summary>Materiais de Referência</summary>

1. Melhor <a href="https://www.youtube.com/watch?v=mRZGdvJQnPU">vídeo explicando sobre o giroscópio</a>; 
2. Link do <a href="https://invensense.tdk.com/wp-content/uploads/2015/02/MPU-6000-Datasheet1.pdf">datasheet</a>
2.1 Pareceu interessante :) <a href = "https://www.youtube.com/watch?v=F1IdRtIDdIs">vídeo do movimento do braço</a>
3. 
4. Um <a href="https://www.youtube.com/watch?v=PYSy_PLjytQ">vídeo que resumiu bem o platformIO</a>
5. 

</details>

------

Estava perdido então só escrevi meus pensamentos durante esse processo. 

### Dias

<details> 
<summary>Dia 7/1</summary>

 - Li toda a documentação do projeto, abri os links que estavam lá e estou tentando entender como resolver isso. 
 - Vi uma parte do repositório do RoboCin que tinha coisas sobre odometria e como as coisas estavam estruturadas lá. Tenho uma vaga impressão com o que vou ter que mexer, mas ainda preciso que eu entenda melhor as ferramentas e os componentes que mencionaram. 
 - Estou esperando a platformIO terminar de criar o projeto que coloquei num board Freestyle e na framework mBed como falaram. (mas não sei se esse board estaria certo, vou testar e ver como é).
 - PlatformIO terminou. Agora vou mexer um pouco nele. 
 - Depois de passar um tempo sem ver nada disso (porque não sabia muito o que fazer), percebi que o giroscópio deve ter um padrão para mandar os dados e eu posso ver isso antes de focar mais profundamente na comunicação dele com o microcontrolador. ou talvez eu esteja falando besteira. 
</details>
---
<details> 
<summary>Dia 8/1</summary>

 - Vi que mandaram um vídeo sobre o desafio vou ver ele enquanto espero o platformIO fazer o projeto na board Nucleo F767ZI que mandaram no discord que seria o ideal para fazer as coisas por meio da framework mbed. 
 - Consegui entender bem mais sobre o que é o giroscópio e a mexer mais no platformIO, ainda preciso ver como mexer no microcontrolador sem ter o negocinho físico comigo além de fazer a comunicação do sensor para obter os dados. Sinto que estou entendendo bem mais o que fazer agora. 
 - Acho que preciso construir um planejamento de atividades e deadlines...
</details>
---
<details> 
<summary>Dia 8/1</summary>

 - Vou aprender a mexer no microcontrolador por meio do platformIO de maneira "remota". 
 - Algumas coisas estão meio confusas, a biblioteca do MPU6050 deixou um pouco mais claro sobre como vou conseguir os números e alguns exemplos de código que vi que fizeram com o mbed clarearam um pouco mais o "como" vou codar, mas ainda não sei como testar, seja remotamente (com alguém tendo o microcontrolador e o sensor) ou em um simulador online que funcione direito. 
 - Fazer a build do platformIO levou 16min, mas pelo menos no código teste que coloquei lá ele funcionou bem. 

</details>
---
<details> 
<summary>Dia 15/1</summary>

 - Passei muito tempo sem mexer nisso e pensando em como fazer o código (além de estar lidando com uns problemas em casa). 
 - Depois de ler o discord, vi algumas coisas úteis para levar em conta quando continuar as coisas do desafio. 

</details>
---
<details> 
<summary>Dia 17/1</summary>

 - Estive meio mal, pensei em só não fazer nada... mas eu quero entrar e vou me arrepender de não tentar. Posso estar fora da faculdade o que dificulta algumas coisas pra mim, mas quando voltar vai ser mais fácil codar lá no CIn do que no meu computador aqui em casa. 

</details>
---
