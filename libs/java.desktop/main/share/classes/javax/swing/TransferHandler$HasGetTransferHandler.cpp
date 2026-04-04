#include <javax/swing/TransferHandler$HasGetTransferHandler.h>
#include <javax/swing/TransferHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler = ::javax::swing::TransferHandler;

namespace javax {
	namespace swing {

$Class* TransferHandler$HasGetTransferHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTransferHandler", "()Ljavax/swing/TransferHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TransferHandler$HasGetTransferHandler, getTransferHandler, $TransferHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$HasGetTransferHandler", "javax.swing.TransferHandler", "HasGetTransferHandler", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.TransferHandler$HasGetTransferHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TransferHandler"
	};
	$loadClass(TransferHandler$HasGetTransferHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferHandler$HasGetTransferHandler);
	});
	return class$;
}

$Class* TransferHandler$HasGetTransferHandler::class$ = nullptr;

	} // swing
} // javax