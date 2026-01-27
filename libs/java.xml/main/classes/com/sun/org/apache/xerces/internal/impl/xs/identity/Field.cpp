#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$Matcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <jcpp.h>

using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $Field$Matcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$Matcher;
using $Field$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore;
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

$FieldInfo _Field_FieldInfo_[] = {
	{"fXPath", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath;", nullptr, $PROTECTED | $FINAL, $field(Field, fXPath)},
	{"fIdentityConstraint", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PROTECTED | $FINAL, $field(Field, fIdentityConstraint)},
	{}
};

$MethodInfo _Field_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PUBLIC, $method(Field, init$, void, $Field$XPath*, $IdentityConstraint*)},
	{"createMatcher", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore;)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PUBLIC, $virtualMethod(Field, createMatcher, $XPathMatcher*, $ValueStore*)},
	{"getIdentityConstraint", "()Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PUBLIC, $virtualMethod(Field, getIdentityConstraint, $IdentityConstraint*)},
	{"getXPath", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath;", nullptr, $PUBLIC, $virtualMethod(Field, getXPath, $XPath*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Field, toString, $String*)},
	{}
};

$InnerClassInfo _Field_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$Matcher", "com.sun.org.apache.xerces.internal.impl.xs.identity.Field", "Matcher", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$XPath", "com.sun.org.apache.xerces.internal.impl.xs.identity.Field", "XPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Field_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Field",
	"java.lang.Object",
	nullptr,
	_Field_FieldInfo_,
	_Field_MethodInfo_,
	nullptr,
	nullptr,
	_Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$Matcher,com.sun.org.apache.xerces.internal.impl.xs.identity.Field$XPath"
};

$Object* allocate$Field($Class* clazz) {
	return $of($alloc(Field));
}

void Field::init$($Field$XPath* xpath, $IdentityConstraint* identityConstraint) {
	$set(this, fXPath, xpath);
	$set(this, fIdentityConstraint, identityConstraint);
}

$XPath* Field::getXPath() {
	return this->fXPath;
}

$IdentityConstraint* Field::getIdentityConstraint() {
	return this->fIdentityConstraint;
}

$XPathMatcher* Field::createMatcher($ValueStore* store) {
	return $new($Field$Matcher, this, this->fXPath, store);
}

$String* Field::toString() {
	return $nc(this->fXPath)->toString();
}

Field::Field() {
}

$Class* Field::load$($String* name, bool initialize) {
	$loadClass(Field, name, initialize, &_Field_ClassInfo_, allocate$Field);
	return class$;
}

$Class* Field::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com