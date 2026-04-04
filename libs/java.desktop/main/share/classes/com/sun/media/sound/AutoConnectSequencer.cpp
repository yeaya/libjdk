#include <com/sun/media/sound/AutoConnectSequencer.h>
#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Receiver = ::javax::sound::midi::Receiver;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* AutoConnectSequencer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setAutoConnect", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AutoConnectSequencer, setAutoConnect, void, $Receiver*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.AutoConnectSequencer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AutoConnectSequencer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AutoConnectSequencer);
	});
	return class$;
}

$Class* AutoConnectSequencer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com