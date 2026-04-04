#include <sun/awt/datatransfer/ClipboardTransferable$DataFactory.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <sun/awt/datatransfer/ClipboardTransferable.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClipboardTransferable = ::sun::awt::datatransfer::ClipboardTransferable;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;

namespace sun {
	namespace awt {
		namespace datatransfer {

void ClipboardTransferable$DataFactory::init$($ClipboardTransferable* this$0, int64_t format, $bytes* data) {
	$set(this, this$0, this$0);
	this->format = format;
	$set(this, data, data);
}

$Object* ClipboardTransferable$DataFactory::getTransferData($DataFlavor* flavor) {
	return $$nc($DataTransferer::getInstance())->translateBytes(this->data, flavor, this->format, this->this$0);
}

ClipboardTransferable$DataFactory::ClipboardTransferable$DataFactory() {
}

$Class* ClipboardTransferable$DataFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/datatransfer/ClipboardTransferable;", nullptr, $FINAL | $SYNTHETIC, $field(ClipboardTransferable$DataFactory, this$0)},
		{"format", "J", nullptr, $FINAL, $field(ClipboardTransferable$DataFactory, format)},
		{"data", "[B", nullptr, $FINAL, $field(ClipboardTransferable$DataFactory, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/datatransfer/ClipboardTransferable;J[B)V", nullptr, 0, $method(ClipboardTransferable$DataFactory, init$, void, $ClipboardTransferable*, int64_t, $bytes*)},
		{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, $method(ClipboardTransferable$DataFactory, getTransferData, $Object*, $DataFlavor*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.datatransfer.ClipboardTransferable$DataFactory", "sun.awt.datatransfer.ClipboardTransferable", "DataFactory", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.datatransfer.ClipboardTransferable$DataFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.datatransfer.ClipboardTransferable"
	};
	$loadClass(ClipboardTransferable$DataFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClipboardTransferable$DataFactory);
	});
	return class$;
}

$Class* ClipboardTransferable$DataFactory::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun