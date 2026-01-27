#include <com/sun/org/apache/xpath/internal/functions/FuncSum.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
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
						namespace functions {

$FieldInfo _FuncSum_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncSum, serialVersionUID)},
	{}
};

$MethodInfo _FuncSum_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncSum, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncSum, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncSum_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncSum",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncSum_FieldInfo_,
	_FuncSum_MethodInfo_
};

$Object* allocate$FuncSum($Class* clazz) {
	return $of($alloc(FuncSum));
}

void FuncSum::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncSum::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($DTMIterator, nodes, $nc(this->m_arg0)->asIterator(xctxt, $nc(xctxt)->getCurrentNode()));
	double sum = 0.0;
	int32_t pos = 0;
	while ($DTM::NULL != (pos = $nc(nodes)->nextNode())) {
		$var($DTM, dtm, nodes->getDTM(pos));
		$var($XMLString, s, $nc(dtm)->getStringValue(pos));
		if (nullptr != s) {
			sum += s->toDouble();
		}
	}
	$nc(nodes)->detach();
	return $new($XNumber, sum);
}

FuncSum::FuncSum() {
}

$Class* FuncSum::load$($String* name, bool initialize) {
	$loadClass(FuncSum, name, initialize, &_FuncSum_ClassInfo_, allocate$FuncSum);
	return class$;
}

$Class* FuncSum::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com