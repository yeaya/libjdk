#include <java/awt/peer/TextFieldPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextFieldPeer_MethodInfo_[] = {
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextFieldPeer, getMinimumSize, $Dimension*, int32_t)},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextFieldPeer, getPreferredSize, $Dimension*, int32_t)},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextFieldPeer, setEchoChar, void, char16_t)},
	{}
};

$ClassInfo _TextFieldPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextFieldPeer",
	nullptr,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	_TextFieldPeer_MethodInfo_
};

$Object* allocate$TextFieldPeer($Class* clazz) {
	return $of($alloc(TextFieldPeer));
}

$Class* TextFieldPeer::load$($String* name, bool initialize) {
	$loadClass(TextFieldPeer, name, initialize, &_TextFieldPeer_ClassInfo_, allocate$TextFieldPeer);
	return class$;
}

$Class* TextFieldPeer::class$ = nullptr;

		} // peer
	} // awt
} // java