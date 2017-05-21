style"button"{
GtkButton::shadow-type=GTK_SHADOW_NONE
GtkButton::default-outside-border={0,0,0,0}
GtkButton::default-border={0,0,0,0}
GtkButton::inner-border={1,1,1,1}
bg[NORMAL]=@base_color
bg[PRELIGHT]=@base_color
bg[SELECTED]=@base_color
bg[ACTIVE]=@selected_base_color
bg[INSENSITIVE]=@base_color}
class"*GtkButton"style"button"

style"togglebutton"{
bg[NORMAL]=@base_color
bg[PRELIGHT]=@base_color
bg[SELECTED]=@base_color
bg[ACTIVE]=@selected_base_color
bg[INSENSITIVE]=@base_color
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=SELECTED
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=NORMAL
shadow=IN
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=SELECTED
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
class"*GtkToggleButton"style"togglebutton"

style"toolbutton"{
bg[NORMAL]=@base_color
bg[PRELIGHT]=@base_color
bg[SELECTED]=@base_color
bg[ACTIVE]=@selected_base_color
bg[INSENSITIVE]=@base_color
GtkButton::shadow-type=GTK_SHADOW_NONE
engine"pixmap"{
image{
function=BOX
state=INSENSITIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=NORMAL
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=PRELIGHT
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=SELECTED
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=ACTIVE
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
state=INSENSITIVE
shadow=IN
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=NORMAL
shadow=IN
file="../images/gtk-2.0/tab_normal.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=PRELIGHT
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=SELECTED
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
function=BOX
state=ACTIVE
shadow=IN
file="../images/gtk-2.0/tab_active.svg"
border={1,1,1,1}
stretch=TRUE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget_class"*.GtkToolItem*Button"style"toolbutton"
widget_class"*.GtkToolbar*Button"style"toolbutton"
class"*GtkToolButton"style"toolbutton"
class"*GtkToggleToolButton"style"toolbutton"
class"*GtkScaleButton"style"toolbutton"
class"*GtkLinkButton"style"toolbutton"
class"*GimpButton"style"toolbutton"

style"toolmenubutton"{
bg[NORMAL]=@base_color
bg[PRELIGHT]=@base_color
bg[SELECTED]=@base_color
bg[ACTIVE]=@base_color
bg[INSENSITIVE]=@base_color
GtkButton::shadow-type=GTK_SHADOW_NONE
engine"pixmap"{
image{
function=BOX
shadow=OUT
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=BOX
shadow=IN
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="buttondefault"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
detail="focus"
file="../images/gtk-2.0/none.svg"
stretch=FALSE}
image{
function=ARROW
state=ACTIVE
file="../images/gtk-2.0/arrow-bg.svg"
stretch=FALSE
overlay_file="../images/gtk-2.0/arrow-down_active.svg"
overlay_stretch=FALSE
arrow_direction=DOWN}}}
widget_class"*.GtkMenuToolButton*GtkToggleButton"style"toolmenubutton"
widget_class"*.GtkMenuToolButton*GtkToggleButton*GtkArrow"style"toolmenubutton"

style"checkbutton"{
bg[NORMAL]=@bg_color
bg[PRELIGHT]=@bg_color
bg[SELECTED]=@bg_color
bg[ACTIVE]=@bg_color
bg[INSENSITIVE]=@bg_color}
class"*GtkCheckButton"style"checkbutton"

style"lnkbutton"{
xthickness=0
ythickness=0
engine"pixmap"{
image{
function=BOX
file="../images/gtk-2.0/none.svg"
stretch=FALSE}}}
widget"*GtkLinkButton*"style"lnkbutton"
