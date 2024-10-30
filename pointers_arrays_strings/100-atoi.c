#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: input string
 *
 * Return: integer
 */

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int index = 0;

    // تحديد علامة الرقم (موجب أو سالب)
    while (s[index] != '\0' && (s[index] < '0' || s[index] > '9'))
    {
        if (s[index] == '-')
        {
            sign *= -1;  // تغيير العلامة إذا تم العثور على علامة سالب
        }
        index++;
    }

    // تحويل الأرقام إلى عدد صحيح
    while (s[index] >= '0' && s[index] <= '9')
    {
        result = result * 10 + (s[index] - '0'); // تحويل الحرف إلى رقم وإضافته للنتيجة
        index++;
    }

    return result * sign; // تعيين العلامة النهائية للنتيجة
}

