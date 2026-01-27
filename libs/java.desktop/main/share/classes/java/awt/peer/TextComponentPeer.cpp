#include <java/awt/peer/TextComponentPeer.h>

#include <java/awt/im/InputMethodRequests.h>
#include <jcpp.h>

using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextComponentPeer_MethodInfo_[] = {
	{"getCaretPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, getCaretPosition, int32_t)},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, getInputMethodRequests, $InputMethodRequests*)},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, getSelectionEnd, int32_t)},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, getSelectionStart, int32_t)},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, getText, $String*)},
	{"select", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, select, void, int32_t, int32_t)},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, setCaretPosition, void, int32_t)},
	{"setEditable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, setEditable, void, bool)},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextComponentPeer, setText, void, $String*)},
	{}
};

$ClassInfo _TextComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_TextComponentPeer_MethodInfo_
};

$Object* allocate$TextComponentPeer($Class* clazz) {
	return $of($alloc(TextComponentPeer));
}

$Class* TextComponentPeer::load$($String* name, bool initialize) {
	$loadClass(TextComponentPeer, name, initialize, &_TextComponentPeer_ClassInfo_, allocate$TextComponentPeer);
	return class$;
}

$Class* TextComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java