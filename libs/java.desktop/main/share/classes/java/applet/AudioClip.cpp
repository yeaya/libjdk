#include <java/applet/AudioClip.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace applet {

$Class* AudioClip::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"loop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioClip, loop, void)},
		{"play", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioClip, play, void)},
		{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioClip, stop, void)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.applet.AudioClip",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AudioClip, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioClip);
	});
	return class$;
}

$Class* AudioClip::class$ = nullptr;

	} // applet
} // java