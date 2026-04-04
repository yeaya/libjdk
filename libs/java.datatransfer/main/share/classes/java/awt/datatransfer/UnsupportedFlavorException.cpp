#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace datatransfer {

void UnsupportedFlavorException::init$($DataFlavor* flavor) {
	$Exception::init$((flavor != nullptr) ? $(flavor->getHumanPresentableName()) : ($String*)nullptr);
}

UnsupportedFlavorException::UnsupportedFlavorException() {
}

UnsupportedFlavorException::UnsupportedFlavorException(const UnsupportedFlavorException& e) : $Exception(e) {
}

void UnsupportedFlavorException::throw$() {
	throw *this;
}

$Class* UnsupportedFlavorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedFlavorException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/datatransfer/DataFlavor;)V", nullptr, $PUBLIC, $method(UnsupportedFlavorException, init$, void, $DataFlavor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.datatransfer.UnsupportedFlavorException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedFlavorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedFlavorException);
	});
	return class$;
}

$Class* UnsupportedFlavorException::class$ = nullptr;

		} // datatransfer
	} // awt
} // java