#include <com/sun/org/apache/xpath/internal/objects/XNull.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef CLASS_NULL
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XNull_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNull, serialVersionUID)},
	{}
};

$MethodInfo _XNull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XNull, init$, void)},
	{"bool", "()Z", nullptr, $PUBLIC, $virtualMethod(XNull, bool$, bool)},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNull, equals, bool, $XObject*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(XNull, getType, int32_t)},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNull, getTypeString, $String*)},
	{"num", "()D", nullptr, $PUBLIC, $virtualMethod(XNull, num, double)},
	{"rtf", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(XNull, rtf, int32_t, $XPathContext*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNull, str, $String*)},
	{}
};

$ClassInfo _XNull_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XNull",
	"com.sun.org.apache.xpath.internal.objects.XNodeSet",
	nullptr,
	_XNull_FieldInfo_,
	_XNull_MethodInfo_
};

$Object* allocate$XNull($Class* clazz) {
	return $of($alloc(XNull));
}

void XNull::init$() {
	$XNodeSet::init$();
}

int32_t XNull::getType() {
	return $XObject::CLASS_NULL;
}

$String* XNull::getTypeString() {
	return "#CLASS_NULL"_s;
}

double XNull::num() {
	return 0.0;
}

bool XNull::bool$() {
	return false;
}

$String* XNull::str() {
	return ""_s;
}

int32_t XNull::rtf($XPathContext* support) {
	return $DTM::NULL;
}

bool XNull::equals($XObject* obj2) {
	return $nc(obj2)->getType() == $XObject::CLASS_NULL;
}

XNull::XNull() {
}

$Class* XNull::load$($String* name, bool initialize) {
	$loadClass(XNull, name, initialize, &_XNull_ClassInfo_, allocate$XNull);
	return class$;
}

$Class* XNull::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com