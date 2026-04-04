#include <sun/font/FontConfigManager$FontConfigInfo.h>
#include <sun/font/FontConfigManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void FontConfigManager$FontConfigInfo::init$() {
	$set(this, cacheDirs, $new($StringArray, 4));
}

FontConfigManager$FontConfigInfo::FontConfigManager$FontConfigInfo() {
}

$Class* FontConfigManager$FontConfigInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fcVersion", "I", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigInfo, fcVersion)},
		{"cacheDirs", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(FontConfigManager$FontConfigInfo, cacheDirs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontConfigManager$FontConfigInfo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontConfigManager$FontConfigInfo", "sun.font.FontConfigManager", "FontConfigInfo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.FontConfigManager$FontConfigInfo",
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
	$loadClass(FontConfigManager$FontConfigInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontConfigManager$FontConfigInfo);
	});
	return class$;
}

$Class* FontConfigManager$FontConfigInfo::class$ = nullptr;

	} // font
} // sun