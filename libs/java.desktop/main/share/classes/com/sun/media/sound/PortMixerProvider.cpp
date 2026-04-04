#include <com/sun/media/sound/PortMixerProvider.h>
#include <com/sun/media/sound/Platform.h>
#include <com/sun/media/sound/PortMixer.h>
#include <com/sun/media/sound/PortMixerProvider$PortMixerInfo.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $PortMixerArray = $Array<::com::sun::media::sound::PortMixer>;
using $PortMixerProvider$PortMixerInfoArray = $Array<::com::sun::media::sound::PortMixerProvider$PortMixerInfo>;
using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $Platform = ::com::sun::media::sound::Platform;
using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixerProvider$PortMixerInfo = ::com::sun::media::sound::PortMixerProvider$PortMixerInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$PortMixerProvider$PortMixerInfoArray* PortMixerProvider::infos = nullptr;
$PortMixerArray* PortMixerProvider::devices = nullptr;

void PortMixerProvider::init$() {
	$MixerProvider::init$();
	$synchronized(PortMixerProvider::class$) {
		if ($Platform::isPortsEnabled()) {
			init();
		} else {
			$assignStatic(PortMixerProvider::infos, $new($PortMixerProvider$PortMixerInfoArray, 0));
			$assignStatic(PortMixerProvider::devices, $new($PortMixerArray, 0));
		}
	}
}

void PortMixerProvider::init() {
	$init(PortMixerProvider);
	$useLocalObjectStack();
	int32_t numDevices = nGetNumDevices();
	if (PortMixerProvider::infos == nullptr || PortMixerProvider::infos->length != numDevices) {
		$assignStatic(PortMixerProvider::infos, $new($PortMixerProvider$PortMixerInfoArray, numDevices));
		$assignStatic(PortMixerProvider::devices, $new($PortMixerArray, numDevices));
		for (int32_t i = 0; i < $nc(PortMixerProvider::infos)->length; ++i) {
			PortMixerProvider::infos->set(i, $(nNewPortMixerInfo(i)));
		}
	}
}

$Mixer$InfoArray* PortMixerProvider::getMixerInfo() {
	$synchronized(PortMixerProvider::class$) {
		$var($Mixer$InfoArray, localArray, $new($Mixer$InfoArray, $nc(PortMixerProvider::infos)->length));
		$System::arraycopy(PortMixerProvider::infos, 0, localArray, 0, PortMixerProvider::infos->length);
		return localArray;
	}
}

$Mixer* PortMixerProvider::getMixer($Mixer$Info* info) {
	$useLocalObjectStack();
	$synchronized(PortMixerProvider::class$) {
		for (int32_t i = 0; i < $nc(PortMixerProvider::infos)->length; ++i) {
			if ($nc(PortMixerProvider::infos->get(i))->equals(info)) {
				return getDevice($nc(PortMixerProvider::infos)->get(i));
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Mixer %s not supported by this provider"_s, $$new($ObjectArray, {info}))));
}

$Mixer* PortMixerProvider::getDevice($PortMixerProvider$PortMixerInfo* info) {
	$init(PortMixerProvider);
	int32_t index = $nc(info)->getIndex();
	if ($nc(PortMixerProvider::devices)->get(index) == nullptr) {
		PortMixerProvider::devices->set(index, $$new($PortMixer, info));
	}
	return PortMixerProvider::devices->get(index);
}

int32_t PortMixerProvider::nGetNumDevices() {
	$init(PortMixerProvider);
	$prepareNativeStatic(nGetNumDevices, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$PortMixerProvider$PortMixerInfo* PortMixerProvider::nNewPortMixerInfo(int32_t mixerIndex) {
	$init(PortMixerProvider);
	$prepareNativeStatic(nNewPortMixerInfo, $PortMixerProvider$PortMixerInfo*, int32_t mixerIndex);
	$var($PortMixerProvider$PortMixerInfo, $ret, $invokeNativeStaticObject(mixerIndex));
	$finishNativeStatic();
	return $ret;
}

void PortMixerProvider::clinit$($Class* clazz) {
	{
		$Platform::initialize();
	}
}

PortMixerProvider::PortMixerProvider() {
}

$Class* PortMixerProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"infos", "[Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;", nullptr, $PRIVATE | $STATIC, $staticField(PortMixerProvider, infos)},
		{"devices", "[Lcom/sun/media/sound/PortMixer;", nullptr, $PRIVATE | $STATIC, $staticField(PortMixerProvider, devices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PortMixerProvider, init$, void)},
		{"getDevice", "(Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $staticMethod(PortMixerProvider, getDevice, $Mixer*, $PortMixerProvider$PortMixerInfo*)},
		{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC, $virtualMethod(PortMixerProvider, getMixer, $Mixer*, $Mixer$Info*)},
		{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC, $virtualMethod(PortMixerProvider, getMixerInfo, $Mixer$InfoArray*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(PortMixerProvider, init, void)},
		{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(PortMixerProvider, nGetNumDevices, int32_t)},
		{"nNewPortMixerInfo", "(I)Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(PortMixerProvider, nNewPortMixerInfo, $PortMixerProvider$PortMixerInfo*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.PortMixerProvider$PortMixerInfo", "com.sun.media.sound.PortMixerProvider", "PortMixerInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.PortMixerProvider",
		"javax.sound.sampled.spi.MixerProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.PortMixerProvider$PortMixerInfo"
	};
	$loadClass(PortMixerProvider, name, initialize, &classInfo$$, PortMixerProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PortMixerProvider);
	});
	return class$;
}

$Class* PortMixerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com