#include <sun/lwawt/macosx/CAccessible.h>
#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/lwawt/macosx/CAccessible$AXChangeNotifier.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$AccessibleContextAccessor = ::sun::awt::AWTAccessor$AccessibleContextAccessor;
using $CAccessible$AXChangeNotifier = ::sun::lwawt::macosx::CAccessible$AXChangeNotifier;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CAccessible::finalize() {
	this->$CFRetainedResource::finalize();
}

int32_t CAccessible::hashCode() {
	 return this->$CFRetainedResource::hashCode();
}

bool CAccessible::equals(Object$* arg0) {
	 return this->$CFRetainedResource::equals(arg0);
}

$Object* CAccessible::clone() {
	 return this->$CFRetainedResource::clone();
}

$String* CAccessible::toString() {
	 return this->$CFRetainedResource::toString();
}

CAccessible* CAccessible::getCAccessible($Accessible* a) {
	$init(CAccessible);
	$useLocalObjectStack();
	if (a == nullptr) {
		return nullptr;
	}
	$var($AccessibleContext, context, $nc(a)->getAccessibleContext());
	$var($AWTAccessor$AccessibleContextAccessor, accessor, $AWTAccessor::getAccessibleContextAccessor());
	$var(CAccessible, cachedCAX, $cast(CAccessible, $nc(accessor)->getNativeAXResource(context)));
	if (cachedCAX != nullptr) {
		return cachedCAX;
	}
	$var(CAccessible, newCAX, $new(CAccessible, a));
	accessor->setNativeAXResource(context, newCAX);
	return newCAX;
}

void CAccessible::unregisterFromCocoaAXSystem(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(unregisterFromCocoaAXSystem, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::valueChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(valueChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::selectedTextChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(selectedTextChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::selectionChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(selectionChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::titleChanged(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(titleChanged, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuOpened(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(menuOpened, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuClosed(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(menuClosed, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::menuItemSelected(int64_t ptr) {
	$init(CAccessible);
	$prepareNativeStatic(menuItemSelected, void, int64_t ptr);
	$invokeNativeStatic(ptr);
	$finishNativeStatic();
}

void CAccessible::init$($Accessible* accessible) {
	$CFRetainedResource::init$(0, true);
	if (accessible == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, accessible, accessible);
	if ($instanceOf($Component, accessible)) {
		addNotificationListeners($cast($Component, accessible));
	}
}

void CAccessible::dispose() {
	$synchronized(this) {
		if (this->ptr != 0) {
			unregisterFromCocoaAXSystem(this->ptr);
		}
		$CFRetainedResource::dispose();
	}
}

$AccessibleContext* CAccessible::getAccessibleContext() {
	return $nc(this->accessible)->getAccessibleContext();
}

void CAccessible::addNotificationListeners($Component* c) {
	$useLocalObjectStack();
	if ($instanceOf($Accessible, c)) {
		$var($AccessibleContext, ac, $cast($Accessible, c)->getAccessibleContext());
		$nc(ac)->addPropertyChangeListener($$new($CAccessible$AXChangeNotifier, this));
	}
}

$Accessible* CAccessible::getSwingAccessible($Accessible* a) {
	$init(CAccessible);
	return ($instanceOf(CAccessible, a)) ? $cast(CAccessible, a)->accessible : a;
}

$AccessibleContext* CAccessible::getActiveDescendant($Accessible* a) {
	$init(CAccessible);
	return ($instanceOf(CAccessible, a)) ? $cast(CAccessible, a)->activeDescendant : ($AccessibleContext*)nullptr;
}

CAccessible::CAccessible() {
}

$Class* CAccessible::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accessible", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(CAccessible, accessible)},
		{"activeDescendant", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(CAccessible, activeDescendant)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/accessibility/Accessible;)V", nullptr, $PRIVATE, $method(CAccessible, init$, void, $Accessible*)},
		{"addNotificationListeners", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(CAccessible, addNotificationListeners, void, $Component*)},
		{"dispose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(CAccessible, dispose, void)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(CAccessible, getAccessibleContext, $AccessibleContext*)},
		{"getActiveDescendant", "(Ljavax/accessibility/Accessible;)Ljavax/accessibility/AccessibleContext;", nullptr, $STATIC, $staticMethod(CAccessible, getActiveDescendant, $AccessibleContext*, $Accessible*)},
		{"getCAccessible", "(Ljavax/accessibility/Accessible;)Lsun/lwawt/macosx/CAccessible;", nullptr, $PUBLIC | $STATIC, $staticMethod(CAccessible, getCAccessible, CAccessible*, $Accessible*)},
		{"getSwingAccessible", "(Ljavax/accessibility/Accessible;)Ljavax/accessibility/Accessible;", nullptr, $STATIC, $staticMethod(CAccessible, getSwingAccessible, $Accessible*, $Accessible*)},
		{"menuClosed", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, menuClosed, void, int64_t)},
		{"menuItemSelected", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, menuItemSelected, void, int64_t)},
		{"menuOpened", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, menuOpened, void, int64_t)},
		{"selectedTextChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, selectedTextChanged, void, int64_t)},
		{"selectionChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, selectionChanged, void, int64_t)},
		{"titleChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, titleChanged, void, int64_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"unregisterFromCocoaAXSystem", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, unregisterFromCocoaAXSystem, void, int64_t)},
		{"valueChanged", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CAccessible, valueChanged, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CAccessible$AXChangeNotifier", "sun.lwawt.macosx.CAccessible", "AXChangeNotifier", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CAccessible",
		"sun.lwawt.macosx.CFRetainedResource",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CAccessible$AXChangeNotifier"
	};
	$loadClass(CAccessible, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(CAccessible));
	});
	return class$;
}

$Class* CAccessible::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun