#include <sun/awt/LightweightPeerHolder.h>
#include <java/awt/peer/LightweightPeer.h>
#include <sun/awt/NullComponentPeer.h>
#include <jcpp.h>

using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullComponentPeer = ::sun::awt::NullComponentPeer;

namespace sun {
	namespace awt {

$LightweightPeer* LightweightPeerHolder::lightweightMarker = nullptr;

void LightweightPeerHolder::init$() {
}

void LightweightPeerHolder::clinit$($Class* clazz) {
	$assignStatic(LightweightPeerHolder::lightweightMarker, $new($NullComponentPeer));
}

LightweightPeerHolder::LightweightPeerHolder() {
}

$Class* LightweightPeerHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lightweightMarker", "Ljava/awt/peer/LightweightPeer;", nullptr, $STATIC | $FINAL, $staticField(LightweightPeerHolder, lightweightMarker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(LightweightPeerHolder, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.LightweightPeerHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LightweightPeerHolder, name, initialize, &classInfo$$, LightweightPeerHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LightweightPeerHolder);
	});
	return class$;
}

$Class* LightweightPeerHolder::class$ = nullptr;

	} // awt
} // sun