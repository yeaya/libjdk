#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinAttrDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <jcpp.h>

#undef SG_XSI

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $ClassInfo = ::java::lang::ClassInfo;
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

$MethodInfo _SchemaGrammar$BuiltinAttrDecl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;S)V", nullptr, $PUBLIC, $method(SchemaGrammar$BuiltinAttrDecl, init$, void, $String*, $String*, $XSSimpleType*, int16_t)},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$BuiltinAttrDecl, getAnnotation, $XSAnnotation*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$BuiltinAttrDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$BuiltinAttrDecl, reset, void)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;SSLcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$BuiltinAttrDecl, setValues, void, $String*, $String*, $XSSimpleType*, int16_t, int16_t, $ValidatedInfo*, $XSComplexTypeDecl*)},
	{}
};

$InnerClassInfo _SchemaGrammar$BuiltinAttrDecl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinAttrDecl", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "BuiltinAttrDecl", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SchemaGrammar$BuiltinAttrDecl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$BuiltinAttrDecl",
	"com.sun.org.apache.xerces.internal.impl.xs.XSAttributeDecl",
	nullptr,
	nullptr,
	_SchemaGrammar$BuiltinAttrDecl_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaGrammar$BuiltinAttrDecl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar"
};

$Object* allocate$SchemaGrammar$BuiltinAttrDecl($Class* clazz) {
	return $of($alloc(SchemaGrammar$BuiltinAttrDecl));
}

void SchemaGrammar$BuiltinAttrDecl::init$($String* name, $String* tns, $XSSimpleType* type, int16_t scope) {
	$XSAttributeDecl::init$();
	$set(this, fName, name);
	$set(this, fTargetNamespace, tns);
	$set(this, fType, type);
	this->fScope = scope;
}

void SchemaGrammar$BuiltinAttrDecl::setValues($String* name, $String* targetNamespace, $XSSimpleType* simpleType, int16_t constraintType, int16_t scope, $ValidatedInfo* valInfo, $XSComplexTypeDecl* enclosingCT) {
}

void SchemaGrammar$BuiltinAttrDecl::reset() {
}

$XSAnnotation* SchemaGrammar$BuiltinAttrDecl::getAnnotation() {
	return nullptr;
}

$XSNamespaceItem* SchemaGrammar$BuiltinAttrDecl::getNamespaceItem() {
	$init($SchemaGrammar);
	return $SchemaGrammar::SG_XSI;
}

SchemaGrammar$BuiltinAttrDecl::SchemaGrammar$BuiltinAttrDecl() {
}

$Class* SchemaGrammar$BuiltinAttrDecl::load$($String* name, bool initialize) {
	$loadClass(SchemaGrammar$BuiltinAttrDecl, name, initialize, &_SchemaGrammar$BuiltinAttrDecl_ClassInfo_, allocate$SchemaGrammar$BuiltinAttrDecl);
	return class$;
}

$Class* SchemaGrammar$BuiltinAttrDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com