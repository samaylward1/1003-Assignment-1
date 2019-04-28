/**********************************************************************************************
*  SUMMARY                                                                                    *
*  Given phrases to Encrypt and Decrypt                                                       *
*                                                                                             *
*  Rotation Cipher                                                                            *
*     ATTACK AT SUNRISE                                                                       *
*     ZSSZBJ ZS RTMQHRD                                                                       *
*                                                                                             *
*  Sustitution Cipher                                                                         *
*     PLEASE GET MILK AT THE SHOPS                                                            *
*     HSTQLT UTZ DOSA QZ ZIT LIGHL                                                            *
*                                                                                             *
*  Case 1: Encryption of a Rotation Cipher                                                    *
*  Case 2: Decryption of a Rotation Cipher                                                    *      
*  Case 3: Encryption of a Substitution Cipher                                                *
*  Case 4: Decryption of a Substitution Cipher                                                *
*                                                                                             *
*  A cipher invloves the rearranging of indiviual letter within a word. This has been used    *
*  in history as a method concealing a hidden message. It was first recorded being used by    *
*  Julius Ceasar where he used it to communicate with his generals. It was more recently      *
*  used in World War 2 by the Germans in order to prevent the English from knowing their      *
*  next move.                                                                                 *
***********************************************************************************************/
#include <stdio.h>

    char I1,I2,I3,I4,I5,I6,I7,I8,I9,I10,I11,I12,I13,I14,I15,I16,I17,I18,I19,I20,I21,I22,I23; //Individual letter values
    int m;   // Value for white space between words
    int x;  // Case values
    
    
