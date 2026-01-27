#include <com/sun/org/apache/xpath/internal/functions/FuncCount.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncCount_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncCount, serialVersionUID)},
	{}
};

$MethodInfo _FuncCount_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncCount, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncCount, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncCount_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncCount",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncCount_FieldInfo_,
	_FuncCount_MethodInfo_
};

$Object* allocate$FuncCount($Class* clazz) {
	return $of($alloc(FuncCount));
}

void FuncCount::init$() {
	$FunctionOneArg::init$();
}

$XObject* FuncCount::execute($XPathContext* xctxt) {
	$var($DTMIterator, nl, $nc(this->m_arg0)->asIterator(xctxt, $nc(xctxt)->getCurrentNode()));
	int32_t i = $nc(nl)->getLength();
	nl->detach();
	return $new($XNumber, (double)i);
}

FuncCount::FuncCount() {
}

$Class* FuncCount::load$($String* name, bool initialize) {
	$loadClass(FuncCount, name, initialize, &_FuncCount_ClassInfo_, allocate$FuncCount);
	return class$;
}

$Class* FuncCount::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com