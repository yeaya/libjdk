#include <sun/awt/Win32FontManager$1.h>
#include <java/awt/FontFormatException.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $FontFormatException = ::java::awt::FontFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace awt {

void Win32FontManager$1::init$() {
}

$Object* Win32FontManager$1::run() {
	$var($String, eudcFile, $Win32FontManager::getEUDCFontFile());
	if (eudcFile != nullptr) {
		try {
			$assignStatic($Win32FontManager::eudcFont, $new($TrueTypeFont, eudcFile, nullptr, 0, true, false));
		} catch ($FontFormatException& e) {
		}
	}
	return nullptr;
}

Win32FontManager$1::Win32FontManager$1() {
}

$Class* Win32FontManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Win32FontManager$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32FontManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.Win32FontManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32FontManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32FontManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.Win32FontManager"
	};
	$loadClass(Win32FontManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32FontManager$1);
	});
	return class$;
}

$Class* Win32FontManager$1::class$ = nullptr;

	} // awt
} // sun