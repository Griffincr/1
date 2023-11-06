# XFCE 
<br />
  
<div align="center">
<img src="https://sun9-78.userapi.com/impg/AjTcF7laKo_Zu12yLFq0Wi6qoxlQLOOc-qB4XQ/5VaVHRYtCPE.jpg?size=1280x720&quality=95&sign=f0ed805ab120d2d4db6f69ac643a280e&type=album" width="550">

<img src="https://sun9-57.userapi.com/impg/MTHfeZWiTO2enV-M4ij4aKgBMUyS4yqU3lIpSg/vu8pet-t9pE.jpg?size=1280x720&quality=95&sign=679dae6c2f251ffd40d6a64dd17d1534&type=album" width="550">

<img src="https://sun9-34.userapi.com/impg/YR99vaokK6Kxe3_Bcvm7A_BIbUsaxtMFUXlzOQ/XqnS_Rpo6HA.jpg?size=1280x720&quality=95&sign=3c4887ed3e9299c79b9b32462b80a484&type=album" width="550">

<img src="https://sun9-78.userapi.com/impg/O5luEnUBbcP-Mhkqb7Xi9odTjtkFDVQPD1dhMA/FKnyXTETvjc.jpg?size=1280x720&quality=95&sign=f9011ba633bb03d96e6049306fa98054&type=album" width="550">
</div>  

<br /><br />
  
## УСТАНОВКА GTK ТЕМЫ

**Download theme:**  
* [Tokyonight-Dark-BL-LB](https://www.gnome-look.org/p/1681315)
* [Tokyonight-Light-BL-LB](https://www.gnome-look.org/p/1681315)
* [Tokyonight-Moon-BL-LB](https://www.gnome-look.org/p/1681315)
* [Tokyonight-Storm-BL-LB](https://www.gnome-look.org/p/1681315)
  
mkdir ~/.themes  
copy & unzip gtk themes in ~/.themes  
  
## УСТАНОВКА ИКОНОК
* git clone https://github.com/alvatip/Nordzy-icon    
* cd Nordzy-icon  
* install.sh  

## УСТАНОВКА ШРИФТОВ
* Download font [JetBrainsMono ](https://download.jetbrains.com/fonts/JetBrainsMono-2.242.zip?_gl=1*x4bu9c*_ga*MjAyOTUyMTMxMy4xNjcwOTM4NDY4*_ga_9J976DJZ68*MTY3MDkzODQ2OC4xLjAuMTY3MDkzODQ2OC4wLjAuMA..&_ga=2.32591222.957622972.1670938469-2029521313.1670938468)  
* mkdir ~/.fonts  
* copy & unzip all fonts files in ~/.fonts
* sudo pacman -S awesome-terminal-fonts  

## УСТАНОВКА FISH
* sudo pacman -S fish  
* fish  
* curl -sL https://git.io/fisher | source && fisher install jorgebucaran/fisher  
* fisher install jorgebucaran/nvm.fish  
* fisher install IlanCosman/tide@v5  
* chsh -s /usr/bin/fish  
* set -U fish_greeting  
  
tide configure  

## УСТАНОВКА YAY
* sudo pacman -S --needed git base-devel  
* git clone https://aur.archlinux.org/yay.git  
* cd yay  
* makepkg -si  

## УСТАНОВКА КУРСОРОВ
* yay xcursor-simp1e-tokyo-night-storm   
* yay xcursor-simp1e-tokyo-night-light  
* yay xcursor-simp1e-tokyo-night  
  
## НАСТРОЙКА ТЕРМИНАЛА
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/xfce4/terminal/colorschemes/tokyonight_night.theme) theme
* mkdir -p ~/.config/xfce4/terminal/colorschemes
* move theme to ~/.config/xfce4/terminal/colorschemes
* change terminal setting:  
  
<img src="https://sun9-53.userapi.com/impg/tJH-lyweaeK_EOq5g9WSPHEGRCkYnRzoTlcrGg/5UZuyN32QXM.jpg?size=886x730&quality=95&sign=57df6daa232f8e414efd4e8038827d8b&type=album" width="450" align="center">
<img src="https://sun9-65.userapi.com/impg/QtB8TfGN-uZUPRW59ryx3Z3t4YCEBiZvPMaa7A/4Rt6MBFgxdE.jpg?size=886x730&quality=95&sign=59c2b0a1716cc3d301deac42878f22f6&type=album" width="450" align="center">  
  
## УСТАНОВКА ОБОЕВ
* download [this](https://images.unsplash.com/photo-1477346611705-65d1883cee1e?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1470&q=80) wallpaper
* change desktop setting:
  
<img src="https://sun9-79.userapi.com/impg/AfQ0esqEt7O1JoOqVpmc-W9K5hq4lAhT1UMX_g/bVme1UBW22I.jpg?size=828x682&quality=95&sign=95bdc957c0d1a503394e02f964c5c7de&type=album" width="750" align="center">  
  
## НАСТРОЙКА ДОКА
* yay xfce4-docklike-plugin
* add new panel:
  
<img src="https://sun9-32.userapi.com/impg/gsHKJmZ8dXV0jcidxOrugknqPyIuPPn-VWT-4Q/Yunru5PoIs0.jpg?size=440x606&quality=95&sign=fca41796b5fbcdeb961fa90ad0690d89&type=album" width="450" align="center">  
  
## НАСТРОЙКА ПАНЕЛИ
* yay vala-panel-appmenu-xfce
* sudo pacman - S appmenu-gtk-module
* add new panel:
  
<img src="https://sun9-73.userapi.com/impg/cRSV5qpWc_Q5Nfr3HQTbADfSdeeVUspBi8yzSA/cNuHQqoLy_s.jpg?size=440x770&quality=95&sign=a0b82ee8542349e18d3ab87215606143&type=album" width="450" align="center">  
  
## PICOM
* yay picom-tryone-git
* mkdir -p ~/.config/picom
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/picom/picom.conf) archive and unzip to ~/.config/picom
* add to autostart: picom  
  

## CONKY (for cmus player)
* sudo pacman - S conky jq glava cmus
* mkdir -p ~/.config/conky
* mkdir -p ~/.config/glava
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/conky/conky.tar.gz) archive and unzip to ~/.config/conky
*download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/glava/glava.tar.gz) file and move to ~/.config/glava
* add to autostart: glava --desktop
* add to autostart: conky
* chmod u+x ~/.config/conky/weather.sh
* chmod u+x ~/.config/conky/cmus.sh

## MICRO
* sudo pacman - S micro
* mkdir -p ~/.config/micro/colorshemes
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/micro/colorshemes/tokyo_night.micro) file and move to ~/.config/micro/colorshemes
* start micro
* ctrl+e
* set colorsheme tokyo_night
  
## NEOFETCH
* sudo pacman - S neofetch
* mkdir -p ~/.config/neofetch
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/neofetch/config.conf) file and move to ~/.config/neofetch
  
