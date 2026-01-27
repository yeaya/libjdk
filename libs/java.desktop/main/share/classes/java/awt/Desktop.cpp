#include <java/awt/Desktop.h>

#include <java/awt/AWTPermission.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Desktop$Action.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Toolkit.h>
#include <java/awt/desktop/AboutHandler.h>
#include <java/awt/desktop/OpenFilesHandler.h>
#include <java/awt/desktop/OpenURIHandler.h>
#include <java/awt/desktop/PreferencesHandler.h>
#include <java/awt/desktop/PrintFilesHandler.h>
#include <java/awt/desktop/QuitHandler.h>
#include <java/awt/desktop/QuitStrategy.h>
#include <java/awt/desktop/SystemEventListener.h>
#include <java/awt/peer/DesktopPeer.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef APP_ABOUT
#undef APP_HELP_VIEWER
#undef APP_MENU_BAR
#undef APP_OPEN_FILE
#undef APP_OPEN_URI
#undef APP_PREFERENCES
#undef APP_PRINT_FILE
#undef APP_QUIT_HANDLER
#undef APP_QUIT_STRATEGY
#undef APP_REQUEST_FOREGROUND
#undef APP_SUDDEN_TERMINATION
#undef BROWSE
#undef BROWSE_FILE_DIR
#undef EDIT
#undef FILE_EXECUTE_ACTION
#undef FILE_READ_ACTION
#undef MAIL
#undef MOVE_TO_TRASH
#undef OPEN
#undef PRINT

