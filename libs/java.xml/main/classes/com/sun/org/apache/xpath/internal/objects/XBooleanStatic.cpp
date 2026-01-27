#include <com/sun/org/apache/xpath/internal/objects/XBooleanStatic.h>

#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/objects/XBoolean.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XBoolean = ::com::sun::org::apache::xpath::internal::objects::XBoolean;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XBooleanStatic_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XBooleanStatic, serialVersionUID)},
	{"m_val", "Z", nullptr, $PRIVATE | $FINAL, $field(XBooleanStatic, m_val)},
	{}
};

$MethodInfo _XBooleanStatic_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(XBooleanStatic, init$, void, bool)},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XBooleanStatic, equals, bool, $XObject*)},
	{}
};

$ClassInfo _XBooleanStatic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XBooleanStatic",
	"com.sun.org.apache.xpath.internal.objects.XBoolean",
	nullptr,
	_XBooleanStatic_FieldInfo_,
	_XBooleanStatic_MethodInfo_
};

$Object* allocate$XBooleanStatic($Class* clazz) {
	return $of($alloc(XBooleanStatic));
}

void XBooleanStatic::init$(bool b) {
	$XBoolean::init$(b);
	this->m_val = b;
}

bool XBooleanStatic::equals($XObject* obj2) {
	try {
		return this->m_val == $nc(obj2)->bool$();
	} catch ($TransformerException& te) {
		$throwNew($WrappedRuntimeException, te);
	}
	$shouldNotReachHere();
}

XBooleanStatic::XBooleanStatic() {
}

$Class* XBooleanStatic::load$($String* name, bool initialize) {
	$loadClass(XBooleanStatic, name, initialize, &_XBooleanStatic_ClassInfo_, allocate$XBooleanStatic);
	return class$;
}

$Class* XBooleanStatic::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com