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

$Class* ClipboardOwner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"lostOwnership", "(Ljava/awt/datatransfer/Clipboard;Ljava/awt/datatransfer/Transferable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClipboardOwner, lostOwnership, void, $Clipboard*, $Transferable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.datatransfer.ClipboardOwner",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ClipboardOwner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClipboardOwner);
	});
	return class$;
}

$Class* ClipboardOwner::class$ = nullptr;

		} // datatransfer
	} // awt
} // java