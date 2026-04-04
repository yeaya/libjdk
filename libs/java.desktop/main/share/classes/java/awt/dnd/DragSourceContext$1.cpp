#include <java/awt/dnd/DragSourceContext$1.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

void DragSourceContext$1::init$($DragSourceContext* this$0) {
	$set(this, this$0, this$0);
}

$DataFlavorArray* DragSourceContext$1::getTransferDataFlavors() {
	return $new($DataFlavorArray, 0);
}

bool DragSourceContext$1::isDataFlavorSupported($DataFlavor* flavor) {
	return false;
}

$Object* DragSourceContext$1::getTransferData($DataFlavor* flavor) {
	$throwNew($UnsupportedFlavorException, flavor);
	$shouldNotReachHere();
}

DragSourceContext$1::DragSourceContext$1() {
}

$Class* DragSourceContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/dnd/DragSourceContext;", nullptr, $FINAL | $SYNTHETIC, $field(DragSourceContext$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/dnd/DragSourceContext;)V", nullptr, 0, $method(DragSourceContext$1, init$, void, $DragSourceContext*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DragSourceContext$1, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException"},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(DragSourceContext$1, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(DragSourceContext$1, isDataFlavorSupported, bool, $DataFlavor*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.dnd.DragSourceContext",
		"readObject",
		"(Ljava/io/ObjectInputStream;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.dnd.DragSourceContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.dnd.DragSourceContext$1",
		"java.lang.Object",
		"java.awt.datatransfer.Transferable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.dnd.DragSourceContext"
	};
	$loadClass(DragSourceContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DragSourceContext$1);
	});
	return class$;
}

$Class* DragSourceContext$1::class$ = nullptr;

		} // dnd
	} // awt
} // java