## Галерея
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-50-37.jpg" width="350" align="center">
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-50-40.jpg" width="350" align="center">
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-50-33.jpg" width="350" align="center">
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-50-35.jpg" width="350" align="center">
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-59-33.jpg" width="350" align="center">
<img src="https://notabug.org/owl410/owl_dotfiles/raw/master/dotfiles/bspwm/bspwm_city/.img/photo_2023-08-04_21-50-42.jpg" width="350" align="center">

## Информация
|DIstro|[ARCH](https://archlinux.org/)|
|:---:|:---:|
|WM|[BSPWM](https://github.com/baskerville/bspwm)|
|Bar|[Polybar](https://github.com/polybar/polybar)|
|Launcher|[rofi](https://github.com/davatorium/rofi)|
|Terminal|[Alacritty](https://github.com/alacritty/alacritty)|
|Shell|[Fish](https://fishshell.com/)|
|Icon|[Zorin Grey Dark](https://github.com/ZorinOS/zorin-icon-themes)|
|GTK3|[Flat Remix Gray Dark](https://github.com/daniruiz/flat-remix-gtk)|
|Cursors|[Capitaine-cursors](https://github.com/keeferrourke/capitaine-cursors)|
|Fonts|[JetBrainsMono](https://www.jetbrains.com/lp/mono/)|
  
## ВАЖНО!!!
Я делал данный райс на VoidLinux и на ArchLinux, все настройки идут от `~/.config/bspwm/themes/bspwm_city/bspwm/bspwmrc` В первую очередь необходимо открыть этот файл и закоментировать/раскоментировать то что тебе нужно.
  
Конфиги bspwm sxhkd alacritty dunst picom polybar rofi и обои берутся из `~/.config/bspwm/themes/bspwm_city` 
  
## Настройка системы

[```Установка ArchLinux```](https://notabug.org/owl410/owl_dotfiles/src/master/guid/ArchLinux%20uefi%20install.md)  
[```Установка Apparmor```](https://notabug.org/owl410/owl_dotfiles/src/master/guid/Apparmor.md)  
[```Установка Lutris```](https://notabug.org/owl410/owl_dotfiles/src/master/guid/Lutris.md)  
[```Автостарт и Автологин```](https://notabug.org/owl410/owl_dotfiles/src/master/guid/Autostart_wm.md)  
  
  
## Установка BSPWM

```
sudo pacman -S bspwm sxhkd xorg xorg-xinit mesa numlockx alacritty git libX11 libxft base-devel
  
chmod u+x .config/bspwm/bspwmrc  

.xinitrc:
exec sxhkd &
exec bspwm
```
  
## Установка софта
```
sudo pacman -S pulseaudio pavucontrol firefox inkscape blender telegram-desktop viewnior
obs-studio nemo htop links cmus neofetch scrot ranger neovim mpv unzip polybar fish picom rofi
conky ttf-nerd-fonts-symbols feh jq ueberzug w3m imagemagick ghostscript

yay cava
``` 
  
## Установка темы Bspwm_City
 
```
Склонировать репозиторий командой(предварительно нужно поставить пакет git): 

git clone https://notabug.org/owl410/owl_dotfiles
```  
  
```
Из ~/owl_dotfiles/bspwm/bspwm_city/.config скопировать все в ~/.config можно мышкой в файловом менеджере.
 
cp -r ~/owl_dotfiles/bspwm/bspwm_city/.config/ ~/.config
```  
  
```
Сделать исполняемыми все скрипты в ~/.config/bspwm/themes/bspwm_city/scripts:

chmod -R u+x .config/bspwm/themes/bspwm_city/scripts/
```  
  
```
В ~/.xinitrc прописать:
exec sxhkd -c ~/.config/bspwm/themes/bspwm_city/sxhkd/sxhkdrc &  
exec bspwm -c ~/.config/bspwm/themes/bspwm_city/bspwm/bspwmrc

И сделать chmod u+x ~/.config/bspwm/themes/bspwm_city/bspwm/bspwmrc
```  
  
```
Установить темы и обои при помощи lxappearance и nitrogen или как тебе удобно. Заменить софт в ~/.config/bspwm/themes/bspwm_city/sxhkd/sxhkdrc на нужный тебе. Перезагрузится.
```