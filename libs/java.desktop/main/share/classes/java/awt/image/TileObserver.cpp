#include <java/awt/image/TileObserver.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <jcpp.h>

using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$Class* TileObserver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"tileUpdate", "(Ljava/awt/image/WritableRenderedImage;IIZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TileObserver, tileUpdate, void, $WritableRenderedImage*, int32_t, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.image.TileObserver",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TileObserver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TileObserver);
	});
	return class$;
}

$Class* TileObserver::class$ = nullptr;

		} // image
	} // awt
} // java