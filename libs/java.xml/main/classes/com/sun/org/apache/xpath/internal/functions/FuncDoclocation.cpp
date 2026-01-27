#include <com/sun/org/apache/xpath/internal/functions/FuncDoclocation.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef DOCUMENT_FRAGMENT_NODE
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
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

$FieldInfo _FuncDoclocation_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncDoclocation, serialVersionUID)},
	{}
};

$MethodInfo _FuncDoclocation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncDoclocation, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncDoclocation, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncDoclocation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncDoclocation",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncDoclocation_FieldInfo_,
	_FuncDoclocation_MethodInfo_
};

$Object* allocate$FuncDoclocation($Class* clazz) {
	return $of($alloc(FuncDoclocation));
}

void FuncDoclocation::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncDoclocation::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t whereNode = getArg0AsNode(xctxt);
	$var($String, fileLocation, nullptr);
	if ($DTM::NULL != whereNode) {
		$var($DTM, dtm, $nc(xctxt)->getDTM(whereNode));
		if ($DTM::DOCUMENT_FRAGMENT_NODE == $nc(dtm)->getNodeType(whereNode)) {
			whereNode = dtm->getFirstChild(whereNode);
		}
		if ($DTM::NULL != whereNode) {
			$assign(fileLocation, $nc(dtm)->getDocumentBaseURI());
		}
	}
	return $new($XString, (nullptr != fileLocation) ? fileLocation : ""_s);
}

FuncDoclocation::FuncDoclocation() {
}

$Class* FuncDoclocation::load$($String* name, bool initialize) {
	$loadClass(FuncDoclocation, name, initialize, &_FuncDoclocation_ClassInfo_, allocate$FuncDoclocation);
	return class$;
}

$Class* FuncDoclocation::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com