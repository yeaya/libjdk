#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace javax {
	namespace sound {
		namespace sampled {

$Class* DataLine::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"available", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, available, int32_t)},
		{"drain", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, drain, void)},
		{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, flush, void)},
		{"getBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getBufferSize, int32_t)},
		{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getFormat, $AudioFormat*)},
		{"getFramePosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getFramePosition, int32_t)},
		{"getLevel", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getLevel, float)},
		{"getLongFramePosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getLongFramePosition, int64_t)},
		{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, getMicrosecondPosition, int64_t)},
		{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, isActive, bool)},
		{"isRunning", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, isRunning, bool)},
		{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, start, void)},
		{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DataLine, stop, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.DataLine$Info", "javax.sound.sampled.DataLine", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.sampled.DataLine",
		nullptr,
		"javax.sound.sampled.Line",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.DataLine$Info"
	};
	$loadClass(DataLine, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DataLine);
	});
	return class$;
}

$Class* DataLine::class$ = nullptr;

		} // sampled
	} // sound
} // javax