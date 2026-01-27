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

$FieldInfo _XSNamedMapImpl$1$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1;", nullptr, $FINAL | $SYNTHETIC, $field(XSNamedMapImpl$1$1, this$1)},
	{"index", "I", nullptr, $PRIVATE, $field(XSNamedMapImpl$1$1, index)},
	{}
};

$MethodInfo _XSNamedMapImpl$1$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl$1;)V", nullptr, 0, $method(XSNamedMapImpl$1$1, init$, void, $XSNamedMapImpl$1*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, hasNext, bool)},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(XSNamedMapImpl$1$1, remove, void)},
	{}
};

$EnclosingMethodInfo _XSNamedMapImpl$1$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _XSNamedMapImpl$1$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XSNamedMapImpl$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl$1$1",
	"java.lang.Object",
	"java.util.Iterator",
	_XSNamedMapImpl$1$1_FieldInfo_,
	_XSNamedMapImpl$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;>;",
	&_XSNamedMapImpl$1$1_EnclosingMethodInfo_,
	_XSNamedMapImpl$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSNamedMapImpl"
};

$Object* allocate$XSNamedMapImpl$1$1($Class* clazz) {
	return $of($alloc(XSNamedMapImpl$1$1));
}

void XSNamedMapImpl$1$1::init$($XSNamedMapImpl$1* this$1) {
	$set(this, this$1, this$1);
	this->index = 0;
}

bool XSNamedMapImpl$1$1::hasNext() {
	return (this->index < this->this$1->val$length);
}

$Object* XSNamedMapImpl$1$1::next() {
	if (this->index < this->this$1->val$length) {
		return $of($nc(this->this$1->val$entries)->get(this->index++));
	}
	$throwNew($NoSuchElementException);
}

void XSNamedMapImpl$1$1::remove() {
	$throwNew($UnsupportedOperationException);
}

XSNamedMapImpl$1$1::XSNamedMapImpl$1$1() {
}

$Class* XSNamedMapImpl$1$1::load$($String* name, bool initialize) {
	$loadClass(XSNamedMapImpl$1$1, name, initialize, &_XSNamedMapImpl$1$1_ClassInfo_, allocate$XSNamedMapImpl$1$1);
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