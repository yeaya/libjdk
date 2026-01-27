#include <com/sun/org/apache/xpath/internal/functions/FuncNumber.h>

#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <jcpp.h>

using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionDef1Arg = ::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg;
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

$FieldInfo _FuncNumber_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncNumber, serialVersionUID)},
	{}
};

$MethodInfo _FuncNumber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncNumber, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncNumber, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _FuncNumber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncNumber",
	"com.sun.org.apache.xpath.internal.functions.FunctionDef1Arg",
	nullptr,
	_FuncNumber_FieldInfo_,
	_FuncNumber_MethodInfo_
};

$Object* allocate$FuncNumber($Class* clazz) {
	return $of($alloc(FuncNumber));
}

void FuncNumber::init$() {
	$FunctionDef1Arg::init$();
}

$XObject* FuncNumber::execute($XPathContext* xctxt) {
	return $new($XNumber, getArg0AsNumber(xctxt));
}

FuncNumber::FuncNumber() {
}

$Class* FuncNumber::load$($String* name, bool initialize) {
	$loadClass(FuncNumber, name, initialize, &_FuncNumber_ClassInfo_, allocate$FuncNumber);
	return class$;
}

$Class* FuncNumber::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com