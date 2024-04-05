#include<bits/stdc++.h>
using namespace std;

class Company{
  private:
    string CID;
    string CEO;
    string name;
    long long netProfit;
    long long loss;

  public:
    Company(){}

    Company(string cid, string name):CID(cid), name(name) {}

    void set_CEO(string ceo){
      this->CEO = ceo;
    }

    void set_finance(long long prft, long long ls){
      this->netProfit = prft;
      this->loss = ls;
    }

    void display(){
      cout <<
        "Company ID: " << CID << '\n' <<
        "Company Name: " << name << '\n' <<
        "CEO: " << CEO << '\n' <<
        "Net Profits: $ " << netProfit << "\\-\n" <<
        "Loss: $ " << loss << "\\-" << endl;
    }
};


class Microsoft: public Company{
  private: 
    string product;

  public:
    Microsoft():Company(){}

    Microsoft(string cid, string name):Company(cid, name) {}

    void set_product(string prdt){
      product = prdt;
    }

    void display(){
      cout << "Working on " << product << endl;
    }
};

class BaskinRobin: public Company{
  private:
    string flavour;
  
  public:
    BaskinRobin(): Company(){}

    BaskinRobin(string cid, string name):Company(cid, name){}

    void set_flavour(string fv){
      flavour = fv;
    }

    void display(){
      cout << "Now " << flavour << " is more tastier than ever." << endl;
    }

};


int main(){
  Microsoft m1("mcrsft-101", "Microsoft corporate limited");
  m1.set_CEO("Bill Gates");
  m1.set_finance(123434200, 1332);
  m1.Company::display();
  m1.set_product("MS-Office 2024");
  m1.display();
  cout << "******************************" << endl;

  BaskinRobin b1("bsknnrbn-556", "Basking & Robin pvt ltd");
  b1.set_CEO("David hoffmann");
  b1.set_finance(86333, 231);
  b1.Company::display();
  b1.set_flavour("Red Velvet");
  b1.display();

  return 0;
}