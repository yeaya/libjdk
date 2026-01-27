#include <com/sun/org/apache/xpath/internal/functions/FuncString.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <jcpp.h>

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

$FieldInfo _FuncString_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncString, serialVersionUID)},
	{}
};

$MethodInfo _FuncString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncString, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncString, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncString",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncString_FieldInfo_,
	_FuncString_MethodInfo_
};

$Object* allocate$FuncString($Class* clazz) {
	return $of($alloc(FuncString));
}

void FuncString::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncString::execute($XPathContext* xctxt) {
	return $cast($XString, getArg0AsString(xctxt));
}

FuncString::FuncString() {
}

$Class* FuncString::load$($String* name, bool initialize) {
	$loadClass(FuncString, name, initialize, &_FuncString_ClassInfo_, allocate$FuncString);
	return class$;
}

$Class* FuncString::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com