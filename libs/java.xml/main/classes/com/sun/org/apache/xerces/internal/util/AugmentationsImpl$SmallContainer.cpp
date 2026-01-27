#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer.h>

#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$LargeContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef SIZE_LIMIT

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $AugmentationsImpl$AugmentationsItemsContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer;
using $AugmentationsImpl$LargeContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$LargeContainer;
using $AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration;
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

$FieldInfo _AugmentationsImpl$SmallContainer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$SmallContainer, this$0)},
	{"SIZE_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(AugmentationsImpl$SmallContainer, SIZE_LIMIT)},
	{"fAugmentations", "[Ljava/lang/Object;", nullptr, $FINAL, $field(AugmentationsImpl$SmallContainer, fAugmentations)},
	{"fNumEntries", "I", nullptr, 0, $field(AugmentationsImpl$SmallContainer, fNumEntries)},
	{}
};

$MethodInfo _AugmentationsImpl$SmallContainer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;)V", nullptr, 0, $method(AugmentationsImpl$SmallContainer, init$, void, $AugmentationsImpl*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, clear, void)},
	{"expand", "()Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, expand, $AugmentationsImpl$AugmentationsItemsContainer*)},
	{"getItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, getItem, $Object*, Object$*)},
	{"isFull", "()Z", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, isFull, bool)},
	{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, keys, $Enumeration*)},
	{"putItem", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, putItem, $Object*, Object$*, Object$*)},
	{"removeItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, removeItem, $Object*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer, toString, $String*)},
	{}
};

$InnerClassInfo _AugmentationsImpl$SmallContainer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "SmallContainer", 0},
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
	{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer", "SmallContainerKeyEnumeration", 0},
	{}
};

$ClassInfo _AugmentationsImpl$SmallContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer",
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer",
	nullptr,
	_AugmentationsImpl$SmallContainer_FieldInfo_,
	_AugmentationsImpl$SmallContainer_MethodInfo_,
	nullptr,
	nullptr,
	_AugmentationsImpl$SmallContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.AugmentationsImpl"
};

$Object* allocate$AugmentationsImpl$SmallContainer($Class* clazz) {
	return $of($alloc(AugmentationsImpl$SmallContainer));
}

void AugmentationsImpl$SmallContainer::init$($AugmentationsImpl* this$0) {
	$set(this, this$0, this$0);
	$AugmentationsImpl$AugmentationsItemsContainer::init$(this$0);
	$set(this, fAugmentations, $new($ObjectArray, AugmentationsImpl$SmallContainer::SIZE_LIMIT * 2));
	this->fNumEntries = 0;
}

$Enumeration* AugmentationsImpl$SmallContainer::keys() {
	return $new($AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, this);
}

$Object* AugmentationsImpl$SmallContainer::getItem(Object$* key) {
	for (int32_t i = 0; i < this->fNumEntries * 2; i = i + 2) {
		if ($nc($of($nc(this->fAugmentations)->get(i)))->equals(key)) {
			return $of($nc(this->fAugmentations)->get(i + 1));
		}
	}
	return $of(nullptr);
}

$Object* AugmentationsImpl$SmallContainer::putItem(Object$* key, Object$* item) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fNumEntries * 2; i = i + 2) {
		if ($nc($of($nc(this->fAugmentations)->get(i)))->equals(key)) {
			$var($Object0, oldValue, $nc(this->fAugmentations)->get(i + 1));
			$nc(this->fAugmentations)->set(i + 1, item);
			return $of(oldValue);
		}
	}
	$nc(this->fAugmentations)->set(this->fNumEntries * 2, key);
	$nc(this->fAugmentations)->set(this->fNumEntries * 2 + 1, item);
	++this->fNumEntries;
	return $of(nullptr);
}

$Object* AugmentationsImpl$SmallContainer::removeItem(Object$* key) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fNumEntries * 2; i = i + 2) {
		if ($nc($of($nc(this->fAugmentations)->get(i)))->equals(key)) {
			$var($Object0, oldValue, $nc(this->fAugmentations)->get(i + 1));
			for (int32_t j = i; j < this->fNumEntries * 2 - 2; j = j + 2) {
				$nc(this->fAugmentations)->set(j, $nc(this->fAugmentations)->get(j + 2));
				$nc(this->fAugmentations)->set(j + 1, $nc(this->fAugmentations)->get(j + 3));
			}
			$nc(this->fAugmentations)->set(this->fNumEntries * 2 - 2, nullptr);
			$nc(this->fAugmentations)->set(this->fNumEntries * 2 - 1, nullptr);
			--this->fNumEntries;
			return $of(oldValue);
		}
	}
	return $of(nullptr);
}

void AugmentationsImpl$SmallContainer::clear() {
	for (int32_t i = 0; i < this->fNumEntries * 2; i = i + 2) {
		$nc(this->fAugmentations)->set(i, nullptr);
		$nc(this->fAugmentations)->set(i + 1, nullptr);
	}
	this->fNumEntries = 0;
}

bool AugmentationsImpl$SmallContainer::isFull() {
	return (this->fNumEntries == AugmentationsImpl$SmallContainer::SIZE_LIMIT);
}

$AugmentationsImpl$AugmentationsItemsContainer* AugmentationsImpl$SmallContainer::expand() {
	$var($AugmentationsImpl$LargeContainer, expandedContainer, $new($AugmentationsImpl$LargeContainer, this->this$0));
	for (int32_t i = 0; i < this->fNumEntries * 2; i = i + 2) {
		expandedContainer->putItem($nc(this->fAugmentations)->get(i), $nc(this->fAugmentations)->get(i + 1));
	}
	return expandedContainer;
}

$String* AugmentationsImpl$SmallContainer::toString() {
	$var($StringBuilder, buff, $new($StringBuilder));
	buff->append("SmallContainer - fNumEntries == "_s)->append(this->fNumEntries);
	for (int32_t i = 0; i < AugmentationsImpl$SmallContainer::SIZE_LIMIT * 2; i = i + 2) {
		buff->append("\nfAugmentations["_s)->append(i)->append("] == "_s)->append($nc(this->fAugmentations)->get(i))->append("; fAugmentations["_s)->append(i + 1)->append("] == "_s)->append($nc(this->fAugmentations)->get(i + 1));
	}
	return buff->toString();
}

AugmentationsImpl$SmallContainer::AugmentationsImpl$SmallContainer() {
}

$Class* AugmentationsImpl$SmallContainer::load$($String* name, bool initialize) {
	$loadClass(AugmentationsImpl$SmallContainer, name, initialize, &_AugmentationsImpl$SmallContainer_ClassInfo_, allocate$AugmentationsImpl$SmallContainer);
	return class$;
}

$Class* AugmentationsImpl$SmallContainer::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com