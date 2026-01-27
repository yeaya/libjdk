#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeProxy.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $DTMNodeProxy = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _ExsltBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltBase, init$, void)},
	{"toNumber", "(Lorg/w3c/dom/Node;)D", nullptr, $PROTECTED | $STATIC, $staticMethod(ExsltBase, toNumber, double, $Node*)},
	{"toString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $staticMethod(ExsltBase, toString, $String*, $Node*)},
	{}
};

$ClassInfo _ExsltBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.lib.ExsltBase",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExsltBase_MethodInfo_
};

$Object* allocate$ExsltBase($Class* clazz) {
	return $of($alloc(ExsltBase));
}

void ExsltBase::init$() {
}

$String* ExsltBase::toString($Node* n) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DTMNodeProxy, n)) {
		return $nc(($cast($DTMNodeProxy, n)))->getStringValue();
	} else {
		$var($String, value, $nc(n)->getNodeValue());
		if (value == nullptr) {
			$var($NodeList, nodelist, n->getChildNodes());
			$var($StringBuffer, buf, $new($StringBuffer));
			for (int32_t i = 0; i < $nc(nodelist)->getLength(); ++i) {
				$var($Node, childNode, nodelist->item(i));
				buf->append($(toString(childNode)));
			}
			return buf->toString();
		} else {
			return value;
		}
	}
}

double ExsltBase::toNumber($Node* n) {
	$useLocalCurrentObjectStackCache();
	double d = 0.0;
	$var($String, str, toString(n));
	try {
		d = $nc($($Double::valueOf(str)))->doubleValue();
	} catch ($NumberFormatException& e) {
		$init($Double);
		d = $Double::NaN;
	}
	return d;
}

ExsltBase::ExsltBase() {
}

$Class* ExsltBase::load$($String* name, bool initialize) {
	$loadClass(ExsltBase, name, initialize, &_ExsltBase_ClassInfo_, allocate$ExsltBase);
	return class$;
}

$Class* ExsltBase::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com