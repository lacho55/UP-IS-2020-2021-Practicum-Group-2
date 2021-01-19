# Практикум week12

## Задача 01
 За структурата Product(изделие), декларирана по следния начин:

 ```c++

 struckt Produc{
     char description[32];  // описание на изделие
     int partNum;           // номер на изделие
     double cost;           // цена на изделие
 };

 ````
да се извършат следните действие:
<br>
* а) Да се създадат две изделия и да се инициализират чрез следните данни:

<br>

<table style="width:100%; border:1px solid white;">
  <tr>
    <th>description</th>
    <th>partNum</th>
    <th>cost</th>
  </tr>
  <tr>
    <td>screw-driver</td>
    <td>456</td>
    <td>5.50</td>
  </tr>
  <tr>
    <td>hammer</td>
    <td>324</td>
    <td>8.20</td>
  </tr>
</table>
<br>

* б) Да се изведат на екрана компонентите на двете изделия, дефинирани в а)
* в) Да се дефинира масив от 10 структури Product. Да не се инициализира масивът.
* г) Да се напише оператор за цикъл, който инициализира масива, дефиниран във в) чрез нулевите за съответните типове на полетата на Product стойности.
* д) Да се дефинира масив от 5 структури Product и да се инициализира чрез стойностите:

<br>

<table style="width:100%; border:1px solid white;">
  <tr>
    <th>description</th>
    <th>partNum</th>
    <th>cost</th>
  </tr>
  <tr>
    <td>screw-driver</td>
    <td>456</td>
    <td>5.50</td>
  </tr>
  <tr>
    <td>hammer</td>
    <td>324</td>
    <td>8.20</td>
  </tr>
   <tr>
    <td>socket</td>
    <td>458</td>
    <td>5.75</td>
  </tr>
   <tr>
    <td>plier</td>
    <td>929</td>
    <td>10.50</td>
  </tr>
   <tr>
    <td>hand-saw</td>
    <td>536</td>
    <td>7.45</td>
  </tr>
</table>

<br>

* е) Да се изведе на екрана масивът, дефиниран в д).


## Задача 02
Да се дефинират структурите: Person, определяща лице по собствено име и фамилия и Client, определяща клиент като лице, притежаващо банкова сметка с дадена сума. Да се дефинират функции, които въвеждат и извеждат данни за лице и клиент. Да се напише програма, която:
* а) въвежда имената и банковите сметки на множеството от клиенти, зададено чрез едномерен масив;
* б) извежда имената и банковите сметки на клиентите от множеството;
* в) намира сумата от задълженията на клиентите от множеството.