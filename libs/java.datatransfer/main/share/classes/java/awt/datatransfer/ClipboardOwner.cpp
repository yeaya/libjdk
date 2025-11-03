#include <java/awt/datatransfer/ClipboardOwner.h>

#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/Transferable.h>
#include <jcpp.h>

using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$MethodInfo _ClipboardOwner_MethodInfo_[] = {
	{"lostOwnership", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ClipboardOwner_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.datatransfer.ClipboardOwner",
	nullptr,
	nullptr,
	nullptr,
	_ClipboardOwner_MethodInfo_
};

$Object* allocate$ClipboardOwner($Class* clazz) {
	return $of($alloc(ClipboardOwner));
}

$Class* ClipboardOwner::load$($String* name, bool initialize) {
	$loadClass(ClipboardOwner, name, initialize, &_ClipboardOwner_ClassInfo_, allocate$ClipboardOwner);
	return class$;
}

$Class* ClipboardOwner::class$ = nullptr;

		} // datatransfer
	} // awt
} // java