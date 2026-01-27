#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <jcpp.h>

#undef ATTVAL_ANYSIMPLETYPE
#undef ATTVAL_ANYTYPE
#undef COMPLEX_TYPE
#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_SIMPLE
#undef CT_HAS_TYPE_ID
#undef CT_IS_ABSTRACT
#undef CT_IS_ANONYMOUS
#undef DERIVATION_ANY
#undef DERIVATION_EXTENSION
#undef DERIVATION_LIST
#undef DERIVATION_NONE
#undef DERIVATION_RESTRICTION
#undef DERIVATION_UNION
#undef EMPTY_LIST
#undef TYPE_DEFINITION
#undef URI_SCHEMAFORSCHEMA

using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $CMBuilder = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAttributeUse = ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSParticle = ::com::sun::org::apache::xerces::internal::xs::XSParticle;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSWildcard = ::com::sun::org::apache::xerces::internal::xs::XSWildcard;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSComplexTypeDecl_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, 0, $field(XSComplexTypeDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, 0, $field(XSComplexTypeDecl, fTargetNamespace)},
	{"fBaseType", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, 0, $field(XSComplexTypeDecl, fBaseType)},
	{"fDerivedBy", "S", nullptr, 0, $field(XSComplexTypeDecl, fDerivedBy)},
	{"fFinal", "S", nullptr, 0, $field(XSComplexTypeDecl, fFinal)},
	{"fBlock", "S", nullptr, 0, $field(XSComplexTypeDecl, fBlock)},
	{"fMiscFlags", "S", nullptr, 0, $field(XSComplexTypeDecl, fMiscFlags)},
	{"fAttrGrp", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, 0, $field(XSComplexTypeDecl, fAttrGrp)},
	{"fContentType", "S", nullptr, 0, $field(XSComplexTypeDecl, fContentType)},
	{"fXSSimpleType", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, 0, $field(XSComplexTypeDecl, fXSSimpleType)},
	{"fParticle", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $field(XSComplexTypeDecl, fParticle)},
	{"fCMValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $VOLATILE, $field(XSComplexTypeDecl, fCMValidator)},
	{"fUPACMValidator", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $VOLATILE, $field(XSComplexTypeDecl, fUPACMValidator)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;", nullptr, 0, $field(XSComplexTypeDecl, fAnnotations)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSComplexTypeDecl, fNamespaceItem)},
	{"DERIVATION_ANY", "I", nullptr, $STATIC | $FINAL, $constField(XSComplexTypeDecl, DERIVATION_ANY)},
	{"DERIVATION_RESTRICTION", "I", nullptr, $STATIC | $FINAL, $constField(XSComplexTypeDecl, DERIVATION_RESTRICTION)},
	{"DERIVATION_EXTENSION", "I", nullptr, $STATIC | $FINAL, $constField(XSComplexTypeDecl, DERIVATION_EXTENSION)},
	{"DERIVATION_UNION", "I", nullptr, $STATIC | $FINAL, $constField(XSComplexTypeDecl, DERIVATION_UNION)},
	{"DERIVATION_LIST", "I", nullptr, $STATIC | $FINAL, $constField(XSComplexTypeDecl, DERIVATION_LIST)},
	{"CT_IS_ABSTRACT", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSComplexTypeDecl, CT_IS_ABSTRACT)},
	{"CT_HAS_TYPE_ID", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSComplexTypeDecl, CT_HAS_TYPE_ID)},
	{"CT_IS_ANONYMOUS", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSComplexTypeDecl, CT_IS_ANONYMOUS)},
	{}
};

