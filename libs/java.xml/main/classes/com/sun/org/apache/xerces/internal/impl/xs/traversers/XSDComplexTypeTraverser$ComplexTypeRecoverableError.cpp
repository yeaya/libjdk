#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser$ComplexTypeRecoverableError.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$() {
	$Exception::init$();
	$set(this, errorSubstText, nullptr);
	$set(this, errorElem, nullptr);
}

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::init$($String* msgKey, $ObjectArray* args, $Element* e) {
	$Exception::init$(msgKey);
	$set(this, errorSubstText, nullptr);
	$set(this, errorElem, nullptr);
	$set(this, errorSubstText, args);
	$set(this, errorElem, e);
}

XSDComplexTypeTraverser$ComplexTypeRecoverableError::XSDComplexTypeTraverser$ComplexTypeRecoverableError() {
}

XSDComplexTypeTraverser$ComplexTypeRecoverableError::XSDComplexTypeTraverser$ComplexTypeRecoverableError(const XSDComplexTypeTraverser$ComplexTypeRecoverableError& e) : $Exception(e) {
}

void XSDComplexTypeTraverser$ComplexTypeRecoverableError::throw$() {
	throw *this;
}

$Class* XSDComplexTypeTraverser$ComplexTypeRecoverableError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDComplexTypeTraverser$ComplexTypeRecoverableError, serialVersionUID)},
		{"errorSubstText", "[Ljava/lang/Object;", nullptr, 0, $field(XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorSubstText)},
		{"errorElem", "Lorg/w3c/dom/Element;", nullptr, 0, $field(XSDComplexTypeTraverser$ComplexTypeRecoverableError, errorElem)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XSDComplexTypeTraverser$ComplexTypeRecoverableError, init$, void)},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $method(XSDComplexTypeTraverser$ComplexTypeRecoverableError, init$, void, $String*, $ObjectArray*, $Element*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser", "ComplexTypeRecoverableError", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser$ComplexTypeRecoverableError",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDComplexTypeTraverser"
	};
	$loadClass(XSDComplexTypeTraverser$ComplexTypeRecoverableError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDComplexTypeTraverser$ComplexTypeRecoverableError);
	});
	return class$;
}

$Class* XSDComplexTypeTraverser$ComplexTypeRecoverableError::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com