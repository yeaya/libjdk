#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $AugmentationsImpl$SmallContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$SmallContainer;
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

void AugmentationsImpl::init$() {
	$set(this, fAugmentationsContainer, $new($AugmentationsImpl$SmallContainer, this));
}

$Object* AugmentationsImpl::putItem($String* key, Object$* item) {
	$var($Object, oldValue, $nc(this->fAugmentationsContainer)->putItem(key, item));
	if (oldValue == nullptr && $nc(this->fAugmentationsContainer)->isFull()) {
		$set(this, fAugmentationsContainer, $nc(this->fAugmentationsContainer)->expand());
	}
	return oldValue;
}

$Object* AugmentationsImpl::getItem($String* key) {
	return $nc(this->fAugmentationsContainer)->getItem(key);
}

$Object* AugmentationsImpl::removeItem($String* key) {
	return $nc(this->fAugmentationsContainer)->removeItem(key);
}

$Enumeration* AugmentationsImpl::keys() {
	return $nc(this->fAugmentationsContainer)->keys();
}

void AugmentationsImpl::removeAllItems() {
	$nc(this->fAugmentationsContainer)->clear();
}

$String* AugmentationsImpl::toString() {
	return $nc(this->fAugmentationsContainer)->toString();
}

AugmentationsImpl::AugmentationsImpl() {
}

$Class* AugmentationsImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fAugmentationsContainer", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer;", nullptr, $PRIVATE, $field(AugmentationsImpl, fAugmentationsContainer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AugmentationsImpl, init$, void)},
		{"getItem", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl, getItem, $Object*, $String*)},
		{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(AugmentationsImpl, keys, $Enumeration*)},
		{"putItem", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl, putItem, $Object*, $String*, Object$*)},
		{"removeAllItems", "()V", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl, removeAllItems, void)},
		{"removeItem", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl, removeItem, $Object*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "LargeContainer", 0},
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "SmallContainer", 0},
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xni.Augmentations",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer,com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer,com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration,com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer"
	};
	$loadClass(AugmentationsImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AugmentationsImpl);
	});
	return class$;
}

$Class* AugmentationsImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com