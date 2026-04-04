#include <sun/awt/Win32FontManager$2.h>
#include <sun/awt/Win32FontManager.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32FontManager = ::sun::awt::Win32FontManager;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace awt {

void Win32FontManager$2::init$($Win32FontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* Win32FontManager$2::run() {
	$init($SunFontManager);
	this->this$0->registerJREFontsWithPlatform($SunFontManager::jreFontDirName);
	return nullptr;
}

Win32FontManager$2::Win32FontManager$2() {
}

$Class* Win32FontManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/Win32FontManager;", nullptr, $FINAL | $SYNTHETIC, $field(Win32FontManager$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/Win32FontManager;)V", nullptr, 0, $method(Win32FontManager$2, init$, void, $Win32FontManager*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32FontManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.Win32FontManager",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Win32FontManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.Win32FontManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.Win32FontManager"
	};
	$loadClass(Win32FontManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32FontManager$2);
	});
	return class$;
}

$Class* Win32FontManager$2::class$ = nullptr;

	} // awt
} // sun