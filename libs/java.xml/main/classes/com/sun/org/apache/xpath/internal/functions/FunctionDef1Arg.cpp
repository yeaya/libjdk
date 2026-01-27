#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef ER_ZERO_OR_ONE
#undef NULL

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $WrongNumberArgsException = ::com::sun::org::apache::xpath::internal::functions::WrongNumberArgsException;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
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

$FieldInfo _FunctionDef1Arg_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FunctionDef1Arg, serialVersionUID)},
	{}
};

$MethodInfo _FunctionDef1Arg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FunctionDef1Arg, init$, void)},
	{"Arg0IsNodesetExpr", "()Z", nullptr, $PUBLIC, $virtualMethod(FunctionDef1Arg, Arg0IsNodesetExpr, bool)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(FunctionDef1Arg, canTraverseOutsideSubtree, bool)},
	{"checkNumberArgs", "(I)V", nullptr, $PUBLIC, $virtualMethod(FunctionDef1Arg, checkNumberArgs, void, int32_t), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{"getArg0AsNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PROTECTED, $virtualMethod(FunctionDef1Arg, getArg0AsNode, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"getArg0AsNumber", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PROTECTED, $virtualMethod(FunctionDef1Arg, getArg0AsNumber, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"getArg0AsString", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PROTECTED, $virtualMethod(FunctionDef1Arg, getArg0AsString, $XMLString*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"reportWrongNumberArgs", "()V", nullptr, $PROTECTED, $virtualMethod(FunctionDef1Arg, reportWrongNumberArgs, void), "com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException"},
	{}
};

$ClassInfo _FunctionDef1Arg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FunctionDef1Arg_FieldInfo_,
	_FunctionDef1Arg_MethodInfo_
};

$Object* allocate$FunctionDef1Arg($Class* clazz) {
	return $of($alloc(FunctionDef1Arg));
}

void FunctionDef1Arg::init$() {
	$FunctionOneArg::init$();
}

int32_t FunctionDef1Arg::getArg0AsNode($XPathContext* xctxt) {
	return (nullptr == this->m_arg0) ? $nc(xctxt)->getCurrentNode() : $nc(this->m_arg0)->asNode(xctxt);
}

bool FunctionDef1Arg::Arg0IsNodesetExpr() {
	return (nullptr == this->m_arg0) ? true : $nc(this->m_arg0)->isNodesetExpr();
}

$XMLString* FunctionDef1Arg::getArg0AsString($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->m_arg0) {
		int32_t currentNode = $nc(xctxt)->getCurrentNode();
		if ($DTM::NULL == currentNode) {
			$init($XString);
			return $XString::EMPTYSTRING;
		} else {
			$var($DTM, dtm, xctxt->getDTM(currentNode));
			return $nc(dtm)->getStringValue(currentNode);
		}
	} else {
		return $nc($($nc(this->m_arg0)->execute(xctxt)))->xstr();
	}
}

double FunctionDef1Arg::getArg0AsNumber($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == this->m_arg0) {
		int32_t currentNode = $nc(xctxt)->getCurrentNode();
		if ($DTM::NULL == currentNode) {
			return (double)0;
		} else {
			$var($DTM, dtm, xctxt->getDTM(currentNode));
			$var($XMLString, str, $nc(dtm)->getStringValue(currentNode));
			return $nc(str)->toDouble();
		}
	} else {
		return $nc($($nc(this->m_arg0)->execute(xctxt)))->num();
	}
}

void FunctionDef1Arg::checkNumberArgs(int32_t argNum) {
	if (argNum > 1) {
		reportWrongNumberArgs();
	}
}

void FunctionDef1Arg::reportWrongNumberArgs() {
	$init($XPATHErrorResources);
	$throwNew($WrongNumberArgsException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_ZERO_OR_ONE, nullptr)));
}

bool FunctionDef1Arg::canTraverseOutsideSubtree() {
	return (nullptr == this->m_arg0) ? false : $FunctionOneArg::canTraverseOutsideSubtree();
}

FunctionDef1Arg::FunctionDef1Arg() {
}

$Class* FunctionDef1Arg::load$($String* name, bool initialize) {
	$loadClass(FunctionDef1Arg, name, initialize, &_FunctionDef1Arg_ClassInfo_, allocate$FunctionDef1Arg);
	return class$;
}

$Class* FunctionDef1Arg::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com