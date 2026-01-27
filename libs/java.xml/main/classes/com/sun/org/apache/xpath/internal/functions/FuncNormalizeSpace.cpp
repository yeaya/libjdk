#include <com/sun/org/apache/xpath/internal/functions/FuncNormalizeSpace.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncNormalizeSpace_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncNormalizeSpace, serialVersionUID)},
	{}
};

$MethodInfo _FuncNormalizeSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncNormalizeSpace, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncNormalizeSpace, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"executeCharsToContentHandler", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(FuncNormalizeSpace, executeCharsToContentHandler, void, $XPathContext*, $ContentHandler*), "javax.xml.transform.TransformerException,org.xml.sax.SAXException"},
	{}
};

$ClassInfo _FuncNormalizeSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncNormalizeSpace",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncNormalizeSpace_FieldInfo_,
	_FuncNormalizeSpace_MethodInfo_
};

$Object* allocate$FuncNormalizeSpace($Class* clazz) {
	return $of($alloc(FuncNormalizeSpace));
}

void FuncNormalizeSpace::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncNormalizeSpace::execute($XPathContext* xctxt) {
	$var($XMLString, s1, getArg0AsString(xctxt));
	return $cast($XString, $nc(s1)->fixWhiteSpace(true, true, false));
}

void FuncNormalizeSpace::executeCharsToContentHandler($XPathContext* xctxt, $ContentHandler* handler) {
	$useLocalCurrentObjectStackCache();
	if (Arg0IsNodesetExpr()) {
		int32_t node = getArg0AsNode(xctxt);
		if ($DTM::NULL != node) {
			$var($DTM, dtm, $nc(xctxt)->getDTM(node));
			$nc(dtm)->dispatchCharactersEvents(node, handler, true);
		}
	} else {
		$var($XObject, obj, execute(xctxt));
		$nc(obj)->dispatchCharactersEvents(handler);
	}
}

FuncNormalizeSpace::FuncNormalizeSpace() {
}

$Class* FuncNormalizeSpace::load$($String* name, bool initialize) {
	$loadClass(FuncNormalizeSpace, name, initialize, &_FuncNormalizeSpace_ClassInfo_, allocate$FuncNormalizeSpace);
	return class$;
}

$Class* FuncNormalizeSpace::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com