#include <stdio.h>
#include <limits.h>
void formattedPrint(char* dataType, char* format, int size, long long signedMax, long long signedMin, unsigned long long unsignedMax) {
    printf("%-16s %-16s %-16d %-21lld %-21lld %-21lld\n", dataType, format, size, signedMax, signedMin, unsignedMax);
}
int main() {
    printf("%50s\n", "Data types table");
    printf("%-16s %-16s %-16s %-21s %-21s %-21s\n", "Data type", "Format", "Size (bytes)", "Max (signed)", "Min (signed)", "Max (unsigned)");
    formattedPrint("char", "%c", sizeof(char), (long long)CHAR_MAX, (long long)CHAR_MIN, (unsigned long long)UCHAR_MAX);
    formattedPrint("short", "%hd", sizeof(short), (long long)SHRT_MAX, (long long)SHRT_MIN, (unsigned long long)USHRT_MAX);
    formattedPrint("int", "%d", sizeof(int), (long long)INT_MAX, (long long)INT_MIN, (unsigned long long)UINT_MAX);
    formattedPrint("long", "%ld", sizeof(long), (long long)LONG_MAX, (long long)LONG_MIN, (unsigned long long)ULONG_MAX);
    formattedPrint("long long", "%lld", sizeof(long long), (long long)LLONG_MAX, (long long)LLONG_MIN, (unsigned long long)ULLONG_MAX);
    return 0;
}