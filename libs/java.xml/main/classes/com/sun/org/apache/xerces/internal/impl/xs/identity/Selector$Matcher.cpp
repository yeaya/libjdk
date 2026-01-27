#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$Matcher.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $FieldActivator = ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $Selector = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector;
using $Selector$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$XPath;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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

$FieldInfo _Selector$Matcher_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector;", nullptr, $FINAL | $SYNTHETIC, $field(Selector$Matcher, this$0)},
	{"fFieldActivator", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator;", nullptr, $PROTECTED | $FINAL, $field(Selector$Matcher, fFieldActivator)},
	{"fInitialDepth", "I", nullptr, $PROTECTED | $FINAL, $field(Selector$Matcher, fInitialDepth)},
	{"fElementDepth", "I", nullptr, $PROTECTED, $field(Selector$Matcher, fElementDepth)},
	{"fMatchedDepth", "I", nullptr, $PROTECTED, $field(Selector$Matcher, fMatchedDepth)},
	{}
};

$MethodInfo _Selector$Matcher_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator;I)V", nullptr, $PUBLIC, $method(Selector$Matcher, init$, void, $Selector*, $Selector$XPath*, $FieldActivator*, int32_t)},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PUBLIC, $virtualMethod(Selector$Matcher, endElement, void, $QName*, $XSTypeDefinition*, bool, Object$*, int16_t, $ShortList*)},
	{"getIdentityConstraint", "()Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $virtualMethod(Selector$Matcher, getIdentityConstraint, $IdentityConstraint*)},
	{"getInitialDepth", "()I", nullptr, $PUBLIC, $virtualMethod(Selector$Matcher, getInitialDepth, int32_t)},
	{"startDocumentFragment", "()V", nullptr, $PUBLIC, $virtualMethod(Selector$Matcher, startDocumentFragment, void)},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $virtualMethod(Selector$Matcher, startElement, void, $QName*, $XMLAttributes*)},
	{}
};

$InnerClassInfo _Selector$Matcher_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$Matcher", "com.sun.org.apache.xerces.internal.impl.xs.identity.Selector", "Matcher", $PUBLIC},
	{}
};

$ClassInfo _Selector$Matcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$Matcher",
	"com.sun.org.apache.xerces.internal.impl.xs.identity.XPathMatcher",
	nullptr,
	_Selector$Matcher_FieldInfo_,
	_Selector$Matcher_MethodInfo_,
	nullptr,
	nullptr,
	_Selector$Matcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector"
};

$Object* allocate$Selector$Matcher($Class* clazz) {
	return $of($alloc(Selector$Matcher));
}

void Selector$Matcher::init$($Selector* this$0, $Selector$XPath* xpath, $FieldActivator* activator, int32_t initialDepth) {
	$set(this, this$0, this$0);
	$XPathMatcher::init$(xpath);
	$set(this, fFieldActivator, activator);
	this->fInitialDepth = initialDepth;
}

void Selector$Matcher::startDocumentFragment() {
	$XPathMatcher::startDocumentFragment();
	this->fElementDepth = 0;
	this->fMatchedDepth = -1;
}

void Selector$Matcher::startElement($QName* element, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$XPathMatcher::startElement(element, attributes);
	++this->fElementDepth;
	if (isMatched()) {
		this->fMatchedDepth = this->fElementDepth;
		$nc(this->fFieldActivator)->startValueScopeFor(this->this$0->fIdentityConstraint, this->fInitialDepth);
		int32_t count = $nc(this->this$0->fIdentityConstraint)->getFieldCount();
		for (int32_t i = 0; i < count; ++i) {
			$var($Field, field, $nc(this->this$0->fIdentityConstraint)->getFieldAt(i));
			$var($XPathMatcher, matcher, $nc(this->fFieldActivator)->activateField(field, this->fInitialDepth));
			$nc(matcher)->startElement(element, attributes);
		}
	}
}

void Selector$Matcher::endElement($QName* element, $XSTypeDefinition* type, bool nillable, Object$* actualValue, int16_t valueType, $ShortList* itemValueType) {
	$XPathMatcher::endElement(element, type, nillable, actualValue, valueType, itemValueType);
	if (this->fElementDepth-- == this->fMatchedDepth) {
		this->fMatchedDepth = -1;
		$nc(this->fFieldActivator)->endValueScopeFor(this->this$0->fIdentityConstraint, this->fInitialDepth);
	}
}

$IdentityConstraint* Selector$Matcher::getIdentityConstraint() {
	return this->this$0->fIdentityConstraint;
}

int32_t Selector$Matcher::getInitialDepth() {
	return this->fInitialDepth;
}

Selector$Matcher::Selector$Matcher() {
}

$Class* Selector$Matcher::load$($String* name, bool initialize) {
	$loadClass(Selector$Matcher, name, initialize, &_Selector$Matcher_ClassInfo_, allocate$Selector$Matcher);
	return class$;
}

$Class* Selector$Matcher::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com