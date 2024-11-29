#include <iostream>

std::string a;

std::string HexToBinaryConv(std::string text)
{
    //std::string test = text;
    std::string converted;

    for (int i = 0; i <16; i++)
    {
    std::string hexCharacter = text.substr (i,1);

     if (hexCharacter == "0")
    {
       converted = converted + "0000";
    }
    else if (hexCharacter == "1")
    {
       converted = converted + "0001";
    }
    else if (hexCharacter == "2")
    {
       converted = converted + "0010";
    }
    else if (hexCharacter == "3")
    {
       converted = converted + "0011";
    }
    else if (hexCharacter == "4")
    {
       converted = converted + "0100";
    }
    else if (hexCharacter == "5")
    {
       converted = converted + "0101";
    }
    else if (hexCharacter == "6")
    {
       converted = converted + "0110";
    }
    else if (hexCharacter == "7")
    {
       converted = converted + "0111";
    }
    else if (hexCharacter == "8")
    {
       converted = converted + "1000";
    }
    else if (hexCharacter == "9")
    {
       converted = converted + "1001";
    }
    else  if (hexCharacter == "A")
    {
       converted = converted + "1010";
    }
    else if (hexCharacter == "B")
    {
       converted = converted + "1011";
    }
    else if (hexCharacter == "C")
    {
       converted = converted + "1100";
    }
    else if (hexCharacter == "D")
    {
       converted = converted + "1101";
    }
    else if (hexCharacter == "E")
    {
       converted = converted + "1110";
    }
    else if (hexCharacter == "F")
    {
       converted = converted + "1111";
    }
    else
    {
        std::cout<<"Unexpected Character detected. Please start again.";
        break;
    }
    }
    return converted;
}

std::string BinaryToHexConv(std::string text)
{
    //std::string test = text;
    std::string converted;

    for (int i = 0; i <16; i++)
    {
    std::string hexCharacter = text.substr (i*4,4);

     if (hexCharacter == "0000")
    {
       converted = converted + "0";
    }
    else if (hexCharacter == "0001")
    {
       converted = converted + "1";
    }
    else if (hexCharacter == "0010")
    {
       converted = converted + "2";
    }
    else if (hexCharacter == "0011")
    {
       converted = converted + "3";
    }
    else if (hexCharacter == "0100")
    {
       converted = converted + "4";
    }
    else if (hexCharacter == "0101")
    {
       converted = converted + "5";
    }
    else if (hexCharacter == "0110")
    {
       converted = converted + "6";
    }
    else if (hexCharacter == "0111")
    {
       converted = converted + "7";
    }
    else if (hexCharacter == "1000")
    {
       converted = converted + "8";
    }
    else if (hexCharacter == "1001")
    {
       converted = converted + "9";
    }
    else  if (hexCharacter == "1010")
    {
       converted = converted + "A";
    }
    else if (hexCharacter == "1011")
    {
       converted = converted + "B";
    }
    else if (hexCharacter == "1100")
    {
       converted = converted + "C";
    }
    else if (hexCharacter == "1101")
    {
       converted = converted + "D";
    }
    else if (hexCharacter == "1110")
    {
       converted = converted + "E";
    }
    else if (hexCharacter == "1111")
    {
       converted = converted + "F";
    }
    else
    {
        std::cout<<"Unexpected Character detected. Please start again.";
        break;
    }
    }
    return converted;
}

std::string NumtoBinary(int test)
{
    std::string converted3;

    int numCharacter = test;
    //std::cout<<"NUMCHAR: " << numCharacter<<std::endl;
    if (numCharacter == 0)
    {
       converted3 = "0000";
    }
    else if (numCharacter == 1)
    {
       converted3 = "0001";
    }
    else if (numCharacter == 2)
    {
       converted3 = "0010";
    }
    else if (numCharacter == 3)
    {
       converted3 = "0011";
    }
    else if (numCharacter == 4)
    {
       converted3 = "0100";
    }
    else if (numCharacter == 5)
    {
       converted3 = "0101";
    }
    else if (numCharacter == 6)
    {
       converted3 = "0110";
    }
    else if (numCharacter == 7)
    {
       converted3 = "0111";
    }
    else if (numCharacter == 8)
    {
       converted3 = "1000";
    }
    else if (numCharacter == 9)
    {
       converted3 = "1001";
    }
    else  if (numCharacter == 10)
    {
       converted3 = "1010";
    }
    else if (numCharacter == 11)
    {
       converted3 = "1011";
    }
    else if (numCharacter == 12)
    {
       converted3 = "1100";
    }
    else if (numCharacter == 13)
    {
       converted3 = "1101";
    }
    else if (numCharacter == 14)
    {
       converted3 = "1110";
    }
    else if (numCharacter == 15)
    {
       converted3 = "1111";
    }

    return converted3;
}

