#include <sun/font/SunFontManager$FontRegistrationInfo.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void SunFontManager$FontRegistrationInfo::init$($String* fontPath, $StringArray* names, int32_t format, bool useJavaRasterizer, int32_t rank) {
	$set(this, fontFilePath, fontPath);
	$set(this, nativeNames, names);
	this->fontFormat = format;
	this->javaRasterizer = useJavaRasterizer;
	this->fontRank = rank;
}

SunFontManager$FontRegistrationInfo::SunFontManager$FontRegistrationInfo() {
}

$Class* SunFontManager$FontRegistrationInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fontFilePath", "Ljava/lang/String;", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontFilePath)},
		{"nativeNames", "[Ljava/lang/String;", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, nativeNames)},
		{"fontFormat", "I", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontFormat)},
		{"javaRasterizer", "Z", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, javaRasterizer)},
		{"fontRank", "I", nullptr, 0, $field(SunFontManager$FontRegistrationInfo, fontRank)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;IZI)V", nullptr, 0, $method(SunFontManager$FontRegistrationInfo, init$, void, $String*, $StringArray*, int32_t, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$FontRegistrationInfo", "sun.font.SunFontManager", "FontRegistrationInfo", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.font.SunFontManager$FontRegistrationInfo",
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
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$FontRegistrationInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$FontRegistrationInfo);
	});
	return class$;
}

$Class* SunFontManager$FontRegistrationInfo::class$ = nullptr;

	} // font
} // sun