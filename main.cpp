#include <iostream>
#include <fstream>
int f99=0,f98=0,f97=0;
using namespace std;
void binary(int num,int bin[])
{
int i,loop=9;
while(loop>=0)
{
bin[loop]=num%2;
num=num/2;
loop--;
}
}
void p10_arrange(int bin[],int p10[])
{
    int i;
    p10[0]=bin[2];
    p10[1]=bin[4];
    p10[2]=bin[1];
    p10[3]=bin[6];
    p10[4]=bin[3];
    p10[5]=bin[9];
    p10[6]=bin[0];
    p10[7]=bin[8];
    p10[8]=bin[7];
    p10[9]=bin[5];
    if(f98==0)
    {
    cout<<"After Permutation ";
    for(i=0;i<=9;i++)
    {
        cout<<bin[i];
    }
    cout<<endl<<endl;
    f98=1;
    }
}
void LS1(int p10[],int left_LS1[],int right_LS1[])
{
        int i;
        left_LS1[0]=p10[1];
        left_LS1[1]=p10[2];
        left_LS1[2]=p10[3];
        left_LS1[3]=p10[4];
        left_LS1[4]=p10[0];
        right_LS1[0]=p10[6];
        right_LS1[1]=p10[7];
        right_LS1[2]=p10[8];
        right_LS1[3]=p10[9];
        right_LS1[4]=p10[5];
        if(f97==0)
        {
        cout<<"After Left Part Left Shift ";
        for(i=0;i<=4;i++)
        {
            cout<<left_LS1[i];
        }
        cout<<endl<<endl;
        cout<<"After Right Part Left Shift ";
        for(i=0;i<=4;i++)
        {
            cout<<right_LS1[i];
        }
        cout<<endl<<endl;
        f97=1;
        }
}
void p8(int left_LS1[],int right_LS1[],int subkey1[])
{
    subkey1[0]=right_LS1[0];
    subkey1[1]=left_LS1[2];
    subkey1[2]=right_LS1[1];
    subkey1[3]=left_LS1[3];
    subkey1[4]=right_LS1[2];
    subkey1[5]=left_LS1[4];
    subkey1[6]=right_LS1[4];
    subkey1[7]=right_LS1[3];
}
void LS2(int left_LS1[],int right_LS1[],int left_LS2[],int right_LS2[])
{
    left_LS2[0]=left_LS1[2];
    left_LS2[1]=left_LS1[3];
    left_LS2[2]=left_LS1[4];
    left_LS2[3]=left_LS1[0];
    left_LS2[4]=left_LS1[1];
    right_LS2[0]=right_LS1[2];
    right_LS2[1]=right_LS1[3];
    right_LS2[2]=right_LS1[4];
    right_LS2[3]=right_LS1[0];
    right_LS2[4]=right_LS1[1];
}
void key_generator(int num,int subkey1[],int subkey2[])
{
    int i,bin[10];
    binary(num,bin);
    if(f99==0)
    {
    for(i=0;i<=9;i++)
    {
        cout<<bin[i]<<" ";
    }
    f99=1;
    cout<<endl<<endl;
    }
    int p10[10];
    p10_arrange(bin,p10);
    int left_LS1[5],right_LS1[5];
    LS1(p10,left_LS1,right_LS1);
    p8(left_LS1,right_LS1,subkey1);
    int left_LS2[5],right_LS2[5];
    LS2(left_LS1,right_LS1,left_LS2,right_LS2);
    p8(left_LS2,right_LS2,subkey2);

    void IP(int bin[],int ip_arrange[])
    {
        ip_arrange[0]=bin[3];
        ip_arrange[1]=bin[7];
        ip_arrange[2]=bin[4];
        ip_arrange[3]=bin[2];
        ip_arrange[4]=bin[5];
        ip_arrange[5]=bin[9];
        ip_arrange[6]=bin[6];
        ip_arrange[7]=bin[8];
    }
}
void seperate(int ip_arrange[],int left_ip[],int right_ip[])
{
    left_ip[0]=ip_arrange[0];
    left_ip[1]=ip_arrange[1];
    left_ip[2]=ip_arrange[2];
    left_ip[3]=ip_arrange[3];
    right_ip[0]=ip_arrange[4];
    right_ip[1]=ip_arrange[5];
    right_ip[2]=ip_arrange[6];
    right_ip[3]=ip_arrange[7];
}
void FP_arrange(int right_ip[],int fp[])
{
    fp[0]=right_ip[3];
    fp[1]=right_ip[0];
    fp[2]=right_ip[1];
    fp[3]=right_ip[2];
    fp[4]=right_ip[1];
    fp[5]=right_ip[2];
    fp[6]=right_ip[3];
    fp[7]=right_ip[0];
}
void zor(int fp[],int subkey1[],int left_zor[4],int right_zor[4])
{
if(fp[3]==subkey1[0])
    left_zor[0]=0;
else if (fp[3]!=subkey1[0])
    left_zor[0]=1;
if(fp[0]==subkey1[1])
    left_zor[1]=0;
else if (fp[0]!=subkey1[1])
    left_zor[1]=1;
if(fp[1]==subkey1[2])
    left_zor[2]=0;
else if (fp[1]!=subkey1[2])
    left_zor[2]=1;
if(fp[2]==subkey1[3])
    left_zor[3]=0;
else if (fp[2]!=subkey1[3])
    left_zor[3]=1;
///// right_zor /////
if(fp[1]==subkey1[4])
right_zor[0]=0;
else if (fp[1]!=subkey1[4])
right_zor[0]=1;
if(fp[2]==subkey1[5])
right_zor[1]=0;
else if (fp[2]!=subkey1[5])
right_zor[1]=1;
if(fp[3]==subkey1[6])
right_zor[2]=0;
else if (fp[3]!=subkey1[6])
right_zor[2]=1;
if(fp[0]==subkey1[7])
right_zor[3]=0;
else if (fp[0]!=subkey1[7])
right_zor[3]=1;
}
void S_box(int left_zor[],int right_zor[],int s0[] ,int s1[] )
{
int s_box0[4][4]={{1,0,3,2},
{3,2,1,0},{0,2,1,3},{3,1,3,2}};
int row=(left_zor[0]*2)+(left_zor[3]*1),col=(left_zor[1]*2)+(left_zor[2]*1);
int num;
num=s_box0[row][col];
for(int l=1;l>=0;l--)
{
s0[l]=num%2;
num=num/2;
}
int s_box1[4][4]={{0,1,2,3},{2,0,1,3},{3,0,1,0},{2,1,0,3}};
int row1=(right_zor[0]*2)+(right_zor[3]*1),col1=(right_zor[1]*2)+(right_zor[2]*1);
num=s_box1[row1][col1];
for(int l=1;l>=0;l--)
{
s1[l]=num%2;
num=num/2;
}
}
void P4_arrange(int s0[],int s1[],int p4[])
{
p4[0]=s0[1];
p4[1]=s1[1];
p4[2]=s1[0];
p4[3]=s0[0];
}
void P4_zor(int left_ip[],int p4[],int sw_right_ip[])
{
for(int l=0;l<4;l++)
{
if(left_ip[l]==p4[l])
sw_right_ip[l]=0;
if(left_ip[l]!=p4[l])
sw_right_ip[l]=1;
}
}
void Ip_invers(int sw_zor[],int sw_right_ip[],int ip_inv[])
{
ip_inv[0]=sw_zor[3];
ip_inv[1]=sw_zor[0];
ip_inv[2]=sw_zor[2];
ip_inv[3]=sw_right_ip[0];
ip_inv[4]=sw_right_ip[2];
ip_inv[5]=sw_zor[1];
ip_inv[6]=sw_right_ip[3];
ip_inv[7]=sw_right_ip[1];
}
int E(int leter_num,int key_num )
{
int subkey1[8],subkey2[8];
key_generator(key_num,subkey1,subkey2);
int bin[10];
binary(leter_num,bin);
int ip_arrange[8];
IP(bin,ip_arrange);
int left_ip[4],right_ip[4];
seperate(ip_arrange,left_ip,right_ip);
int fp[8];
FP_arrange(right_ip,fp);
int left_zor[4],right_zor[4];
zor(fp,subkey1,left_zor,right_zor);
int s0[2],s1[2];
S_box(left_zor,right_zor,s0,s1);
int p4[4];
P4_arrange(s0,s1,p4);
int sw_right_ip[4];
P4_zor(left_ip,p4,sw_right_ip);
int sw_fp[8];
FP_arrange(sw_right_ip,sw_fp);
int sw_left_zor[4],sw_right_zor[4];
zor(sw_fp,subkey2,sw_left_zor,sw_right_zor);
int sw_s0[2],sw_s1[2];
S_box(sw_left_zor,sw_right_zor,sw_s0,sw_s1);
int sw_p4[4];
P4_arrange(sw_s0,sw_s1,sw_p4);
int sw_zor[4];
P4_zor(right_ip,sw_p4,sw_zor);
int ip_inv[8];
Ip_invers(sw_zor,sw_right_ip,ip_inv);
int sum;
sum=(ip_inv[0]*128)+(ip_inv[1]*64)+(ip_inv[2]*32)+(ip_inv[3]*16)+(ip_inv[4]*8)+(ip_inv[5]*4)+(ip_inv[6]
*2)+(ip_inv[7]*1);
return(sum);
}
int D(int leter_num,int key_num )
{
int subkey1[8],subkey2[8];
key_generator(key_num,subkey1,subkey2);
int bin[10];
binary(leter_num,bin);
int ip_arrange[8];
IP(bin,ip_arrange);
int left_ip[4],right_ip[4];
seperate(ip_arrange,left_ip,right_ip);
int fp[8];
FP_arrange(right_ip,fp);
int left_zor[4],right_zor[4];
zor(fp,subkey2,left_zor,right_zor);
int s0[2],s1[2];
S_box(left_zor,right_zor,s0,s1);
int p4[4];
P4_arrange(s0,s1,p4);
int sw_right_ip[4];
P4_zor(left_ip,p4,sw_right_ip);
int sw_fp[8];
FP_arrange(sw_right_ip,sw_fp);
int sw_left_zor[4],sw_right_zor[4];
zor(sw_fp,subkey1,sw_left_zor,sw_right_zor);
int sw_s0[2],sw_s1[2];
S_box(sw_left_zor,sw_right_zor,sw_s0,sw_s1);
int sw_p4[4];
P4_arrange(sw_s0,sw_s1,sw_p4);
int sw_zor[4];
P4_zor(right_ip,sw_p4,sw_zor);
int ip_inv[8];
Ip_invers(sw_zor,sw_right_ip,ip_inv);
int sum;
sum=(ip_inv[0]*128)+(ip_inv[1]*64)+(ip_inv[2]*32)+(ip_inv[3]*16)+(ip_inv[4]*8)+(ip_inv[5]*4)+(ip_inv[6]
*2)+(ip_inv[7]*1);
return(sum);
}
void get_file_data(char message_file[],char key_file[],char user_message[],char user_key[])
{
fstream myline(message_file,ios::out | ios::app);
myline.close();
int loop=0;
fstream gline(message_file,ios::in);
if(!gline)
cout<<"There is some error so that's way file can not be open .\n\n";
else
{
while(!gline.eof())
{
user_message[loop]=gline.get();
loop++;
}
}
gline.close();
loop=0;
fstream key(key_file,ios::in);
if(!key)
cout<<"There is some error so that's way file can not be open .\n\n";
else
{
while(!key.eof())
{
user_key[loop]=key.get();
loop++;
}
}
key.close();
}
int edchoice()
{
char cchoice;
int ichoice;
cout<<"(1) Encrypt my message.\n\n";
cout<<"(2) Decrypt my message.\n\n";
cout<<"\n\nEnter your choice :";
cin>>cchoice;
ichoice=cchoice;
return(ichoice);
}
void key_store(char user_key[])
{
char key_file[500];
int loop=0;
cout<<"Type your file name in which your key will be stored
:"; cin.getline(key_file,500);
fstream myfile(key_file,ios::out | ios:: app);
while(user_key[loop]!=-52)
{
myfile<<user_key[loop];
loop++;
}
myfile.close();
}
void Encryption_and_Decryption(char user_message[],char user_key[],char ED_choice)
{
char output_file[500];
cout<<"Type your file name in which your output data will be stored :";
cin.getline(output_file,500);
int line;
int key;
char output[99999];
int loop=0;
char ch;
if(ED_choice==49)
{
cout<<" Encrypted message \n\n\n";
while((user_message[loop]!='\0')&&(user_key[loop]!='\0')&&(user_message[loop]!=-
52)&&(user_key[loop]!=-52))
{
line=user_message[loop];
key=user_key[loop];
ch=E(line,key);
output[loop]=ch;
fstream save_file(output_file,ios::out | ios::app);
save_file<<ch;
save_file.close();
cout<<ch;
loop++;
}
}
loop=0;
if(ED_choice==50)
{
cout<<" Decrypted message \n\n\n";
while((user_message[loop]!='\0')&&(user_key[loop]!='\0')&&(user_message[loop]!=-
52)&&(user_key[loop]!=-52))
{
line=user_message[loop];
key=user_key[loop];
if(line<0)
line=line+256;
ch=D(line,key);
fstream key(output_file,ios::out | ios::app);
key<<ch;
key.close();
cout<<ch;
loop++;
}
}
}
void message_and_key(int ichoice)
{
char user_message[99999];
char user_key[99999];
char message_file[500];
char key_file[500];
int ED_choice;
ED_choice=edchoice();
if(ichoice==49)
{
cout<<"Enter your message file name :";
cin.sync();
cin.getline(message_file,500);
cout<<"\n\n";
cout<<"Enter your key file name :";
cin.getline(key_file,500);
get_file_data(message_file,key_file,user_message,user_key);
Encryption_and_Decryption(user_message,user_key,ED_choice);
}
else if(ichoice==50)
{
cout<<" Type your message\n\n";
cin.sync();
cin.getline(user_message,99999);
cout<<" Type your key\n\n";
cin.getline(user_key,99999);
key_store(user_key);
Encryption_and_Decryption(user_message,user_key,ED_choice);
}
}
void file_choice()
{
char cchoice;
int ichoice;
cout<<"(1) Include my files for taking message and key.\n\n";
cout<<"(2) Don't include my files, I will type my message and key.\n\n";
cout<<"\n\nEnter your choice:";
cin>>cchoice;
ichoice=cchoice;
message_and_key(ichoice);
}
int main()
{
char cchoice;
int ichoice;
cchoice='1';
ichoice=cchoice;
if(ichoice==49)
{
file_choice();
}
return 0;
}