$MethodInfo _XSComplexTypeDecl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSComplexTypeDecl, init$, void)},
	{"appendTypeInfo", "(Ljava/lang/StringBuilder;)V", nullptr, 0, $virtualMethod(XSComplexTypeDecl, appendTypeInfo, void, $StringBuilder*)},
	{"containsTypeID", "()Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, containsTypeID, bool)},
	{"derivedFrom", "(Ljava/lang/String;Ljava/lang/String;S)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, derivedFrom, bool, $String*, $String*, int16_t)},
	{"derivedFromType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;S)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, derivedFromType, bool, $XSTypeDefinition*, int16_t)},
	{"getAbstract", "()Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAbstract, bool)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAnnotations, $XSObjectList*)},
	{"getAnonymous", "()Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAnonymous, bool)},
	{"getAttrGrp", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAttrGrp, $XSAttributeGroupDecl*)},
	{"getAttributeUse", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAttributeUse, $XSAttributeUse*, $String*, $String*)},
	{"getAttributeUses", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAttributeUses, $XSObjectList*)},
	{"getAttributeWildcard", "()Lcom/sun/org/apache/xerces/internal/xs/XSWildcard;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getAttributeWildcard, $XSWildcard*)},
	{"getBaseType", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getBaseType, $XSTypeDefinition*)},
	{"getContentModel", "(Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;)Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getContentModel, $XSCMValidator*, $CMBuilder*)},
	{"getContentModel", "(Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;Z)Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(XSComplexTypeDecl, getContentModel, $XSCMValidator*, $CMBuilder*, bool)},
	{"getContentType", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getContentType, int16_t)},
	{"getDerivationMethod", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getDerivationMethod, int16_t)},
	{"getFinal", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getFinal, int16_t)},
	{"getFinalSet", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getFinalSet, int16_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getParticle", "()Lcom/sun/org/apache/xerces/internal/xs/XSParticle;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getParticle, $XSParticle*)},
	{"getProhibitedSubstitutions", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getProhibitedSubstitutions, int16_t)},
	{"getSimpleType", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getSimpleType, $XSSimpleTypeDefinition*)},
	{"getTargetNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getTargetNamespace, $String*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getType, int16_t)},
	{"getTypeCategory", "()S", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getTypeCategory, int16_t)},
	{"getTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getTypeName, $String*)},
	{"getTypeNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, getTypeNamespace, $String*)},
	{"isDOMDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, isDOMDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isDerivedByAny", "(Ljava/lang/String;Ljava/lang/String;ILcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSComplexTypeDecl, isDerivedByAny, bool, $String*, $String*, int32_t, $XSTypeDefinition*)},
	{"isDerivedByExtension", "(Ljava/lang/String;Ljava/lang/String;ILcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSComplexTypeDecl, isDerivedByExtension, bool, $String*, $String*, int32_t, $XSTypeDefinition*)},
	{"isDerivedByRestriction", "(Ljava/lang/String;Ljava/lang/String;ILcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Z", nullptr, $PRIVATE, $method(XSComplexTypeDecl, isDerivedByRestriction, bool, $String*, $String*, int32_t, $XSTypeDefinition*)},
	{"isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, isDerivedFrom, bool, $String*, $String*, int32_t)},
	{"isFinal", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, isFinal, bool, int16_t)},
	{"isProhibitedSubstitution", "(S)Z", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, isProhibitedSubstitution, bool, int16_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, reset, void)},
	{"setContainsTypeID", "()V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, setContainsTypeID, void)},
	{"setIsAbstractType", "()V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, setIsAbstractType, void)},
	{"setIsAnonymous", "()V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, setIsAnonymous, void)},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, setName, void, $String*)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0, $virtualMethod(XSComplexTypeDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{"setValues", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;SSSSZLcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl;)V", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, setValues, void, $String*, $String*, $XSTypeDefinition*, int16_t, int16_t, int16_t, int16_t, bool, $XSAttributeGroupDecl*, $XSSimpleType*, $XSParticleDecl*, $XSObjectListImpl*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSComplexTypeDecl, toString, $String*)},
	{}
};

$ClassInfo _XSComplexTypeDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSComplexTypeDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSComplexTypeDefinition,org.w3c.dom.TypeInfo",
	_XSComplexTypeDecl_FieldInfo_,
	_XSComplexTypeDecl_MethodInfo_
};

$Object* allocate$XSComplexTypeDecl($Class* clazz) {
	return $of($alloc(XSComplexTypeDecl));
}

int32_t XSComplexTypeDecl::hashCode() {
	 return this->$XSComplexTypeDefinition::hashCode();
}

bool XSComplexTypeDecl::equals(Object$* arg0) {
	 return this->$XSComplexTypeDefinition::equals(arg0);
}

$Object* XSComplexTypeDecl::clone() {
	 return this->$XSComplexTypeDefinition::clone();
}

void XSComplexTypeDecl::finalize() {
	this->$XSComplexTypeDefinition::finalize();
}

void XSComplexTypeDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fBaseType, nullptr);
	this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	this->fFinal = $XSConstants::DERIVATION_NONE;
	this->fBlock = $XSConstants::DERIVATION_NONE;
	this->fMiscFlags = (int16_t)0;
	$set(this, fAttrGrp, nullptr);
	this->fContentType = $XSComplexTypeDefinition::CONTENTTYPE_EMPTY;
	$set(this, fXSSimpleType, nullptr);
	$set(this, fParticle, nullptr);
	$set(this, fCMValidator, nullptr);
	$set(this, fUPACMValidator, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fNamespaceItem, nullptr);
}

void XSComplexTypeDecl::setValues($String* name, $String* targetNamespace, $XSTypeDefinition* baseType, int16_t derivedBy, int16_t schemaFinal, int16_t block, int16_t contentType, bool isAbstract, $XSAttributeGroupDecl* attrGrp, $XSSimpleType* simpleType, $XSParticleDecl* particle, $XSObjectListImpl* annotations) {
	$set(this, fTargetNamespace, targetNamespace);
	$set(this, fBaseType, baseType);
	this->fDerivedBy = derivedBy;
	this->fFinal = schemaFinal;
	this->fBlock = block;
	this->fContentType = contentType;
	if (isAbstract) {
		this->fMiscFlags |= XSComplexTypeDecl::CT_IS_ABSTRACT;
	}
	$set(this, fAttrGrp, attrGrp);
	$set(this, fXSSimpleType, simpleType);
	$set(this, fParticle, particle);
	$set(this, fAnnotations, annotations);
}

void XSComplexTypeDecl::setName($String* name) {
	$set(this, fName, name);
}

int16_t XSComplexTypeDecl::getTypeCategory() {
	return $XSTypeDefinition::COMPLEX_TYPE;
}

$String* XSComplexTypeDecl::getTypeName() {
	return this->fName;
}

int16_t XSComplexTypeDecl::getFinalSet() {
	return this->fFinal;
}

$String* XSComplexTypeDecl::getTargetNamespace() {
	return this->fTargetNamespace;
}

bool XSComplexTypeDecl::containsTypeID() {
	return (((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSComplexTypeDecl::CT_HAS_TYPE_ID)) != 0);
}

void XSComplexTypeDecl::setIsAbstractType() {
	this->fMiscFlags |= XSComplexTypeDecl::CT_IS_ABSTRACT;
}

void XSComplexTypeDecl::setContainsTypeID() {
	this->fMiscFlags |= XSComplexTypeDecl::CT_HAS_TYPE_ID;
}

void XSComplexTypeDecl::setIsAnonymous() {
	this->fMiscFlags |= XSComplexTypeDecl::CT_IS_ANONYMOUS;
}

$XSCMValidator* XSComplexTypeDecl::getContentModel($CMBuilder* cmBuilder) {
	if (this->fContentType == XSComplexTypeDecl::CONTENTTYPE_SIMPLE || this->fContentType == XSComplexTypeDecl::CONTENTTYPE_EMPTY) {
		return nullptr;
	}
	if (this->fCMValidator == nullptr) {
		$set(this, fCMValidator, getContentModel(cmBuilder, false));
	}
	return this->fCMValidator;
}

