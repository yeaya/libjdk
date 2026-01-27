#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$MethodInfo _Augmentations_MethodInfo_[] = {
	{"getItem", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Augmentations, getItem, $Object*, $String*)},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Augmentations, keys, $Enumeration*)},
	{"putItem", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Augmentations, putItem, $Object*, $String*, Object$*)},
	{"removeAllItems", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Augmentations, removeAllItems, void)},
	{"removeItem", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Augmentations, removeItem, $Object*, $String*)},
	{}
};

$ClassInfo _Augmentations_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.Augmentations",
	nullptr,
	nullptr,
	nullptr,
	_Augmentations_MethodInfo_
};

$Object* allocate$Augmentations($Class* clazz) {
	return $of($alloc(Augmentations));
}

$Class* Augmentations::load$($String* name, bool initialize) {
	$loadClass(Augmentations, name, initialize, &_Augmentations_ClassInfo_, allocate$Augmentations);
	return class$;
}

$Class* Augmentations::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com