## RANGER
* sudo pacman - S ranger
* mkdir -p ~/.config/ranger
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/.config/ranger/ranger.tar.gz) archive and unzip to ~/.config/ranger
* chmod u+x ~/.config/conky/scope.sh
  
## TELEGRAM
* sudo pacman - S telegram-desktop
* download [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/telegram/TokyoNight.tdesktop-theme) file, sand message to telegram, apply sheme
* set [this](https://gitlab.com/prolinux410/owl_dots/-/blob/main/xfce/xfce_tokio_night/telegram/fon.png) fon to setting

## НАСТРОЙКА СИСТЕМЫ:
  
[```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
[```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
[```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
[```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
[```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ВИДЕО:  
[![Watch the video](https://sun9-31.userapi.com/impg/FbcXyOK4XAlxFyHEfluxE_vdsjikTg_oaoXSUg/-7OX2HtkVu8.jpg?size=450x253&quality=95&sign=6afa0c95aa85b48d71bb194ed8cd8324&type=album)](https://www.youtube.com/watch?v=FgFa-RcvCN8&lc=UgyT04YTfSJtec0yQc94AaABAg)  

## ССЫЛКИ:  
[<img src="https://sun9-23.userapi.com/impg/yIOnzT-OoKTRK5Y9TO0nxakCl3FnrfskMpvNhg/mgW49nlI9Qg.jpg?size=212x68&quality=95&sign=cfa966ddb53790d2cd2e68ef67d491c9&type=album" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://sun9-53.userapi.com/impg/nwOE1vllWViBmeXHTUuER4HHJefjtvq48FD9JA/6EBqt6Vahuw.jpg?size=212x68&quality=95&sign=ef6843485ba13c583a6772e516ba7b65&type=album" width="100">](https://t.me/prolinux_tg)

[<img src="https://sun9-25.userapi.com/impg/8qdqi7ClY3p08NdNdwxtSAshdjDIu4m2p0kziQ/o_A_uhq_7hc.jpg?size=212x68&quality=95&sign=6ebc303e1c23457ee8b7db6723530ee5&type=album" width="100">](https://unsplash.com/@owl410/collections)


