#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main()
{
    const char* hangmanStages[] = {
    "",
    "   O\n",
    "   O\n   |\n",
    "   O\n  /|\n",
    "   O\n  /|\\\n",
    "   O\n  /|\\\n  / \n",
    "   O\n  /|\\\n  / \\\n"
};
    printf("%s\n", hangmanStages[0]);
}