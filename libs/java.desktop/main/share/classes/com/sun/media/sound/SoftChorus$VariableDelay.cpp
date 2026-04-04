#include <com/sun/media/sound/SoftChorus$VariableDelay.h>
#include <com/sun/media/sound/SoftChorus.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftChorus$VariableDelay::init$(int32_t maxbuffersize) {
	this->rovepos = 0;
	this->gain = 1;
	this->rgain = 0;
	this->delay = 0;
	this->lastdelay = 0;
	this->feedback = 0;
	$set(this, delaybuffer, $new($floats, maxbuffersize));
}

void SoftChorus$VariableDelay::setDelay(float delay) {
	this->delay = delay;
}

void SoftChorus$VariableDelay::setFeedBack(float feedback) {
	this->feedback = feedback;
}

void SoftChorus$VariableDelay::setGain(float gain) {
	this->gain = gain;
}

void SoftChorus$VariableDelay::setReverbSendGain(float rgain) {
	this->rgain = rgain;
}

void SoftChorus$VariableDelay::processMix($floats* in, $floats* out, $floats* rout) {
	float gain = this->gain;
	float delay = this->delay;
	float feedback = this->feedback;
	$var($floats, delaybuffer, this->delaybuffer);
	int32_t len = $nc(in)->length;
	float delaydelta = (delay - this->lastdelay) / len;
	int32_t rnlen = $nc(delaybuffer)->length;
	int32_t rovepos = this->rovepos;
	if (rout == nullptr) {
		for (int32_t i = 0; i < len; ++i) {
			float r = rovepos - (this->lastdelay + 2) + rnlen;
			int32_t ri = $cast(int32_t, r);
			float s = r - ri;
			float a = delaybuffer->get($mod(ri, rnlen));
			float b = delaybuffer->get($mod((ri + 1), rnlen));
			float o = a * (1 - s) + b * (s);
			(*$nc(out))[i] += o * gain;
			delaybuffer->set(rovepos, in->get(i) + o * feedback);
			rovepos = $mod((rovepos + 1), rnlen);
			this->lastdelay += delaydelta;
		}
	} else {
		for (int32_t i = 0; i < len; ++i) {
			float r = rovepos - (this->lastdelay + 2) + rnlen;
			int32_t ri = $cast(int32_t, r);
			float s = r - ri;
			float a = delaybuffer->get($mod(ri, rnlen));
			float b = delaybuffer->get($mod((ri + 1), rnlen));
			float o = a * (1 - s) + b * (s);
			(*$nc(out))[i] += o * gain;
			(*rout)[i] += o * this->rgain;
			delaybuffer->set(rovepos, in->get(i) + o * feedback);
			rovepos = $mod((rovepos + 1), rnlen);
			this->lastdelay += delaydelta;
		}
	}
	this->rovepos = rovepos;
	this->lastdelay = delay;
}

void SoftChorus$VariableDelay::processReplace($floats* in, $floats* out, $floats* rout) {
	$Arrays::fill(out, 0);
	$Arrays::fill(rout, 0);
	processMix(in, out, rout);
}

SoftChorus$VariableDelay::SoftChorus$VariableDelay() {
}

$Class* SoftChorus$VariableDelay::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delaybuffer", "[F", nullptr, $PRIVATE | $FINAL, $field(SoftChorus$VariableDelay, delaybuffer)},
		{"rovepos", "I", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, rovepos)},
		{"gain", "F", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, gain)},
		{"rgain", "F", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, rgain)},
		{"delay", "F", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, delay)},
		{"lastdelay", "F", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, lastdelay)},
		{"feedback", "F", nullptr, $PRIVATE, $field(SoftChorus$VariableDelay, feedback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(SoftChorus$VariableDelay, init$, void, int32_t)},
		{"processMix", "([F[F[F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, processMix, void, $floats*, $floats*, $floats*)},
		{"processReplace", "([F[F[F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, processReplace, void, $floats*, $floats*, $floats*)},
		{"setDelay", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, setDelay, void, float)},
		{"setFeedBack", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, setFeedBack, void, float)},
		{"setGain", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, setGain, void, float)},
		{"setReverbSendGain", "(F)V", nullptr, $PUBLIC, $virtualMethod(SoftChorus$VariableDelay, setReverbSendGain, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftChorus$VariableDelay", "com.sun.media.sound.SoftChorus", "VariableDelay", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftChorus$VariableDelay",
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
		"com.sun.media.sound.SoftChorus"
	};
	$loadClass(SoftChorus$VariableDelay, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftChorus$VariableDelay);
	});
	return class$;
}

$Class* SoftChorus$VariableDelay::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com