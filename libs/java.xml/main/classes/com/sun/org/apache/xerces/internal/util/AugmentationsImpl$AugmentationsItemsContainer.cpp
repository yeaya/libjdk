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

$FieldInfo _AugmentationsImpl$AugmentationsItemsContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$AugmentationsItemsContainer, this$0)},
	{}
};

$MethodInfo _AugmentationsImpl$AugmentationsItemsContainer_MethodInfo_[] = {
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

$InnerClassInfo _AugmentationsImpl$AugmentationsItemsContainer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
	{}
};

$ClassInfo _AugmentationsImpl$AugmentationsItemsContainer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer",
	"java.lang.Object",
	nullptr,
	_AugmentationsImpl$AugmentationsItemsContainer_FieldInfo_,
	_AugmentationsImpl$AugmentationsItemsContainer_MethodInfo_,
	nullptr,
	nullptr,
	_AugmentationsImpl$AugmentationsItemsContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl"
};

$Object* allocate$AugmentationsImpl$AugmentationsItemsContainer($Class* clazz) {
	return $of($alloc(AugmentationsImpl$AugmentationsItemsContainer));
}

void AugmentationsImpl$AugmentationsItemsContainer::init$($AugmentationsImpl* this$0) {
	$set(this, this$0, this$0);
}

AugmentationsImpl$AugmentationsItemsContainer::AugmentationsImpl$AugmentationsItemsContainer() {
}

$Class* AugmentationsImpl$AugmentationsItemsContainer::load$($String* name, bool initialize) {
	$loadClass(AugmentationsImpl$AugmentationsItemsContainer, name, initialize, &_AugmentationsImpl$AugmentationsItemsContainer_ClassInfo_, allocate$AugmentationsImpl$AugmentationsItemsContainer);
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