#include <com/sun/org/apache/xpath/internal/operations/VariableSafeAbsRef.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <jcpp.h>

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Variable = ::com::sun::org::apache::xpath::internal::operations::Variable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _VariableSafeAbsRef_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(VariableSafeAbsRef, serialVersionUID)},
	{}
};

$MethodInfo _VariableSafeAbsRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VariableSafeAbsRef, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Z)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(VariableSafeAbsRef, execute, $XObject*, $XPathContext*, bool), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _VariableSafeAbsRef_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.VariableSafeAbsRef",
	"com.sun.org.apache.xpath.internal.operations.Variable",
	nullptr,
	_VariableSafeAbsRef_FieldInfo_,
	_VariableSafeAbsRef_MethodInfo_
};

$Object* allocate$VariableSafeAbsRef($Class* clazz) {
	return $of($alloc(VariableSafeAbsRef));
}

void VariableSafeAbsRef::init$() {
	$Variable::init$();
}

$XObject* VariableSafeAbsRef::execute($XPathContext* xctxt, bool destructiveOK) {
	$useLocalCurrentObjectStackCache();
	$var($XNodeSet, xns, $cast($XNodeSet, $Variable::execute(xctxt, destructiveOK)));
	$var($DTMManager, dtmMgr, $nc(xctxt)->getDTMManager());
	int32_t context = xctxt->getContextNode();
	int32_t var$0 = $nc($($nc(dtmMgr)->getDTM($nc(xns)->getRoot())))->getDocument();
	if (var$0 != $nc($(dtmMgr->getDTM(context)))->getDocument()) {
		$var($Expression, expr, $cast($Expression, $nc(xns)->getContainedIter()));
		$assign(xns, $cast($XNodeSet, $nc(expr)->asIterator(xctxt, context)));
	}
	return xns;
}

VariableSafeAbsRef::VariableSafeAbsRef() {
}

$Class* VariableSafeAbsRef::load$($String* name, bool initialize) {
	$loadClass(VariableSafeAbsRef, name, initialize, &_VariableSafeAbsRef_ClassInfo_, allocate$VariableSafeAbsRef);
	return class$;
}

$Class* VariableSafeAbsRef::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com