$XSCMValidator* XSComplexTypeDecl::getContentModel($CMBuilder* cmBuilder, bool forUPA) {
	$synchronized(this) {
		if (this->fCMValidator == nullptr) {
			if (forUPA) {
				if (this->fUPACMValidator == nullptr) {
					$set(this, fUPACMValidator, $nc(cmBuilder)->getContentModel(this, true));
					if (this->fUPACMValidator != nullptr && !$nc(this->fUPACMValidator)->isCompactedForUPA()) {
						$set(this, fCMValidator, this->fUPACMValidator);
					}
				}
				return this->fUPACMValidator;
			} else {
				$set(this, fCMValidator, $nc(cmBuilder)->getContentModel(this, false));
			}
		}
		return this->fCMValidator;
	}
}

$XSAttributeGroupDecl* XSComplexTypeDecl::getAttrGrp() {
	return this->fAttrGrp;
}

$String* XSComplexTypeDecl::toString() {
	$var($StringBuilder, str, $new($StringBuilder, 192));
	appendTypeInfo(str);
	return str->toString();
}

void XSComplexTypeDecl::appendTypeInfo($StringBuilder* str) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, contentType, $new($StringArray, {
		"EMPTY"_s,
		"SIMPLE"_s,
		"ELEMENT"_s,
		"MIXED"_s
	}));
	$var($StringArray, derivedBy, $new($StringArray, {
		"EMPTY"_s,
		"EXTENSION"_s,
		"RESTRICTION"_s
	}));
	$nc(str)->append("Complex type name=\'"_s)->append(this->fTargetNamespace)->append(u',')->append($(getTypeName()))->append("\', "_s);
	if (this->fBaseType != nullptr) {
		str->append(" base type name=\'"_s)->append($($nc(this->fBaseType)->getName()))->append("\', "_s);
	}
	str->append(" content type=\'"_s)->append(contentType->get(this->fContentType))->append("\', "_s);
	str->append(" isAbstract=\'"_s)->append(getAbstract())->append("\', "_s);
	str->append(" hasTypeId=\'"_s)->append(containsTypeID())->append("\', "_s);
	str->append(" final=\'"_s)->append((int32_t)this->fFinal)->append("\', "_s);
	str->append(" block=\'"_s)->append((int32_t)this->fBlock)->append("\', "_s);
	if (this->fParticle != nullptr) {
		str->append(" particle=\'"_s)->append($($nc(this->fParticle)->toString()))->append("\', "_s);
	}
	str->append(" derivedBy=\'"_s)->append(derivedBy->get(this->fDerivedBy))->append("\'. "_s);
}

bool XSComplexTypeDecl::derivedFromType($XSTypeDefinition* ancestor, int16_t derivationMethod) {
	if (ancestor == nullptr) {
		return false;
	}
	$init($SchemaGrammar);
	if ($equals(ancestor, $SchemaGrammar::fAnyType)) {
		return true;
	}
	$var($XSTypeDefinition, type, this);
	while (type != ancestor && !$equals(type, $SchemaGrammar::fAnySimpleType) && !$equals(type, $SchemaGrammar::fAnyType)) {
		$assign(type, $nc(type)->getBaseType());
	}
	return type == ancestor;
}

bool XSComplexTypeDecl::derivedFrom($String* ancestorNS, $String* ancestorName, int16_t derivationMethod) {
	$useLocalCurrentObjectStackCache();
	if (ancestorName == nullptr) {
		return false;
	}
	$init($SchemaSymbols);
	bool var$0 = ancestorNS != nullptr && ancestorNS->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
	if (var$0 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYTYPE)) {
		return true;
	}
	$var($XSTypeDefinition, type, this);
	while (true) {
		bool var$1 = $nc(ancestorName)->equals($($nc(type)->getName()));
		if (var$1) {
			bool var$2 = (ancestorNS == nullptr && $nc(type)->getNamespace() == nullptr);
			var$1 = (var$2 || (ancestorNS != nullptr && ancestorNS->equals($($nc(type)->getNamespace()))));
		}
		$init($SchemaGrammar);
		if (!(!(var$1) && !$equals(type, $SchemaGrammar::fAnySimpleType) && !$equals(type, $SchemaGrammar::fAnyType))) {
			break;
		}
		{
			$assign(type, $nc(type)->getBaseType());
		}
	}
	$init($SchemaGrammar);
	return !$equals(type, $SchemaGrammar::fAnySimpleType) && !$equals(type, $SchemaGrammar::fAnyType);
}

