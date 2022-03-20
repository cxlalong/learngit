#include<iostream>
using namespace std;
class account
{
    public:
    account()
    {
        balance=100;
    };
    void setid(double r)
    {
        id=r;
    };
    double getaccount()
    {
        return balance;
    };
    void savemoney(double x)
    {
        balance+=x;
    };
    double getdepoist()
    {
        return balance;
    };
    void putmoney(double x)
    {
        balance-=x;
    };
    double getwithdraw()
    {
        return balance;
    };
    double checkaccount()
    {
        return balance;
    };

    private:
    int id;
    int balance;
};
class ATM
{
    public:
    void print()
    {
        cout<<"功能:"<<endl;
        cout<<"1:查询余额"<<endl;
        cout<<"2：存钱"<<endl;
        cout<<"3：取钱"<<endl;
        cout<<"4:退出"<<endl;
    };
    void checkbalance()
    {
        cout<<"你的余额是："<<endl;
    };
    void withdraw()
    {
        cout<<"请输入你要取多少钱："<<endl;
    };
    void deposit()
    {
        cout<<"请输入你要存多少钱："<<endl;
    };
};
int main()
{
    account account[5];
    ATM atm;
    int n=5;
    int id;
    for(int i=0;i<n;i++)
    {
    	cout<<"请输入id："<<endl; 
        cin>>id;
        account[i].setid(id);
        atm.print();
        int opt;
        cout<<"请输入你的选择："<<endl;
        cin>>opt;
        switch (opt)
        {
            case 1:
            {
                atm.checkbalance();
                cout<<account[i].getaccount()<<endl;
                break;
            }
            case 2:
            {
                atm.deposit();
                int money;
                cin>>money;
                account[i].savemoney(money);
                cout<<account[i].getdepoist()<<endl;
                break;
            }
            case 3:
            {
                atm.withdraw();
                int money;
                cin>>money;
                account[i].putmoney(money);
                cout<<account[i].getwithdraw()<<endl;
                break;
            }
            case 4: 
            {
                return 0;
            }
        };
    }
    return 0;
}