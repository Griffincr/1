## DWM ONE
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_one/.img/1.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_one/.img/2.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_one/.img/3.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/dwm/dwm_one/.img/4.jpg?ref_type=heads" width="450">
</div>  
<br /><br />

## HI!
Я делал данный райс на ArchLinux без каких либо соседствующих DE, все конфиги в ~/.config стандартно, с путями я ничего не делал. Этот райс достаточно минималистичный как и в прочем сам DWM, каких то рофей и пикомов я не прикручивал.

[Обзор и установка DWM](https://www.youtube.com/watch?v=xA4_W1fEZvc)
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

## УСТАНОВКА ЭТОГО КОНФИГА
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dots/dwm/dwm_one/.config скопировать все в ~/.config
```
cp -r ~/owl_dots/dwm/dwm_one/.config/ ~/.config
```
  
Посмотреть как сделан конфиг ~/owl_dots/dwm/dwm_one/config.h и сделать у себя так же... Ну реально самый простой вариант,
если ты новичек.
  
У меня так же установленны патчи:
- dwm-fullgaps-6.4.diff
- dwm-barpadding-20211020-a786211.diff
- dwm-bar-height-spacing-6.3.diff

Последний не работает. Если не знаешь как патчить сначала чекни видос на канале, потом что эти патчи делают.
  
В ~/.xinitrc прописать:
```
exec dwm
```
  
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Перезагрузится.
  
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
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[Delight-Gray_Dark](https://www.pling.com/p/1532276)|
|GTK3|[Flat-Remix-Gray-Dark](https://www.pling.com/p/1214931)|
|CURSORS|[Capitaine Cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-6.userapi.com/impg/d0ZUUjnMMhUzvDDSkLLtpI51NJiMqNrcQHq4iA/GbYnbLRGmcY.jpg?size=2560x1704&quality=95&sign=2956e11c8c59306b8cef882c0791b4f6&type=album)|  

## ВИДЕО
[![Watch the video](https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/dwm.jpg?ref_type=heads)](https://www.youtube.com/watch?v=xA4_W1fEZvc)


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


