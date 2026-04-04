#include <sun/awt/windows/WClipboard$1.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/windows/WClipboard.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $WClipboard = ::sun::awt::windows::WClipboard;

namespace sun {
	namespace awt {
		namespace windows {

void WClipboard$1::init$($WClipboard* this$0, $bytes* val$localeDataFinal) {
	$set(this, this$0, this$0);
	$set(this, val$localeDataFinal, val$localeDataFinal);
}

$DataFlavorArray* WClipboard$1::getTransferDataFlavors() {
	$init($DataTransferer);
	return $new($DataFlavorArray, {$DataTransferer::javaTextEncodingFlavor});
}

bool WClipboard$1::isDataFlavorSupported($DataFlavor* flavor) {
	$init($DataTransferer);
	return $nc(flavor)->equals($DataTransferer::javaTextEncodingFlavor);
}

$Object* WClipboard$1::getTransferData($DataFlavor* flavor) {
	if (isDataFlavorSupported(flavor)) {
		return this->val$localeDataFinal;
	}
	$throwNew($UnsupportedFlavorException, flavor);
}

WClipboard$1::WClipboard$1() {
}

$Class* WClipboard$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/windows/WClipboard;", nullptr, $FINAL | $SYNTHETIC, $field(WClipboard$1, this$0)},
		{"val$localeDataFinal", "[B", nullptr, $FINAL | $SYNTHETIC, $field(WClipboard$1, val$localeDataFinal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/windows/WClipboard;[B)V", "()V", 0, $method(WClipboard$1, init$, void, $WClipboard*, $bytes*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WClipboard$1, getTransferData, $Object*, $DataFlavor*), "java.awt.datatransfer.UnsupportedFlavorException"},
		{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC, $virtualMethod(WClipboard$1, getTransferDataFlavors, $DataFlavorArray*)},
		{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC, $virtualMethod(WClipboard$1, isDataFlavorSupported, bool, $DataFlavor*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WClipboard",
		"createLocaleTransferable",
		"([J)Ljava/awt/datatransfer/Transferable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WClipboard$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WClipboard$1",
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
		"sun.awt.windows.WClipboard"
	};
	$loadClass(WClipboard$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WClipboard$1);
	});
	return class$;
}

$Class* WClipboard$1::class$ = nullptr;

		} // windows
	} // awt
} // sun