bool XSComplexTypeDecl::isDOMDerivedFrom($String* ancestorNS, $String* ancestorName$renamed, int32_t derivationMethod) {
	$var($String, ancestorName, ancestorName$renamed);
	if (ancestorName == nullptr) {
		return false;
	}
	$init($SchemaSymbols);
	bool var$0 = ancestorNS != nullptr && ancestorNS->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
	if (var$0 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYTYPE) && (derivationMethod == XSComplexTypeDecl::DERIVATION_RESTRICTION && derivationMethod == XSComplexTypeDecl::DERIVATION_EXTENSION)) {
		return true;
	}
	if (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_RESTRICTION)) != 0) {
		if (isDerivedByRestriction(ancestorNS, ancestorName, derivationMethod, this)) {
			return true;
		}
	}
	if (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_EXTENSION)) != 0) {
		if (isDerivedByExtension(ancestorNS, ancestorName, derivationMethod, this)) {
			return true;
		}
	}
	if (((((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_LIST)) != 0) || (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_UNION)) != 0)) && (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_RESTRICTION)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_EXTENSION)) == 0)) {
		bool var$1 = $nc(ancestorNS)->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
		if (var$1 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYTYPE)) {
			$assign(ancestorName, $SchemaSymbols::ATTVAL_ANYSIMPLETYPE);
		}
		bool var$2 = $nc(this->fName)->equals($SchemaSymbols::ATTVAL_ANYTYPE);
		if (!(var$2 && $nc(this->fTargetNamespace)->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA))) {
			if (this->fBaseType != nullptr && $instanceOf($XSSimpleTypeDecl, this->fBaseType)) {
				return $nc(($cast($XSSimpleTypeDecl, this->fBaseType)))->isDOMDerivedFrom(ancestorNS, ancestorName, derivationMethod);
			} else if (this->fBaseType != nullptr && $instanceOf(XSComplexTypeDecl, this->fBaseType)) {
				return $nc(($cast(XSComplexTypeDecl, this->fBaseType)))->isDOMDerivedFrom(ancestorNS, ancestorName, derivationMethod);
			}
		}
	}
	if ((((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_EXTENSION)) == 0) && ((((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_RESTRICTION)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_LIST)) == 0) && (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_UNION)) == 0))) {
		return isDerivedByAny(ancestorNS, ancestorName, derivationMethod, this);
	}
	return false;
}

bool XSComplexTypeDecl::isDerivedByAny($String* ancestorNS, $String* ancestorName, int32_t derivationMethod, $XSTypeDefinition* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, type, type$renamed);
	$var($XSTypeDefinition, oldType, nullptr);
	bool derivedFrom = false;
	while (type != nullptr && type != oldType) {
		bool var$0 = ($nc(ancestorName)->equals($(type->getName())));
		if (var$0) {
			bool var$1 = (ancestorNS == nullptr && type->getNamespace() == nullptr);
			var$0 = (var$1 || (ancestorNS != nullptr && ancestorNS->equals($(type->getNamespace()))));
		}
		if (var$0) {
			derivedFrom = true;
			break;
		}
		if (isDerivedByRestriction(ancestorNS, ancestorName, derivationMethod, type)) {
			return true;
		} else if (!isDerivedByExtension(ancestorNS, ancestorName, derivationMethod, type)) {
			return true;
		}
		$assign(oldType, type);
		$assign(type, type->getBaseType());
	}
	return derivedFrom;
}

