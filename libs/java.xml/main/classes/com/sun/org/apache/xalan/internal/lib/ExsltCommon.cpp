#include <com/sun/org/apache/xalan/internal/lib/ExsltCommon.h>

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xalan/internal/lib/Extensions.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeIterator.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <com/sun/org/apache/xpath/internal/axes/RTFIterator.h>
#include <java/lang/Number.h>
#include <jcpp.h>

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $Extensions = ::com::sun::org::apache::xalan::internal::lib::Extensions;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMNodeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeIterator;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $RTFIterator = ::com::sun::org::apache::xpath::internal::axes::RTFIterator;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _ExsltCommon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltCommon, init$, void)},
	{"nodeSet", "(Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;Ljava/lang/Object;)Lcom/sun/org/apache/xpath/internal/NodeSet;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltCommon, nodeSet, $NodeSet*, $ExpressionContext*, Object$*)},
	{"objectType", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltCommon, objectType, $String*, Object$*)},
	{}
};

$ClassInfo _ExsltCommon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltCommon",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExsltCommon_MethodInfo_
};

$Object* allocate$ExsltCommon($Class* clazz) {
	return $of($alloc(ExsltCommon));
}

void ExsltCommon::init$() {
}

$String* ExsltCommon::objectType(Object$* obj) {
	if ($instanceOf($String, obj)) {
		return "string"_s;
	} else if ($instanceOf($Boolean, obj)) {
		return "boolean"_s;
	} else if ($instanceOf($Number, obj)) {
		return "number"_s;
	} else if ($instanceOf($DTMNodeIterator, obj)) {
		$var($DTMIterator, dtmI, $nc(($cast($DTMNodeIterator, obj)))->getDTMIterator());
		if ($instanceOf($RTFIterator, dtmI)) {
			return "RTF"_s;
		} else {
			return "node-set"_s;
		}
	} else {
		return "unknown"_s;
	}
}

$NodeSet* ExsltCommon::nodeSet($ExpressionContext* myProcessor, Object$* rtf) {
	return $Extensions::nodeset(myProcessor, rtf);
}

ExsltCommon::ExsltCommon() {
}

$Class* ExsltCommon::load$($String* name, bool initialize) {
	$loadClass(ExsltCommon, name, initialize, &_ExsltCommon_ClassInfo_, allocate$ExsltCommon);
	return class$;
}

$Class* ExsltCommon::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com