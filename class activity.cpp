#include<iostream>
using namespace std;
class Patient {
    public :
    string Name,in_patient,out_patient,N_OF_DAY;
    int num_days,meditation_charges,daily_rate,hospital_charges;
    Patient(){

    }
    Patient(string n,string in,string out){
         Name=n;
        n_patient=in;
        out_patient=out;
        cout<<"Your  name : "<<Name<<endl;
    }
    void in_p(int m_c,int d_r,int h_c){

        meditation_charges=m_c;
        daily_rate=d_r;
        hospital_charges=h_c;
        cout<<"   : In-Patient : "
        cout<<"Your  meditation charges : "<<meditation_charges<<endl;
        cout<< "Your daily rate : "<<daily_rate<<endl;
        cout<<"Your hospital charges : "<<hospital_charges<<endl;
        cout<<"Total charges are : "<<meditation_charges+daily_rate+hospital_charges<<endl;
    }
    void out_p(int N-day, int n_days,int me_c,int da_ra,int h_ch);
   
};
void Patient :: out_p(int N-day, int n_days,int me_c,int da_ra,int h_ch)
    {
    N_OF_DAY=N-day;
    num_days=n_days;
    meditation_charges=me_c;
    daily_rate=da_ra;
    hospital_charges=h_ch;
    cout<<"  : Out-Patinet :"
    cout<<"TODAY : "<<N_OF_DAY<<endl;
    cout<<"Your number of days spent : "<<nums_days<<endl;
    cout<<"Your  meditation charges : "<<meditation_charges<<endl;
    cout<< "Your daily rate : "<<daily_rate<<endl;
    cout<<"Your hospital charges : "<<hospital_charges<<endl;
    cout<<"Total charges are : "<<meditation_charges+daily_rate+hospital_charges<<endl;
}

int main(){
    Patient ob();
    string name,in_pat,out_pat,N_OF_D;
    int num_day,med_charges,daily_ra,hospital_char;
    cout<<"Enter Your name : ";
    getline(cin,name);
    cout<<"press 1: IN-patient  : press 2 :Out-patient :"<<endl;
    int choice;
    cin>>choice;
    if (choice==1){
        cout<<"YOu are In-Patient : "
        getline(line)
    }
    Patient ob(name,in_pat,out_pat);

    return 0;
}