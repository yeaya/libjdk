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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XBooleanStatic, serialVersionUID)},
		{"m_val", "Z", nullptr, $PRIVATE | $FINAL, $field(XBooleanStatic, m_val)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(XBooleanStatic, init$, void, bool)},
		{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XBooleanStatic, equals, bool, $XObject*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.objects.XBooleanStatic",
		"com.sun.org.apache.xpath.internal.objects.XBoolean",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XBooleanStatic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XBooleanStatic));
	});
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