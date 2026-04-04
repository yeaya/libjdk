#include <sun/awt/util/IdentityLinkedList$Entry.h>
#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace util {

void IdentityLinkedList$Entry::init$(Object$* element, IdentityLinkedList$Entry* next, IdentityLinkedList$Entry* previous) {
	$set(this, element, element);
	$set(this, next, next);
	$set(this, previous, previous);
}

IdentityLinkedList$Entry::IdentityLinkedList$Entry() {
}

$Class* IdentityLinkedList$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"element", "Ljava/lang/Object;", "TE;", 0, $field(IdentityLinkedList$Entry, element)},
		{"next", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", 0, $field(IdentityLinkedList$Entry, next)},
		{"previous", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", 0, $field(IdentityLinkedList$Entry, previous)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Lsun/awt/util/IdentityLinkedList$Entry;Lsun/awt/util/IdentityLinkedList$Entry;)V", "(TE;Lsun/awt/util/IdentityLinkedList$Entry<TE;>;Lsun/awt/util/IdentityLinkedList$Entry<TE;>;)V", 0, $method(IdentityLinkedList$Entry, init$, void, Object$*, IdentityLinkedList$Entry*, IdentityLinkedList$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.util.IdentityLinkedList$Entry", "sun.awt.util.IdentityLinkedList", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.util.IdentityLinkedList$Entry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.util.IdentityLinkedList"
	};
	$loadClass(IdentityLinkedList$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdentityLinkedList$Entry);
	});
	return class$;
}

$Class* IdentityLinkedList$Entry::class$ = nullptr;

		} // util
	} // awt
} // sun