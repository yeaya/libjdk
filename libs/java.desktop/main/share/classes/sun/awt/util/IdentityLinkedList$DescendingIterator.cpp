#include <sun/awt/util/IdentityLinkedList$DescendingIterator.h>
#include <sun/awt/util/IdentityLinkedList$ListItr.h>
#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityLinkedList = ::sun::awt::util::IdentityLinkedList;
using $IdentityLinkedList$ListItr = ::sun::awt::util::IdentityLinkedList$ListItr;

namespace sun {
	namespace awt {
		namespace util {

void IdentityLinkedList$DescendingIterator::init$($IdentityLinkedList* this$0) {
	$set(this, this$0, this$0);
	$set(this, itr, $new($IdentityLinkedList$ListItr, this->this$0, this->this$0->size()));
}

bool IdentityLinkedList$DescendingIterator::hasNext() {
	return this->itr->hasPrevious();
}

$Object* IdentityLinkedList$DescendingIterator::next() {
	return this->itr->previous();
}

void IdentityLinkedList$DescendingIterator::remove() {
	this->itr->remove();
}

IdentityLinkedList$DescendingIterator::IdentityLinkedList$DescendingIterator() {
}

$Class* IdentityLinkedList$DescendingIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/util/IdentityLinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityLinkedList$DescendingIterator, this$0)},
		{"itr", "Lsun/awt/util/IdentityLinkedList$ListItr;", "Lsun/awt/util/IdentityLinkedList<TE;>.ListItr;", $FINAL, $field(IdentityLinkedList$DescendingIterator, itr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/util/IdentityLinkedList;)V", nullptr, $PRIVATE, $method(IdentityLinkedList$DescendingIterator, init$, void, $IdentityLinkedList*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(IdentityLinkedList$DescendingIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(IdentityLinkedList$DescendingIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(IdentityLinkedList$DescendingIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.util.IdentityLinkedList$DescendingIterator", "sun.awt.util.IdentityLinkedList", "DescendingIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.util.IdentityLinkedList$DescendingIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.util.IdentityLinkedList"
	};
	$loadClass(IdentityLinkedList$DescendingIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityLinkedList$DescendingIterator);
	});
	return class$;
}

$Class* IdentityLinkedList$DescendingIterator::class$ = nullptr;

		} // util
	} // awt
} // sun