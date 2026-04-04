#include <com/sun/media/sound/SoftProcess.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <jcpp.h>

using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* SoftProcess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC | $ABSTRACT},
		{"init", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftProcess, init, void, $SoftSynthesizer*)},
		{"processControlLogic", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftProcess, processControlLogic, void)},
		{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SoftProcess, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.SoftProcess",
		nullptr,
		"com.sun.media.sound.SoftControl",
		nullptr,
		methodInfos$$
	};
	$loadClass(SoftProcess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftProcess);
	});
	return class$;
}

$Class* SoftProcess::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com