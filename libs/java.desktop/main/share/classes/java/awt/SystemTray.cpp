#include <java/awt/SystemTray.h>

#include <java/awt/AWTException.h>
#include <java/awt/AWTPermission.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/SystemTray$1.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/peer/SystemTrayPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyChangeSupport.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTPermissions.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/HeadlessToolkit.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ACCESS_SYSTEM_TRAY_PERMISSION
#undef EMPTY_TRAY_ARRAY

using $TrayIconArray = $Array<::java::awt::TrayIcon>;
using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $AWTException = ::java::awt::AWTException;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $SystemTray$1 = ::java::awt::SystemTray$1;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $SystemTrayPeer = ::java::awt::peer::SystemTrayPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyChangeSupport = ::java::beans::PropertyChangeSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$SystemTrayAccessor = ::sun::awt::AWTAccessor$SystemTrayAccessor;
using $AWTPermissions = ::sun::awt::AWTPermissions;
using $AppContext = ::sun::awt::AppContext;
using $HeadlessToolkit = ::sun::awt::HeadlessToolkit;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _SystemTray_FieldInfo_[] = {
	{"systemTray", "Ljava/awt/SystemTray;", nullptr, $PRIVATE | $STATIC, $staticField(SystemTray, systemTray)},
	{"currentIconID", "I", nullptr, $PRIVATE, $field(SystemTray, currentIconID)},
	{"peer", "Ljava/awt/peer/SystemTrayPeer;", nullptr, $PRIVATE | $TRANSIENT, $field(SystemTray, peer)},
	{"EMPTY_TRAY_ARRAY", "[Ljava/awt/TrayIcon;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SystemTray, EMPTY_TRAY_ARRAY)},
	{}
};

$MethodInfo _SystemTray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SystemTray, init$, void)},
	{"add", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC, $virtualMethod(SystemTray, add, void, $TrayIcon*), "java.awt.AWTException"},
	{"addNotify", "()V", nullptr, $SYNCHRONIZED, $virtualMethod(SystemTray, addNotify, void)},
	{"addPropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemTray, addPropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{"checkSystemTrayAllowed", "()V", nullptr, $STATIC, $staticMethod(SystemTray, checkSystemTrayAllowed, void)},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(SystemTray, firePropertyChange, void, $String*, Object$*, Object$*)},
	{"getCurrentChangeSupport", "()Ljava/beans/PropertyChangeSupport;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(SystemTray, getCurrentChangeSupport, $PropertyChangeSupport*)},
	{"getPropertyChangeListeners", "(Ljava/lang/String;)[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemTray, getPropertyChangeListeners, $PropertyChangeListenerArray*, $String*)},
	{"getSystemTray", "()Ljava/awt/SystemTray;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemTray, getSystemTray, SystemTray*)},
	{"getTrayIconSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SystemTray, getTrayIconSize, $Dimension*)},
	{"getTrayIcons", "()[Ljava/awt/TrayIcon;", nullptr, $PUBLIC, $virtualMethod(SystemTray, getTrayIcons, $TrayIconArray*)},
	{"initializeSystemTrayIfNeeded", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SystemTray, initializeSystemTrayIfNeeded, void)},
	{"isSupported", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemTray, isSupported, bool)},
	{"remove", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC, $virtualMethod(SystemTray, remove, void, $TrayIcon*)},
	{"removePropertyChangeListener", "(Ljava/lang/String;Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(SystemTray, removePropertyChangeListener, void, $String*, $PropertyChangeListener*)},
	{}
};

$InnerClassInfo _SystemTray_InnerClassesInfo_[] = {
	{"java.awt.SystemTray$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SystemTray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.SystemTray",
	"java.lang.Object",
	nullptr,
	_SystemTray_FieldInfo_,
	_SystemTray_MethodInfo_,
	nullptr,
	nullptr,
	_SystemTray_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.SystemTray$1"
};

$Object* allocate$SystemTray($Class* clazz) {
	return $of($alloc(SystemTray));
}

SystemTray* SystemTray::systemTray = nullptr;
$TrayIconArray* SystemTray::EMPTY_TRAY_ARRAY = nullptr;

void SystemTray::init$() {
	this->currentIconID = 0;
	addNotify();
}

SystemTray* SystemTray::getSystemTray() {
	$init(SystemTray);
	checkSystemTrayAllowed();
	if ($GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	initializeSystemTrayIfNeeded();
	if (!isSupported()) {
		$throwNew($UnsupportedOperationException, "The system tray is not supported on the current platform."_s);
	}
	return SystemTray::systemTray;
}

bool SystemTray::isSupported() {
	$init(SystemTray);
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, toolkit)) {
		initializeSystemTrayIfNeeded();
		return $nc(($cast($SunToolkit, toolkit)))->isTraySupported();
	} else if ($instanceOf($HeadlessToolkit, toolkit)) {
		return $nc(($cast($HeadlessToolkit, toolkit)))->isTraySupported();
	} else {
		return false;
	}
}

void SystemTray::add($TrayIcon* trayIcon) {
	$useLocalCurrentObjectStackCache();
	if (trayIcon == nullptr) {
		$throwNew($NullPointerException, "adding null TrayIcon"_s);
	}
	$var($TrayIconArray, oldArray, nullptr);
	$var($TrayIconArray, newArray, nullptr);
	$var($Vector, icons, nullptr);
	$synchronized(this) {
		$assign(oldArray, $nc(SystemTray::systemTray)->getTrayIcons());
		$load($TrayIcon);
		$var($Vector, tmp, $cast($Vector, $nc($($AppContext::getAppContext()))->get($TrayIcon::class$)));
		$assign(icons, tmp);
		if (icons == nullptr) {
			$assign(icons, $new($Vector, 3));
			$nc($($AppContext::getAppContext()))->put($TrayIcon::class$, icons);
		} else if ($nc(icons)->contains(trayIcon)) {
			$throwNew($IllegalArgumentException, "adding TrayIcon that is already added"_s);
		}
		$nc(icons)->add(trayIcon);
		$assign(newArray, $nc(SystemTray::systemTray)->getTrayIcons());
		$nc(trayIcon)->setID(++this->currentIconID);
	}
	try {
		$nc(trayIcon)->addNotify();
	} catch ($AWTException& e) {
		$nc(icons)->remove($of(trayIcon));
		$throw(e);
	}
	firePropertyChange("trayIcons"_s, oldArray, newArray);
}

void SystemTray::remove($TrayIcon* trayIcon) {
	$useLocalCurrentObjectStackCache();
	if (trayIcon == nullptr) {
		return;
	}
	$var($TrayIconArray, oldArray, nullptr);
	$var($TrayIconArray, newArray, nullptr);
	$synchronized(this) {
		$assign(oldArray, $nc(SystemTray::systemTray)->getTrayIcons());
		$load($TrayIcon);
		$var($Vector, icons, $cast($Vector, $nc($($AppContext::getAppContext()))->get($TrayIcon::class$)));
		if (icons == nullptr || !$nc(icons)->remove($of(trayIcon))) {
			return;
		}
		$nc(trayIcon)->removeNotify();
		$assign(newArray, $nc(SystemTray::systemTray)->getTrayIcons());
	}
	firePropertyChange("trayIcons"_s, oldArray, newArray);
}

$TrayIconArray* SystemTray::getTrayIcons() {
	$useLocalCurrentObjectStackCache();
	$load($TrayIcon);
	$var($Vector, icons, $cast($Vector, $nc($($AppContext::getAppContext()))->get($TrayIcon::class$)));
	if (icons != nullptr) {
		return $fcast($TrayIconArray, icons->toArray($$new($TrayIconArray, icons->size())));
	}
	return SystemTray::EMPTY_TRAY_ARRAY;
}

$Dimension* SystemTray::getTrayIconSize() {
	return $nc(this->peer)->getTrayIconSize();
}

void SystemTray::addPropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$nc($(getCurrentChangeSupport()))->addPropertyChangeListener(propertyName, listener);
	}
}

void SystemTray::removePropertyChangeListener($String* propertyName, $PropertyChangeListener* listener) {
	$synchronized(this) {
		if (listener == nullptr) {
			return;
		}
		$nc($(getCurrentChangeSupport()))->removePropertyChangeListener(propertyName, listener);
	}
}

$PropertyChangeListenerArray* SystemTray::getPropertyChangeListeners($String* propertyName) {
	$synchronized(this) {
		return $nc($(getCurrentChangeSupport()))->getPropertyChangeListeners(propertyName);
	}
}

void SystemTray::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (oldValue != nullptr && newValue != nullptr && $of(oldValue)->equals(newValue)) {
		return;
	}
	$nc($(getCurrentChangeSupport()))->firePropertyChange(propertyName, oldValue, newValue);
}

