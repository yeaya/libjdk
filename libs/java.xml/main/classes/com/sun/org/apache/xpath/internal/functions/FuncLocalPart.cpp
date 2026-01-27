#include <com/sun/org/apache/xpath/internal/functions/FuncLocalPart.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

#undef EMPTYSTRING
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

$FieldInfo _FuncLocalPart_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncLocalPart, serialVersionUID)},
	{}
};

$MethodInfo _FuncLocalPart_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncLocalPart, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncLocalPart, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncLocalPart_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncLocalPart",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncLocalPart_FieldInfo_,
	_FuncLocalPart_MethodInfo_
};

$Object* allocate$FuncLocalPart($Class* clazz) {
	return $of($alloc(FuncLocalPart));
}

void FuncLocalPart::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncLocalPart::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t context = getArg0AsNode(xctxt);
	if ($DTM::NULL == context) {
		$init($XString);
		return $XString::EMPTYSTRING;
	}
	$var($DTM, dtm, $nc(xctxt)->getDTM(context));
	$var($String, s, (context != $DTM::NULL) ? $nc(dtm)->getLocalName(context) : ""_s);
	bool var$0 = $nc(s)->startsWith("#"_s);
	if (var$0 || $nc(s)->equals("xmlns"_s)) {
		$init($XString);
		return $XString::EMPTYSTRING;
	}
	return $new($XString, s);
}

FuncLocalPart::FuncLocalPart() {
}

$Class* FuncLocalPart::load$($String* name, bool initialize) {
	$loadClass(FuncLocalPart, name, initialize, &_FuncLocalPart_ClassInfo_, allocate$FuncLocalPart);
	return class$;
}

$Class* FuncLocalPart::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com