using $AWTPermission = ::java::awt::AWTPermission;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Desktop$Action = ::java::awt::Desktop$Action;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Toolkit = ::java::awt::Toolkit;
using $AboutHandler = ::java::awt::desktop::AboutHandler;
using $OpenFilesHandler = ::java::awt::desktop::OpenFilesHandler;
using $OpenURIHandler = ::java::awt::desktop::OpenURIHandler;
using $PreferencesHandler = ::java::awt::desktop::PreferencesHandler;
using $PrintFilesHandler = ::java::awt::desktop::PrintFilesHandler;
using $QuitHandler = ::java::awt::desktop::QuitHandler;
using $QuitStrategy = ::java::awt::desktop::QuitStrategy;
using $SystemEventListener = ::java::awt::desktop::SystemEventListener;
using $DesktopPeer = ::java::awt::peer::DesktopPeer;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace awt {

class Desktop$$Lambda$lambda$moveToTrash$0 : public $PrivilegedAction {
	$class(Desktop$$Lambda$lambda$moveToTrash$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($File* finalFile) {
		$set(this, finalFile, finalFile);
	}
	virtual $Object* run() override {
		 return Desktop::lambda$moveToTrash$0(finalFile);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Desktop$$Lambda$lambda$moveToTrash$0>());
	}
	$File* finalFile = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Desktop$$Lambda$lambda$moveToTrash$0::fieldInfos[2] = {
	{"finalFile", "Ljava/io/File;", nullptr, $PUBLIC, $field(Desktop$$Lambda$lambda$moveToTrash$0, finalFile)},
	{}
};
$MethodInfo Desktop$$Lambda$lambda$moveToTrash$0::methodInfos[3] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(Desktop$$Lambda$lambda$moveToTrash$0, init$, void, $File*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Desktop$$Lambda$lambda$moveToTrash$0, run, $Object*)},
	{}
};
$ClassInfo Desktop$$Lambda$lambda$moveToTrash$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.Desktop$$Lambda$lambda$moveToTrash$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* Desktop$$Lambda$lambda$moveToTrash$0::load$($String* name, bool initialize) {
	$loadClass(Desktop$$Lambda$lambda$moveToTrash$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Desktop$$Lambda$lambda$moveToTrash$0::class$ = nullptr;

$FieldInfo _Desktop_FieldInfo_[] = {
	{"peer", "Ljava/awt/peer/DesktopPeer;", nullptr, $PRIVATE, $field(Desktop, peer)},
	{}
};

$MethodInfo _Desktop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Desktop, init$, void)},
	{"addAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, addAppEventListener, void, $SystemEventListener*)},
	{"browse", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, browse, void, $URI*), "java.io.IOException"},
	{"browseFileDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, browseFileDirectory, void, $File*)},
	{"checkAWTPermission", "()V", nullptr, $PRIVATE, $method(Desktop, checkAWTPermission, void)},
	{"checkActionSupport", "(Ljava/awt/Desktop$Action;)V", nullptr, $PRIVATE, $method(Desktop, checkActionSupport, void, $Desktop$Action*)},
	{"checkEventsProcessingPermission", "()V", nullptr, $PRIVATE, $method(Desktop, checkEventsProcessingPermission, void)},
	{"checkExec", "()V", nullptr, $PRIVATE, $method(Desktop, checkExec, void), "java.lang.SecurityException"},
	{"checkFileValidation", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Desktop, checkFileValidation, void, $File*)},
	{"checkQuitPermission", "()V", nullptr, $PRIVATE, $method(Desktop, checkQuitPermission, void)},
	{"checkRead", "()V", nullptr, $PRIVATE, $method(Desktop, checkRead, void), "java.lang.SecurityException"},
	{"disableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(Desktop, disableSuddenTermination, void)},
	{"edit", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, edit, void, $File*), "java.io.IOException"},
	{"enableSuddenTermination", "()V", nullptr, $PUBLIC, $virtualMethod(Desktop, enableSuddenTermination, void)},
	{"getDesktop", "()Ljava/awt/Desktop;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(Desktop, getDesktop, Desktop*)},
	{"isDesktopSupported", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Desktop, isDesktopSupported, bool)},
	{"isSupported", "(Ljava/awt/Desktop$Action;)Z", nullptr, $PUBLIC, $virtualMethod(Desktop, isSupported, bool, $Desktop$Action*)},
	{"lambda$moveToTrash$0", "(Ljava/io/File;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Desktop, lambda$moveToTrash$0, $Object*, $File*)},
	{"mail", "()V", nullptr, $PUBLIC, $virtualMethod(Desktop, mail, void), "java.io.IOException"},
	{"mail", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, mail, void, $URI*), "java.io.IOException"},
	{"moveToTrash", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(Desktop, moveToTrash, bool, $File*)},
	{"open", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, open, void, $File*), "java.io.IOException"},
	{"openHelpViewer", "()V", nullptr, $PUBLIC, $virtualMethod(Desktop, openHelpViewer, void)},
	{"print", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, print, void, $File*), "java.io.IOException"},
	{"removeAppEventListener", "(Ljava/awt/desktop/SystemEventListener;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, removeAppEventListener, void, $SystemEventListener*)},
	{"requestForeground", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Desktop, requestForeground, void, bool)},
	{"setAboutHandler", "(Ljava/awt/desktop/AboutHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setAboutHandler, void, $AboutHandler*)},
	{"setDefaultMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setDefaultMenuBar, void, $JMenuBar*)},
	{"setOpenFileHandler", "(Ljava/awt/desktop/OpenFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setOpenFileHandler, void, $OpenFilesHandler*)},
	{"setOpenURIHandler", "(Ljava/awt/desktop/OpenURIHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setOpenURIHandler, void, $OpenURIHandler*)},
	{"setPreferencesHandler", "(Ljava/awt/desktop/PreferencesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setPreferencesHandler, void, $PreferencesHandler*)},
	{"setPrintFileHandler", "(Ljava/awt/desktop/PrintFilesHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setPrintFileHandler, void, $PrintFilesHandler*)},
	{"setQuitHandler", "(Ljava/awt/desktop/QuitHandler;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setQuitHandler, void, $QuitHandler*)},
	{"setQuitStrategy", "(Ljava/awt/desktop/QuitStrategy;)V", nullptr, $PUBLIC, $virtualMethod(Desktop, setQuitStrategy, void, $QuitStrategy*)},
	{}
};

$InnerClassInfo _Desktop_InnerClassesInfo_[] = {
	{"java.awt.Desktop$Action", "java.awt.Desktop", "Action", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Desktop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Desktop",
	"java.lang.Object",
	nullptr,
	_Desktop_FieldInfo_,
	_Desktop_MethodInfo_,
	nullptr,
	nullptr,
	_Desktop_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Desktop$Action"
};

$Object* allocate$Desktop($Class* clazz) {
	return $of($alloc(Desktop));
}

void Desktop::init$() {
	$var($Toolkit, defaultToolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, defaultToolkit)) {
		$set(this, peer, $nc(($cast($SunToolkit, defaultToolkit)))->createDesktopPeer(this));
	}
}

void Desktop::checkEventsProcessingPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "canProcessApplicationEvents"_s));
	}
}

Desktop* Desktop::getDesktop() {
	$load(Desktop);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		if ($GraphicsEnvironment::isHeadless()) {
			$throwNew($HeadlessException);
		}
		if (!Desktop::isDesktopSupported()) {
			$throwNew($UnsupportedOperationException, "Desktop API is not supported on the current platform"_s);
		}
		$var($AppContext, context, $AppContext::getAppContext());
		$var(Desktop, desktop, $cast(Desktop, $nc(context)->get(Desktop::class$)));
		if (desktop == nullptr) {
			$assign(desktop, $new(Desktop));
			context->put(Desktop::class$, desktop);
		}
		return desktop;
	}
}

bool Desktop::isDesktopSupported() {
	$var($Toolkit, defaultToolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, defaultToolkit)) {
		return $nc(($cast($SunToolkit, defaultToolkit)))->isDesktopSupported();
	}
	return false;
}