$PropertyChangeSupport* SystemTray::getCurrentChangeSupport() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($PropertyChangeSupport, changeSupport, $cast($PropertyChangeSupport, $nc($($AppContext::getAppContext()))->get(SystemTray::class$)));
		if (changeSupport == nullptr) {
			$assign(changeSupport, $new($PropertyChangeSupport, this));
			$nc($($AppContext::getAppContext()))->put(SystemTray::class$, changeSupport);
		}
		return changeSupport;
	}
}

void SystemTray::addNotify() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->peer == nullptr) {
			$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
			if ($instanceOf($SunToolkit, toolkit)) {
				$set(this, peer, $nc(($cast($SunToolkit, $($Toolkit::getDefaultToolkit()))))->createSystemTray(this));
			} else if ($instanceOf($HeadlessToolkit, toolkit)) {
				$set(this, peer, $nc(($cast($HeadlessToolkit, $($Toolkit::getDefaultToolkit()))))->createSystemTray(this));
			}
		}
	}
}

void SystemTray::checkSystemTrayAllowed() {
	$init(SystemTray);
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		$init($AWTPermissions);
		security->checkPermission($AWTPermissions::ACCESS_SYSTEM_TRAY_PERMISSION);
	}
}

void SystemTray::initializeSystemTrayIfNeeded() {
	$init(SystemTray);
	$synchronized(SystemTray::class$) {
		if (SystemTray::systemTray == nullptr) {
			$assignStatic(SystemTray::systemTray, $new(SystemTray));
		}
	}
}

void clinit$SystemTray($Class* class$) {
	$assignStatic(SystemTray::EMPTY_TRAY_ARRAY, $new($TrayIconArray, 0));
	{
		$AWTAccessor::setSystemTrayAccessor($$new($SystemTray$1));
	}
}

SystemTray::SystemTray() {
}

$Class* SystemTray::load$($String* name, bool initialize) {
	$loadClass(SystemTray, name, initialize, &_SystemTray_ClassInfo_, clinit$SystemTray, allocate$SystemTray);
	return class$;
}

$Class* SystemTray::class$ = nullptr;

	} // awt
} // java