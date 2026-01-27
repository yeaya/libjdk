#include <java/awt/peer/CheckboxPeer.h>

#include <java/awt/CheckboxGroup.h>
#include <jcpp.h>

using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _CheckboxPeer_MethodInfo_[] = {
	{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setCheckboxGroup, void, $CheckboxGroup*)},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setLabel, void, $String*)},
	{"setState", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CheckboxPeer, setState, void, bool)},
	{}
};

$ClassInfo _CheckboxPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.CheckboxPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_CheckboxPeer_MethodInfo_
};

$Object* allocate$CheckboxPeer($Class* clazz) {
	return $of($alloc(CheckboxPeer));
}

$Class* CheckboxPeer::load$($String* name, bool initialize) {
	$loadClass(CheckboxPeer, name, initialize, &_CheckboxPeer_ClassInfo_, allocate$CheckboxPeer);
	return class$;
}

$Class* CheckboxPeer::class$ = nullptr;

		} // peer
	} // awt
} // java