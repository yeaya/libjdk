#include <java/awt/datatransfer/Transferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

$MethodInfo _Transferable_MethodInfo_[] = {
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Transferable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.datatransfer.Transferable",
	nullptr,
	nullptr,
	nullptr,
	_Transferable_MethodInfo_
};

$Object* allocate$Transferable($Class* clazz) {
	return $of($alloc(Transferable));
}

$Class* Transferable::load$($String* name, bool initialize) {
	$loadClass(Transferable, name, initialize, &_Transferable_ClassInfo_, allocate$Transferable);
	return class$;
}

$Class* Transferable::class$ = nullptr;

		} // datatransfer
	} // awt
} // java