/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Password Validation
* Related Files:
*/

#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char password[100]; 
    char storedPassword[] = "Secure123"; 
    char length = strlen(storedPassword);

    printf("Enter your password: ");
    scanf("%s", password);

    if (strlen(password) < 8)
	{
        printf("Login failed. Password is too short. It should be at least 8 characters long.\n");
    } else 
	{
        int passwordMatches = 1;    

        for (i = 0; i < length; i++) 
		{
            if (password[i] != storedPassword[i]) 
			{
                passwordMatches = 0;
                break;
            }
        }

        if (passwordMatches) 
		{
            printf("Login successful. Welcome!\n");
        } else 
		{
            printf("Login failed. Incorrect password.\n");
        }
    }

    return 0;
}
