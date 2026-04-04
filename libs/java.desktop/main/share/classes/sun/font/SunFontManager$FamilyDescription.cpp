#include <sun/font/SunFontManager$FamilyDescription.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void SunFontManager$FamilyDescription::init$() {
}

SunFontManager$FamilyDescription::SunFontManager$FamilyDescription() {
}

$Class* SunFontManager$FamilyDescription::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"familyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, familyName)},
		{"plainFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, plainFullName)},
		{"boldFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldFullName)},
		{"italicFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, italicFullName)},
		{"boldItalicFullName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldItalicFullName)},
		{"plainFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, plainFileName)},
		{"boldFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldFileName)},
		{"italicFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, italicFileName)},
		{"boldItalicFileName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(SunFontManager$FamilyDescription, boldItalicFileName)},
		{"failed", "Z", nullptr, 0, $field(SunFontManager$FamilyDescription, failed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunFontManager$FamilyDescription, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$FamilyDescription", "sun.font.SunFontManager", "FamilyDescription", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.SunFontManager$FamilyDescription",
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
	$loadClass(SunFontManager$FamilyDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$FamilyDescription);
	});
	return class$;
}

$Class* SunFontManager$FamilyDescription::class$ = nullptr;

	} // font
} // sun