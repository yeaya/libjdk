#include <java/awt/peer/ContainerPeer.h>

#include <java/awt/Insets.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ContainerPeer_MethodInfo_[] = {
	{"beginLayout", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerPeer, beginLayout, void)},
	{"beginValidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerPeer, beginValidate, void)},
	{"endLayout", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerPeer, endLayout, void)},
	{"endValidate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerPeer, endValidate, void)},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContainerPeer, getInsets, $Insets*)},
	{}
};

$ClassInfo _ContainerPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ContainerPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ContainerPeer_MethodInfo_
};

$Object* allocate$ContainerPeer($Class* clazz) {
	return $of($alloc(ContainerPeer));
}

$Class* ContainerPeer::load$($String* name, bool initialize) {
	$loadClass(ContainerPeer, name, initialize, &_ContainerPeer_ClassInfo_, allocate$ContainerPeer);
	return class$;
}

$Class* ContainerPeer::class$ = nullptr;

		} // peer
	} // awt
} // java