bool Desktop::isSupported($Desktop$Action* action) {
	return $nc(this->peer)->isSupported(action);
}

void Desktop::checkFileValidation($File* file) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(file)->exists()) {
		$throwNew($IllegalArgumentException, $$str({"The file: "_s, $(file->getPath()), " doesn\'t exist."_s}));
	}
}

void Desktop::checkActionSupport($Desktop$Action* actionType) {
	$useLocalCurrentObjectStackCache();
	if (!isSupported(actionType)) {
		$throwNew($UnsupportedOperationException, $$str({"The "_s, $($nc(actionType)->name()), " action is not supported on the current platform!"_s}));
	}
}

void Desktop::checkAWTPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($AWTPermission, "showWindowWithoutWarningBanner"_s));
	}
}

void Desktop::open($File* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, file$renamed);
	$assign(file, $new($File, $($nc(file)->getPath())));
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::OPEN);
	checkFileValidation(file);
	$nc(this->peer)->open(file);
}

void Desktop::edit($File* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, file$renamed);
	$assign(file, $new($File, $($nc(file)->getPath())));
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::EDIT);
	file->canWrite();
	checkFileValidation(file);
	if (file->isDirectory()) {
		$throwNew($IOException, $$str({$(file->getPath()), " is a directory"_s}));
	}
	$nc(this->peer)->edit(file);
}

void Desktop::print($File* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, file$renamed);
	$assign(file, $new($File, $($nc(file)->getPath())));
	checkExec();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPrintJobAccess();
	}
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::PRINT);
	checkFileValidation(file);
	if (file->isDirectory()) {
		$throwNew($IOException, $$str({$(file->getPath()), " is a directory"_s}));
	}
	$nc(this->peer)->print(file);
}

void Desktop::browse($URI* uri) {
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::BROWSE);
	$Objects::requireNonNull(uri);
	$nc(this->peer)->browse(uri);
}

void Desktop::mail() {
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::MAIL);
	$var($URI, mailtoURI, nullptr);
	try {
		$assign(mailtoURI, $new($URI, "mailto:?"_s));
		$nc(this->peer)->mail(mailtoURI);
	} catch ($URISyntaxException& e) {
	}
}

void Desktop::mail($URI* mailtoURI) {
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::MAIL);
	if (mailtoURI == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!"mailto"_s->equalsIgnoreCase($($nc(mailtoURI)->getScheme()))) {
		$throwNew($IllegalArgumentException, "URI scheme is not \"mailto\""_s);
	}
	$nc(this->peer)->mail(mailtoURI);
}

void Desktop::checkExec() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($$new($FilePermission, "<<ALL FILES>>"_s, $SecurityConstants::FILE_EXECUTE_ACTION));
	}
}

void Desktop::checkRead() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$init($SecurityConstants);
		sm->checkPermission($$new($FilePermission, "<<ALL FILES>>"_s, $SecurityConstants::FILE_READ_ACTION));
	}
}

void Desktop::checkQuitPermission() {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkExit(0);
	}
}

void Desktop::addAppEventListener($SystemEventListener* listener) {
	checkEventsProcessingPermission();
	$nc(this->peer)->addAppEventListener(listener);
}

void Desktop::removeAppEventListener($SystemEventListener* listener) {
	checkEventsProcessingPermission();
	$nc(this->peer)->removeAppEventListener(listener);
}

void Desktop::setAboutHandler($AboutHandler* aboutHandler) {
	checkEventsProcessingPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_ABOUT);
	$nc(this->peer)->setAboutHandler(aboutHandler);
}