int main()
{
    printf("Choose and option and press ENTER\n");
    printf("1 = Rotation Cipher Encryption\n");
    printf("2 = Rotation Cipher Decryption\n");
    printf("3 = Substitution Cipher Encryption\n");
    printf("4 = Substitution Cipher Decryption\n");
   
    scanf("%d", &x);                        // scanf allows a more usable interfece where the user can select the type of cipher
   
    switch(x)    
    {
        case 1:
            printf("Enter Phrase to be Encrypted:");
            scanf("%c%c%c%c%c%c%c %c%c %c%c%c%c%c%c%c",&I1,&I2,&I3,&I4,&I5,&I6,&I7,&I8,&I9,&I10,&I11,&I12,&I13,&I14,&I15,&I16);   
            printf("Encrypted phrase is:\n");  
               
            if (I1,I2,I3,I4,I5,I6,I7 != 65);   // Each letter entered is separated into a signle varible
            {
                if (I1 > 65 && I1 < 90);      // From the ASCII table, deducting 1 from the original number gives the resultant  
                    I1 = 90;                      
                    printf("%c", I1);
                    
                if (I2 > 66 && I2 < 90);
                    I2 = 83;
                    printf("%c", I2);
                   
                if (I3 > 66 && I3 < 90);      // Each variable is then printed to the console
                    I3 = I3 - 1;
                    printf("%c", I3);
                 
                if (I4 > 66 && I4 < 90);
                    I4 = 90;
                    printf("%c", I4);
                  
                if (I5 > 66 && I5 < 90);
                    I5 = 66;
                    printf("%c", I5);
                   
                if (I6 > 66 && I6 < 90);
                    I6 = 74;
                    printf("%c", I6);
                    printf(" ", m);         // Represents a space between words
                 
                if (I7 > 65 && I7 < 90);
                    I7 = 90;
                    printf("%c", I7);
                    
                 if (I8 > 66 && I8 < 90);
                    I8 = 83;
                    printf("%c", I8);
                    printf(" ", m);
                
                if (I9 > 66 && I9 < 90);
                    I9 = 82;
                    printf("%c", I9);
                   
                if (I10 > 66 && I10 < 90);
                    I10 = 84;
                    printf("%c", I10);
                 
                if (I11 > 66 && I11 < 90);
                    I11 = 77;
                    printf("%c", I11);
                  
                if (I12 > 66 && I12 < 90);
                    I12 = 81;
                    printf("%c", I12);
                   
                if (I13 > 66 && I13 < 90);
                    I13 = 72;
                    printf("%c", I13);
                
                 if (I14 > 66 && I14 < 90);
                    I14 = 82;
                    printf("%c", I14);
                   
                if (I15 > 66 && I15 < 90);
                    I15 = 68;
                    printf("%c", I15);
            }
            break;                        // Break kills the program is it has completed the task 
        
        case 2:
            printf("Enter Phrase to be Decrypted:");
            scanf("%c%c%c%c%c%c%c %c%c %c%c%c%c%c%c%c",&I1,&I2,&I3,&I4,&I5,&I6,&I7,&I8,&I9,&I10,&I11,&I12,&I13,&I14,&I15,&I16);   
            printf("Decrypted phrase is:\n");
             
            if (I1,I2,I3,I4,I5,I6,I7 != 65);
            {
                if (I1 > 65 && I1 < 90);
                    I1 = 65;
                    printf("%c", I1);            // For decryption of a rotation cipher as similar method is used
                                                 // In this case 1 is added to the ASCII value in order to return
                if (I2 > 66 && I2 < 90);         // the value to its original form 
                    I2 = 84;
                    printf("%c", I2);
                   
                if (I3 > 66 && I3 < 90);
                    I3 = I3 + 1;
                    printf("%c", I3);
                 
                if (I4 > 66 && I4 < 90);
                    I4 = 65;
                    printf("%c", I4);
                 
                if (I5 > 66 && I5 < 90);
                    I5 = 67;
                    printf("%c", I5);
                   
                if (I6 > 66 && I6 < 90);
                    I6 = 75;
                    printf("%c", I6);
                    printf(" ", m);                 // Represents a space between words
                 
                if (I7 > 65 && I7 < 90);
                    I7 = 65;
                    printf("%c", I7);
                    
                if (I8 > 66 && I8 < 90);
                    I8 = 84;
                    printf("%c", I8);
                    printf(" ", m);
                
                if (I9 > 66 && I9 < 90);
                    I9 = 83;
                    printf("%c", I9);
                   
                if (I10 > 66 && I10 < 90);
                    I10 = 85;
                    printf("%c", I10);
                 
                if (I11 > 66 && I11 < 90);
                    I11 = 78;
                    printf("%c", I11);
                 
                if (I12 > 66 && I12 < 90);
                    I12 = 82;
                    printf("%c", I12);
                   
                if (I13 > 66 && I13 < 90);
                    I13 = 73;
                    printf("%c", I13);
                 
                 if (I14 > 66 && I14 < 90);
                    I14 = 83;
                    printf("%c", I14);
                   
                if (I15 > 66 && I15 < 90);
                    I15 = 69;
                    printf("%c", I15);
            }
            break;                           // Break kills the program is it has completed the task 
    
        case 3:
            printf("Enter Phrase to be Encrypted:");
            scanf("%c%c%c%c%c%c%c %c%c %c%c%c%c%c%c%c",&I1,&I2,&I3,&I4,&I5,&I6,&I7,&I8,&I9,&I10,&I11,&I12,&I13,&I14,&I15,&I16);   
            printf("Encrypted phrase is:\n");
               
            if (I1,I2,I3,I4,I5,I6,I7 != 65);
            {
                if (I1 > 65 && I1 < 90);
                    I1 = 72;
                    printf("%c", I1);
                    
                if (I2 > 66 && I2 < 90);               // For a Substitution cipher there are many combinations of 
                    I2 = 83;                           // letters that can be rotated. The given values are replaced
                    printf("%c", I2);                   // with the corresponding substituted letter
                  
                if (I3 > 66 && I3 < 90);
                    I3 = 84;
                    printf("%c", I3);
                   
                if (I4 > 66 && I4 < 90);
                    I4 = 81;
                    printf("%c", I4);
                 
                if (I5 > 66 && I5 < 90);
                    I5 = 76;
                    printf("%c", I5);
                 
                if (I6 > 66 && I6 < 90);
                    I6 = 84;
                    printf("%c", I6);
                    printf(" ", m);                  // Represents a space between words
                   
                if (I7 > 66 && I7 < 90);
                    I7 = 85;
                    printf("%c", I7);
                   
                 
                if (I8 > 65 && I8 < 90);
                    I8 = 84;
                    printf("%c", I8);
                    
                if (I9 > 66 && I9 < 90);
                    I9 = 90;
                    printf("%c", I9);
                    printf(" ", m);
                
                if (I10 > 66 && I10 < 90);
                    I10 = 68;
                    printf("%c", I10);
                   
                if (I11 > 66 && I11 < 90);
                    I11 = 79;
                    printf("%c", I11);
                 
                if (I12 > 66 && I12 < 90);
                    I12 = 83;
                    printf("%c", I12);
                 
                if (I13 > 66 && I13 < 90);
                    I13 = 65;
                    printf("%c", I13);
                    printf(" ", m);
                   
                if (I14 > 66 && I14 < 90);
                    I14 = 81;
                    printf("%c", I14);
                
                 if (I15 > 66 && I15 < 90);
                    I15 = 90;
                    printf("%c", I15);
                    printf(" ", m);
                   
                if (I16 > 66 && I16 < 90);
                    I16 = 90;
                    printf("%c", I16);
                
                if (I17 > 66 && I17 < 90);
                    I17 = 73;
                    printf("%c", I17);
                   
                if (I18 > 66 && I18 < 90);
                    I18 = 84;
                    printf("%c", I18);
                    printf(" ", m);
                
                if (I19 > 66 && I19 < 90);
                    I19 = 76;
                    printf("%c", I19);
                   
                if (I20 > 66 && I20 < 90);
                    I20 = 73;
                    printf("%c", I20);
                
                if (I21 > 66 && I21 < 90);
                    I21 = 71;
                    printf("%c", I21);  
                   
                if (I22 > 66 && I22 < 90);
                    I22 = 72;
                    printf("%c", I22);
                   
                if (I23 > 66 && I23 < 90);
                    I23 = 76;
                    printf("%c", I23);
            }
            break;                       // Break kills the program is it has completed the task 
        
        case 4:
            printf("Enter Phrase to be Decrypted:");
            scanf("%c%c%c%c%c%c%c %c%c %c%c%c%c%c%c%c",&I1,&I2,&I3,&I4,&I5,&I6,&I7,&I8,&I9,&I10,&I11,&I12,&I13,&I14,&I15,&I16);   
            printf("Decrypted phrase is:\n");
             
            if (I1,I2,I3,I4,I5,I6,I7 != 65);
            {
                if (I1 > 65 && I1 < 90);
                    I1 = 80;
                    printf("%c", I1);                // In order to decrypt a substituion cipher the opposite occurs,
                                                     // the individual letters are replaced by the original corresponding
                if (I2 > 66 && I2 < 90);             // letter in order to make sense of the phrase. 
                    I2 = 76; 
                    printf("%c", I2);
                
                if (I3 > 66 && I3 < 90);
                    I3 = 69;
                    printf("%c", I3);
                   
                if (I4 > 66 && I4 < 90);
                    I4 = 65;
                    printf("%c", I4);
                 
                if (I5 > 66 && I5 < 90);
                    I5 = 83;
                    printf("%c", I5);
                 
                if (I6 > 66 && I6 < 90);
                    I6 = 69;
                    printf("%c", I6);                // Represents a space between words
                    printf(" ", m);
                   
                if (I7 > 66 && I7 < 90);
                    I7 = 71;
                    printf("%c", I7);
                   
                if (I8 > 65 && I8 < 90);
                    I8 = 69;
                    printf("%c", I8);
                    
                if (I9 > 66 && I9 < 90);
                    I9 = 84;
                    printf("%c", I9);
                    printf(" ", m);
                
                if (I10 > 66 && I10 < 90);
                    I10 = 77;
                    printf("%c", I10);
                   
                if (I11 > 66 && I11 < 90);
                    I11 = 73;
                    printf("%c", I11);
                 
                if (I12 > 66 && I12 < 90);
                    I12 = 76;
                    printf("%c", I12);
                 
                if (I13 > 66 && I13 < 90);
                    I13 = 75;
                    printf("%c", I13);
                    printf(" ", m);
                   
                if (I14 > 66 && I14 < 90);
                    I14 = 65;
                    printf("%c", I14);
                
                 if (I15 > 66 && I15 < 90);
                    I15 = 84;
                    printf("%c", I15);
                    printf(" ", m);
                   
                if (I16 > 66 && I16 < 90);
                    I16 = 84;
                    printf("%c", I16);
                   
                if (I17 > 66 && I17 < 90);
                    I17 = 72;
                    printf("%c", I17);
                   
                if (I18 > 66 && I18 < 90);
                    I18 = 69;
                    printf("%c", I18);
                    printf(" ", m);
                
                if (I19 > 66 && I19 < 90);
                    I19 = 83;
                    printf("%c", I19);
                   
                if (I20 > 66 && I20 < 90);
                    I20 = 72;
                    printf("%c", I20);
                
                if (I21 > 66 && I21 < 90);
                    I21 = 79;
                    printf("%c", I21);  
                   
                if (I22 > 66 && I22 < 90);
                    I22 = 80;
                    printf("%c", I22);
                   
                if (I23 > 66 && I23 < 90);
                    I23 = 83;
                    printf("%c", I23);
            }
            break;                              // Break kills the program is it has completed the task 
    }

return 0;
}












