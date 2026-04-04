#include <com/sun/media/sound/MidiOutDeviceProvider.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider.h>
#include <com/sun/media/sound/MidiOutDevice.h>
#include <com/sun/media/sound/MidiOutDeviceProvider$MidiOutDeviceInfo.h>
#include <com/sun/media/sound/Platform.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $AbstractMidiDeviceProvider$InfoArray = $Array<::com::sun::media::sound::AbstractMidiDeviceProvider$Info>;
using $MidiDeviceArray = $Array<::javax::sound::midi::MidiDevice>;
using $AbstractMidiDeviceProvider = ::com::sun::media::sound::AbstractMidiDeviceProvider;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDevice = ::com::sun::media::sound::MidiOutDevice;
using $MidiOutDeviceProvider$MidiOutDeviceInfo = ::com::sun::media::sound::MidiOutDeviceProvider$MidiOutDeviceInfo;
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

$AbstractMidiDeviceProvider$InfoArray* MidiOutDeviceProvider::infos = nullptr;
$MidiDeviceArray* MidiOutDeviceProvider::devices = nullptr;
bool MidiOutDeviceProvider::enabled = false;

void MidiOutDeviceProvider::init$() {
	$AbstractMidiDeviceProvider::init$();
}

$AbstractMidiDeviceProvider$Info* MidiOutDeviceProvider::createInfo(int32_t index) {
	if (!MidiOutDeviceProvider::enabled) {
		return nullptr;
	}
	return $new($MidiOutDeviceProvider$MidiOutDeviceInfo, index, MidiOutDeviceProvider::class$);
}

$MidiDevice* MidiOutDeviceProvider::createDevice($AbstractMidiDeviceProvider$Info* info) {
	if (MidiOutDeviceProvider::enabled && ($instanceOf($MidiOutDeviceProvider$MidiOutDeviceInfo, info))) {
		return $new($MidiOutDevice, info);
	}
	return nullptr;
}

int32_t MidiOutDeviceProvider::getNumDevices() {
	if (!MidiOutDeviceProvider::enabled) {
		return 0;
	}
	return nGetNumDevices();
}

$MidiDeviceArray* MidiOutDeviceProvider::getDeviceCache() {
	return MidiOutDeviceProvider::devices;
}

void MidiOutDeviceProvider::setDeviceCache($MidiDeviceArray* devices) {
	$assignStatic(MidiOutDeviceProvider::devices, devices);
}

$AbstractMidiDeviceProvider$InfoArray* MidiOutDeviceProvider::getInfoCache() {
	return MidiOutDeviceProvider::infos;
}

void MidiOutDeviceProvider::setInfoCache($AbstractMidiDeviceProvider$InfoArray* infos) {
	$assignStatic(MidiOutDeviceProvider::infos, infos);
}

int32_t MidiOutDeviceProvider::nGetNumDevices() {
	$init(MidiOutDeviceProvider);
	$prepareNativeStatic(nGetNumDevices, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetName(int32_t index) {
	$init(MidiOutDeviceProvider);
	$prepareNativeStatic(nGetName, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetVendor(int32_t index) {
	$init(MidiOutDeviceProvider);
	$prepareNativeStatic(nGetVendor, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetDescription(int32_t index) {
	$init(MidiOutDeviceProvider);
	$prepareNativeStatic(nGetDescription, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

$String* MidiOutDeviceProvider::nGetVersion(int32_t index) {
	$init(MidiOutDeviceProvider);
	$prepareNativeStatic(nGetVersion, $String*, int32_t index);
	$var($String, $ret, $invokeNativeStaticObject(index));
	$finishNativeStatic();
	return $ret;
}

void MidiOutDeviceProvider::clinit$($Class* clazz) {
	$assignStatic(MidiOutDeviceProvider::infos, nullptr);
	$assignStatic(MidiOutDeviceProvider::devices, nullptr);
	{
		$Platform::initialize();
		MidiOutDeviceProvider::enabled = $Platform::isMidiIOEnabled();
	}
}

MidiOutDeviceProvider::MidiOutDeviceProvider() {
}

$Class* MidiOutDeviceProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"infos", "[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, $PRIVATE | $STATIC, $staticField(MidiOutDeviceProvider, infos)},
		{"devices", "[Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $STATIC, $staticField(MidiOutDeviceProvider, devices)},
		{"enabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MidiOutDeviceProvider, enabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MidiOutDeviceProvider, init$, void)},
		{"createDevice", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, createDevice, $MidiDevice*, $AbstractMidiDeviceProvider$Info*)},
		{"createInfo", "(I)Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, createInfo, $AbstractMidiDeviceProvider$Info*, int32_t)},
		{"getDeviceCache", "()[Ljavax/sound/midi/MidiDevice;", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, getDeviceCache, $MidiDeviceArray*)},
		{"getInfoCache", "()[Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, getInfoCache, $AbstractMidiDeviceProvider$InfoArray*)},
		{"getNumDevices", "()I", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, getNumDevices, int32_t)},
		{"nGetDescription", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiOutDeviceProvider, nGetDescription, $String*, int32_t)},
		{"nGetName", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiOutDeviceProvider, nGetName, $String*, int32_t)},
		{"nGetNumDevices", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiOutDeviceProvider, nGetNumDevices, int32_t)},
		{"nGetVendor", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiOutDeviceProvider, nGetVendor, $String*, int32_t)},
		{"nGetVersion", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MidiOutDeviceProvider, nGetVersion, $String*, int32_t)},
		{"setDeviceCache", "([Ljavax/sound/midi/MidiDevice;)V", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, setDeviceCache, void, $MidiDeviceArray*)},
		{"setInfoCache", "([Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $virtualMethod(MidiOutDeviceProvider, setInfoCache, void, $AbstractMidiDeviceProvider$InfoArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo", "com.sun.media.sound.MidiOutDeviceProvider", "MidiOutDeviceInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiOutDeviceProvider",
		"com.sun.media.sound.AbstractMidiDeviceProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiOutDeviceProvider$MidiOutDeviceInfo"
	};
	$loadClass(MidiOutDeviceProvider, name, initialize, &classInfo$$, MidiOutDeviceProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MidiOutDeviceProvider);
	});
	return class$;
}

$Class* MidiOutDeviceProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com