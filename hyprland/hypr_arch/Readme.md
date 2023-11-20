## HYPRLAND ARCH
<br />
  
<div align="center">
<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.img/photo_2023-08-17_20-55-56.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.img/photo_2023-08-17_20-56-01.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.img/photo_2023-08-17_20-55-59.jpg?ref_type=heads" width="550">

<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.img/photo_2023-08-17_20-56-03.jpg?ref_type=heads" width="550">
</div>  
<br /><br />

## HI!:
Я делал данный райс на VoidLinux и на ArchLinux без каких либо соседствующих DE, все настройки идут от `~/.config/hypr/themes/hypr_arch/hypr/config` В первую очередь необходимо открыть этот файл и закоментировать/раскоментировать то что тебе нужно да и вообще под себя все настроить.  
  
Конфиги софта и обои берутся из `~/.config/hypr/themes/hypr_arch`  

## УСТАНОВКА HYPRLAND
```
sudo pacman -S base-devel gdb ninja gcc cmake libxcb xcb-proto xcb-util  
xcb-util-keysyms libxfixes libx11 libxcomposite xorg-xinput libxrender  
pixman wayland-protocols cairo pango seatd libxkbcommon xcb-util-wm  
xorg-xwayland cmake wlroots mesa git meson polkit 
  
git clone --recursive https://github.com/hyprwm/Hyprland  
cd Hyprland  
git submodule init  
git submodule update  
sudo make install  
  
cp Hyprland/example/hyprland.conf ~/.config/hypr/
  
Hyprland - для того что бы запустить

Так же можно из реп поставить sudo pacman -S hyprland или из аура
```
  
## УСТАНОВКА HYPRPAPER
```
git clone https://github.com/hyprwm/hyprpaper  
cd hyprpaper  
make all  
  
sudo cp ~/hyprpaper/build/hyprpaper /usr/bin 

Ну или из реп поставить sudo pacman -S hyprpaper или из аура
```
  
## УСТАНОВКА WAYBAR
```
git clone https://github.com/Alexays/Waybar/  
cd Waybar  
sudo pacman -S fmt spdlog gtkmm3 libdbusmenu-gtk3 upower libmpdclient sndio gtk-layer-shell scdoc  
clang awesome-terminal-fonts jq  

yay catch2-git

sed -i 's/zext_workspace_handle_v1_activate(workspace_handle_);/const std::string command = "hyprctl dispatch   workspace " + name_;\n\tsystem(command.c_str());/g' src/modules/wlr/workspace_manager.cpp  

meson --prefix=/usr --buildtype=plain --auto-features=enabled --wrap-mode=nodownload build  
meson configure -Dexperimental=true build  
sudo ninja -C build install  

Можно так же из реп поставить или из аура. Я ставил из реп, вроде все пофиксили и все норм.
```

## УСТАНОВКА ЭТОГО КОНФИГА:
  
Склонировать репозиторий:  
```
git clone https://gitlab.com/prolinux410/owl_dots
```
  
Из ~/owl_dotfiles/dotfiles/hyprland/hypr_arch/.config скопировать все в ~/.config  
```
cp -r ~/owl_dotfiles/dotfiles/hyprland/hypr_arch/.config/ ~/.config
```
Установка тем, иконок и курсоров:  
```
gsettings set org.gnome.desktop.interface icon-theme breeze-icons-dark  
gsettings set org.gnome.desktop.interface gtk-theme Fantome
gsettings set org.gnome.desktop.interface cursor-theme capitaine-cursors
```

В ~/.config/hypr/hyprland.conf заинклюженна ссылка на конфиг,
потому что я не знаю как сделать по другому) Точнее знаю но мне проверять лень)

## СОФТ КОТОРЫЙ Я СТАВИЛ:
```
sudo pacman -S pulseaudio pavucontrol firefox telegram-desktop mousepad gimp inkscape  
blender ghostscript obs-studio xdg-desktop-portal-wlr transmission-gtk python  
imv mpv nemo waybar grim slurp swaybg swaylock mako jq wofi htop cmus neofetch ranger unzip
ttf-nerd-fonts-symbols

yay cava
```
  
# ИНФО

|DISTRO|[ArchLinux](https://archlinux.org/)|
| ------ | ------ |
|WM|[BSPWM](https://github.com/baskerville/bspwm)|
|BAR|[Polybar](https://github.com/polybar/polybar)|
|PICOM|[FT-Labs](https://github.com/FT-Labs/picom)|
|LAUNCHER|[rofi](https://github.com/davatorium/rofi)|
|TERMINAL|[Alacritty](https://github.com/alacritty/alacritty)|
|SHELL|[Fish](https://fishshell.com/)|
|ICON|[Breeze-icons-dark](https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.icons)|
|GTK3|[Fantome](https://gitlab.com/prolinux410/owl_dots/-/raw/main/hyprland/hypr_arch/.themes)|
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
[![Watch the video](https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/hypr_arch.jpg?ref_type=heads)](https://www.youtube.com/watch?v=KKo-4ZuozUA)  

## ССЫЛКИ:  
[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_youtube.png?ref_type=heads" width="100">](https://www.youtube.com/@prolinux2753)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_tg.png?ref_type=heads" width="100">](https://t.me/prolinux_tg)

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_unsplash.png?ref_type=heads" width="100">](https://unsplash.com/@owl410/collections)  

[<img src="https://gitlab.com/prolinux410/owl_dots/-/raw/main/.img/git_coffee.png?ref_type=heads" width="100">](https://www.donationalerts.com/r/prolinux)

