#include <com/sun/org/apache/xpath/internal/functions/FuncLast.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $ClassInfo = ::java::lang::ClassInfo;
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

$FieldInfo _FuncLast_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncLast, serialVersionUID)},
	{"m_isTopLevel", "Z", nullptr, $PRIVATE, $field(FuncLast, m_isTopLevel)},
	{}
};

$MethodInfo _FuncLast_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncLast, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncLast, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FuncLast, fixupVariables, void, $List*, int32_t)},
	{"getCountOfContextNodeList", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(FuncLast, getCountOfContextNodeList, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"postCompileStep", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;)V", nullptr, $PUBLIC, $virtualMethod(FuncLast, postCompileStep, void, $Compiler*)},
	{}
};

$ClassInfo _FuncLast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncLast",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncLast_FieldInfo_,
	_FuncLast_MethodInfo_
};

$Object* allocate$FuncLast($Class* clazz) {
	return $of($alloc(FuncLast));
}

void FuncLast::init$() {
	$Function::init$();
}

void FuncLast::postCompileStep($Compiler* compiler) {
	this->m_isTopLevel = $nc(compiler)->getLocationPathDepth() == -1;
}

int32_t FuncLast::getCountOfContextNodeList($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($SubContextList, iter, this->m_isTopLevel ? ($SubContextList*)nullptr : $nc(xctxt)->getSubContextList());
	if (nullptr != iter) {
		return iter->getLastPos(xctxt);
	}
	$var($DTMIterator, cnl, xctxt->getContextNodeList());
	int32_t count = 0;
	if (nullptr != cnl) {
		count = cnl->getLength();
	} else {
		count = 0;
	}
	return count;
}

$XObject* FuncLast::execute($XPathContext* xctxt) {
	$var($XNumber, xnum, $new($XNumber, (double)getCountOfContextNodeList(xctxt)));
	return xnum;
}

void FuncLast::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncLast::FuncLast() {
}

$Class* FuncLast::load$($String* name, bool initialize) {
	$loadClass(FuncLast, name, initialize, &_FuncLast_ClassInfo_, allocate$FuncLast);
	return class$;
}

$Class* FuncLast::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com