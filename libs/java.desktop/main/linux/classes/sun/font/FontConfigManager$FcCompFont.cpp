#include <sun/font/FontConfigManager$FcCompFont.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void FontConfigManager$FcCompFont::init$() {
}

FontConfigManager$FcCompFont::FontConfigManager$FcCompFont() {
}

$Class* FontConfigManager$FcCompFont::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fcName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, fcName)},
		{"fcFamily", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, fcFamily)},
		{"jdkName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, jdkName)},
		{"style", "I", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, style)},
		{"firstFont", "Lsun/font/FontConfigManager$FontConfigFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, firstFont)},
		{"allFonts", "[Lsun/font/FontConfigManager$FontConfigFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, allFonts)},
		{"compFont", "Lsun/font/CompositeFont;", nullptr, $PUBLIC, $field(FontConfigManager$FcCompFont, compFont)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontConfigManager$FcCompFont, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontConfigManager$FcCompFont", "sun.font.FontConfigManager", "FcCompFont", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.FontConfigManager$FcCompFont",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FontConfigManager"
	};
	$loadClass(FontConfigManager$FcCompFont, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfigManager$FcCompFont);
	});
	return class$;
}

$Class* FontConfigManager$FcCompFont::class$ = nullptr;

	} // font
} // sun