#include <java/beans/beancontext/BeanContextMembershipEvent.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextEvent.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BeanContext = ::java::beans::beancontext::BeanContext;
using $BeanContextEvent = ::java::beans::beancontext::BeanContextEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextMembershipEvent::init$($BeanContext* bc, $Collection* changes) {
	$BeanContextEvent::init$(bc);
	if (changes == nullptr) {
		$throwNew($NullPointerException, "BeanContextMembershipEvent constructor:  changes is null."_s);
	}
	$set(this, children, changes);
}

void BeanContextMembershipEvent::init$($BeanContext* bc, $ObjectArray* changes) {
	$BeanContextEvent::init$(bc);
	if (changes == nullptr) {
		$throwNew($NullPointerException, "BeanContextMembershipEvent:  changes is null."_s);
	}
	$set(this, children, $Arrays::asList(changes));
}

int32_t BeanContextMembershipEvent::size() {
	return $nc(this->children)->size();
}

bool BeanContextMembershipEvent::contains(Object$* child) {
	return $nc(this->children)->contains(child);
}

$ObjectArray* BeanContextMembershipEvent::toArray() {
	return $nc(this->children)->toArray();
}

$Iterator* BeanContextMembershipEvent::iterator() {
	return $nc(this->children)->iterator();
}

BeanContextMembershipEvent::BeanContextMembershipEvent() {
}

$Class* BeanContextMembershipEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextMembershipEvent, serialVersionUID)},
		{"children", "Ljava/util/Collection;", nullptr, $PROTECTED, $field(BeanContextMembershipEvent, children)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/beancontext/BeanContext;Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(BeanContextMembershipEvent, init$, void, $BeanContext*, $Collection*)},
		{"<init>", "(Ljava/beans/beancontext/BeanContext;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(BeanContextMembershipEvent, init$, void, $BeanContext*, $ObjectArray*)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, contains, bool, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, size, int32_t)},
		{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, toArray, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.beancontext.BeanContextMembershipEvent",
		"java.beans.beancontext.BeanContextEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BeanContextMembershipEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextMembershipEvent);
	});
	return class$;
}

$Class* BeanContextMembershipEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java