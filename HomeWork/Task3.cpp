//#include <iostream>
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//    // Начальная высота бамбука в сантиметрах
//    const int beginHeight = 100; // 1 метр = 100 см
//
//    // Ежедневный рост бамбука в сантиметрах
//    const int dailyGrowth = 50; // 50 см
//
//    // Размер съедаемого гусеницами бамбука за одну ночь в сантиметрах
//    const int nightFade = 20; // 20 см
//
//    // Вычисляем высоту бамбука к середине третьего дня
//    int height = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;
//
//    // Выводим результат
//    std::cout << "Высота бамбука к середине третьего дня: " << height << " см" << std::endl;
//
//    return 0;
//}