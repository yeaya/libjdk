#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void AugmentationsImpl$AugmentationsItemsContainer::init$($AugmentationsImpl* this$0) {
	$set(this, this$0, this$0);
}

AugmentationsImpl$AugmentationsItemsContainer::AugmentationsImpl$AugmentationsItemsContainer() {
}

$Class* AugmentationsImpl$AugmentationsItemsContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$AugmentationsItemsContainer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;)V", nullptr, 0, $method(AugmentationsImpl$AugmentationsItemsContainer, init$, void, $AugmentationsImpl*)},
		{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, clear, void)},
		{"expand", "()Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, expand, AugmentationsImpl$AugmentationsItemsContainer*)},
		{"getItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, getItem, $Object*, Object$*)},
		{"isFull", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, isFull, bool)},
		{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, keys, $Enumeration*)},
		{"putItem", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, putItem, $Object*, Object$*, Object$*)},
		{"removeItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AugmentationsImpl$AugmentationsItemsContainer, removeItem, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer",
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
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl"
	};
	$loadClass(AugmentationsImpl$AugmentationsItemsContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AugmentationsImpl$AugmentationsItemsContainer);
	});
	return class$;
}

$Class* AugmentationsImpl$AugmentationsItemsContainer::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com