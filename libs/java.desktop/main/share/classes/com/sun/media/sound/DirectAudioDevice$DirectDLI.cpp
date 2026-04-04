#include <com/sun/media/sound/DirectAudioDevice$DirectDLI.h>
#include <com/sun/media/sound/DirectAudioDevice.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <jcpp.h>

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void DirectAudioDevice$DirectDLI::init$($Class* clazz, $AudioFormatArray* formatArray, $AudioFormatArray* hardwareFormatArray, int32_t minBuffer, int32_t maxBuffer) {
	$DataLine$Info::init$(clazz, formatArray, minBuffer, maxBuffer);
	$set(this, hardwareFormats, hardwareFormatArray);
}

bool DirectAudioDevice$DirectDLI::isFormatSupportedInHardware($AudioFormat* format) {
	if (format == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->hardwareFormats)->length; ++i) {
		if ($nc(format)->matches(this->hardwareFormats->get(i))) {
			return true;
		}
	}
	return false;
}

$AudioFormatArray* DirectAudioDevice$DirectDLI::getHardwareFormats() {
	return this->hardwareFormats;
}

DirectAudioDevice$DirectDLI::DirectAudioDevice$DirectDLI() {
}

$Class* DirectAudioDevice$DirectDLI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hardwareFormats", "[Ljavax/sound/sampled/AudioFormat;", nullptr, $FINAL, $field(DirectAudioDevice$DirectDLI, hardwareFormats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljavax/sound/sampled/AudioFormat;[Ljavax/sound/sampled/AudioFormat;II)V", "(Ljava/lang/Class<*>;[Ljavax/sound/sampled/AudioFormat;[Ljavax/sound/sampled/AudioFormat;II)V", $PRIVATE, $method(DirectAudioDevice$DirectDLI, init$, void, $Class*, $AudioFormatArray*, $AudioFormatArray*, int32_t, int32_t)},
		{"getHardwareFormats", "()[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE, $method(DirectAudioDevice$DirectDLI, getHardwareFormats, $AudioFormatArray*)},
		{"isFormatSupportedInHardware", "(Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC, $method(DirectAudioDevice$DirectDLI, isFormatSupportedInHardware, bool, $AudioFormat*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.DirectAudioDevice$DirectDLI", "com.sun.media.sound.DirectAudioDevice", "DirectDLI", $PRIVATE | $STATIC | $FINAL},
		{"javax.sound.sampled.DataLine$Info", "javax.sound.sampled.DataLine", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.DirectAudioDevice$DirectDLI",
		"javax.sound.sampled.DataLine$Info",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.DirectAudioDevice"
	};
	$loadClass(DirectAudioDevice$DirectDLI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectAudioDevice$DirectDLI);
	});
	return class$;
}

$Class* DirectAudioDevice$DirectDLI::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com