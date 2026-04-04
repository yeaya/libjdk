#include <javax/sound/sampled/AudioPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace sound {
		namespace sampled {

void AudioPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void AudioPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

AudioPermission::AudioPermission() {
}

$Class* AudioPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AudioPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AudioPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AudioPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.AudioPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AudioPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AudioPermission));
	});
	return class$;
}

$Class* AudioPermission::class$ = nullptr;

		} // sampled
	} // sound
} // javax