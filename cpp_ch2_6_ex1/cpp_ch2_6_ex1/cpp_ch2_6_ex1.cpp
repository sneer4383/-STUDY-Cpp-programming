#include <iostream>
#include <cstring>

int main()
{
    char arr1[100];
    char arr2[100];
    char arr3[100];

    fgets(arr1, sizeof(arr1), stdin);
    fgets(arr2, sizeof(arr2), stdin);

    strlen(arr1);
    strlen(arr2);
    
    std::cout << "strlen arr1: " << strlen(arr1)-1 << std::endl;    //���� ���
    std::cout << "strlen arr2: " << strlen(arr2) - 1 << std::endl;

    if(!strcmp(arr1, arr2))
        std::cout << "���� �����Դϴ�." << std::endl;
    else
    {
        strcpy(arr3, arr1);
        strcat(arr3, arr2);
        std::cout << "�ٸ� �����Դϴ�." << std::endl;
        std::cout << arr3 << std::endl;
    }
    return 0;

}