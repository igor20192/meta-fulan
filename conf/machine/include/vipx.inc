require conf/machine/include/oem-fulan.inc
require conf/machine/include/smallflash.inc
require conf/machine/include/modsh4.inc

PREFERRED_PROVIDER_virtual/kernel = "linux-fulan-vipx"

ROOTFS_FILE = "root.img"
KERNEL_FILE = "uImage"

IMAGE_FSTYPES += "tar.gz"

AUDIOELF = "audio_7100.elf"
VIDEOELF = "video_7109.elf"

SOC_FAMILY = "sti7109"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
    stlirc \
    evremote2 \
    stlinux24-sh4-stx7109-fdma-firmware \
"

#What we need
#extra/stgfb/stmfb/stmcore-display-stx7109c3.ko /lib/modules/