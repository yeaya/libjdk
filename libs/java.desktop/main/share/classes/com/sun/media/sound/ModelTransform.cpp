#include <com/sun/media/sound/ModelTransform.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ModelTransform::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"transform", "(D)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelTransform, transform, double, double)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ModelTransform",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelTransform, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelTransform);
	});
	return class$;
}

$Class* ModelTransform::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com