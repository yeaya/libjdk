#include <java/awt/peer/TextAreaPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextAreaPeer_MethodInfo_[] = {
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextAreaPeer, getMinimumSize, $Dimension*, int32_t, int32_t)},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextAreaPeer, getPreferredSize, $Dimension*, int32_t, int32_t)},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextAreaPeer, insert, void, $String*, int32_t)},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TextAreaPeer, replaceRange, void, $String*, int32_t, int32_t)},
	{}
};

$ClassInfo _TextAreaPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextAreaPeer",
	nullptr,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	_TextAreaPeer_MethodInfo_
};

$Object* allocate$TextAreaPeer($Class* clazz) {
	return $of($alloc(TextAreaPeer));
}

$Class* TextAreaPeer::load$($String* name, bool initialize) {
	$loadClass(TextAreaPeer, name, initialize, &_TextAreaPeer_ClassInfo_, allocate$TextAreaPeer);
	return class$;
}

$Class* TextAreaPeer::class$ = nullptr;

		} // peer
	} // awt
} // java