bool XSComplexTypeDecl::isDerivedByRestriction($String* ancestorNS, $String* ancestorName$renamed, int32_t derivationMethod, $XSTypeDefinition* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, ancestorName, ancestorName$renamed);
	$var($XSTypeDefinition, type, type$renamed);
	$var($XSTypeDefinition, oldType, nullptr);
	while (type != nullptr && type != oldType) {
		$init($SchemaSymbols);
		bool var$0 = ancestorNS != nullptr && ancestorNS->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
		if (var$0 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYSIMPLETYPE)) {
			return false;
		}
		bool var$2 = ($nc(ancestorName)->equals($(type->getName())));
		bool var$1 = var$2 && (ancestorNS != nullptr && ancestorNS->equals($(type->getNamespace())));
		if (var$1 || (type->getNamespace() == nullptr && ancestorNS == nullptr)) {
			return true;
		}
		if ($instanceOf($XSSimpleTypeDecl, type)) {
			bool var$3 = $nc(ancestorNS)->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
			if (var$3 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYTYPE)) {
				$assign(ancestorName, $SchemaSymbols::ATTVAL_ANYSIMPLETYPE);
			}
			return $nc(($cast($XSSimpleTypeDecl, type)))->isDOMDerivedFrom(ancestorNS, ancestorName, derivationMethod);
		} else if ($nc(($cast(XSComplexTypeDecl, type)))->getDerivationMethod() != $XSConstants::DERIVATION_RESTRICTION) {
			return false;
		}
		$assign(oldType, type);
		$assign(type, type->getBaseType());
	}
	return false;
}

bool XSComplexTypeDecl::isDerivedByExtension($String* ancestorNS, $String* ancestorName$renamed, int32_t derivationMethod, $XSTypeDefinition* type$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, ancestorName, ancestorName$renamed);
	$var($XSTypeDefinition, type, type$renamed);
	bool extension = false;
	$var($XSTypeDefinition, oldType, nullptr);
	while (type != nullptr && type != oldType) {
		$init($SchemaSymbols);
		bool var$2 = ancestorNS != nullptr && ancestorNS->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
		bool var$1 = var$2 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYSIMPLETYPE);
		bool var$0 = var$1 && $nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($(type->getNamespace()));
		if (var$0 && $nc($SchemaSymbols::ATTVAL_ANYTYPE)->equals($(type->getName()))) {
			break;
		}
		bool var$3 = ($nc(ancestorName)->equals($(type->getName())));
		if (var$3) {
			bool var$4 = (ancestorNS == nullptr && type->getNamespace() == nullptr);
			var$3 = (var$4 || (ancestorNS != nullptr && ancestorNS->equals($(type->getNamespace()))));
		}
		if (var$3) {
			return extension;
		}
		if ($instanceOf($XSSimpleTypeDecl, type)) {
			bool var$5 = $nc(ancestorNS)->equals($SchemaSymbols::URI_SCHEMAFORSCHEMA);
			if (var$5 && $nc(ancestorName)->equals($SchemaSymbols::ATTVAL_ANYTYPE)) {
				$assign(ancestorName, $SchemaSymbols::ATTVAL_ANYSIMPLETYPE);
			}
			if (((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_EXTENSION)) != 0) {
				return extension & $nc(($cast($XSSimpleTypeDecl, type)))->isDOMDerivedFrom(ancestorNS, ancestorName, ((int32_t)(derivationMethod & (uint32_t)XSComplexTypeDecl::DERIVATION_RESTRICTION)));
			} else {
				return extension & $nc(($cast($XSSimpleTypeDecl, type)))->isDOMDerivedFrom(ancestorNS, ancestorName, derivationMethod);
			}
		} else if ($nc(($cast(XSComplexTypeDecl, type)))->getDerivationMethod() == $XSConstants::DERIVATION_EXTENSION) {
			extension = extension | true;
		}
		$assign(oldType, type);
		$assign(type, type->getBaseType());
	}
	return false;
}

