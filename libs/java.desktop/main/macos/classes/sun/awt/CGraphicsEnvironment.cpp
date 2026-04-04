#include <sun/awt/CGraphicsEnvironment.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/MacosxSurfaceManagerFactory.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/SurfaceManagerFactory.h>
#include <jcpp.h>

#undef PLAIN

using $FontArray = $Array<::java::awt::Font>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $CGraphicsDeviceArray = $Array<::sun::awt::CGraphicsDevice>;
using $Font = ::java::awt::Font;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $MacosxSurfaceManagerFactory = ::sun::java2d::MacosxSurfaceManagerFactory;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $SurfaceManagerFactory = ::sun::java2d::SurfaceManagerFactory;

namespace sun {
	namespace awt {

$StringArray* CGraphicsEnvironment::sLogicalFonts = nullptr;

$ints* CGraphicsEnvironment::getDisplayIDs() {
	$init(CGraphicsEnvironment);
	$prepareNativeStatic(getDisplayIDs, $ints*);
	$var($ints, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t CGraphicsEnvironment::getMainDisplayID() {
	$init(CGraphicsEnvironment);
	$prepareNativeStatic(getMainDisplayID, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void CGraphicsEnvironment::init() {
	$init(CGraphicsEnvironment);
}

int64_t CGraphicsEnvironment::registerDisplayReconfiguration() {
	$prepareNative(registerDisplayReconfiguration, int64_t);
	int64_t $ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CGraphicsEnvironment::deregisterDisplayReconfiguration(int64_t context) {
	$prepareNative(deregisterDisplayReconfiguration, void, int64_t context);
	$invokeNative(context);
	$finishNative();
}

void CGraphicsEnvironment::init$() {
	$SunGraphicsEnvironment::init$();
	$set(this, devices, $new($HashMap, 5));
	$set(this, oldDevices, $new($ArrayList));
	if (isHeadless()) {
		this->displayReconfigContext = 0;
		return;
	}
	rebuildDevices();
	this->displayReconfigContext = registerDisplayReconfiguration();
	if (this->displayReconfigContext == 0) {
		$throwNew($RuntimeException, "Could not register CoreGraphics display reconfiguration callback"_s);
	}
}

void CGraphicsEnvironment::rebuildDevices() {
	initDevices();
	displayChanged();
}

void CGraphicsEnvironment::_displayReconfiguration(int32_t displayId, bool removed) {
	rebuildDevices();
}

void CGraphicsEnvironment::finalize() {
	$var($Throwable, var$0, nullptr);
	try {
		$SunGraphicsEnvironment::finalize();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		deregisterDisplayReconfiguration(this->displayReconfigContext);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void CGraphicsEnvironment::initDevices() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Map, old, $new($HashMap, this->devices));
		this->devices->clear();
		this->mainDisplayID = getMainDisplayID();
		if (!old->containsKey($($Integer::valueOf(this->mainDisplayID)))) {
			$var($Object, var$0, $Integer::valueOf(this->mainDisplayID));
			old->put(var$0, $$new($CGraphicsDevice, this->mainDisplayID));
		}
		$var($ints, displayIDs, getDisplayIDs());
		if ($nc(displayIDs)->length == 0) {
			$assign(displayIDs, $new($ints, {this->mainDisplayID}));
		}
		{
			$var($ints, arr$, displayIDs);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				int32_t id = arr$->get(i$);
				{
					$var($Object, var$1, $Integer::valueOf(id));
					this->devices->put(var$1, old->containsKey($($Integer::valueOf(id))) ? $$cast($CGraphicsDevice, old->remove($($Integer::valueOf(id)))) : $$new($CGraphicsDevice, id));
				}
			}
		}
		this->mainDisplayID = getMainDisplayID();
		if (!this->devices->containsKey($($Integer::valueOf(this->mainDisplayID)))) {
			this->mainDisplayID = displayIDs->get(0);
		}
		{
			$var($Iterator, i$, $$nc(old->values())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($CGraphicsDevice, gd, $cast($CGraphicsDevice, i$->next()));
				{
					$nc(this->oldDevices)->add($$new($WeakReference, gd));
				}
			}
		}
		{
			$var($ListIterator, it, $nc(this->oldDevices)->listIterator());
			for (; $nc(it)->hasNext();) {
				$var($CGraphicsDevice, gd, $cast($CGraphicsDevice, $$sure($WeakReference, it->next())->get()));
				if (gd != nullptr) {
					$var($CGraphicsDevice, similarDevice, getSimilarDevice(gd));
					if (similarDevice == nullptr) {
						gd->invalidate($$cast($CGraphicsDevice, this->devices->get($($Integer::valueOf(this->mainDisplayID)))));
					} else {
						gd->invalidate(similarDevice);
					}
					gd->displayChanged();
				} else {
					it->remove();
				}
			}
		}
	}
}

$CGraphicsDevice* CGraphicsEnvironment::getSimilarDevice($CGraphicsDevice* old) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc(this->devices->values())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($CGraphicsDevice, device, $cast($CGraphicsDevice, i$->next()));
		if ($$nc($nc(device)->getBounds())->equals($($nc(old)->getBounds()))) {
			return device;
		}
	}
	return nullptr;
}

$GraphicsDevice* CGraphicsEnvironment::getDefaultScreenDevice() {
	$synchronized(this) {
		return $cast($GraphicsDevice, this->devices->get($($Integer::valueOf(this->mainDisplayID))));
	}
}

$GraphicsDeviceArray* CGraphicsEnvironment::getScreenDevices() {
	$synchronized(this) {
		$useLocalObjectStack();
		return $cast($GraphicsDeviceArray, $$nc(this->devices->values())->toArray($$new($CGraphicsDeviceArray, $$nc(this->devices->values())->size())));
	}
}

$GraphicsDevice* CGraphicsEnvironment::getScreenDevice(int32_t displayID) {
	$synchronized(this) {
		return $cast($GraphicsDevice, this->devices->get($($Integer::valueOf(displayID))));
	}
}

int32_t CGraphicsEnvironment::getNumScreens() {
	$synchronized(this) {
		return this->devices->size();
	}
}

$GraphicsDevice* CGraphicsEnvironment::makeScreenDevice(int32_t screennum) {
	$throwNew($UnsupportedOperationException, "This method is unused and should not be called in this implementation"_s);
	$shouldNotReachHere();
}

bool CGraphicsEnvironment::isDisplayLocal() {
	return true;
}

$FontArray* CGraphicsEnvironment::getAllFonts() {
	$useLocalObjectStack();
	$var($FontArray, newFonts, nullptr);
	$var($FontArray, superFonts, $SunGraphicsEnvironment::getAllFonts());
	int32_t numLogical = $nc(CGraphicsEnvironment::sLogicalFonts)->length;
	int32_t numOtherFonts = $nc(superFonts)->length;
	$assign(newFonts, $new($FontArray, numOtherFonts + numLogical));
	$System::arraycopy(superFonts, 0, newFonts, numLogical, numOtherFonts);
	for (int32_t i = 0; i < numLogical; ++i) {
		newFonts->set(i, $$new($Font, CGraphicsEnvironment::sLogicalFonts->get(i), $Font::PLAIN, 1));
	}
	return newFonts;
}

void CGraphicsEnvironment::clinit$($Class* clazz) {
	{
		$Toolkit::getDefaultToolkit();
		$SurfaceManagerFactory::setInstance($$new($MacosxSurfaceManagerFactory));
	}
	$assignStatic(CGraphicsEnvironment::sLogicalFonts, $new($StringArray, {
		"Serif"_s,
		"SansSerif"_s,
		"Monospaced"_s,
		"Dialog"_s,
		"DialogInput"_s
	}));
}

CGraphicsEnvironment::CGraphicsEnvironment() {
}

$Class* CGraphicsEnvironment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"devices", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lsun/awt/CGraphicsDevice;>;", $PRIVATE | $FINAL, $field(CGraphicsEnvironment, devices)},
		{"mainDisplayID", "I", nullptr, $PRIVATE, $field(CGraphicsEnvironment, mainDisplayID)},
		{"displayReconfigContext", "J", nullptr, $PRIVATE | $FINAL, $field(CGraphicsEnvironment, displayReconfigContext)},
		{"oldDevices", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Lsun/awt/CGraphicsDevice;>;>;", $PRIVATE, $field(CGraphicsEnvironment, oldDevices)},
		{"sLogicalFonts", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(CGraphicsEnvironment, sLogicalFonts)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CGraphicsEnvironment, init$, void)},
		{"_displayReconfiguration", "(IZ)V", nullptr, 0, $method(CGraphicsEnvironment, _displayReconfiguration, void, int32_t, bool)},
		{"deregisterDisplayReconfiguration", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(CGraphicsEnvironment, deregisterDisplayReconfiguration, void, int64_t)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(CGraphicsEnvironment, finalize, void), "java.lang.Throwable"},
		{"getAllFonts", "()[Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(CGraphicsEnvironment, getAllFonts, $FontArray*)},
		{"getDefaultScreenDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CGraphicsEnvironment, getDefaultScreenDevice, $GraphicsDevice*), "java.awt.HeadlessException"},
		{"getDisplayIDs", "()[I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CGraphicsEnvironment, getDisplayIDs, $ints*)},
		{"getMainDisplayID", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CGraphicsEnvironment, getMainDisplayID, int32_t)},
		{"getNumScreens", "()I", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(CGraphicsEnvironment, getNumScreens, int32_t)},
		{"getScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(CGraphicsEnvironment, getScreenDevice, $GraphicsDevice*, int32_t)},
		{"getScreenDevices", "()[Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(CGraphicsEnvironment, getScreenDevices, $GraphicsDeviceArray*), "java.awt.HeadlessException"},
		{"getSimilarDevice", "(Lsun/awt/CGraphicsDevice;)Lsun/awt/CGraphicsDevice;", nullptr, $PRIVATE, $method(CGraphicsEnvironment, getSimilarDevice, $CGraphicsDevice*, $CGraphicsDevice*)},
		{"init", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(CGraphicsEnvironment, init, void)},
		{"initDevices", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(CGraphicsEnvironment, initDevices, void)},
		{"isDisplayLocal", "()Z", nullptr, $PUBLIC, $virtualMethod(CGraphicsEnvironment, isDisplayLocal, bool)},
		{"makeScreenDevice", "(I)Ljava/awt/GraphicsDevice;", nullptr, $PROTECTED, $virtualMethod(CGraphicsEnvironment, makeScreenDevice, $GraphicsDevice*, int32_t)},
		{"rebuildDevices", "()V", nullptr, $PRIVATE, $method(CGraphicsEnvironment, rebuildDevices, void)},
		{"registerDisplayReconfiguration", "()J", nullptr, $PRIVATE | $NATIVE, $method(CGraphicsEnvironment, registerDisplayReconfiguration, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.CGraphicsEnvironment",
		"sun.java2d.SunGraphicsEnvironment",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CGraphicsEnvironment, name, initialize, &classInfo$$, CGraphicsEnvironment::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CGraphicsEnvironment));
	});
	return class$;
}

$Class* CGraphicsEnvironment::class$ = nullptr;

	} // awt
} // sun