#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>

#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/Number.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CLASS_BOOLEAN
#undef CLASS_NODESET
#undef CLASS_NUMBER

using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _XNumber_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNumber, serialVersionUID)},
	{"m_val", "D", nullptr, 0, $field(XNumber, m_val)},
	{}
};

$MethodInfo _XNumber_MethodInfo_[] = {
	{"<init>", "(D)V", nullptr, $PUBLIC, $method(XNumber, init$, void, double)},
	{"<init>", "(Ljava/lang/Number;)V", nullptr, $PUBLIC, $method(XNumber, init$, void, $Number*)},
	{"bool", "()Z", nullptr, $PUBLIC, $virtualMethod(XNumber, bool$, bool)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(XNumber, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"equals", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Z", nullptr, $PUBLIC, $virtualMethod(XNumber, equals, bool, $XObject*)},
	{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(XNumber, getType, int32_t)},
	{"getTypeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNumber, getTypeString, $String*)},
	{"isStableNumber", "()Z", nullptr, $PUBLIC, $virtualMethod(XNumber, isStableNumber, bool)},
	{"num", "()D", nullptr, $PUBLIC, $virtualMethod(XNumber, num, double)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(XNumber, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"object", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XNumber, object, $Object*)},
	{"str", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XNumber, str, $String*)},
	{"zeros", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XNumber, zeros, $String*, int32_t)},
	{}
};

$ClassInfo _XNumber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.XNumber",
	"com.sun.org.apache.xpath.internal.objects.XObject",
	nullptr,
	_XNumber_FieldInfo_,
	_XNumber_MethodInfo_
};

$Object* allocate$XNumber($Class* clazz) {
	return $of($alloc(XNumber));
}

void XNumber::init$(double d) {
	$XObject::init$();
	this->m_val = d;
}

void XNumber::init$($Number* num) {
	$XObject::init$();
	this->m_val = $nc(num)->doubleValue();
	setObject(num);
}

int32_t XNumber::getType() {
	return $XObject::CLASS_NUMBER;
}

$String* XNumber::getTypeString() {
	return "#NUMBER"_s;
}

double XNumber::num() {
	return this->m_val;
}

double XNumber::num($XPathContext* xctxt) {
	return this->m_val;
}

bool XNumber::bool$() {
	return ($Double::isNaN(this->m_val) || (this->m_val == 0.0)) ? false : true;
}

$String* XNumber::str() {
	$useLocalCurrentObjectStackCache();
	if ($Double::isNaN(this->m_val)) {
		return "NaN"_s;
	} else if ($Double::isInfinite(this->m_val)) {
		if (this->m_val > 0) {
			return "Infinity"_s;
		} else {
			return "-Infinity"_s;
		}
	}
	double num = this->m_val;
	$var($String, s, $Double::toString(num));
	int32_t len = $nc(s)->length();
	bool var$0 = s->charAt(len - 2) == u'.';
	if (var$0 && s->charAt(len - 1) == u'0') {
		$assign(s, s->substring(0, len - 2));
		if (s->equals("-0"_s)) {
			return "0"_s;
		}
		return s;
	}
	int32_t e = s->indexOf((int32_t)u'E');
	if (e < 0) {
		if (s->charAt(len - 1) == u'0') {
			return s->substring(0, len - 1);
		} else {
			return s;
		}
	}
	int32_t exp = $Integer::parseInt($(s->substring(e + 1)));
	$var($String, sign, nullptr);
	if (s->charAt(0) == u'-') {
		$assign(sign, "-"_s);
		$assign(s, s->substring(1));
		--e;
	} else {
		$assign(sign, ""_s);
	}
	int32_t nDigits = e - 2;
	if (exp >= nDigits) {
		$var($String, var$2, $$str({sign, $(s->substring(0, 1))}));
		$var($String, var$1, $$concat(var$2, $(s->substring(2, e))));
		return $concat(var$1, $(zeros(exp - nDigits)));
	}
	while (s->charAt(e - 1) == u'0') {
		--e;
	}
	if (exp > 0) {
		$var($String, var$5, $$str({sign, $(s->substring(0, 1))}));
		$var($String, var$4, $$concat(var$5, $(s->substring(2, 2 + exp))));
		$var($String, var$3, $$concat(var$4, "."_s));
		return $concat(var$3, $(s->substring(2 + exp, e)));
	}
	$var($String, var$7, $$str({sign, "0."_s, $(zeros(-1 - exp))}));
	$var($String, var$6, $$concat(var$7, $(s->substring(0, 1))));
	return $concat(var$6, $(s->substring(2, e)));
}

$String* XNumber::zeros(int32_t n) {
	$init(XNumber);
	if (n < 1) {
		return ""_s;
	}
	$var($chars, buf, $new($chars, n));
	for (int32_t i = 0; i < n; ++i) {
		buf->set(i, u'0');
	}
	return $new($String, buf);
}

$Object* XNumber::object() {
	if (nullptr == this->m_obj) {
		setObject($($Double::valueOf(this->m_val)));
	}
	return $of(this->m_obj);
}

bool XNumber::equals($XObject* obj2) {
	int32_t t = $nc(obj2)->getType();
	try {
		if (t == $XObject::CLASS_NODESET) {
			return obj2->equals(static_cast<$XObject*>(this));
		} else if (t == $XObject::CLASS_BOOLEAN) {
			bool var$0 = obj2->bool$();
			return var$0 == bool$();
		} else {
			return this->m_val == obj2->num();
		}
	} catch ($TransformerException& te) {
		$throwNew($WrappedRuntimeException, te);
	}
	$shouldNotReachHere();
}

bool XNumber::isStableNumber() {
	return true;
}

void XNumber::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	$nc(visitor)->visitNumberLiteral(owner, this);
}

XNumber::XNumber() {
}

$Class* XNumber::load$($String* name, bool initialize) {
	$loadClass(XNumber, name, initialize, &_XNumber_ClassInfo_, allocate$XNumber);
	return class$;
}

$Class* XNumber::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com