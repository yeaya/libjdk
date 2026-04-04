#include <java/awt/peer/CheckboxPeer.h>
#include <java/awt/CheckboxGroup.h>
#include <jcpp.h>

using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$Class* CheckboxPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setCheckboxGroup, void, $CheckboxGroup*)},
		{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setLabel, void, $String*)},
		{"setState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setState, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.peer.CheckboxPeer",
		nullptr,
		"java.awt.peer.ComponentPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(CheckboxPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckboxPeer);
	});
	return class$;
}

$Class* CheckboxPeer::class$ = nullptr;

		} // peer
	} // awt
} // java