int BinarytoNumRow(std::string row)
{
    int converted;

     if (row == "00")
    {
       converted = 0;
    }
    else if (row == "01")
    {
       converted = 1;
    }
    else if (row == "10")
    {
       converted = 2;
    }
    else if (row == "11")
    {
       converted =  3;
    }
    return converted;
}

int BinarytoNumCol(std::string col)
{
int converted;


     if (col == "0000")
    {
       converted = 0;
    }
    else if (col == "0001")
    {
       converted = 1;
    }
    else if (col== "0010")
    {
       converted = 2;
    }
    else if (col== "0011")
    {
       converted = 3;
    }
    else if (col== "0100")
    {
       converted = 4;
    }
    else if (col== "0101")
    {
       converted = 5;
    }
    else if (col == "0110")
    {
       converted = 6;
    }
    else if (col== "0111")
    {
       converted = 7;
    }
    else if (col == "1000")
    {
       converted = 8;
    }
    else if (col== "1001")
    {
       converted = 9;
    }
    else  if (col== "1010")
    {
       converted = 10;
    }
    else if (col == "1011")
    {
       converted = 11;
    }
    else if (col == "1100")
    {
       converted = 12;
    }
    else if (col == "1101")
    {
       converted = 13;
    }
    else if (col == "1110")
    {
       converted = 14;
    }
    else if (col == "1111")
    {
       converted = 15;
    }
    else
    {
        std::cout<<"Unexpected Character detected. Please start again.";
    }
    
    return converted;
}

std::string XOR (std::string first, std::string second)
{
    std::string XOREDstring;
   
    int b= first.length();
   for (int i = 0; i < b; i++)
    {
        if(first.substr (i,1) == "1")
        {
            if (second.substr(i,1) == "1")
            {
                XOREDstring = XOREDstring + "0";
            }
            else if(second.substr(i,1) == "0")
            {
                XOREDstring = XOREDstring + "1";   
            }
        }
        

        else if(first.substr (i,1) == "0")
        {
            if (second.substr(i,1) == "1")
            {
                XOREDstring = XOREDstring + "1";
            }
            else if (second.substr(i,1) == "0")
            {
                XOREDstring = XOREDstring + "0";   
            }
        }
    }
    return XOREDstring;
}

std::string Shifting (std::string shift, int x)
{
   std::string abc = shift;
   for(int i = 0; i <= x; i++)
   {
      int shift_table[16] = {1, 1, 2, 2,
                            2, 2, 2, 2,
                            1, 2, 2, 2,
                            2, 2, 2, 1};
    

    std::string test = abc.substr(shift_table[i],48) + abc.substr(0,shift_table[i]);
    abc = test;
    //std::cout<<"Shifted: "<<abc<<std::endl;
   }
    return abc;
}

