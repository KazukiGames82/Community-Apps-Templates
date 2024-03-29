;----------------------------------------------------
; MOVE THIS VARIABLES INTO VARIABLES.INC AND VARIABLESDEFAULT.INC
;----------------------------------------------------

; Variable with dynamic or static text.
AppName-AppAuthor___Text_1="Hi, i'm a static text"
AppName-AppAuthor___Text_2="Hi, i'm Kaz"
AppName-AppAuthor___Text_3="Waiting for something to happen?"

; Variable to hide/show app text in top bar.
AppName-AppAuthor___Hide_Text_1=0
AppName-AppAuthor___Hide_Text_2=0
AppName-AppAuthor___Hide_Text_3=0

; Variable to hide/show app icon in top bar.
AppName-AppAuthor___Hide_Icon_1=0
AppName-AppAuthor___Hide_Icon_2=0
AppName-AppAuthor___Hide_Icon_3=0

;----------------------------------------------------
; MOVE THIS VARIABLES INTO VARIABLESDATA.INC
;----------------------------------------------------

AppName-AppAuthor_String_1=1
AppName-AppAuthor_String_2=2
AppName-AppAuthor_String_3=3

AppName-AppAuthor_Icon_1=1
AppName-AppAuthor_Icon_2=2
AppName-AppAuthor_Icon_3=3

AppName-AppAuthor___Text_1_0=[#*AppName-AppAuthor___Text_1*]
AppName-AppAuthor___Text_1_1=

AppName-AppAuthor___Text_2_0=[#*AppName-AppAuthor___Text_2*]
AppName-AppAuthor___Text_2_1=

AppName-AppAuthor___Text_3_0=[#*AppName-AppAuthor___Text_3*]
AppName-AppAuthor___Text_3_1=

;----------------------------------------------------
; BARMODIFIER START
;----------------------------------------------------

;----------------------------------------------------
; Styles
;----------------------------------------------------

[AppName-AppAuthor.Style]
ImageAlpha=0
W=([AppName-AppAuthor_String_1:W]+[AppName-AppAuthor_String_2:W]+[AppName-AppAuthor_String_3:W])

[AppName-AppAuthor_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#AppName-AppAuthor]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#AppName-AppAuthor]Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#AppName-AppAuthor]] | CustomAppButton | AppName-AppAuthor
DynamicVariables=1

[AppName-AppAuthor_String]
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=([#AppName-AppAuthor___Hide_Icon_[##CURRENTSECTION#]]=1?(#TopBarSysTextWPadding#*(([#AppName-AppAuthor___Hide_Text_[##CURRENTSECTION#]]-1)*-1)):(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)),#TopBarSysTextYPadding#,(#TopBarSysTextWPadding#*(([#AppName-AppAuthor___Hide_Text_[##CURRENTSECTION#]]-1)*-1)),0
X=r
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
Text=[#AppName-AppAuthor___Text_[##CURRENTSECTION#]_[#AppName-AppAuthor___Hide_Text_[##CURRENTSECTION#]]]

[AppName-AppAuthor_Icon]
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*(([#AppName-AppAuthor___Hide_Icon_[##CURRENTSECTION#]]-1)*-1))
Padding=#SysIconPadding#
X=R
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)

;----------------------------------------------------
; Meters
;----------------------------------------------------

[AppName-AppAuthor_Icon_1]
Meter=Image
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_Icon
ImageName="#SKINSPATH#Droptop Community Apps\Apps\AppName-AppAuthor\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#AppName-AppAuthor]]]

[AppName-AppAuthor_String_1]
Meter=String
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_String

;--------------------------

[AppName-AppAuthor_Icon_2]
Meter=Image
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_Icon
ImageName="#SKINSPATH#Droptop Community Apps\Apps\AppName-AppAuthor\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"

[AppName-AppAuthor_String_2]
Meter=String
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_String

;--------------------------

[AppName-AppAuthor_Icon_3]
Meter=Image
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_Icon
ImageName="#SKINSPATH#Droptop Community Apps\Apps\AppName-AppAuthor\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"

[AppName-AppAuthor_String_3]
Meter=String
MeterStyle=InfoStyle | AppName-AppAuthor_Style | AppName-AppAuthor_String
