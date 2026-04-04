#include <sun/awt/windows/WFileDialogPeer$3.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace awt {
		namespace windows {

void WFileDialogPeer$3::init$() {
}

$Object* WFileDialogPeer$3::run() {
	$beforeCallerSensitive();
	try {
		$var($ResourceBundle, rb, $ResourceBundle::getBundle("sun.awt.windows.awtLocalization"_s));
		return $of($nc(rb)->getString("allFiles"_s));
	} catch ($MissingResourceException& e) {
		return $of("All Files"_s);
	}
	$shouldNotReachHere();
}

WFileDialogPeer$3::WFileDialogPeer$3() {
}

$Class* WFileDialogPeer$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WFileDialogPeer$3, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WFileDialogPeer$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WFileDialogPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WFileDialogPeer$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WFileDialogPeer$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.windows.WFileDialogPeer"
	};
	$loadClass(WFileDialogPeer$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WFileDialogPeer$3);
	});
	return class$;
}

$Class* WFileDialogPeer$3::class$ = nullptr;

		} // windows
	} // awt
} // sun