void Desktop::setPreferencesHandler($PreferencesHandler* preferencesHandler) {
	checkEventsProcessingPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_PREFERENCES);
	$nc(this->peer)->setPreferencesHandler(preferencesHandler);
}

void Desktop::setOpenFileHandler($OpenFilesHandler* openFileHandler) {
	checkEventsProcessingPermission();
	checkExec();
	checkRead();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_OPEN_FILE);
	$nc(this->peer)->setOpenFileHandler(openFileHandler);
}

void Desktop::setPrintFileHandler($PrintFilesHandler* printFileHandler) {
	checkEventsProcessingPermission();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPrintJobAccess();
	}
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_PRINT_FILE);
	$nc(this->peer)->setPrintFileHandler(printFileHandler);
}

void Desktop::setOpenURIHandler($OpenURIHandler* openURIHandler) {
	checkEventsProcessingPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_OPEN_URI);
	$nc(this->peer)->setOpenURIHandler(openURIHandler);
}

void Desktop::setQuitHandler($QuitHandler* quitHandler) {
	checkEventsProcessingPermission();
	checkQuitPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_QUIT_HANDLER);
	$nc(this->peer)->setQuitHandler(quitHandler);
}

void Desktop::setQuitStrategy($QuitStrategy* strategy) {
	checkEventsProcessingPermission();
	checkQuitPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_QUIT_STRATEGY);
	$nc(this->peer)->setQuitStrategy(strategy);
}

void Desktop::enableSuddenTermination() {
	checkEventsProcessingPermission();
	checkQuitPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_SUDDEN_TERMINATION);
	$nc(this->peer)->enableSuddenTermination();
}

void Desktop::disableSuddenTermination() {
	checkEventsProcessingPermission();
	checkQuitPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_SUDDEN_TERMINATION);
	$nc(this->peer)->disableSuddenTermination();
}

void Desktop::requestForeground(bool allWindows) {
	checkEventsProcessingPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_REQUEST_FOREGROUND);
	$nc(this->peer)->requestForeground(allWindows);
}

void Desktop::openHelpViewer() {
	checkAWTPermission();
	checkExec();
	checkEventsProcessingPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_HELP_VIEWER);
	$nc(this->peer)->openHelpViewer();
}

void Desktop::setDefaultMenuBar($JMenuBar* menuBar) {
	checkEventsProcessingPermission();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::APP_MENU_BAR);
	if (menuBar != nullptr) {
		$var($Container, parent, menuBar->getParent());
		if (parent != nullptr) {
			parent->remove(static_cast<$Component*>(menuBar));
			menuBar->updateUI();
		}
	}
	$nc(this->peer)->setDefaultMenuBar(menuBar);
}

void Desktop::browseFileDirectory($File* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, file$renamed);
	$assign(file, $new($File, $($nc(file)->getPath())));
	checkAWTPermission();
	checkExec();
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::BROWSE_FILE_DIR);
	checkFileValidation(file);
	$var($File, parentFile, file->getParentFile());
	if (parentFile == nullptr || !$nc(parentFile)->exists()) {
		$throwNew($IllegalArgumentException, "Parent folder doesn\'t exist"_s);
	}
	$nc(this->peer)->browseFileDirectory(file);
}

bool Desktop::moveToTrash($File* file$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, file, file$renamed);
	$beforeCallerSensitive();
	$assign(file, $new($File, $($nc(file)->getPath())));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkDelete($(file->getPath()));
	}
	$init($Desktop$Action);
	checkActionSupport($Desktop$Action::MOVE_TO_TRASH);
	$var($File, finalFile, file);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Desktop$$Lambda$lambda$moveToTrash$0, finalFile)));
	return $nc(this->peer)->moveToTrash(file);
}

$Object* Desktop::lambda$moveToTrash$0($File* finalFile) {
	checkFileValidation(finalFile);
	return $of(nullptr);
}

Desktop::Desktop() {
}

$Class* Desktop::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Desktop$$Lambda$lambda$moveToTrash$0::classInfo$.name)) {
			return Desktop$$Lambda$lambda$moveToTrash$0::load$(name, initialize);
		}
	}
	$loadClass(Desktop, name, initialize, &_Desktop_ClassInfo_, allocate$Desktop);
	return class$;
}

$Class* Desktop::class$ = nullptr;

	} // awt
} // java