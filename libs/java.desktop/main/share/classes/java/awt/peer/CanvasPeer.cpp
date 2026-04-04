#include <java/awt/peer/CanvasPeer.h>
#include <java/awt/GraphicsConfiguration.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* CanvasPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CanvasPeer, getAppropriateGraphicsConfiguration, $GraphicsConfiguration*, $GraphicsConfiguration*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.CanvasPeer",
		nullptr,
		"java.awt.peer.ComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CanvasPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CanvasPeer);
	});
	return class$;
}

$Class* CanvasPeer::class$ = nullptr;

		} // peer
	} // awt
} // java