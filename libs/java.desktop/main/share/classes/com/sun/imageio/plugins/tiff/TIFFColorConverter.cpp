#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFColorConverter::init$() {
}

TIFFColorConverter::TIFFColorConverter() {
}

$Class* TIFFColorConverter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFColorConverter, init$, void)},
		{"fromRGB", "(FFF[F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TIFFColorConverter, fromRGB, void, float, float, float, $floats*)},
		{"toRGB", "(FFF[F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TIFFColorConverter, toRGB, void, float, float, float, $floats*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.imageio.plugins.tiff.TIFFColorConverter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TIFFColorConverter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFColorConverter);
	});
	return class$;
}

$Class* TIFFColorConverter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com