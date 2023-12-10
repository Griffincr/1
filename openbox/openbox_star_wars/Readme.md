## OPENBOX STARWARS
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_star_wars/.img/1.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_star_wars/.img/2.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_star_wars/.img/3.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_star_wars/.img/4.jpg?ref_type=heads" width="450">
</div>  
<br /><br />

## HI!
Я делал данный райс на ArchLinux без каких либо соседствующих DE,
все конфиги в ~/.config стандартно, с путями я ничего не делал.  

- Openbox - скорее мертв чем жив
- Plank - нормально заработал только с lightdm
- Picom - пробовал обычный и ftlabs, без нареканий
- Conky - скорее не нужно чем нужно
- Tint2 - странная штука, но работает
- Pcmanfm - при помощи него можно сделать иконки на рабочем столе, с коньками плохо работает
- Glava - нужно только для скриншотов фундипепистых

## УСТАНОВКА OPENBOX НА ARCH
Тут самый минимум необходимый для того что бы запустить openbox, а в нем терминал.
  
```
sudo pacman -S xorg xorg-xinit openbox python-pyxdg alacritty
mkdir .config
cp -R /etc/xdg/openbox .config
micro .xinitrc: exec openbox
```
В .config/openbox/menu.rc нужно поправить терминал на свой


## УСТАНОВКА ЭТОГО КОНФИГА
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dots/openbox/openbox_star_wars/.config скопировать все в ~/.config
```
cp -r ~/owl_dots/openbox/openbox_star_wars/.config/ ~/.config
```
  
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Перезагрузится.

[Видео по установке Openbox](https://www.youtube.com/watch?v=mYAOaEdY-rs&t=24s)  
[Видео по настройке Openbox](https://www.youtube.com/watch?v=8a0Ue0PnZs4)
  

## СОФТ КОТОРЫЙ Я СТАВИЛ
```
sudo pacman -S firefox telegram-desktop gimp inkscape blender ghostscript obs-studio audacious
lmms hydrogen pulseaudio pavucontrol alsa-utils alsa-tools pulseaudio-alsa nemo htop cmus
neofetch scrot ranger mpv neovim fish ueberzug tint2 ttf-nerd-fonts-symbols file-roller
lxappearance nitrogen numlockx viewnior mousepad rofi plank libwnck lightdm conky glava

yay cava picom-ftlabs
```

# ИНФО
|DISTRO|[ArchLinux](https://archlinux.org/)|
| ------ | ------ |
|WM|[Openbox](http://openbox.org)|
|BAR|[Tint2](https://gitlab.com/o9000/tint2)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[La-capitaine-icon-theme](https://www.gnome-look.org/p/1148695/)|
|GTK3|[X-Arc](https://www.gnome-look.org/p/1167049/)|
|Ob-theme|[Square-light](https://www.gnome-look.org/p/1167049/)|
|CURSORS|[Capitaine Cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-36.userapi.com/impg/peRSavgrAweuq9N4uMb90X0awip0xCeuRMz_Vw/s35nG6yQpjc.jpg?size=1920x1080&quality=95&sign=ecb1744ff68a80eaaaeb9de498d096ad&type=album)|  


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


