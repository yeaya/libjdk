#include <sun/font/SunFontManager$11.h>
#include <sun/font/Font2D.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef TYPE1_RANK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$11::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$11::run() {
	$var($String, type1Dir, "/usr/openwin/lib/X11/fonts/Type1"_s);
	this->this$0->registerFontsInDir(type1Dir, true, $Font2D::TYPE1_RANK, false, false);
	return nullptr;
}

SunFontManager$11::SunFontManager$11() {
}

$Class* SunFontManager$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$11, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(SunFontManager$11, init$, void, $SunFontManager*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$11, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"register1dot0Fonts",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$11", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$11",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$11);
	});
	return class$;
}

$Class* SunFontManager$11::class$ = nullptr;

	} // font
} // sun