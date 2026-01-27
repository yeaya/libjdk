#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$Matcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <jcpp.h>

using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $FieldActivator = ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $Selector$Matcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$Matcher;
using $Selector$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$FieldInfo _Selector_FieldInfo_[] = {
	{"fXPath", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath;", nullptr, $PROTECTED | $FINAL, $field(Selector, fXPath)},
	{"fIdentityConstraint", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PROTECTED | $FINAL, $field(Selector, fIdentityConstraint)},
	{"fIDConstraint", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PROTECTED, $field(Selector, fIDConstraint)},
	{}
};

$MethodInfo _Selector_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PUBLIC, $method(Selector, init$, void, $Selector$XPath*, $IdentityConstraint*)},
	{"createMatcher", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator;I)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PUBLIC, $virtualMethod(Selector, createMatcher, $XPathMatcher*, $FieldActivator*, int32_t)},
	{"getIDConstraint", "()Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $virtualMethod(Selector, getIDConstraint, $IdentityConstraint*)},
	{"getXPath", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath;", nullptr, $PUBLIC, $virtualMethod(Selector, getXPath, $XPath*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Selector, toString, $String*)},
	{}
};

$InnerClassInfo _Selector_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$Matcher", "com.sun.org.apache.xerces.internal.impl.xs.identity.Selector", "Matcher", $PUBLIC},
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$XPath", "com.sun.org.apache.xerces.internal.impl.xs.identity.Selector", "XPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Selector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector",
	"java.lang.Object",
	nullptr,
	_Selector_FieldInfo_,
	_Selector_MethodInfo_,
	nullptr,
	nullptr,
	_Selector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$Matcher,com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$XPath"
};

$Object* allocate$Selector($Class* clazz) {
	return $of($alloc(Selector));
}

void Selector::init$($Selector$XPath* xpath, $IdentityConstraint* identityConstraint) {
	$set(this, fXPath, xpath);
	$set(this, fIdentityConstraint, identityConstraint);
}

$XPath* Selector::getXPath() {
	return this->fXPath;
}

$IdentityConstraint* Selector::getIDConstraint() {
	return this->fIdentityConstraint;
}

$XPathMatcher* Selector::createMatcher($FieldActivator* activator, int32_t initialDepth) {
	return $new($Selector$Matcher, this, this->fXPath, activator, initialDepth);
}

$String* Selector::toString() {
	return $nc(this->fXPath)->toString();
}

Selector::Selector() {
}

$Class* Selector::load$($String* name, bool initialize) {
	$loadClass(Selector, name, initialize, &_Selector_ClassInfo_, allocate$Selector);
	return class$;
}

$Class* Selector::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com