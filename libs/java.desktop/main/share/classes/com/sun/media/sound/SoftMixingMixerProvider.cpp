#include <com/sun/media/sound/SoftMixingMixerProvider.h>
#include <com/sun/media/sound/SoftMixingMixer.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $SoftMixingMixer = ::com::sun::media::sound::SoftMixingMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$SoftMixingMixer* SoftMixingMixerProvider::globalmixer = nullptr;
$Thread* SoftMixingMixerProvider::lockthread = nullptr;
$Object* SoftMixingMixerProvider::mutex = nullptr;

void SoftMixingMixerProvider::init$() {
	$MixerProvider::init$();
}

$Mixer* SoftMixingMixerProvider::getMixer($Mixer$Info* info) {
	$useLocalObjectStack();
	$init($SoftMixingMixer);
	if (!(info == nullptr || info == $SoftMixingMixer::info)) {
		$throwNew($IllegalArgumentException, $$str({"Mixer "_s, $(info->toString()), " not supported by this provider."_s}));
	}
	$synchronized(SoftMixingMixerProvider::mutex) {
		if (SoftMixingMixerProvider::lockthread != nullptr) {
			if ($Thread::currentThread() == SoftMixingMixerProvider::lockthread) {
				$throwNew($IllegalArgumentException, $$str({"Mixer "_s, $($nc(info)->toString()), " not supported by this provider."_s}));
			}
		}
		if (SoftMixingMixerProvider::globalmixer == nullptr) {
			$assignStatic(SoftMixingMixerProvider::globalmixer, $new($SoftMixingMixer));
		}
		return SoftMixingMixerProvider::globalmixer;
	}
}

$Mixer$InfoArray* SoftMixingMixerProvider::getMixerInfo() {
	$init($SoftMixingMixer);
	return $new($Mixer$InfoArray, {$SoftMixingMixer::info});
}

void SoftMixingMixerProvider::clinit$($Class* clazz) {
	$assignStatic(SoftMixingMixerProvider::globalmixer, nullptr);
	$assignStatic(SoftMixingMixerProvider::lockthread, nullptr);
	$assignStatic(SoftMixingMixerProvider::mutex, $new($Object));
}

SoftMixingMixerProvider::SoftMixingMixerProvider() {
}

$Class* SoftMixingMixerProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"globalmixer", "Lcom/sun/media/sound/SoftMixingMixer;", nullptr, $STATIC, $staticField(SoftMixingMixerProvider, globalmixer)},
		{"lockthread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(SoftMixingMixerProvider, lockthread)},
		{"mutex", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(SoftMixingMixerProvider, mutex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SoftMixingMixerProvider, init$, void)},
		{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC, $virtualMethod(SoftMixingMixerProvider, getMixer, $Mixer*, $Mixer$Info*)},
		{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC, $virtualMethod(SoftMixingMixerProvider, getMixerInfo, $Mixer$InfoArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMixingMixerProvider",
		"javax.sound.sampled.spi.MixerProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoftMixingMixerProvider, name, initialize, &classInfo$$, SoftMixingMixerProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMixingMixerProvider);
	});
	return class$;
}

$Class* SoftMixingMixerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com