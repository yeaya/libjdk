#include <sun/font/SunFontManager$8.h>
#include <java/security/AccessController.h>
#include <sun/font/SunFontManager$8$1.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $SunFontManager = ::sun::font::SunFontManager;
using $SunFontManager$8$1 = ::sun::font::SunFontManager$8$1;

namespace sun {
	namespace font {

void SunFontManager$8::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

void SunFontManager$8::run() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($SunFontManager$8$1, this));
}

SunFontManager$8::SunFontManager$8() {
}

$Class* SunFontManager$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(SunFontManager$8, init$, void, $SunFontManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SunFontManager$8, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"createFont2D",
		"(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$8", nullptr, nullptr, 0},
		{"sun.font.SunFontManager$8$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$8",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$8);
	});
	return class$;
}

$Class* SunFontManager$8::class$ = nullptr;

	} // font
} // sun