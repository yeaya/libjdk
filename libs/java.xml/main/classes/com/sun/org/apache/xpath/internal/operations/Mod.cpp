#include <com/sun/org/apache/xpath/internal/operations/Mod.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <jcpp.h>

using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Operation = ::com::sun::org::apache::xpath::internal::operations::Operation;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _Mod_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Mod, serialVersionUID)},
	{}
};

$MethodInfo _Mod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Mod, init$, void)},
	{"num", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)D", nullptr, $PUBLIC, $virtualMethod(Mod, num, double, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(Mod, operate, $XObject*, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _Mod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.Mod",
	"com.sun.org.apache.xpath.internal.operations.Operation",
	nullptr,
	_Mod_FieldInfo_,
	_Mod_MethodInfo_
};

$Object* allocate$Mod($Class* clazz) {
	return $of($alloc(Mod));
}

void Mod::init$() {
	$Operation::init$();
}

$XObject* Mod::operate($XObject* left, $XObject* right) {
	return $new($XNumber, $Double::mod($nc(left)->num(), $nc(right)->num()));
}

double Mod::num($XPathContext* xctxt) {
	return ($Double::mod($nc(this->m_left)->num(xctxt), $nc(this->m_right)->num(xctxt)));
}

Mod::Mod() {
}

$Class* Mod::load$($String* name, bool initialize) {
	$loadClass(Mod, name, initialize, &_Mod_ClassInfo_, allocate$Mod);
	return class$;
}

$Class* Mod::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com