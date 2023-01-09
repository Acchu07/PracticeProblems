#include <iostream>

int main(){
    int i = 1;
    int n;
    std::cin >> n;
    while(i<=n)
    {
        int space = n - i;
        while(space)
        {
            std::cout << " ";
            space--;
        }
        int j = 1;
        while(j<=i)
        {
            std::cout << "*";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
}

// int main(){
//     int i = 1;
//     int n;
//     std::cin >> n;
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             if(j<=(n-i))
//             {
//                 std::cout << " ";
//                 j++;
//             }
//             else
//             {
//                 std::cout<< "*";
//                 j++;
//             }
//         }
//         std::cout << std::endl;
//         i++;
//     }
// }