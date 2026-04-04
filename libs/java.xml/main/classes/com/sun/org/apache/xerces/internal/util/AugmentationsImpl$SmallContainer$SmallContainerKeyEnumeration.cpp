#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $AugmentationsImpl$SmallContainer = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$SmallContainer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

void AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::init$($AugmentationsImpl$SmallContainer* this$1) {
	$set(this, this$1, this$1);
	$set(this, enumArray, $new($ObjectArray, this->this$1->fNumEntries));
	this->next = 0;
	for (int32_t i = 0; i < this$1->fNumEntries; ++i) {
		this->enumArray->set(i, $nc(this$1->fAugmentations)->get(i * 2));
	}
}

bool AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::hasMoreElements() {
	return this->next < $nc(this->enumArray)->length;
}

$Object* AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::nextElement() {
	if (this->next >= $nc(this->enumArray)->length) {
		$throwNew($NoSuchElementException);
	}
	$var($Object0, nextVal, this->enumArray->get(this->next));
	this->enumArray->set(this->next, nullptr);
	++this->next;
	return nextVal;
}

AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration() {
}

$Class* AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer;", nullptr, $FINAL | $SYNTHETIC, $field(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, this$1)},
		{"enumArray", "[Ljava/lang/Object;", nullptr, 0, $field(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, enumArray)},
		{"next", "I", nullptr, 0, $field(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl$SmallContainer;)V", nullptr, 0, $method(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, init$, void, $AugmentationsImpl$SmallContainer*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl", "SmallContainer", 0},
		{"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration", "com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer", "SmallContainerKeyEnumeration", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.util.AugmentationsImpl"
	};
	$loadClass(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration);
	});
	return class$;
}

$Class* AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com