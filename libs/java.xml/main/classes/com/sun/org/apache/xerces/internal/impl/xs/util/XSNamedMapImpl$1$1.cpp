#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$XSNamedMapEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $XSNamedMapImpl$1 = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

void XSNamedMapImpl$1$1::init$($XSNamedMapImpl$1* this$1) {
	$set(this, this$1, this$1);
	this->index = 0;
}

bool XSNamedMapImpl$1$1::hasNext() {
	return (this->index < this->this$1->val$length);
}

$Object* XSNamedMapImpl$1$1::next() {
	if (this->index < this->this$1->val$length) {
		return $nc(this->this$1->val$entries)->get(this->index++);
	}
	$throwNew($NoSuchElementException);
}

void XSNamedMapImpl$1$1::remove() {
	$throwNew($UnsupportedOperationException);
}

XSNamedMapImpl$1$1::XSNamedMapImpl$1$1() {
}

$Class* XSNamedMapImpl$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1;", nullptr, $FINAL | $SYNTHETIC, $field(XSNamedMapImpl$1$1, this$1)},
		{"index", "I", nullptr, $PRIVATE, $field(XSNamedMapImpl$1$1, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1;)V", nullptr, 0, $method(XSNamedMapImpl$1$1, init$, void, $XSNamedMapImpl$1*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, hasNext, bool)},
		{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1", nullptr, nullptr, 0},
		{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl"
	};
	$loadClass(XSNamedMapImpl$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSNamedMapImpl$1$1);
	});
	return class$;
}

$Class* XSNamedMapImpl$1$1::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com