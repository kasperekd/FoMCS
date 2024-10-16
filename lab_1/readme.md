# Лабораторная работа: Влияние частоты дискретизации на частотные характеристики сигналов

### Цель
Изучить влияние частоты дискретизации на частотные характеристики сигналов и освоить методы дискретного преобразования Фурье (ДПФ) для анализа и восстановления сигналов. В ходе работы студенты научатся генерировать, оцифровывать и анализировать сигналы, а также оценивать влияние параметров, таких как частота дискретизации и разрядность аналого-цифрового преобразователя (АЦП), на качество данных.

### Задачи лабораторной работы
1. **Генерация сигнала**: Создать и визуализировать непрерывный сигнал $` y(t) = 6\sin(2\pi ft + \frac{\pi}{5}) `$ с частотой $` f = 9 `$ Гц.
2. **Частотный анализ**: Определить максимальную частоту в спектре сгенерированного сигнала.
3. **Теорема Котельникова**: Рассчитать минимально необходимую частоту дискретизации для этого сигнала.
4. **Оцифровка сигнала**: Оцифровать сигнал с расчетной частотой дискретизации и сохранить значения в массив.
5. **Дискретное преобразование Фурье (ДПФ)**: Выполнить ДПФ для временных отсчетов и оценить ширину спектра, а также объем памяти, необходимый для хранения массива.
6. **Восстановление сигнала**: Восстановить исходный аналоговый сигнал из массива отсчетов и оценить его визуальное сходство с оригиналом.
7. **Повторный анализ**: Увеличить частоту дискретизации в 4 раза и повторить задания 4–6.
8. **Анализ аудиофайла**: Записать аудиофайл с голосом и с помощью приложения Audacity проанализировать его спектр, определив максимальную частоту и минимальную частоту дискретизации.
9. **Работа с аудиозаписью**: Используя библиотеки для работы со звуком, проанализировать запись голоса, считав аудиофайл и определив частоту дискретизации.
10. **Сравнение с Matlab**: Рассчитать частоту дискретизации для записи голоса и сравнить ее с расчетом в MATLAB.
11. **Прореживание сигнала**: Проредить массив отсчетов с помощью функции `downsample`, воспроизвести полученный сигнал и оценить качество его звучания.
12. **Спектральный анализ**: Выполнить ДПФ для оригинального и прореженного сигналов, вывести амплитудный спектр и оценить его ширину.
13. **Разрядность АЦП**: Оценить влияние разрядности АЦП на спектр сигнала, написав функцию для округления значений отсчетов, и сравнить спектры. Вывести среднюю ошибку квантования для различных разрядностей АЦП (3, 4, 5 и 6 бит).

### Результаты
![изображение](https://github.com/user-attachments/assets/ab323b8b-3b04-4f0b-bfa9-e8bac61a12de)
![изображение](https://github.com/user-attachments/assets/f0dea2bb-49c7-47e0-96e5-c5ac4c700415)
![изображение](https://github.com/user-attachments/assets/c9a816af-0217-4508-912b-586425013eb1)
![изображение](https://github.com/user-attachments/assets/0a00096b-999c-4191-8091-c81579e538c6)
![изображение](https://github.com/user-attachments/assets/1cc53c5d-5028-470a-b58f-5e2d1a3d691a)
![изображение](https://github.com/user-attachments/assets/f424374e-2697-4108-8edf-f4652583208e)
