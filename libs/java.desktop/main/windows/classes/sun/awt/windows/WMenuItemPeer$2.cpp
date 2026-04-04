#include <sun/awt/windows/WMenuItemPeer$2.h>
#include <java/awt/Font.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef PLAIN

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

void WMenuItemPeer$2::init$() {
}

$Object* WMenuItemPeer$2::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ResourceBundle, rb, $ResourceBundle::getBundle("sun.awt.windows.awtLocalization"_s));
		return $Font::decode($($nc(rb)->getString("menuFont"_s)));
	} catch ($MissingResourceException& e) {
		$init($WMenuItemPeer);
		$init($PlatformLogger$Level);
		if ($nc($WMenuItemPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$WMenuItemPeer::log->fine($$str({"WMenuItemPeer: "_s, $(e->getMessage()), ". Using default MenuItem font."_s}), e);
		}
		return $new($Font, "SanSerif"_s, $Font::PLAIN, 11);
	}
	$shouldNotReachHere();
}

WMenuItemPeer$2::WMenuItemPeer$2() {
}

$Class* WMenuItemPeer$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WMenuItemPeer$2, init$, void)},
		{"run", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(WMenuItemPeer$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WMenuItemPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WMenuItemPeer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WMenuItemPeer$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Font;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WMenuItemPeer"
	};
	$loadClass(WMenuItemPeer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WMenuItemPeer$2);
	});
	return class$;
}

$Class* WMenuItemPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun