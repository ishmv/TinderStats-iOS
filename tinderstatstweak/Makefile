include $(THEOS)/makefiles/common.mk

LaunchNotifier_FRAMEWORKS = UIKit

TWEAK_NAME = tinderStats
tinderStats_FILES = Tweak.xm DBManager.m
tinderStats_LDFLAGS = -lsqlite3
tinderStats_LIBRARIES = applist


include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 Tinder"

include $(THEOS_MAKE_PATH)/aggregate.mk
