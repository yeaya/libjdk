#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$XSAnyType.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <jcpp.h>

#undef ATTVAL_ANYTYPE
#undef CONTENTTYPE_MIXED
#undef DERIVATION_RESTRICTION
#undef EMPTY_LIST
#undef MODELGROUP_SEQUENCE
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_MODELGROUP
#undef PARTICLE_WILDCARD
#undef PC_LAX
#undef URI_SCHEMAFORSCHEMA

using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
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

$MethodInfo _SchemaGrammar$XSAnyType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaGrammar$XSAnyType, init$, void)},
	{"createAttrGrp", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PRIVATE, $method(SchemaGrammar$XSAnyType, createAttrGrp, $XSAttributeGroupDecl*)},
	{"createParticle", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $method(SchemaGrammar$XSAnyType, createParticle, $XSParticleDecl*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, getAnnotations, $XSObjectList*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, getNamespaceItem, $XSNamespaceItem*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, reset, void)},
	{"setContainsTypeID", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, setContainsTypeID, void)},
	{"setIsAbstractType", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, setIsAbstractType, void)},
	{"setIsAnonymous", "()V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, setIsAnonymous, void)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, setName, void, $String*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;SSSSZLcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)V", nullptr, $PUBLIC, $virtualMethod(SchemaGrammar$XSAnyType, setValues, void, $String*, $String*, $XSTypeDefinition*, int16_t, int16_t, int16_t, int16_t, bool, $XSAttributeGroupDecl*, $XSSimpleType*, $XSParticleDecl*)},
	{}
};

$InnerClassInfo _SchemaGrammar$XSAnyType_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$XSAnyType", "com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar", "XSAnyType", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SchemaGrammar$XSAnyType_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar$XSAnyType",
	"com.sun.org.apache.xerces.internal.impl.xs.XSComplexTypeDecl",
	nullptr,
	nullptr,
	_SchemaGrammar$XSAnyType_MethodInfo_,
	nullptr,
	nullptr,
	_SchemaGrammar$XSAnyType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.SchemaGrammar"
};

$Object* allocate$SchemaGrammar$XSAnyType($Class* clazz) {
	return $of($alloc(SchemaGrammar$XSAnyType));
}

void SchemaGrammar$XSAnyType::init$() {
	$XSComplexTypeDecl::init$();
	$init($SchemaSymbols);
	$set(this, fName, $SchemaSymbols::ATTVAL_ANYTYPE);
	$set(this, fTargetNamespace, $SchemaSymbols::URI_SCHEMAFORSCHEMA);
	$set(this, fBaseType, this);
	this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	this->fContentType = $XSComplexTypeDecl::CONTENTTYPE_MIXED;
	$set(this, fParticle, createParticle());
	$set(this, fAttrGrp, createAttrGrp());
}

void SchemaGrammar$XSAnyType::setValues($String* name, $String* targetNamespace, $XSTypeDefinition* baseType, int16_t derivedBy, int16_t schemaFinal, int16_t block, int16_t contentType, bool isAbstract, $XSAttributeGroupDecl* attrGrp, $XSSimpleType* simpleType, $XSParticleDecl* particle) {
}

void SchemaGrammar$XSAnyType::setName($String* name) {
}

void SchemaGrammar$XSAnyType::setIsAbstractType() {
}

void SchemaGrammar$XSAnyType::setContainsTypeID() {
}

void SchemaGrammar$XSAnyType::setIsAnonymous() {
}

void SchemaGrammar$XSAnyType::reset() {
}

$XSObjectList* SchemaGrammar$XSAnyType::getAnnotations() {
	$init($XSObjectListImpl);
	return $XSObjectListImpl::EMPTY_LIST;
}

$XSNamespaceItem* SchemaGrammar$XSAnyType::getNamespaceItem() {
	$init($SchemaGrammar);
	return $SchemaGrammar::SG_SchemaNS;
}

$XSAttributeGroupDecl* SchemaGrammar$XSAnyType::createAttrGrp() {
	$useLocalCurrentObjectStackCache();
	$var($XSWildcardDecl, wildcard, $new($XSWildcardDecl));
	wildcard->fProcessContents = $XSWildcardDecl::PC_LAX;
	$var($XSAttributeGroupDecl, attrGrp, $new($XSAttributeGroupDecl));
	$set(attrGrp, fAttributeWC, wildcard);
	return attrGrp;
}

$XSParticleDecl* SchemaGrammar$XSAnyType::createParticle() {
	$useLocalCurrentObjectStackCache();
	$var($XSWildcardDecl, wildcard, $new($XSWildcardDecl));
	wildcard->fProcessContents = $XSWildcardDecl::PC_LAX;
	$var($XSParticleDecl, particleW, $new($XSParticleDecl));
	particleW->fMinOccurs = 0;
	particleW->fMaxOccurs = $SchemaSymbols::OCCURRENCE_UNBOUNDED;
	particleW->fType = $XSParticleDecl::PARTICLE_WILDCARD;
	$set(particleW, fValue, wildcard);
	$var($XSModelGroupImpl, group, $new($XSModelGroupImpl));
	group->fCompositor = $XSModelGroupImpl::MODELGROUP_SEQUENCE;
	group->fParticleCount = 1;
	$set(group, fParticles, $new($XSParticleDeclArray, 1));
	$nc(group->fParticles)->set(0, particleW);
	$var($XSParticleDecl, particleG, $new($XSParticleDecl));
	particleG->fType = $XSParticleDecl::PARTICLE_MODELGROUP;
	$set(particleG, fValue, group);
	return particleG;
}

SchemaGrammar$XSAnyType::SchemaGrammar$XSAnyType() {
}

$Class* SchemaGrammar$XSAnyType::load$($String* name, bool initialize) {
	$loadClass(SchemaGrammar$XSAnyType, name, initialize, &_SchemaGrammar$XSAnyType_ClassInfo_, allocate$SchemaGrammar$XSAnyType);
	return class$;
}

$Class* SchemaGrammar$XSAnyType::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com