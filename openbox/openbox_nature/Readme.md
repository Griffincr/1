## OPENBOX NATURE
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_nature/.img/1.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_nature/.img/2.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_nature/.img/3.jpg?ref_type=heads" width="450">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_nature/.img/4.jpg?ref_type=heads" width="450">
</div>  
<br /><br />

## HI!
Я делал данный райс на ArchLinux без каких либо соседствующих DE,
все конфиги в ~/.config стандартно, с путями я ничего не делал.

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
  
Из ~/owl_dots/openbox/openbox_nature/.config скопировать все в ~/.config
  
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Перезагрузится.
Тему иконок я правил, взял тему Delight и прикрутил иконки каталогов из la-capitaine-icon-theme.
  
Автостарт у меня не взлетел так что стартуется все из .xinitrc  

[Видео по установке Openbox](https://www.youtube.com/watch?v=mYAOaEdY-rs&t=24s)  
[Видео по настройке Openbox](https://www.youtube.com/watch?v=8a0Ue0PnZs4)
  

## СОФТ КОТОРЫЙ Я СТАВИЛ
```
sudo pacman -S firefox telegram-desktop gimp inkscape blender ghostscript obs-studio audacious
lmms hydrogen pulseaudio pavucontrol alsa-utils alsa-tools pulseaudio-alsa nemo htop cmus
neofetch scrot ranger mpv neovim fish ueberzug tint2 ttf-nerd-fonts-symbols file-roller
lxappearance nitrogen numlockx viewnior mousepad
```


# ИНФО
|DISTRO|[ArchLinux](https://archlinux.org/)|
| ------ | ------ |
|WM|[Openbox](http://openbox.org)|
|BAR|[Tint2](https://gitlab.com/o9000/tint2)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[Delight](https://www.pling.com/p/1532276)|
|GTK3|[X-Arc](https://www.gnome-look.org/p/1167049/)|
|Ob-theme|[Square-light](https://gitlab.com/prolinux410/owl_dots/-/raw/main/openbox/openbox_nature/Square-light.tar.gz)|
|CURSORS|[Capitaine Cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-10.userapi.com/impg/M-OStO1_7QiSzizkE_JI0G8SKJtQyF-rcVhfFA/1yZewbP9dzg.jpg?size=2560x1440&quality=95&sign=cc2a35a4ecc372ab66e7b8b97e8528f7&type=album)|  


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


