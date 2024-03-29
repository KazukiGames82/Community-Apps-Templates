;----------------------------------------------------
; MOVE THIS VARIABLES INTO VARIABLES.INC AND VARIABLESDEFAULT.INC
;----------------------------------------------------

; Variable with dynamic or static text.
AppName-AppAuthor___Text="Hi, i'm a static text"

; Variable to hide/show text in top bar.
AppName-AppAuthor___Hide_Text=1

; Variable to hide/show text in top bar.
AppName-AppAuthor___Hide_Icon=0

;----------------------------------------------------
; MOVE THIS VARIABLES INTO VARIABLESDATA.INC
;----------------------------------------------------

; Conditional Variables
AppName-AppAuthor___Text_0=[#*AppName-AppAuthor___Text*]
AppName-AppAuthor___Text_1=

;----------------------------------------------------
; BARMODIFIER START
;----------------------------------------------------

;----------------------------------------------------
; Styles
;----------------------------------------------------

[AppName-AppAuthor.Style]
ImageAlpha=0
W=[AppName-AppAuthor_String:W]

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

;----------------------------------------------------
; Meters
;----------------------------------------------------

[AppName-AppAuthor_String]
Meter=String
MeterStyle=InfoStyle | AppName-AppAuthor_Style
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(#AppName-AppAuthor___Hide_Icon#=1?(#TopBarSysTextWPadding#*((#AppName-AppAuthor___Hide_Text#-1)*-1)):(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)),#TopBarSysTextYPadding#,(#TopBarSysTextWPadding#*((#AppName-AppAuthor___Hide_Text#-1)*-1)),0
Text=[#AppName-AppAuthor___Text_[#AppName-AppAuthor___Hide_Text]]
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))

[AppName-AppAuthor_Icon]
Meter=Image
MeterStyle=InfoStyle | AppName-AppAuthor_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\AppName-AppAuthor\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*((#AppName-AppAuthor___Hide_Icon#-1)*-1))
Padding=#SysIconPadding#
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)