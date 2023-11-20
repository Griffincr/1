## BSPWM CITY
<br />
  
<div align="center">
<img src="https://sun9-59.userapi.com/impg/vAJFC6O_v8o1OG7ry73OwhVSY5PFMtGfvN7EVw/GNeFoJ1i_Xo.jpg?size=1280x720&quality=95&sign=64af64afd538bfe1c34a13ff4f47fa02&type=album" width="550">

<img src="https://sun9-50.userapi.com/impg/9mIc18L-WpjJ09Yv9joPCyU7M7Yn-hh2r8tGGA/tizUHveyihI.jpg?size=1280x720&quality=95&sign=04d7679213de08448f661bc4fbb98af7&type=album" width="550">

<img src="https://sun9-35.userapi.com/impg/bVGWMmabmkthALWg620Krt1IvQWR-zzvHFE-Hg/n1Hf6vX70NQ.jpg?size=1280x720&quality=95&sign=4d4c63e7c14afef4aec8fdae664476d6&type=album" width="550">

<img src="https://sun9-51.userapi.com/impg/hoLQ-PupOy_xjWm1CGiJYXwWyuEpjSkecWF0fw/mW74dgQw14g.jpg?size=1280x720&quality=95&sign=a168199253a2c5a5d351fc3c6d207ded&type=album" width="550">
</div>  
<br /><br />

## HI!:
Я делал данный райс на VoidLinux и на ArchLinux без каких либо соседствующих DE, все настройки идут от `~/.config/bspwm/themes/bspwm_city/bspwm/bspwmrc` В первую очередь необходимо открыть этот файл и закоментировать/раскоментировать то что тебе нужно.

  
Конфиги bspwm sxhkd alacritty dunst picom polybar rofi и обои берутся из `~/.config/bspwm/themes/bspwm_city` 
  
## УСТАНОВКА ЭТОГО КОНФИГА:
  
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dots/bspwm/bspwm_city/.config скопировать все в ~/.config:  
```
cp -r ~/owl_dots/bspwm/bspwm_city/.config/ ~/.config
```
  
В ~/.xinitrc прописать:  
```
exec sxhkd -c ~/.config/bspwm/themes/bspwm_city/sxhkd/sxhkdrc &  
exec bspwm -c ~/.config/bspwm/themes/bspwm_city/bspwm/bspwmrc
```
  
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Заменить софт в ~/.config/bspwm/themes/bspwm_yellow/sxhkd/sxhkdrc на нужный тебе. Перезагрузится.  

## СОФТ КОТОРЫЙ Я СТАВИЛ:
```
sudo pacman -S pulseaudio pavucontrol firefox inkscape blender telegram-desktop viewnior
obs-studio nemo htop links cmus neofetch scrot ranger neovim mpv unzip polybar fish picom rofi
conky ttf-nerd-fonts-symbols feh jq ueberzug w3m imagemagick ghostscript

yay cava
```
  
# ИНФО

|DISTRO|[ArchLinux](https://archlinux.org/)|
|:---:|:---:|
|WM|[BSPWM](https://github.com/baskerville/bspwm)|
|BAR|[Polybar](https://github.com/polybar/polybar)|
|PICOM|[FT-Labs](https://github.com/FT-Labs/picom)|
|LAUNCHER|[rofi](https://github.com/davatorium/rofi)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[Zorin Grey Dark](https://github.com/ZorinOS/zorin-icon-themes)|
|GTK3|[Flat Remix Gray Dark](https://github.com/daniruiz/flat-remix-gtk)|
|CURSORS|[Capitaine-cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-13.userapi.com/impg/4HAivprJcu-o5BQka_w2FVYbxUGEaNmNUMfmwg/_jNNZcZtXm8.jpg?size=2000x1333&quality=95&sign=61e0024e317dba62d2dd2eed68e73807&type=album)|  

## НАСТРОЙКА СИСТЕМЫ:
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```Установка ArchLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/ArchLinux-uefi-install)  
- [```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
- [```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
- [```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
- [```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ВИДЕО:  
[![Watch the video](https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/bspwm_city.png?ref_type=heads)](https://www.youtube.com/watch?v=C4t5uu5fW3I&t=139s)  

## ССЫЛКИ:  
[<https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_youtube.png?ref_type=heads" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_tg.png?ref_type=heads" width="100">](https://t.me/prolinux_tg)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_unsplash.png?ref_type=heads" width="100">](https://unsplash.com/@owl410/collections)  


[Угостить автора чашечкой кофе](https://www.donationalerts.com/r/prolinux)

