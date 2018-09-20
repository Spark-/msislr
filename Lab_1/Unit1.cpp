//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
    MainMemo->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::OpenFileButtonClick(TObject *Sender)
{
    AnsiString filename;
    OpenDialog1->Execute();
    filename=OpenDialog1->FileName;
    if(filename == "" || filename == NULL) return;
    MainMemo->Lines->LoadFromFile(filename);
    std::string allLines = "";
    for(int i=0;i<MainMemo->Lines->Count;i++) {
        allLines += AnsiString(MainMemo->Lines->Strings[i]).c_str();
        allLines += "QQQ\n";
    }
    allLines += "\0";
    ShowMessage(IntToStr((int)allLines.length()));
    MainMemo->Clear();
    //regex commentPattern("[\/][\/].*|[\#].*|[\/][\*][^]*?[\*][\/]|[\"][^]*?[\"]");
    //smatch searchResults;

    int theIndex = 0;
        for(int i=0;i<(int)allLines.length();i++) {
            if(allLines[i]=='\n') {
            std::string theString = "" + allLines.substr(theIndex,i-theIndex);
            theIndex = i+1;
            MainMemo->Lines->Add(theString.c_str());
            }
        }
}
//---------------------------------------------------------------------------

