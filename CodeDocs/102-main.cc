#include "100-main.h"
/**
* main - tests code
*
* Return: 0 (success)
*/
int main(void)
{
        Person Human;
        FillShoppingInfo(&Human);
        WriteReceipt(Human);

        return(0);
}
