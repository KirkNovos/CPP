object Form1: TForm1
  Left = 685
  Top = 128
  Width = 905
  Height = 476
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 176
    Width = 77
    Height = 13
    Caption = #1090#1086#1083#1097#1080#1085#1072' '#1083#1080#1085#1080#1080
  end
  object Label2: TLabel
    Left = 24
    Top = 120
    Width = 58
    Height = 13
    Caption = #1062#1074#1077#1090' '#1083#1080#1085#1080#1080
  end
  object Button1: TButton
    Left = 24
    Top = 24
    Width = 75
    Height = 25
    Caption = #1086#1073#1079#1086#1088
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 24
    Top = 80
    Width = 75
    Height = 25
    Caption = #1087#1086#1089#1090#1088#1086#1080#1090#1100' '#1075#1088
    TabOrder = 1
    OnClick = Button2Click
  end
  object Chart1: TChart
    Left = 144
    Top = 24
    Width = 713
    Height = 385
    BackWall.Brush.Color = clWhite
    BackWall.Brush.Style = bsClear
    LeftWall.Brush.Color = clWhite
    Title.Text.Strings = (
      'Graph')
    BottomAxis.Automatic = False
    BottomAxis.AutomaticMaximum = False
    BottomAxis.AutomaticMinimum = False
    BottomAxis.Maximum = 20
    BottomAxis.Minimum = -20
    BottomAxis.PositionPercent = 50
    LeftAxis.Automatic = False
    LeftAxis.AutomaticMaximum = False
    LeftAxis.AutomaticMinimum = False
    LeftAxis.Maximum = 20
    LeftAxis.Minimum = -20
    LeftAxis.PositionPercent = 50
    View3D = False
    TabOrder = 2
  end
  object ColorBox1: TColorBox
    Left = 24
    Top = 136
    Width = 105
    Height = 22
    ItemHeight = 16
    TabOrder = 3
  end
  object Edit1: TEdit
    Left = 24
    Top = 192
    Width = 105
    Height = 21
    TabOrder = 4
    Text = '5'
  end
  object Button3: TButton
    Left = 24
    Top = 232
    Width = 97
    Height = 25
    Caption = #1080#1079#1084#1077#1085#1077#1085#1080#1077' '#1074#1080#1076#1072
    TabOrder = 5
    OnClick = Button3Click
  end
  object OpenDialog1: TOpenDialog
    Left = 104
    Top = 24
  end
end
