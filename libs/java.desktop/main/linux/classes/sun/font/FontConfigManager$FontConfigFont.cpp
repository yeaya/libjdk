#include <sun/font/FontConfigManager$FontConfigFont.h>
#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void FontConfigManager$FontConfigFont::init$() {
}

FontConfigManager$FontConfigFont::FontConfigManager$FontConfigFont() {
}

$Class* FontConfigManager$FontConfigFont::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"familyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, familyName)},
		{"styleStr", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, styleStr)},
		{"fullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, fullName)},
		{"fontFile", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigFont, fontFile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontConfigManager$FontConfigFont, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontConfigManager$FontConfigFont", "sun.font.FontConfigManager", "FontConfigFont", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.FontConfigManager$FontConfigFont",
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
	$loadClass(FontConfigManager$FontConfigFont, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfigManager$FontConfigFont);
	});
	return class$;
}

$Class* FontConfigManager$FontConfigFont::class$ = nullptr;

	} // font
} // sun