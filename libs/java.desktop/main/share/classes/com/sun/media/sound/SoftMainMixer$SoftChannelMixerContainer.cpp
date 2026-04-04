#include <com/sun/media/sound/SoftMainMixer$SoftChannelMixerContainer.h>
#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/SoftAudioBuffer.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <jcpp.h>

using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftMainMixer$SoftChannelMixerContainer::init$($SoftMainMixer* this$0) {
	$set(this, this$0, this$0);
}

SoftMainMixer$SoftChannelMixerContainer::SoftMainMixer$SoftChannelMixerContainer() {
}

$Class* SoftMainMixer$SoftChannelMixerContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMainMixer$SoftChannelMixerContainer, this$0)},
		{"mixer", "Lcom/sun/media/sound/ModelChannelMixer;", nullptr, 0, $field(SoftMainMixer$SoftChannelMixerContainer, mixer)},
		{"buffers", "[Lcom/sun/media/sound/SoftAudioBuffer;", nullptr, 0, $field(SoftMainMixer$SoftChannelMixerContainer, buffers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftMainMixer;)V", nullptr, $PRIVATE, $method(SoftMainMixer$SoftChannelMixerContainer, init$, void, $SoftMainMixer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer", "com.sun.media.sound.SoftMainMixer", "SoftChannelMixerContainer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftMainMixer$SoftChannelMixerContainer",
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
		"com.sun.media.sound.SoftMainMixer"
	};
	$loadClass(SoftMainMixer$SoftChannelMixerContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMainMixer$SoftChannelMixerContainer);
	});
	return class$;
}

$Class* SoftMainMixer$SoftChannelMixerContainer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com