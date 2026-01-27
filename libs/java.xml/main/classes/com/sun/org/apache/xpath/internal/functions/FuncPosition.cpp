#include <com/sun/org/apache/xpath/internal/functions/FuncPosition.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncPosition_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncPosition, serialVersionUID)},
	{"m_isTopLevel", "Z", nullptr, $PRIVATE, $field(FuncPosition, m_isTopLevel)},
	{}
};

$MethodInfo _FuncPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncPosition, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncPosition, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncPosition, fixupVariables, void, $List*, int32_t)},
	{"getPositionInContextNodeList", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(FuncPosition, getPositionInContextNodeList, int32_t, $XPathContext*)},
	{"postCompileStep", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;)V", nullptr, $PUBLIC, $virtualMethod(FuncPosition, postCompileStep, void, $Compiler*)},
	{}
};

$ClassInfo _FuncPosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncPosition",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncPosition_FieldInfo_,
	_FuncPosition_MethodInfo_
};

$Object* allocate$FuncPosition($Class* clazz) {
	return $of($alloc(FuncPosition));
}

void FuncPosition::init$() {
	$Function::init$();
}

void FuncPosition::postCompileStep($Compiler* compiler) {
	this->m_isTopLevel = $nc(compiler)->getLocationPathDepth() == -1;
}

int32_t FuncPosition::getPositionInContextNodeList($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($SubContextList, iter, this->m_isTopLevel ? ($SubContextList*)nullptr : $nc(xctxt)->getSubContextList());
	if (nullptr != iter) {
		int32_t prox = iter->getProximityPosition(xctxt);
		return prox;
	}
	$var($DTMIterator, cnl, xctxt->getContextNodeList());
	if (nullptr != cnl) {
		int32_t n = cnl->getCurrentNode();
		if (n == $DTM::NULL) {
			if (cnl->getCurrentPos() == 0) {
				return 0;
			}
			try {
				$assign(cnl, cnl->cloneWithReset());
			} catch ($CloneNotSupportedException& cnse) {
				$throwNew($WrappedRuntimeException, cnse);
			}
			int32_t currentNode = xctxt->getContextNode();
			while ($DTM::NULL != (n = cnl->nextNode())) {
				if (n == currentNode) {
					break;
				}
			}
		}
		return cnl->getCurrentPos();
	}
	return -1;
}

$XObject* FuncPosition::execute($XPathContext* xctxt) {
	double pos = (double)getPositionInContextNodeList(xctxt);
	return $new($XNumber, pos);
}

void FuncPosition::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncPosition::FuncPosition() {
}

$Class* FuncPosition::load$($String* name, bool initialize) {
	$loadClass(FuncPosition, name, initialize, &_FuncPosition_ClassInfo_, allocate$FuncPosition);
	return class$;
}

$Class* FuncPosition::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com