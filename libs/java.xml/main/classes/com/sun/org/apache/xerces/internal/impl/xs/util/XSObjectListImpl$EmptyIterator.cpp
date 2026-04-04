#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl$EmptyIterator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

void XSObjectListImpl$EmptyIterator::init$() {
}

bool XSObjectListImpl$EmptyIterator::hasNext() {
	return false;
}

$Object* XSObjectListImpl$EmptyIterator::next() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

bool XSObjectListImpl$EmptyIterator::hasPrevious() {
	return false;
}

$Object* XSObjectListImpl$EmptyIterator::previous() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

int32_t XSObjectListImpl$EmptyIterator::nextIndex() {
	return 0;
}

int32_t XSObjectListImpl$EmptyIterator::previousIndex() {
	return -1;
}

void XSObjectListImpl$EmptyIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::set($XSObject* object) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::add($XSObject* object) {
	$throwNew($UnsupportedOperationException);
}

void XSObjectListImpl$EmptyIterator::add(Object$* object) {
	this->add($cast($XSObject, object));
}

void XSObjectListImpl$EmptyIterator::set(Object$* object) {
	this->set($cast($XSObject, object));
}

XSObjectListImpl$EmptyIterator::XSObjectListImpl$EmptyIterator() {
}

$Class* XSObjectListImpl$EmptyIterator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XSObjectListImpl$EmptyIterator, init$, void)},
		{"add", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, add, void, $XSObject*)},
		{"add", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSObjectListImpl$EmptyIterator, add, void, Object$*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, hasNext, bool)},
		{"hasPrevious", "()Z", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, hasPrevious, bool)},
		{"next", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, next, $Object*)},
		{"nextIndex", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, nextIndex, int32_t)},
		{"previous", "()Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, previous, $Object*)},
		{"previousIndex", "()I", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, previousIndex, int32_t)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, remove, void)},
		{"set", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;)V", nullptr, $PUBLIC, $virtualMethod(XSObjectListImpl$EmptyIterator, set, void, $XSObject*)},
		{"set", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSObjectListImpl$EmptyIterator, set, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator", "com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl", "EmptyIterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator",
		"java.lang.Object",
		"java.util.ListIterator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/ListIterator<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl"
	};
	$loadClass(XSObjectListImpl$EmptyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSObjectListImpl$EmptyIterator);
	});
	return class$;
}

$Class* XSObjectListImpl$EmptyIterator::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com