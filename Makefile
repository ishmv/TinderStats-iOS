include $(THEOS)/makefiles/common.mk

APPLICATION_NAME = TinderStatsApp
TinderStatsApp_FILES = main.m F41AppDelegate.m F41RootViewController.m tinderstatstweak/DBManager.m
TinderStatsApp_FRAMEWORKS = UIKit 
TinderStatsApp_LIBRARIES = applist
TinderStatsApp_LDFLAGS = -lsqlite3

SUBPROJECTS += tinderstatstweak
include $(THEOS_MAKE_PATH)/aggregate.mk

include $(THEOS_MAKE_PATH)/application.mk

after-install::
	install.exec "killall \"TinderStatsApp\"" || true
