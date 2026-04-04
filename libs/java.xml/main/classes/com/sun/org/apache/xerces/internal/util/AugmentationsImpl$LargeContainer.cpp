#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$LargeContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $AugmentationsImpl$AugmentationsItemsContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void AugmentationsImpl$LargeContainer::init$($AugmentationsImpl* this$0) {
	$set(this, this$0, this$0);
	$AugmentationsImpl$AugmentationsItemsContainer::init$(this$0);
	$set(this, fAugmentations, $new($HashMap));
}

$Object* AugmentationsImpl$LargeContainer::getItem(Object$* key) {
	return this->fAugmentations->get(key);
}

$Object* AugmentationsImpl$LargeContainer::putItem(Object$* key, Object$* item) {
	return this->fAugmentations->put(key, item);
}

$Object* AugmentationsImpl$LargeContainer::removeItem(Object$* key) {
	return this->fAugmentations->remove(key);
}

$Enumeration* AugmentationsImpl$LargeContainer::keys() {
	return $Collections::enumeration($(this->fAugmentations->keySet()));
}

void AugmentationsImpl$LargeContainer::clear() {
	this->fAugmentations->clear();
}

bool AugmentationsImpl$LargeContainer::isFull() {
	return false;
}

$AugmentationsImpl$AugmentationsItemsContainer* AugmentationsImpl$LargeContainer::expand() {
	return this;
}

$String* AugmentationsImpl$LargeContainer::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, buff, $new($StringBuilder));
	buff->append("LargeContainer"_s);
	{
		$var($Iterator, i$, $$nc(this->fAugmentations->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				buff->append("\nkey == "_s);
				buff->append(key);
				buff->append("; value == "_s);
				buff->append($(this->fAugmentations->get(key)));
			}
		}
	}
	return buff->toString();
}

AugmentationsImpl$LargeContainer::AugmentationsImpl$LargeContainer() {
}

$Class* AugmentationsImpl$LargeContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$LargeContainer, this$0)},
		{"fAugmentations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $FINAL, $field(AugmentationsImpl$LargeContainer, fAugmentations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;)V", nullptr, 0, $method(AugmentationsImpl$LargeContainer, init$, void, $AugmentationsImpl*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, clear, void)},
		{"expand", "()Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, expand, $AugmentationsImpl$AugmentationsItemsContainer*)},
		{"getItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, getItem, $Object*, Object$*)},
		{"isFull", "()Z", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, isFull, bool)},
		{"keys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, keys, $Enumeration*)},
		{"putItem", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, putItem, $Object*, Object$*, Object$*)},
		{"removeItem", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, removeItem, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$LargeContainer, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "LargeContainer", 0},
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "AugmentationsItemsContainer", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer",
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer",
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
	$loadClass(AugmentationsImpl$LargeContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AugmentationsImpl$LargeContainer);
	});
	return class$;
}

$Class* AugmentationsImpl$LargeContainer::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com