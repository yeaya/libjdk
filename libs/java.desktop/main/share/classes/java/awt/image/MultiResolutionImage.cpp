#include <java/awt/image/MultiResolutionImage.h>
#include <java/awt/Image.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace image {

$Class* MultiResolutionImage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getResolutionVariant", "(DD)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MultiResolutionImage, getResolutionVariant, $Image*, double, double)},
		{"getResolutionVariants", "()Ljava/util/List;", "()Ljava/util/List<Ljava/awt/Image;>;", $PUBLIC | $ABSTRACT, $virtualMethod(MultiResolutionImage, getResolutionVariants, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.image.MultiResolutionImage",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MultiResolutionImage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiResolutionImage);
	});
	return class$;
}

$Class* MultiResolutionImage::class$ = nullptr;

		} // image
	} // awt
} // java