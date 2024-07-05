// verylong.cpp
// implements very long integer type
#include "verlong.h"        //header file for verylong
//--------------------------------------------------------------------
void verylong::putvl() const        // display everything
{
    char temp[SZ];
    strcpy (temp, vlstr);           // make copy
    cout << strrev(temp);           // reverse the copy and display it
}
//--------------------------------------------------------------------
void verylong::getvl()
{
    cout << "\nEnter verylong string: "; cin >> vlstr;      // get string from user
    vlen = strlen(vlstr);                                   // find it's length
    strrev(vlstr);                                          // reverse it
}
//--------------------------------------------------------------------
verylong verylong::operator + (const verylong v)     // add verylongs
{
    char temp[SZ];
    int i;

    int maxlen = (vlen > v.vlen) ? vlen : v.vlen;
    int carry = 0;                                  // set to 1 if sum >=10
    
    for (i = 0; i < maxlen; i++)                // for each position
    {
        int d1 = (i > vlen - 1) ? 0 : vlstr[i] - '0';       // get digit
        int d2 = (i > v.vlen -1) ? 0 : v.vlstr[i] - '0';    // get digit
        int digitsum = d1 + d2 + carry;                     // add digits
        if ( digitsum >= 10 )                               // check if there's a carry
        {
            digitsum -= 10; carry = 1;                      // decrease sum by 10 // set carry to 1
        }
        else
            carry = 0;
        temp[i] = digitsum + '0';                           // insert char in string
    }

    if (carry == 1)                                         // if carry at end,
        temp[i++] = '1';                                    // last digit is 1
    
    temp[i] = '\0';
    return verylong(temp); 
}
//--------------------------------------------------------------------
verylong verylong::operator * (const verylong v)            // multiply verlongs
{
    verylong pprod;                     // product of one digit
    verylong tempsum;                   // running total
    for (int j = 0; j < v.vlen; j++)     // for each digit in arg
    {
        int digit = v.vlstr[j] - '0';       // get the digit
        pprod = multdigit(digit);           
        for (int k = 0; k < j; k++)
            pprod = multi10(pprod);
        tempsum = tempsum + pprod;
    }
    return tempsum;         
}
//---------------------------------------------------------------------
verylong verylong::multi10(const verylong v) const      // multiply arg by 10
{
    char temp[SZ];
    for (int j = v.vlen - 1; j >= 0 ; j--)
        temp[j+1] = v.vlstr[j];                         // move digits one position higher
    temp[0] = '0';                                      // put zero on low end
    temp[v.vlen+1] = '\0';                              // terminate string
    return verylong (temp);                             // return result
}
//---------------------------------------------------------------------
verylong verylong::multdigit(const int d2) const        // multiply this verylong by digit in argument
{
    char temp[SZ];
    int j, carry = 0;
    for (j = 0; j < vlen; j++)
    {
        int d1 = vlstr[j] - '0';                        // get digit from this
        int digitprod = d1 * d2;                        // multiply by that digit
        digitprod += carry;                             // add old carry
        if (digitprod >= 10)
        {
            carry = digitprod/10;
            digitprod -= carry * 10;
        }
        else
            carry = 0;                                 
        temp[j] = digitprod + '0';                      // insert char in string
    }
    
    if (carry != 0)                                     // if carry at end,
        temp[j++] = carry + '0';                        // it's last digit
    
    temp[j] = '\0';                                     // terminate string
    return verylong(temp);                              // return verylong   
}
