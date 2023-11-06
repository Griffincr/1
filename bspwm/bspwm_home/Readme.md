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
Я делал данный райс на VoidLinux и на ArchLinux, все настройки идут от `~/.config/bspwm/themes/bspwm_home/bspwm/bspwmrc` В первую очередь необходимо открыть этот файл и закоментировать/раскоментировать то что тебе нужно.
  
Конфиги bspwm sxhkd alacritty dunst picom polybar rofi и обои берутся из `~/.config/bspwm/themes/bspwm_home` Обои подхватываются из `~/.config/bspwm/themes/bspwm_home/wallpapers` 
  
## УСТАНОВКА ЭТОГО КОНФИГА:
  
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dots/bspwm/bspwm_home/.config скопировать все в ~/.config:  
```
cp -r ~/owl_dots/bspwm/bspwm_home/.config/ ~/.config
```
  
В ~/.xinitrc прописать:  
```
exec sxhkd -c ~/.config/bspwm/themes/bspwm_home/sxhkd/sxhkdrc &  
exec bspwm -c ~/.config/bspwm/themes/bspwm_home/bspwm/bspwmrc
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
|LAUNCHER|[rofi](https://github.com/davatorium/rofi)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[La-Capitaine](https://github.com/keeferrourke/la-capitaine-icon-theme)|
|GTK3|[X-Arc-Plus](https://www.gnome-look.org/p/1167049/)|
|CURSORS|[Capitaine-cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-10.userapi.com/impg/iWlFPbtXVQ39reVti7-H1Hdy68MUNd4GYp8C9A/k1tfpgfSh_w.jpg?size=2560x1707&quality=95&sign=e1fcd58a4baf2bbf4d5bc9e9c39af666&type=album)|  

## НАСТРОЙКА СИСТЕМЫ:
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
- [```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
- [```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
- [```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ССЫЛКИ:  
[<img src="https://sun9-23.userapi.com/impg/yIOnzT-OoKTRK5Y9TO0nxakCl3FnrfskMpvNhg/mgW49nlI9Qg.jpg?size=212x68&quality=95&sign=cfa966ddb53790d2cd2e68ef67d491c9&type=album" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://sun9-53.userapi.com/impg/nwOE1vllWViBmeXHTUuER4HHJefjtvq48FD9JA/6EBqt6Vahuw.jpg?size=212x68&quality=95&sign=ef6843485ba13c583a6772e516ba7b65&type=album" width="100">](https://t.me/prolinux_tg)

[<img src="https://sun9-25.userapi.com/impg/8qdqi7ClY3p08NdNdwxtSAshdjDIu4m2p0kziQ/o_A_uhq_7hc.jpg?size=212x68&quality=95&sign=6ebc303e1c23457ee8b7db6723530ee5&type=album" width="100">](https://unsplash.com/@owl410/collections)
