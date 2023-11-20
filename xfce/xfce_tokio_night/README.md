# XFCE 
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/src_1.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/src_2.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/src_3.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/src_4.jpg?ref_type=heads" width="550">
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
  
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/term_1.png?ref_type=heads" width="450">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/term_2.png?ref_type=heads" width="450">  
  
## УСТАНОВКА ОБОЕВ
* download [this](https://images.unsplash.com/photo-1477346611705-65d1883cee1e?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1470&q=80) wallpaper
* change desktop setting:
  
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/desktop.png?ref_type=heads" width="750">  
  
## НАСТРОЙКА ДОКА
* yay xfce4-docklike-plugin
* add new panel:
  
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/dock.png?ref_type=heads" width="750">    
  
## НАСТРОЙКА ПАНЕЛИ
* yay vala-panel-appmenu-xfce
* sudo pacman - S appmenu-gtk-module
* add new panel:
  
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/xfce/xfce_tokio_night/.img/panel.png?ref_type=heads" width="450">  
  
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
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```Установка ArchLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/ArchLinux-uefi-install)  
- [```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
- [```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
- [```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
- [```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ВИДЕО:  
[![Watch the video](https://sun9-31.userapi.com/impg/FbcXyOK4XAlxFyHEfluxE_vdsjikTg_oaoXSUg/-7OX2HtkVu8.jpg?size=450x253&quality=95&sign=6afa0c95aa85b48d71bb194ed8cd8324&type=album)](https://www.youtube.com/watch?v=FgFa-RcvCN8&lc=UgyT04YTfSJtec0yQc94AaABAg)  

## ССЫЛКИ:  
[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_youtube.png?ref_type=heads" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_tg.png?ref_type=heads" width="100">](https://t.me/prolinux_tg)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_unsplash.png?ref_type=heads" width="100">](https://unsplash.com/@owl410/collections)  

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_coffee.png?ref_type=heads" width="100">](https://www.donationalerts.com/r/prolinux)

