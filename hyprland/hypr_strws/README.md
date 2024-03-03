## HYPRLAND STRWS
<br />
  
<div align="center">
<img src="1" width="550">
<img src="1" width="550">
<img src="1" width="550">
<img src="1" width="550">
</div>
<br /><br />

## HI!
Этот Hyprland я ставил на VoidLinux и настраивал под себя, по-этому не все что есть в данном гайде
актуально и для другого Юзернейма!

### ШАГ 1 Установка Войда, установка и запуск hyprland, dhcpcd, chrony, pipewire
```
sudo xbps-install chrony dhcpcd

sudo ln -s /etc/sv/dhcpcd /var/service
sudo sv up dhcpcd

sudo ln -s /etc/sv/chronyd /var/service
sudo sv up chronyd
```
```
mkdir .local
mkdir .local/pkgs
cd .local/pkgs

sudo xbps-install git foot noto-fonts-ttf dbus seatd polkit elogind mesa-dri

git clone https://github.com/void-linux/void-packages.git
git clone https://github.com/Makrennel/hyprland-void.git

cd void-packages
./xbps-src binary-bootstrap

cd..
cd hyprland-void
cat common/shlibs >> ~/.local/pkgs/void-packages/common/shlibs
cp -r srcpkgs/* ~/.local/pkgs/void-packages/srcpkgs
cd
cd ~/.local/pkgs/void-packages

./xbps-src pkg hyprland
./xbps-src pkg xdg-desktop-portal-hyprland
./xbps-src pkg hyprland-protocols

sudo xbps-install -R hostdir/binpkgs hyprland
sudo xbps-install -R hostdir/binpkgs hyprland-protocols
sudo xbps-install -R hostdir/binpkgs xdg-desktop-portal-hyprland

sudo ln -s /etc/sv/dbus /var/service
sudo ln -s /etc/sv/polkitd /var/service
sudo ln -s /etc/sv/seatd /var/service

sudo usermod -aG _seatd $USER

```
```
sudo xbps-install -S pipewire pipewire-devel wireplumber libpulseaudio pulseaudio-utils alsa-pipewire


sudo mkdir -p /etc/alsa/conf.d
sudo ln -s /usr/share/alsa/alsa.conf.d/50-pipewire.conf /etc/alsa/conf.d
sudo ln -s /usr/share/alsa/alsa.conf.d/99-pipewire-default.conf /etc/alsa/conf.d

В автозапуск: wireplumber pipewire-pulse pipewire
```
  
- [```Установка VoidLinux```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-uefi-install)  
- [```VoidLinux Wayland WM```](https://gitlab.com/prolinux410/owl_dots/-/wikis/VoidLinux-Wayland-WM)   
- [```Установка Pipewire```](https://gitlab.com/prolinux410/owl_dots/-/wikis/Pipewire)   
  
## ШАГ 2 Установка софта:
```
sudo xbps-install xorg-server-xwayland telegram-desktop firefox nemo tumbler foot grim slurp imv mpv mypdf Waybar wofi nerd-fonts-symbols-ttf fish-shell file-roller

blender gimp inkscape ghostscript imlib2-webp webp-pixbuf-loader musescore pavucontrol obs obs-plugin-browser-bin cmus cmus-pulseaudio micro

wl-clipboard swaybg swaylock
```
```
sudo xbps-install void-repo-multilib
sudo xbps-install -Suy

sudo xbps-install lutris MangoHud MangoHud-32bit wine winetricks wine-32bit mesa-dri-32bit
libGL-32bit libtxc_dxtn-32bit giflib giflib-32bit libpng libpng-32bit libldap libldap-32bit gnutls
gnutls-32bit libopenal libopenal-32bit v4l-utils v4l-utils-32bit libgpg-error libgpg-error-32bit
libjpeg-turbo libjpeg-turbo-32bit sqlite sqlite-32bit libXcomposite libXcomposite-32bit
libXinerama libXinerama-32bit libgcrypt libgcrypt-32bit ncurses ncurses-libs ncurses-libs-32bit
ocl-icd ocl-icd-32bit libxslt libxslt-32bit libva libva-32bit gst-plugins-base1
gst-plugins-base1-32bit amdvlk amdvlk-32bit vulkan-loader vulkan-loader-32bit libX11-devel
libX11-devel-32bit libgpg-error libgpg-error-32bit gdk-pixbuf gdk-pixbuf-32bit libgcc
libgcc-32bit libglvnd libglvnd-32bit mesa-vulkan-radeon mesa-vulkan-radeon-32bit psmisc
fluidsynth libunwind Vulkan-Tools
```
