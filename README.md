/*
* Функция PairSum() возвращяет наименьшее возможное значение максимальной суммы пары двух элементов.
* Пары в векторе подбираются таким образом чтобы самое большое значение суммы двух элементов было как можно меньше.
* Функция принимает массив четной длинный и возвращет значение минимальной возможной максимальной суммы двух элементов.
* Сначала массив сортируется, потом с обоих концов числа начинают суммироваться друг с другом и находить максимальное значение пары двух чисел.
* Тем самым складывая самое большое число вектора (находящееся справа после сортировки) с самым маленьким - левым, мы получаем наименьшее занчние суммы для правого числа.
*/
