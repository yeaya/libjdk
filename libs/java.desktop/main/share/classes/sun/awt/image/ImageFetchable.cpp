#include <sun/awt/image/ImageFetchable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$Class* ImageFetchable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"doFetch", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageFetchable, doFetch, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.image.ImageFetchable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ImageFetchable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageFetchable);
	});
	return class$;
}

$Class* ImageFetchable::class$ = nullptr;

		} // image
	} // awt
} // sun