//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TMemo *MainMemo;
    TGroupBox *ToolsGroupBox;
    TButton *OpenFileButton;
    TGroupBox *OutputGroupBox;
    TGroupBox *OperatorsGroupBox;
    TGroupBox *OperandsGroupBox;
    TStaticText *TotalDictionaryStaticText;
    TStaticText *TotalLengthStaticText;
    TStaticText *TotalVolumeStaticText;
    TStaticText *TotalDictionaryValueText;
    TStaticText *TotalLengthValueText;
    TStaticText *TotalVolumeValueText;
    TStringGrid *OperatorsStringGrid;
    TStringGrid *OperandsStringGrid;
    TStaticText *OperatorsDictionaryStaticText;
    TStaticText *OperandsDictionaryStaticText;
    TStaticText *OperatorsLengthStaticText;
    TStaticText *OperandsLengthStaticText;
    TStaticText *OperatorsDictionaryValueText;
    TStaticText *OperatorsLengthValueText;
    TStaticText *OperandsDictionaryValueText;
    TStaticText *OperandsLengthValueText;
    TOpenDialog *OpenDialog1;
    void __fastcall OpenFileButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
