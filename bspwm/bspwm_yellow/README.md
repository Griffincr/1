# BSPWM YELLOW  
<br />
  
<div align="center">
<img src="https://sun9-33.userapi.com/impg/1HBl4mvMeN11ccmxQfPiqC0hzFk7pFd7S_G0Kw/g4gT-dXWkzM.jpg?size=1920x1080&quality=95&sign=99b6705e832932df7d7984d008167715&type=album" width="550">

<br />

<img src="https://sun9-77.userapi.com/impg/_q0hsIRbOOp6PBsYNTENKaFnwxtdRu6llTPOQQ/YiLG_Gs3xec.jpg?size=1920x1080&quality=95&sign=07017a06daa6796603f3114688da2a7c&type=album" width="550">
</div>  

<br /><br />

## HI!:

Все настройки идут от `~/.config/bspwm/themes/bspwm_yellow/bspwm/bspwmrc` В первую очередь необходимо открыть этот файл и закоментировать/раскоментировать то что тебе нужно.  
<br />
Конфиги bspwm sxhkd alacritty picom polybar rofi берутся из `~/.config/bspwm/themes/bspwm_yellow`. Конфиги cmus, micro, neofetch, ranger находятся в ~/.config  
<br />
В файле bspwm_yellow_wallpaper.svg исходники обоев, можно открыть при помощи inkscape и поправить.  
<br />
Сначала я поставил picom-FT-Labs но он местами фризит, так что вернулся на обычный пиком. Конфиги для обоих сохранил, так что на твое усмотрение!

<br />

## УСТАНОВКА ЭТОГО КОНФИГА:
  
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dots/bspwm/bspwm_yellow/.config скопировать все в ~/.config:  
```
cp -r ~/owl_dots/bspwm/bspwm_yellow/.config/ ~/.config
```
  
В ~/.xinitrc прописать:  
```
exec sxhkd -c ~/.config/bspwm/themes/bspwm_yellow/sxhkd/sxhkdrc &  
exec bspwm -c ~/.config/bspwm/themes/bspwm_yellow/bspwm/bspwmrc
```
  
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Заменить софт в ~/.config/bspwm/themes/bspwm_yellow/sxhkd/sxhkdrc на нужный тебе. Перезагрузится.  

## СОФТ КОТОРЫЙ Я СТАВИЛ:
  
```
sudo xbps-install bspwm sxhkd xorg xinit mesa numlockx alacritty git base-devel firefox inkscape ghostscript blender telegram-desktop viewnior obs obs-plugin-browser-bin nemo htop links cmus cava neofetch scrot ranger neovim mpv unzip file-roller polybar rofi fish-shell picom conky nerd-fonts-symbols-ttf jq lxappearance nitrogen
```

# ИНФО

|DISTRO|[VoidLinux](https://voidlinux.org)|
| ------ | ------ |
|WM|[BSPWM](https://github.com/baskerville/bspwm)|
|BAR|[Polybar](https://github.com/polybar/polybar)|
|PICOM|[FT-Labs](https://github.com/FT-Labs/picom)|
|LAUNCHER|[rofi](https://github.com/davatorium/rofi)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[Delight-gray](https://www.pling.com/p/1532276)|
|GTK3|[Skeuos-Black-Light](https://github.com/daniruiz/skeuos-gtk/tree/master/themes/Skeuos-Black-Light)|
|CURSORS|[Capitaine-cursors](https://github.com/keeferrourke/capitaine-cursors)|
|FONT|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
|WALL|[Тут](https://sun9-69.userapi.com/impg/EVQoeIxRyFHdZNKtQSZbGu-0ZmdaiZ_9z_1HVA/gUEFjEpVxlM.jpg?size=1920x1080&quality=95&sign=460da962d6f836338ae7beaa54fff333&type=album)|  

## НАСТРОЙКА СИСТЕМЫ:
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```Установка ArchLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/ArchLinux-uefi-install)  
- [```Автостарт и Автологин```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Autostart_wm)  
- [```Установка Apparmor```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Apparmor)  
- [```Установка Lutris```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Lutris)  
- [```Установка Virt-manager```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Virt-Manager)  

## ВИДЕО:  
[![Watch the video](https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/bspwm_yellow.jpg?ref_type=heads)](https://www.youtube.com/watch?v=y0BGOkzPcYA)  

## ССЫЛКИ:  
[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_youtube.png?ref_type=heads" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_tg.png?ref_type=heads" width="100">](https://t.me/prolinux_tg)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_unsplash.png?ref_type=heads" width="100">](https://unsplash.com/@owl410/collections)  


[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_coffee.png?ref_type=heads" width="100">](https://www.donationalerts.com/r/prolinux)

