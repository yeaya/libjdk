#include <sun/font/Font2DHandle.h>
#include <sun/font/Font2D.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;

namespace sun {
	namespace font {

void Font2DHandle::init$($Font2D* font) {
	$set(this, font2D, font);
}

Font2DHandle::Font2DHandle() {
}

$Class* Font2DHandle::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"font2D", "Lsun/font/Font2D;", nullptr, $PUBLIC, $field(Font2DHandle, font2D)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/Font2D;)V", nullptr, $PUBLIC, $method(Font2DHandle, init$, void, $Font2D*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.Font2DHandle",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Font2DHandle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Font2DHandle);
	});
	return class$;
}

$Class* Font2DHandle::class$ = nullptr;

	} // font
} // sun