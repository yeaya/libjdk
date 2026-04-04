#include <com/sun/media/sound/SoftReverb$Delay.h>
#include <com/sun/media/sound/SoftReverb.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftReverb$Delay::init$() {
	this->rovepos = 0;
	$set(this, delaybuffer, nullptr);
}

void SoftReverb$Delay::setDelay(int32_t delay) {
	if (delay == 0) {
		$set(this, delaybuffer, nullptr);
	} else {
		$set(this, delaybuffer, $new($floats, delay));
	}
	this->rovepos = 0;
}

void SoftReverb$Delay::processReplace($floats* inout) {
	if (this->delaybuffer == nullptr) {
		return;
	}
	int32_t len = $nc(inout)->length;
	int32_t rnlen = $nc(this->delaybuffer)->length;
	int32_t rovepos = this->rovepos;
	for (int32_t i = 0; i < len; ++i) {
		float x = inout->get(i);
		inout->set(i, this->delaybuffer->get(rovepos));
		this->delaybuffer->set(rovepos, x);
		if (++rovepos == rnlen) {
			rovepos = 0;
		}
	}
	this->rovepos = rovepos;
}

SoftReverb$Delay::SoftReverb$Delay() {
}

$Class* SoftReverb$Delay::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delaybuffer", "[F", nullptr, $PRIVATE, $field(SoftReverb$Delay, delaybuffer)},
		{"rovepos", "I", nullptr, $PRIVATE, $field(SoftReverb$Delay, rovepos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SoftReverb$Delay, init$, void)},
		{"processReplace", "([F)V", nullptr, $PUBLIC, $method(SoftReverb$Delay, processReplace, void, $floats*)},
		{"setDelay", "(I)V", nullptr, $PUBLIC, $method(SoftReverb$Delay, setDelay, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftReverb$Delay", "com.sun.media.sound.SoftReverb", "Delay", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftReverb$Delay",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftReverb"
	};
	$loadClass(SoftReverb$Delay, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftReverb$Delay);
	});
	return class$;
}

$Class* SoftReverb$Delay::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com