void XSComplexTypeDecl::reset() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fBaseType, nullptr);
	this->fDerivedBy = $XSConstants::DERIVATION_RESTRICTION;
	this->fFinal = $XSConstants::DERIVATION_NONE;
	this->fBlock = $XSConstants::DERIVATION_NONE;
	this->fMiscFlags = (int16_t)0;
	$nc(this->fAttrGrp)->reset();
	this->fContentType = $XSComplexTypeDefinition::CONTENTTYPE_EMPTY;
	$set(this, fXSSimpleType, nullptr);
	$set(this, fParticle, nullptr);
	$set(this, fCMValidator, nullptr);
	$set(this, fUPACMValidator, nullptr);
	if (this->fAnnotations != nullptr) {
		$nc(this->fAnnotations)->clearXSObjectList();
	}
	$set(this, fAnnotations, nullptr);
}

int16_t XSComplexTypeDecl::getType() {
	return $XSConstants::TYPE_DEFINITION;
}

$String* XSComplexTypeDecl::getName() {
	return getAnonymous() ? ($String*)nullptr : this->fName;
}

bool XSComplexTypeDecl::getAnonymous() {
	return (((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSComplexTypeDecl::CT_IS_ANONYMOUS)) != 0);
}

$String* XSComplexTypeDecl::getNamespace() {
	return this->fTargetNamespace;
}

$XSTypeDefinition* XSComplexTypeDecl::getBaseType() {
	return this->fBaseType;
}

int16_t XSComplexTypeDecl::getDerivationMethod() {
	return this->fDerivedBy;
}

bool XSComplexTypeDecl::isFinal(int16_t derivation) {
	return ((int32_t)(this->fFinal & (uint32_t)(int32_t)derivation)) != 0;
}

int16_t XSComplexTypeDecl::getFinal() {
	return this->fFinal;
}

bool XSComplexTypeDecl::getAbstract() {
	return (((int32_t)(this->fMiscFlags & (uint32_t)(int32_t)XSComplexTypeDecl::CT_IS_ABSTRACT)) != 0);
}

$XSObjectList* XSComplexTypeDecl::getAttributeUses() {
	return $nc(this->fAttrGrp)->getAttributeUses();
}

$XSWildcard* XSComplexTypeDecl::getAttributeWildcard() {
	return $nc(this->fAttrGrp)->getAttributeWildcard();
}

int16_t XSComplexTypeDecl::getContentType() {
	return this->fContentType;
}

$XSSimpleTypeDefinition* XSComplexTypeDecl::getSimpleType() {
	return this->fXSSimpleType;
}

$XSParticle* XSComplexTypeDecl::getParticle() {
	return this->fParticle;
}

bool XSComplexTypeDecl::isProhibitedSubstitution(int16_t prohibited) {
	return ((int32_t)(this->fBlock & (uint32_t)(int32_t)prohibited)) != 0;
}

int16_t XSComplexTypeDecl::getProhibitedSubstitutions() {
	return this->fBlock;
}

$XSObjectList* XSComplexTypeDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? static_cast<$XSObjectList*>(this->fAnnotations) : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSComplexTypeDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSComplexTypeDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

$XSAttributeUse* XSComplexTypeDecl::getAttributeUse($String* namespace$, $String* name) {
	return $nc(this->fAttrGrp)->getAttributeUse(namespace$, name);
}

$String* XSComplexTypeDecl::getTypeNamespace() {
	return getNamespace();
}

bool XSComplexTypeDecl::isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) {
	return isDOMDerivedFrom(typeNamespaceArg, typeNameArg, derivationMethod);
}

XSComplexTypeDecl::XSComplexTypeDecl() {
}

$Class* XSComplexTypeDecl::load$($String* name, bool initialize) {
	$loadClass(XSComplexTypeDecl, name, initialize, &_XSComplexTypeDecl_ClassInfo_, allocate$XSComplexTypeDecl);
	return class$;
}

$Class* XSComplexTypeDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com