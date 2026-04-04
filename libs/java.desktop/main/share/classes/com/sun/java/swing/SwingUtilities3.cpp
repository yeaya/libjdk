#include <com/sun/java/swing/SwingUtilities3.h>
#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/AssertionError.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef DELEGATE_REPAINT_MANAGER_KEY
#undef TRUE

using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {

bool SwingUtilities3::$assertionsDisabled = false;
$Object* SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY = nullptr;
$Map* SwingUtilities3::vsyncedMap = nullptr;

void SwingUtilities3::init$() {
}

void SwingUtilities3::setDelegateRepaintManager($JComponent* component, $RepaintManager* repaintManager) {
	$init(SwingUtilities3);
	$$nc($AppContext::getAppContext())->put(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, $Boolean::TRUE);
	$nc(component)->putClientProperty(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, repaintManager);
}

void SwingUtilities3::setVsyncRequested($Container* rootContainer, bool isRequested) {
	$init(SwingUtilities3);
	if (!SwingUtilities3::$assertionsDisabled && !(($instanceOf($Applet, rootContainer)) || ($instanceOf($Window, rootContainer)))) {
		$throwNew($AssertionError);
	}
	if (isRequested) {
		$nc(SwingUtilities3::vsyncedMap)->put(rootContainer, $Boolean::TRUE);
	} else {
		$nc(SwingUtilities3::vsyncedMap)->remove(rootContainer);
	}
}

bool SwingUtilities3::isVsyncRequested($Container* rootContainer) {
	$init(SwingUtilities3);
	if (!SwingUtilities3::$assertionsDisabled && !(($instanceOf($Applet, rootContainer)) || ($instanceOf($Window, rootContainer)))) {
		$throwNew($AssertionError);
	}
	return $equals($Boolean::TRUE, $nc(SwingUtilities3::vsyncedMap)->get(rootContainer));
}

$RepaintManager* SwingUtilities3::getDelegateRepaintManager($Component* component$renamed) {
	$init(SwingUtilities3);
	$useLocalObjectStack();
	$var($Component, component, component$renamed);
	$var($RepaintManager, delegate, nullptr);
	if ($equals($Boolean::TRUE, $$nc($SunToolkit::targetToAppContext(component))->get(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY))) {
		while (delegate == nullptr && component != nullptr) {
			while (component != nullptr && !($instanceOf($JComponent, component))) {
				$assign(component, component->getParent());
			}
			if (component != nullptr) {
				$assign(delegate, $cast($RepaintManager, $cast($JComponent, component)->getClientProperty(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY)));
				$assign(component, component->getParent());
			}
		}
	}
	return delegate;
}

void SwingUtilities3::clinit$($Class* clazz) {
	SwingUtilities3::$assertionsDisabled = !SwingUtilities3::class$->desiredAssertionStatus();
	$assignStatic(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, $new($StringBuilder, "DelegateRepaintManagerKey"_s));
	$assignStatic(SwingUtilities3::vsyncedMap, $Collections::synchronizedMap($$new($WeakHashMap)));
}

SwingUtilities3::SwingUtilities3() {
}

$Class* SwingUtilities3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities3, $assertionsDisabled)},
		{"DELEGATE_REPAINT_MANAGER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities3, DELEGATE_REPAINT_MANAGER_KEY)},
		{"vsyncedMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Container;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities3, vsyncedMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SwingUtilities3, init$, void)},
		{"getDelegateRepaintManager", "(Ljava/awt/Component;)Ljavax/swing/RepaintManager;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities3, getDelegateRepaintManager, $RepaintManager*, $Component*)},
		{"isVsyncRequested", "(Ljava/awt/Container;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities3, isVsyncRequested, bool, $Container*)},
		{"setDelegateRepaintManager", "(Ljavax/swing/JComponent;Ljavax/swing/RepaintManager;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities3, setDelegateRepaintManager, void, $JComponent*, $RepaintManager*)},
		{"setVsyncRequested", "(Ljava/awt/Container;Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingUtilities3, setVsyncRequested, void, $Container*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.SwingUtilities3",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SwingUtilities3, name, initialize, &classInfo$$, SwingUtilities3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SwingUtilities3);
	});
	return class$;
}

$Class* SwingUtilities3::class$ = nullptr;

			} // swing
		} // java
	} // sun
} // com