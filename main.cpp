#include <iostream>
//#define WINTER;
//#define SPRING;
#define SUMMER;
//#define AUTUMN;

#if defined(WINTER)
int main() {
    std::cout << "Winter!" << std::endl;
    return 0;
}
#elif defined(SPRING)
int main() {
    std::cout << "Spring!" << std::endl;
    return 0;
}
#elif defined(SUMMER)
int main() {
    std::cout << "Summer!" << std::endl;
    return 0;
}
#elif defined(AUTUMN)
int main() {
    std::cout << "Autumn!" << std::endl;
    return 0;
}
#endif;