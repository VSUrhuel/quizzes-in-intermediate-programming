#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
struct creditCard
{
    int cardNum;
    double balance;
};
vector<creditCard> readCreditCardRec();
creditCard getLeastBalance(vector<creditCard> vecCreditCard);
string cardNumToRevStr(creditCard cc);
void writeToFile();
int main()
{
    //writeToFile();
    vector<creditCard> cc = readCreditCardRec();
    creditCard ccTemp;
    ccTemp = getLeastBalance(cc);

    cout<<ccTemp.cardNum<<" ";
    cout<<ccTemp.balance<<endl;
    cout<<cardNumToRevStr(ccTemp);
}
void writeToFile()
{
    ofstream record("CreditCardRecord.txt");
    record<<123433332<<'\t'<<100.51<<endl;
    record<<123442145<<'\t'<<321.54<<endl;
    record<<123423291<<'\t'<<655.09<<endl;
    record<<123428392<<'\t'<<443.23<<endl;
    record<<123342842<<'\t'<<99.75<<endl;
    record<<123312930<<'\t'<<88.63<<endl;
    record<<128329429<<'\t'<<789.04<<endl;
    record.close();
}
vector<creditCard> readCreditCardRec()
{
    ifstream recordRead;
    recordRead.open("CreditCardRecord.txt");
    creditCard CC;
    vector<creditCard> readCC;
    if(recordRead.is_open())
    {
        while(!recordRead.eof())
        {
            recordRead>>CC.cardNum;
            recordRead>>CC.balance;
            readCC.push_back(CC);
        }
    }
    else
    {
        cout<<"Record not Found";
    }
    recordRead.close();
    return readCC;
}
creditCard getLeastBalance(vector<creditCard> vecCreditCard)
{
    creditCard leastCC = vecCreditCard.at(0);
    for(int i=1; i<vecCreditCard.size(); i++)
    {
        if(leastCC.balance > vecCreditCard.at(i).balance)
            leastCC = vecCreditCard.at(i);
    }
    return leastCC;
}
string cardNumToRevStr(creditCard cc)
{
    string str = "";
    while(cc.cardNum > 0)
    {
        str += (cc.cardNum%10)+0x30;
        cc.cardNum/=10;
    }
    return str;
}
