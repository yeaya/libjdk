#include <com/sun/media/sound/DirectAudioDeviceProvider.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <com/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $DirectAudioDeviceArray = $Array<::com::sun::media::sound::DirectAudioDevice>;
using $DirectAudioDeviceProvider$DirectAudioDeviceInfoArray = $Array<::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo>;
using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $DirectAudioDevice = ::com::sun::media::sound::DirectAudioDevice;
using $DirectAudioDeviceProvider$DirectAudioDeviceInfo = ::com::sun::media::sound::DirectAudioDeviceProvider$DirectAudioDeviceInfo;
using $Platform = ::com::sun::media::sound::Platform;
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

$DirectAudioDeviceProvider$DirectAudioDeviceInfoArray* DirectAudioDeviceProvider::infos = nullptr;
$DirectAudioDeviceArray* DirectAudioDeviceProvider::devices = nullptr;

void DirectAudioDeviceProvider::init$() {
	$MixerProvider::init$();
	$synchronized(DirectAudioDeviceProvider::class$) {
		if ($Platform::isDirectAudioEnabled()) {
			init();
		} else {
			$assignStatic(DirectAudioDeviceProvider::infos, $new($DirectAudioDeviceProvider$DirectAudioDeviceInfoArray, 0));
			$assignStatic(DirectAudioDeviceProvider::devices, $new($DirectAudioDeviceArray, 0));
		}
	}
}

void DirectAudioDeviceProvider::init() {
	$init(DirectAudioDeviceProvider);
	$useLocalObjectStack();
	int32_t numDevices = nGetNumDevices();
	if (DirectAudioDeviceProvider::infos == nullptr || DirectAudioDeviceProvider::infos->length != numDevices) {
		$assignStatic(DirectAudioDeviceProvider::infos, $new($DirectAudioDeviceProvider$DirectAudioDeviceInfoArray, numDevices));
		$assignStatic(DirectAudioDeviceProvider::devices, $new($DirectAudioDeviceArray, numDevices));
		for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
			DirectAudioDeviceProvider::infos->set(i, $(nNewDirectAudioDeviceInfo(i)));
		}
	}
}

$Mixer$InfoArray* DirectAudioDeviceProvider::getMixerInfo() {
	$synchronized(DirectAudioDeviceProvider::class$) {
		$var($Mixer$InfoArray, localArray, $new($Mixer$InfoArray, $nc(DirectAudioDeviceProvider::infos)->length));
		$System::arraycopy(DirectAudioDeviceProvider::infos, 0, localArray, 0, DirectAudioDeviceProvider::infos->length);
		return localArray;
	}
}

$Mixer* DirectAudioDeviceProvider::getMixer($Mixer$Info* info) {
	$useLocalObjectStack();
	$synchronized(DirectAudioDeviceProvider::class$) {
		if (info == nullptr) {
			for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
				$var($Mixer, mixer, getDevice(DirectAudioDeviceProvider::infos->get(i)));
				if ($nc($($nc(mixer)->getSourceLineInfo()))->length > 0) {
					return mixer;
				}
			}
		}
		for (int32_t i = 0; i < $nc(DirectAudioDeviceProvider::infos)->length; ++i) {
			if ($nc(DirectAudioDeviceProvider::infos->get(i))->equals(info)) {
				return getDevice($nc(DirectAudioDeviceProvider::infos)->get(i));
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Mixer %s not supported by this provider"_s, $$new($ObjectArray, {info}))));
}

$Mixer* DirectAudioDeviceProvider::getDevice($DirectAudioDeviceProvider$DirectAudioDeviceInfo* info) {
	$init(DirectAudioDeviceProvider);
	int32_t index = $nc(info)->getIndex();
	if ($nc(DirectAudioDeviceProvider::devices)->get(index) == nullptr) {
		DirectAudioDeviceProvider::devices->set(index, $$new($DirectAudioDevice, info));
	}
	return DirectAudioDeviceProvider::devices->get(index);
}

int32_t DirectAudioDeviceProvider::nGetNumDevices() {
	$init(DirectAudioDeviceProvider);
	$prepareNativeStatic(nGetNumDevices, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$DirectAudioDeviceProvider$DirectAudioDeviceInfo* DirectAudioDeviceProvider::nNewDirectAudioDeviceInfo(int32_t deviceIndex) {
	$init(DirectAudioDeviceProvider);
	$prepareNativeStatic(nNewDirectAudioDeviceInfo, $DirectAudioDeviceProvider$DirectAudioDeviceInfo*, int32_t deviceIndex);
	$var($DirectAudioDeviceProvider$DirectAudioDeviceInfo, $ret, $invokeNativeStaticObject(deviceIndex));
	$finishNativeStatic();
	return $ret;
}

void DirectAudioDeviceProvider::clinit$($Class* clazz) {
	{
		$Platform::initialize();
	}
}

DirectAudioDeviceProvider::DirectAudioDeviceProvider() {
}

$Class* DirectAudioDeviceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"infos", "[Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;", nullptr, $PRIVATE | $STATIC, $staticField(DirectAudioDeviceProvider, infos)},
		{"devices", "[Lcom/sun/media/sound/DirectAudioDevice;", nullptr, $PRIVATE | $STATIC, $staticField(DirectAudioDeviceProvider, devices)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DirectAudioDeviceProvider, init$, void)},
		{"getDevice", "(Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $staticMethod(DirectAudioDeviceProvider, getDevice, $Mixer*, $DirectAudioDeviceProvider$DirectAudioDeviceInfo*)},
		{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC, $virtualMethod(DirectAudioDeviceProvider, getMixer, $Mixer*, $Mixer$Info*)},
		{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC, $virtualMethod(DirectAudioDeviceProvider, getMixerInfo, $Mixer$InfoArray*)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(DirectAudioDeviceProvider, init, void)},
		{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDeviceProvider, nGetNumDevices, int32_t)},
		{"nNewDirectAudioDeviceInfo", "(I)Lcom/sun/media/sound/DirectAudioDeviceProvider$DirectAudioDeviceInfo;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(DirectAudioDeviceProvider, nNewDirectAudioDeviceInfo, $DirectAudioDeviceProvider$DirectAudioDeviceInfo*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo", "com.sun.media.sound.DirectAudioDeviceProvider", "DirectAudioDeviceInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDeviceProvider",
		"javax.sound.sampled.spi.MixerProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.DirectAudioDeviceProvider$DirectAudioDeviceInfo"
	};
	$loadClass(DirectAudioDeviceProvider, name, initialize, &classInfo$$, DirectAudioDeviceProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDeviceProvider);
	});
	return class$;
}

$Class* DirectAudioDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com