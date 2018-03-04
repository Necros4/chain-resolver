//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
enum STATE
{
N0,
N1,
N2,
N3,
N4
};
STATE current = N0;
int b=1;
int j=0;
int* way = new int[20];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
Image17->Visible=0; Image1->Visible=1;
Image24->Visible=0; Image2->Visible=1;
Image25->Visible=0; Image3->Visible=1;
Image26->Visible=0; Image4->Visible=1;
Image27->Visible=0; Image5->Visible=1;

Image28->Visible=0; Image6->Visible=1;
Image29->Visible=0; Image7->Visible=1;
Image30->Visible=0; Image8->Visible=1;
Image18->Visible=0; Image10->Visible=1;
Image31->Visible=0; Image9->Visible=1;
Image19->Visible=0; Image11->Visible=1;
Image20->Visible=0; Image12->Visible=1;
Image21->Visible=0; Image13->Visible=1;
Image22->Visible=0; Image14->Visible=1;
Image23->Visible=0; Image15->Visible=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Memo1->Clear();
String Chain;
Chain = Edit1->Text;
Chain.LowerCase();
for(int i=0;i<20;i++)
way[i]=0;
for(int i = 1; i <= Chain.Length();i++ )
  {
  switch(current)
	{
	case N0:
	  if(Chain[i]=='x')
		{
		Memo1->Lines->Add("��������� � ��������� 2");
		current = N1;
		way[i-1]=2;
		}
	  if(Chain[i]=='y')
		{
		Memo1->Lines->Add("��������� � ��������� 4");
		current = N3;
		way[i-1]=3;
		}
    break;
	case N1:
	  if(Chain[i]=='x')
        {
		Memo1->Lines->Add("��������� � ��������� 5");
		current = N4;
		way[i-1]=4;
		}
	  if(Chain[i]=='y')
		{
		Memo1->Lines->Add("��������� � ��������� 3");
		current = N2;
		way[i-1]=5;;
        }
    break;
	case N2:
	  if(Chain[i]=='x')
		{
		Memo1->Lines->Add("��������� � ��������� 2");
		current = N1;
		way[i-1]=6;
        }
	  if(Chain[i]=='y')
        {
		Memo1->Lines->Add("��������� � ��������� 4");
		current = N3;
		way[i-1]=7;
        }
    break;
	case N3:
	  if(Chain[i]=='x')
        {
		Memo1->Lines->Add("��������� � ��������� 5");
		current = N4;
		way[i-1]=8;
        }
	  if(Chain[i]=='y')
        {
		Memo1->Lines->Add("��������� � ��������� 3");
		current = N2;
		way[i-1]=9;
		}
    break;
	case N4:
	  if(Chain[i]=='x')
		{
		Memo1->Lines->Add("��������� � ��������� 1");
		current = N0;
		way[i-1]=10;
        }
	  if(Chain[i]=='y')
		{
		Memo1->Lines->Add("��������� � ��������� 2");
		current = N1;
		way[i-1]=11;
		}
	break;
	}
  }
  Timer1->Enabled = 1;
  current=N0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
if ((Key>='0')&&(Key<='9')) {Key=NULL;}
else if ((Key>=8&&Key<=46)||Key=='y'||Key=='x') {}
else Key = 0;
}
//---------------------------------------------------------------------------

void change(){
Form1->Image17->Visible=0; Form1->Image1->Visible=1;
Form1->Image24->Visible=0; Form1->Image2->Visible=1;
Form1->Image25->Visible=0; Form1->Image3->Visible=1;
Form1->Image26->Visible=0; Form1->Image4->Visible=1;
Form1->Image27->Visible=0; Form1->Image5->Visible=1;

Form1->Image28->Visible=0; Form1->Image6->Visible=1;
Form1->Image29->Visible=0; Form1->Image7->Visible=1;
Form1->Image30->Visible=0; Form1->Image8->Visible=1;
Form1->Image18->Visible=0; Form1->Image10->Visible=1;
Form1->Image31->Visible=0; Form1->Image9->Visible=1;
Form1->Image19->Visible=0; Form1->Image11->Visible=1;
Form1->Image20->Visible=0; Form1->Image12->Visible=1;
Form1->Image21->Visible=0; Form1->Image13->Visible=1;
Form1->Image22->Visible=0; Form1->Image14->Visible=1;
Form1->Image23->Visible=0; Form1->Image15->Visible=1;
return;
}
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

b++;
switch(way[j]){
case 0:{
 j=19;
 break;
}
case 2:{
if(b%2==0){
Image24->Visible=1; Image2->Visible=0;
Image28->Visible=1; Image6->Visible=0;
}
else{
change();
}
 break;
}
case 3:{
if(b%2==0){
Image26->Visible=1; Image4->Visible=0;
Image20->Visible=1; Image12->Visible=0;
}
else{
change();
}
 break;
}
case 4:{
if(b%2==0){
Image27->Visible=1; Image5->Visible=0;
Image22->Visible=1; Image14->Visible=0;
}
else{
change();
}
 break;
}
case 5:{
if(b%2==0){
Image25->Visible=1; Image3->Visible=0;
Image29->Visible=1; Image7->Visible=0;
}
else{
change();
}
 break;
}
case 6:{
if(b%2==0){
Image24->Visible=1; Image2->Visible=0;
Image30->Visible=1; Image8->Visible=0;
}
else{
change();
}
 break;
}
case 7:{
if(b%2==0){
Image26->Visible=1; Image4->Visible=0;
Image18->Visible=1; Image10->Visible=0;
}
else{
change();
}
 break;
}
case 8:{
if(b%2==0){
Image27->Visible=1; Image5->Visible=0;
Image19->Visible=1; Image11->Visible=0;
}
else{
change();
}
 break;
}
case 9:{
if(b%2==0){
Image25->Visible=1; Image3->Visible=0;
Image31->Visible=1; Image9->Visible=0;
}
else{
change();
}
 break;
}
case 10:{
if(b%2==0){
Image17->Visible=1; Image1->Visible=0;
Image21->Visible=1; Image13->Visible=0;
}
else{
change();
}
 break;
}
case 11:{
if(b%2==0){
Image24->Visible=1; Image2->Visible=0;
Image23->Visible=1; Image15->Visible=0;
}
else{
change();
}
 break;
}

}
 if(b==7){
 if(j!=19)
 j++;
 b=1;
 }
if(j==19){
Timer1->Enabled=false;
for(int i=0;i<20;i++)
way[i]=0;
j=0;
if(current==N4)
  ShowMessage("������� ����������� �����");
  else
  ShowMessage("������� �� ����������� �����");
}
}
//---------------------------------------------------------------------------

