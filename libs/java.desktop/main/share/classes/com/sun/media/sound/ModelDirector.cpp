#include <com/sun/media/sound/ModelDirector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ModelDirector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, close, void)},
		{"noteOff", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, noteOff, void, int32_t, int32_t)},
		{"noteOn", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, noteOn, void, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ModelDirector",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ModelDirector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelDirector);
	});
	return class$;
}

$Class* ModelDirector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com