#include <sun/lwawt/macosx/LWCToolkit$AppleSpecificColor.h>
#include <java/awt/Color.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$AppleSpecificColor::init$(int32_t index) {
	$init($LWCToolkit);
	$Color::init$($nc($LWCToolkit::appleColors)->get(index));
	this->index = index;
}

int32_t LWCToolkit$AppleSpecificColor::getRGB() {
	$init($LWCToolkit);
	return $nc($LWCToolkit::appleColors)->get(this->index);
}

LWCToolkit$AppleSpecificColor::LWCToolkit$AppleSpecificColor() {
}

$Class* LWCToolkit$AppleSpecificColor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $PRIVATE | $FINAL, $field(LWCToolkit$AppleSpecificColor, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(LWCToolkit$AppleSpecificColor, init$, void, int32_t)},
		{"getRGB", "()I", nullptr, $PUBLIC, $virtualMethod(LWCToolkit$AppleSpecificColor, getRGB, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$AppleSpecificColor", "sun.lwawt.macosx.LWCToolkit", "AppleSpecificColor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$AppleSpecificColor",
		"java.awt.Color",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$AppleSpecificColor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWCToolkit$AppleSpecificColor));
	});
	return class$;
}

$Class* LWCToolkit$AppleSpecificColor::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun