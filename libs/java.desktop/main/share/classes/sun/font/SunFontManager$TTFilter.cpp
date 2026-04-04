#include <sun/font/SunFontManager$TTFilter.h>
#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void SunFontManager$TTFilter::init$() {
}

bool SunFontManager$TTFilter::accept($File* dir, $String* name) {
	int32_t offset = $nc(name)->length() - 4;
	if (offset <= 0) {
		return false;
	} else {
		bool var$4 = name->startsWith(".ttf"_s, offset);
		bool var$3 = var$4 || name->startsWith(".TTF"_s, offset);
		bool var$2 = var$3 || name->startsWith(".ttc"_s, offset);
		bool var$1 = var$2 || name->startsWith(".TTC"_s, offset);
		bool var$0 = var$1 || name->startsWith(".otf"_s, offset);
		return (var$0 || name->startsWith(".OTF"_s, offset));
	}
}

SunFontManager$TTFilter::SunFontManager$TTFilter() {
}

$Class* SunFontManager$TTFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SunFontManager$TTFilter, init$, void)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(SunFontManager$TTFilter, accept, bool, $File*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$TTFilter", "sun.font.SunFontManager", "TTFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$TTFilter",
		"java.lang.Object",
		"java.io.FilenameFilter",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$TTFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$TTFilter);
	});
	return class$;
}

$Class* SunFontManager$TTFilter::class$ = nullptr;

	} // font
} // sun