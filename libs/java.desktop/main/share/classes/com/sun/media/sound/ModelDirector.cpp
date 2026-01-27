#include <com/sun/media/sound/ModelDirector.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelDirector_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, close, void)},
	{"noteOff", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, noteOff, void, int32_t, int32_t)},
	{"noteOn", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModelDirector, noteOn, void, int32_t, int32_t)},
	{}
};

$ClassInfo _ModelDirector_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelDirector",
	nullptr,
	nullptr,
	nullptr,
	_ModelDirector_MethodInfo_
};

$Object* allocate$ModelDirector($Class* clazz) {
	return $of($alloc(ModelDirector));
}

$Class* ModelDirector::load$($String* name, bool initialize) {
	$loadClass(ModelDirector, name, initialize, &_ModelDirector_ClassInfo_, allocate$ModelDirector);
	return class$;
}

$Class* ModelDirector::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com