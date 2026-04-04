#include <com/sun/media/sound/MidiInDeviceProvider.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <com/sun/media/sound/MidiInDevice.h>
#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$InfoArray = $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>;
using $MidiDeviceArray = $Array<::javax::sound::midi::MidiDevice>;
using $AbstractMidiDeviceProvider = ::com::sun::media::sound::AbstractMidiDeviceProvider;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiInDevice = ::com::sun::media::sound::MidiInDevice;
using $MidiInDeviceProvider$MidiInDeviceInfo = ::com::sun::media::sound::MidiInDeviceProvider$MidiInDeviceInfo;
using $Platform = ::com::sun::media::sound::Platform;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$AbstractMidiDeviceProvider$InfoArray* MidiInDeviceProvider::infos = nullptr;
$MidiDeviceArray* MidiInDeviceProvider::devices = nullptr;
bool MidiInDeviceProvider::enabled = false;

void MidiInDeviceProvider::init$() {
	$AbstractMidiDeviceProvider::init$();
}

$AbstractMidiDeviceProvider$Info* MidiInDeviceProvider::createInfo(int32_t index) {
	if (!MidiInDeviceProvider::enabled) {
		return nullptr;
	}
	return $new($MidiInDeviceProvider$MidiInDeviceInfo, index, MidiInDeviceProvider::class$);
}

$MidiDevice* MidiInDeviceProvider::createDevice($AbstractMidiDeviceProvider$Info* info) {
	if (MidiInDeviceProvider::enabled && ($instanceOf($MidiInDeviceProvider$MidiInDeviceInfo, info))) {
		return $new($MidiInDevice, info);
	}
	return nullptr;
}

int32_t MidiInDeviceProvider::getNumDevices() {
	if (!MidiInDeviceProvider::enabled) {
		return 0;
	}
	int32_t numDevices = nGetNumDevices();
	return numDevices;
}

$MidiDeviceArray* MidiInDeviceProvider::getDeviceCache() {
	return MidiInDeviceProvider::devices;
}

void MidiInDeviceProvider::setDeviceCache($MidiDeviceArray* devices) {
	$assignStatic(MidiInDeviceProvider::devices, devices);
}

$AbstractMidiDeviceProvider$InfoArray* MidiInDeviceProvider::getInfoCache() {
	return MidiInDeviceProvider::infos;
}

void MidiInDeviceProvider::setInfoCache($AbstractMidiDeviceProvider$InfoArray* infos) {
	$assignStatic(MidiInDeviceProvider::infos, infos);
}

int32_t MidiInDeviceProvider::nGetNumDevices() {
	$init(MidiInDeviceProvider);
	$prepareNativeStatic(nGetNumDevices, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetName(int32_t index) {
	$init(MidiInDeviceProvider);
	$prepareNativeStatic(nGetName, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetVendor(int32_t index) {
	$init(MidiInDeviceProvider);
	$prepareNativeStatic(nGetVendor, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetDescription(int32_t index) {
	$init(MidiInDeviceProvider);
	$prepareNativeStatic(nGetDescription, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiInDeviceProvider::nGetVersion(int32_t index) {
	$init(MidiInDeviceProvider);
	$prepareNativeStatic(nGetVersion, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

void MidiInDeviceProvider::clinit$($Class* clazz) {
	$assignStatic(MidiInDeviceProvider::infos, nullptr);
	$assignStatic(MidiInDeviceProvider::devices, nullptr);
	{
		$Platform::initialize();
		MidiInDeviceProvider::enabled = $Platform::isMidiIOEnabled();
	}
}

MidiInDeviceProvider::MidiInDeviceProvider() {
}

$Class* MidiInDeviceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"infos", "[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $PRIVATE | $STATIC, $staticField(MidiInDeviceProvider, infos)},
		{"devices", "[Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $STATIC, $staticField(MidiInDeviceProvider, devices)},
		{"enabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MidiInDeviceProvider, enabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MidiInDeviceProvider, init$, void)},
		{"createDevice", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, 0, $virtualMethod(MidiInDeviceProvider, createDevice, $MidiDevice*, $AbstractMidiDeviceProvider$Info*)},
		{"createInfo", "(I)Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0, $virtualMethod(MidiInDeviceProvider, createInfo, $AbstractMidiDeviceProvider$Info*, int32_t)},
		{"getDeviceCache", "()[Ljavax/sound/midi/MidiDevice;", nullptr, 0, $virtualMethod(MidiInDeviceProvider, getDeviceCache, $MidiDeviceArray*)},
		{"getInfoCache", "()[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0, $virtualMethod(MidiInDeviceProvider, getInfoCache, $AbstractMidiDeviceProvider$InfoArray*)},
		{"getNumDevices", "()I", nullptr, 0, $virtualMethod(MidiInDeviceProvider, getNumDevices, int32_t)},
		{"nGetDescription", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiInDeviceProvider, nGetDescription, $String*, int32_t)},
		{"nGetName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiInDeviceProvider, nGetName, $String*, int32_t)},
		{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiInDeviceProvider, nGetNumDevices, int32_t)},
		{"nGetVendor", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiInDeviceProvider, nGetVendor, $String*, int32_t)},
		{"nGetVersion", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiInDeviceProvider, nGetVersion, $String*, int32_t)},
		{"setDeviceCache", "([Ljavax/sound/midi/MidiDevice;)V", nullptr, 0, $virtualMethod(MidiInDeviceProvider, setDeviceCache, void, $MidiDeviceArray*)},
		{"setInfoCache", "([Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $virtualMethod(MidiInDeviceProvider, setInfoCache, void, $AbstractMidiDeviceProvider$InfoArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo", "com.sun.media.sound.MidiInDeviceProvider", "MidiInDeviceInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiInDeviceProvider",
		"com.sun.media.sound.AbstractMidiDeviceProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiInDeviceProvider$MidiInDeviceInfo"
	};
	$loadClass(MidiInDeviceProvider, name, initialize, &classInfo$$, MidiInDeviceProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MidiInDeviceProvider);
	});
	return class$;
}

$Class* MidiInDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com