#include <java/awt/peer/DesktopPeer.h>

#include <java/awt/Desktop$Action.h>
#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/io/File.h>
#include <java/net/URI.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $Desktop$Action = ::java::awt::Desktop$Action;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $JMenuBar = ::javax::swing::JMenuBar;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _DesktopPeer_MethodInfo_[] = {
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, addAppEventListener, void, $SystemEventListener*)},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, browse, void, $URI*), "java.io.IOException"},
	{"browseFileDirectory", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, browseFileDirectory, bool, $File*)},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, disableSuddenTermination, void)},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, edit, void, $File*), "java.io.IOException"},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, enableSuddenTermination, void)},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, isSupported, bool, $Desktop$Action*)},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, mail, void, $URI*), "java.io.IOException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, moveToTrash, bool, $File*)},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, open, void, $File*), "java.io.IOException"},
	{"openHelpViewer", "()V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, openHelpViewer, void)},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopPeer, print, void, $File*), "java.io.IOException"},
	{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, removeAppEventListener, void, $SystemEventListener*)},
	{"requestForeground", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, requestForeground, void, bool)},
	{"setAboutHandler", "(Ljava/awt/desktop/AboutHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setAboutHandler, void, $AboutHandler*)},
	{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setDefaultMenuBar, void, $JMenuBar*)},
	{"setOpenFileHandler", "(Ljava/awt/desktop/OpenFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setOpenFileHandler, void, $OpenFilesHandler*)},
	{"setOpenURIHandler", "(Ljava/awt/desktop/OpenURIHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setOpenURIHandler, void, $OpenURIHandler*)},
	{"setPreferencesHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setPreferencesHandler, void, $PreferencesHandler*)},
	{"setPrintFileHandler", "(Ljava/awt/desktop/PrintFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setPrintFileHandler, void, $PrintFilesHandler*)},
	{"setQuitHandler", "(Ljava/awt/desktop/QuitHandler;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setQuitHandler, void, $QuitHandler*)},
	{"setQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, $PUBLIC, $virtualMethod(DesktopPeer, setQuitStrategy, void, $QuitStrategy*)},
	{}
};

$ClassInfo _DesktopPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.DesktopPeer",
	nullptr,
	nullptr,
	nullptr,
	_DesktopPeer_MethodInfo_
};

$Object* allocate$DesktopPeer($Class* clazz) {
	return $of($alloc(DesktopPeer));
}

void DesktopPeer::addAppEventListener($SystemEventListener* listener) {
}

void DesktopPeer::removeAppEventListener($SystemEventListener* listener) {
}

void DesktopPeer::setAboutHandler($AboutHandler* aboutHandler) {
}

void DesktopPeer::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
}

void DesktopPeer::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
}

void DesktopPeer::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
}

void DesktopPeer::setOpenURIHandler($OpenURIHandler* openURIHandler) {
}

void DesktopPeer::setQuitHandler($QuitHandler* quitHandler) {
}

void DesktopPeer::setQuitStrategy($QuitStrategy* strategy) {
}

void DesktopPeer::enableSuddenTermination() {
}

void DesktopPeer::disableSuddenTermination() {
}

void DesktopPeer::requestForeground(bool allWindows) {
}

void DesktopPeer::openHelpViewer() {
}

void DesktopPeer::setDefaultMenuBar($JMenuBar* menuBar) {
}

bool DesktopPeer::browseFileDirectory($File* file) {
	return false;
}

bool DesktopPeer::moveToTrash($File* file) {
	return false;
}

$Class* DesktopPeer::load$($String* name, bool initialize) {
	$loadClass(DesktopPeer, name, initialize, &_DesktopPeer_ClassInfo_, allocate$DesktopPeer);
	return class$;
}

$Class* DesktopPeer::class$ = nullptr;

		} // peer
	} // awt
} // java