std::string SBOX (std::string encoded)
{

    std::string converted;

    std::string row;
    std::string col;
    std::string sec;

    int sbox1[4][16] =     {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
                            {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
                            {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
                            {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}};
 
    int sbox2[4][16] =     {{15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10},
                            {3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5},
                            {0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15},
                            {13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9}};
 
    int sbox3[4][16] =     {{10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8},
                            {13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1},
                            {13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7},
                            {1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12}};
 
    int sbox4[4][16] =     {{7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15},
                            {13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9},
                            {10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4},
                            {3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14}};
 
    int sbox5[4][16] =     {{2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9},
                            {14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6},
                            {4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14},
                            {11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3}};
 
    int sbox6[4][16] =     {{12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11},
                            {10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8},
                            {9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6},
                            {4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13}};
 
    int sbox7[4][16] =     {{4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1},
                            {13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6},
                            {1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2},
                            {6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12}};
 
    int sbox8[4][16] =     {{13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7},
                            {1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2},
                            {7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8},
                            {2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}};


   
    for (int i = 0; i < 8; i++)
    {
        sec = encoded.substr(((i*6)),6);
        //std::cout<<"Sec: "<<sec<<std::endl;
        row = sec.substr(0,1) + sec.substr(5,1);
        //std::cout<<"Row: "<<row<<std::endl;
        col = sec.substr(1,4);
        //std::cout<<"Col: "<<col<<std::endl;

         int a[8] = {sbox1[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox2[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox3[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox4[BinarytoNumRow(row)][BinarytoNumCol(col)],
                    sbox5[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox6[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox7[BinarytoNumRow(row)][BinarytoNumCol(col)],sbox8[BinarytoNumRow(row)][BinarytoNumCol(col)]};

        //std::cout<<"Num: "<<NumtoBinary(a[i]) << "   " <<a[i]<<std::endl;
        converted = converted + NumtoBinary(a[i]);
        
    }

    return converted;

}

std::string L2R1 (std::string asd,std::string bsd)
{
    int per[32] = {16,  7, 20, 21,
       29, 12, 28, 17,
       1, 15, 23, 26,
       5, 18, 31, 10,
       2,  8, 24, 14,
       32, 27,  3,  9,
       19, 13, 30,  6,
       22, 11,  4, 25};

    std::string converted;

    for (int i = 0; i < 32; i++)
    {  
        converted = converted + asd.substr (per[i]-1,1);
    }
    return converted;
}

void Encryption(std::string plaintext, std::string key)
{
    std::string ipText;
    std::string keypText;
    std::string KE;
    std::string R1;
    std::string R1L1;
    std::string R1x;
    std::string convertedKey;
    std::string convertedPlain;
    std::string finalPerm;

    convertedPlain = HexToBinaryConv(plaintext);

    std::cout <<"Your converted plaintext is " + convertedPlain<<std::endl;
    
    convertedKey = HexToBinaryConv(key);
    
    std::cout <<"Your converted key is " + convertedKey<<std::endl;

    int IP[64] ={58, 50, 42, 34, 26, 18, 10, 2,
                60, 52, 44, 36, 28, 20, 12, 4,
                62, 54, 46, 38, 30, 22, 14, 6,
                64, 56, 48, 40, 32, 24, 16, 8,
                57, 49, 41, 33, 25, 17, 9, 1,
                59, 51, 43, 35, 27, 19, 11, 3,
                61, 53, 45, 37, 29, 21, 13, 5,
                63, 55, 47, 39, 31, 23, 15, 7};

    int keyp[56] = {57, 49, 41, 33, 25, 17, 9,
                    1, 58, 50, 42, 34, 26, 18,
                    10, 2, 59, 51, 43, 35, 27,
                    19, 11, 3, 60, 52, 44, 36,
                    63, 55, 47, 39, 31, 23, 15,
                    7, 62, 54, 46, 38, 30, 22,
                    14, 6, 61, 53, 45, 37, 29,
                    21, 13, 5, 28, 20, 12, 4};

    int key_comp[48] = {14, 17, 11, 24, 1, 5,
                        3, 28, 15, 6, 21, 10,
                        23, 19, 12, 4, 26, 8,
                        16, 7, 27, 20, 13, 2,
                        41, 52, 31, 37, 47, 55,
                        30, 40, 51, 45, 33, 48,
                        44, 49, 39, 56, 34, 53,
                        46, 42, 50, 36, 29, 32};

    int exp_d[48] = {32, 1, 2, 3, 4, 5, 4, 5,
                    6, 7, 8, 9, 8, 9, 10, 11,
                    12, 13, 12, 13, 14, 15, 16, 17,
         16, 17, 18, 19, 20, 21, 20, 21,
         22, 23, 24, 25, 24, 25, 26, 27,
         28, 29, 28, 29, 30, 31, 32, 1};

    int final_perm[64] = {40, 8, 48, 16, 56, 24, 64, 32,
              39, 7, 47, 15, 55, 23, 63, 31,
              38, 6, 46, 14, 54, 22, 62, 30,
              37, 5, 45, 13, 53, 21, 61, 29,
              36, 4, 44, 12, 52, 20, 60, 28,
              35, 3, 43, 11, 51, 19, 59, 27,
              34, 2, 42, 10, 50, 18, 58, 26,
              33, 1, 41, 9, 49, 17, 57, 25};

    for (int i = 0; i < 64; i++) //initial permutation
    {
        ipText = ipText + convertedPlain.substr (IP[i]-1,1);
    }

    for (int i = 0; i < 56; i++) //creates 56 bit key
    {  
        keypText = keypText + convertedKey.substr (keyp[i]-1,1);
    }

   //  for(int y = 0; y < 1; y++)
   //  {
   
    std::string C0 = keypText.substr (0, 28); //Gets C0 and D0 by dividing the permuted key in two
    //std::cout <<"C0: "<< C0<<std::endl;
    std::string D0 = keypText.substr (28, 56);
    //std::cout << "D0: "<<D0<<std::endl;

    std::string L0 = ipText.substr (0, 32); //gets L0 and R0 by dividing ipText in two
    //std::cout << "L0: "<<L0<<std::endl;
    std::string R0 = ipText.substr (32, 64);
    //std::cout << "R0: " <<R0<<std::endl;
    std::string L1;
    
    for (int y = 0; y <16; y++)
    {
      std::string Dexpan;
      std::string key1Text;
     //sets L1 to R0
   
    std::string C1D1 = Shifting(C0,y)+Shifting(D0,y); // Shifts C0 and D0 then merges C1 and D1
    //std::cout << "C1D1: " <<C1D1<<std::endl;

   //1.
    for (int i = 0; i < 48; i++) //expands R0 into 48 bits from 32
    {
        Dexpan = Dexpan + R0.substr (exp_d[i]-1,1); 
    }
    
    //std::cout <<"Dexpan: "<< Dexpan<<std::endl;
   //2.
    for (int i = 0; i < 48; i++) //creates K1 by rearanging C1D1 using the key_comp table
    {
        
        key1Text = key1Text + C1D1.substr (key_comp[i]-1,1);
    }
    
    //std::cout <<"IPText: "<< ipText<<std::endl;
    //std::cout <<"KeyPText: "<<keypText<<std::endl;

    //std::cout << "K1: " << key1Text<<std::endl;
    int cbd = key1Text.length();
    //std::cout <<"CBD: "<< cbd<<std::endl;
   //3.
    KE = XOR(key1Text, Dexpan); //XOR Key1 and Dexpan to create K1 + E(R0)
    //std::cout << "KE: "<< KE <<std::endl;

   //4.
    //std::cout << "SBOX: "<< SBOX(KE)<<std::endl; 
    std::string sBoxOutput = SBOX(KE);

    //5.
    //std::cout << "F: "<<L2R1(sBoxOutput, L0)<<std::endl;
    R1x = L2R1(sBoxOutput, L0);
    //std::cout << "L0: "<<L0<<std::endl;
    R1 = XOR(R1x, L0);
    L1 = R0;
    R0 = R1;
    //std::cout << "R1: "<<R1<<std::endl;
    //std::cout << "L1: "<<L1<<std::endl;
    L0 = L1;

   }

   R1L1 = R1 + L1;

   for (int i = 0; i < 64; i++)
    {
        
        finalPerm = finalPerm+ R1L1.substr (final_perm[i]-1,1);

    }
    std::cout <<"Final Perm: "<< finalPerm<<std::endl;
   

      std::cout<<BinaryToHexConv(finalPerm)<<std::endl;
}

int main()
{

    std::string plaintext;
    std::string key;
    int aLength;
    int keyLength;

    

    std::cout << "Please enter your plaintext"<<std::endl; //asks for plaintext
    std::cin >> plaintext;
    aLength = plaintext.length();
    if (plaintext.length()!=16) //checks if correct length
    {
        std::cout << "Plaintext is not long enough"<<std::endl;
        std::cout << aLength <<std::endl;
    }
    
    
    std::cout << "Please enter your key"<<std::endl; //asks for key
    std::cin >> key;
    keyLength = key.length();
    if (key.length()!=16) //checks if correct length
    {
        std::cout << "Key is not long enough"<<std::endl; 
        std::cout << keyLength <<std::endl;
    }

    Encryption(plaintext, key); 
   

    return 0;
}