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

$FieldInfo _BeanContextMembershipEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BeanContextMembershipEvent, serialVersionUID)},
	{"children", "Ljava/util/Collection;", nullptr, $PROTECTED, $field(BeanContextMembershipEvent, children)},
	{}
};

$MethodInfo _BeanContextMembershipEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContext;Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(BeanContextMembershipEvent, init$, void, $BeanContext*, $Collection*)},
	{"<init>", "(Ljava/beans/beancontext/BeanContext;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(BeanContextMembershipEvent, init$, void, $BeanContext*, $ObjectArray*)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, contains, bool, Object$*)},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, size, int32_t)},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BeanContextMembershipEvent, toArray, $ObjectArray*)},
	{}
};

$ClassInfo _BeanContextMembershipEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.beancontext.BeanContextMembershipEvent",
	"java.beans.beancontext.BeanContextEvent",
	nullptr,
	_BeanContextMembershipEvent_FieldInfo_,
	_BeanContextMembershipEvent_MethodInfo_
};

$Object* allocate$BeanContextMembershipEvent($Class* clazz) {
	return $of($alloc(BeanContextMembershipEvent));
}

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
	$loadClass(BeanContextMembershipEvent, name, initialize, &_BeanContextMembershipEvent_ClassInfo_, allocate$BeanContextMembershipEvent);
	return class$;
}

$Class* BeanContextMembershipEvent::class$ = nullptr;

		} // beancontext
	} // beans
} // java