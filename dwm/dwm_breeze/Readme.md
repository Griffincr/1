## DWM BREEZE
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_breeze/.img/1.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_breeze/.img/2.jpg?ref_type=heads" width="450">
</div>  
<br /><br />

## HI!
Я делал данный райс на ArchLinux без каких либо соседствующих DE, все конфиги в ~/.config стандартно, с путями я ничего не делал. 

[Обзор и установка DWM](https://www.youtube.com/watch?v=xA4_W1fEZvc)<br />
[Dwm-blocks и Dwm-flexipatch](https://www.youtube.com/watch?v=8anqoGmjUA0)
  

## УСТАНОВКА DWM НА ARCH
  
Тут самый минимум необходимый для того что бы запустить dwm, а в нем терминал.
  
```
sudo pacman -S xorg xorg-xinit alacritty wget mesa

wget https://dl.suckless.org/dwm/dwm-6.4.tar.gz

tar -xzvf dwm-6.4.tar.gz

cd dwm

micro config.def.h (тут нужно в 60й строке заменить терминал на свой)

sudo make clean install

.xinitrc: exec dwm
```

## СОФТ КОТОРЫЙ Я СТАВИЛ
```
sudo pacman -S pulseaudio pavucontrol firefox inkscape blender telegram-desktop viewnior
obs-studio nemo htop cmus neofetch scrot ranger neovim mpv fish file-roller ttf-nerd-fonts-symbols
ghostscript lxappearance nitrogen numlockx alsa-plugins alsa-lib alsa-utils alsa-tools

yay cava  
```

# ИНФО
|DISTRO|[ArchLinux](https://archlinux.org/)|
| ------ | ------ |
|WM|[DWM](https://dwm.suckless.org/)|
|BAR|[DwmBar](--)|
|LAUNCHER|[Dmenu](https://tools.suckless.org/dmenu/)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Bash](https://fishshell.com/)|
|ICON|[Papirus-Bluegrey-Folders](https://www.pling.com/p/1166289)|
|GTK3|[Breeze-gtk](https://github.com/KDE/breeze-gtk)|
|CURSORS|[Capitaine Cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-5.userapi.com/impg/aEDjYR92uAzzUsIAnK9E6sHKsXuZFxRIOQ3pCg/iC4dx-sh2kY.jpg?size=2560x1600&quality=95&sign=abdf708e7560ba6964e2ca1e30422d4f&type=album)|  

## НАСТРОЙКА СИСТЕМЫ
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```Установка ArchLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/ArchLinux-uefi-install)  
- [```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
- [```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
- [```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
- [```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ССЫЛКИ:  
[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_youtube.png?ref_type=heads" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_tg.png?ref_type=heads" width="100">](https://t.me/prolinux_tg)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_unsplash.png?ref_type=heads" width="100">](https://unsplash.com/@owl410/collections)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_coffee.png?ref_type=heads" width="100">](https://www.donationalerts.com/r/prolinux)


