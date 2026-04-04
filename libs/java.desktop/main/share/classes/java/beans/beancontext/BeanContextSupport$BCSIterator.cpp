#include <java/beans/beancontext/BeanContextSupport$BCSIterator.h>
#include <java/beans/beancontext/BeanContextSupport.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace beans {
		namespace beancontext {

void BeanContextSupport$BCSIterator::init$($Iterator* i) {
	$set(this, src, i);
}

bool BeanContextSupport$BCSIterator::hasNext() {
	return $nc(this->src)->hasNext();
}

$Object* BeanContextSupport$BCSIterator::next() {
	return $nc(this->src)->next();
}

void BeanContextSupport$BCSIterator::remove() {
}

BeanContextSupport$BCSIterator::BeanContextSupport$BCSIterator() {
}

$Class* BeanContextSupport$BCSIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"src", "Ljava/util/Iterator;", "Ljava/util/Iterator<*>;", $PRIVATE, $field(BeanContextSupport$BCSIterator, src)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<*>;)V", 0, $method(BeanContextSupport$BCSIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(BeanContextSupport$BCSIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BeanContextSupport$BCSIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(BeanContextSupport$BCSIterator, remove, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.beancontext.BeanContextSupport$BCSIterator", "java.beans.beancontext.BeanContextSupport", "BCSIterator", $PROTECTED | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.beans.beancontext.BeanContextSupport$BCSIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.beancontext.BeanContextSupport"
	};
	$loadClass(BeanContextSupport$BCSIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanContextSupport$BCSIterator);
	});
	return class$;
}

$Class* BeanContextSupport$BCSIterator::class$ = nullptr;

		} // beancontext
	} // beans
} // java