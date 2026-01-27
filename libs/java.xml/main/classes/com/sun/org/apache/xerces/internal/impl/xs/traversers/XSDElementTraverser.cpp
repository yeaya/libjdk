#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDElementTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDUniqueOrKeyTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_ABSTRACT
#undef ATTIDX_BLOCK
#undef ATTIDX_DEFAULT
#undef ATTIDX_FINAL
#undef ATTIDX_FIXED
#undef ATTIDX_FORM
#undef ATTIDX_FROMDEFAULT
#undef ATTIDX_MAXOCCURS
#undef ATTIDX_MINOCCURS
#undef ATTIDX_NAME
#undef ATTIDX_NILLABLE
#undef ATTIDX_REF
#undef ATTIDX_SUBSGROUP
#undef ATTIDX_TYPE
#undef ATTRIBUTE_TYPE
#undef ATT_MINOCCURS
#undef ATT_NAME
#undef ATT_REF
#undef COMPLEX_TYPE
#undef DERIVATION_ALL
#undef DERIVATION_EXTENSION
#undef DERIVATION_EXTENSION_RESTRICTION_SUBSTITION
#undef DERIVATION_RESTRICTION
#undef DERIVATION_SUBSTITUTION
#undef ELEMENT_TYPE
#undef ELT_ANNOTATION
#undef ELT_COMPLEXTYPE
#undef ELT_ELEMENT
#undef ELT_KEY
#undef ELT_KEYREF
#undef ELT_SIMPLETYPE
#undef ELT_UNIQUE
#undef EMPTY_LIST
#undef FORM_QUALIFIED
#undef NO_NAME
#undef PARTICLE_ELEMENT
#undef PARTICLE_EMPTY
#undef SIMPLE_TYPE
#undef TYPEDECL_TYPE
#undef VC_DEFAULT
#undef VC_FIXED
#undef VC_NONE

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaNamespaceSupport = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDComplexTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDComplexTypeTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDSimpleTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDSimpleTypeTraverser;
using $XSDUniqueOrKeyTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDUniqueOrKeyTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Attr = ::org::w3c::dom::Attr;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDElementTraverser_FieldInfo_[] = {
	{"fTempElementDecl", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PROTECTED | $FINAL, $field(XSDElementTraverser, fTempElementDecl)},
	{"fDeferTraversingLocalElements", "Z", nullptr, 0, $field(XSDElementTraverser, fDeferTraversingLocalElements)},
	{}
};

$MethodInfo _XSDElementTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDElementTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;ZLjava/util/Locale;)V", nullptr, 0, $virtualMethod(XSDElementTraverser, reset, void, $SymbolTable*, bool, $Locale*)},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, 0, $virtualMethod(XSDElementTraverser, traverseGlobal, $XSElementDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, 0, $virtualMethod(XSDElementTraverser, traverseLocal, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, $XSObject*)},
	{"traverseLocal", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILcom/sun/org/apache/xerces/internal/xs/XSObject;[Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(XSDElementTraverser, traverseLocal, void, $XSParticleDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, int32_t, $XSObject*, $StringArray*)},
	{"traverseNamedElement", "(Lorg/w3c/dom/Element;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ZLcom/sun/org/apache/xerces/internal/xs/XSObject;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, 0, $virtualMethod(XSDElementTraverser, traverseNamedElement, $XSElementDecl*, $Element*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*, bool, $XSObject*)},
	{}
};

$ClassInfo _XSDElementTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDElementTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	_XSDElementTraverser_FieldInfo_,
	_XSDElementTraverser_MethodInfo_
};

$Object* allocate$XSDElementTraverser($Class* clazz) {
	return $of($alloc(XSDElementTraverser));
}

void XSDElementTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
	$set(this, fTempElementDecl, $new($XSElementDecl));
}

$XSParticleDecl* XSDElementTraverser::traverseLocal($Element* elmDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, $XSObject* parent) {
	$useLocalCurrentObjectStackCache();
	$var($XSParticleDecl, particle, nullptr);
	if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
		$assign(particle, $nc($nc(this->fSchemaHandler)->fDeclPool)->getParticleDecl());
	} else {
		$assign(particle, $new($XSParticleDecl));
	}
	if (this->fDeferTraversingLocalElements) {
		$nc(particle)->fType = $XSParticleDecl::PARTICLE_ELEMENT;
		$init($SchemaSymbols);
		$var($Attr, attr, $nc(elmDecl)->getAttributeNode($SchemaSymbols::ATT_MINOCCURS));
		if (attr != nullptr) {
			$var($String, min, attr->getValue());
			try {
				int32_t m = $Integer::parseInt($($XMLChar::trim(min)));
				if (m >= 0) {
					particle->fMinOccurs = m;
				}
			} catch ($NumberFormatException& ex) {
			}
		}
		$nc(this->fSchemaHandler)->fillInLocalElemInfo(elmDecl, schemaDoc, allContextFlags, parent, particle);
	} else {
		traverseLocal(particle, elmDecl, schemaDoc, grammar, allContextFlags, parent, nullptr);
		if ($nc(particle)->fType == $XSParticleDecl::PARTICLE_EMPTY) {
			$assign(particle, nullptr);
		}
	}
	return particle;
}

void XSDElementTraverser::traverseLocal($XSParticleDecl* particle, $Element* elmDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, int32_t allContextFlags, $XSObject* parent, $StringArray* localNSDecls) {
	$useLocalCurrentObjectStackCache();
	if (localNSDecls != nullptr) {
		$nc($nc(schemaDoc)->fNamespaceSupport)->setEffectiveContext(localNSDecls);
	}
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmDecl, false, schemaDoc));
	$var($QName, refAtt, $cast($QName, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_REF)));
	$var($XInt, minAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MINOCCURS)));
	$var($XInt, maxAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_MAXOCCURS)));
	$var($XSElementDecl, element, nullptr);
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if ($nc(elmDecl)->getAttributeNode($SchemaSymbols::ATT_REF) != nullptr) {
		if (refAtt != nullptr) {
			$assign(element, $cast($XSElementDecl, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::ELEMENT_TYPE, refAtt, elmDecl)));
			$var($Element, child, $DOMUtil::getFirstChildElement(elmDecl));
			if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			} else {
				$var($String, text, $DOMUtil::getSyntheticAnnotation(elmDecl));
				if (text != nullptr) {
					$assign(annotation, traverseSyntheticAnnotation(elmDecl, text, attrValues, false, schemaDoc));
				}
			}
			if (child != nullptr) {
				reportSchemaError("src-element.2.2"_s, $$new($ObjectArray, {
					$of(refAtt->rawname),
					$($of($DOMUtil::getLocalName(child)))
				}), child);
			}
		} else {
			$assign(element, nullptr);
		}
	} else {
		$assign(element, traverseNamedElement(elmDecl, attrValues, schemaDoc, grammar, false, parent));
	}
	$nc(particle)->fMinOccurs = $nc(minAtt)->intValue();
	particle->fMaxOccurs = $nc(maxAtt)->intValue();
	if (element != nullptr) {
		particle->fType = $XSParticleDecl::PARTICLE_ELEMENT;
		$set(particle, fValue, element);
	} else {
		particle->fType = $XSParticleDecl::PARTICLE_EMPTY;
	}
	if (refAtt != nullptr) {
		$var($XSObjectList, annotations, nullptr);
		if (annotation != nullptr) {
			$assign(annotations, $new($XSObjectListImpl));
			$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
		} else {
			$init($XSObjectListImpl);
			$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
		}
		$set(particle, fAnnotations, annotations);
	} else {
		$init($XSObjectListImpl);
		$set(particle, fAnnotations, (element != nullptr) ? $nc(element)->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST));
	}
	$var($Long, defaultVals, $cast($Long, attrValues->get($XSAttributeChecker::ATTIDX_FROMDEFAULT)));
	$var($XSParticleDecl, var$0, particle);
	$var($String, var$1, $SchemaSymbols::ELT_ELEMENT);
	$var($Element, var$2, $cast($Element, $nc(elmDecl)->getParentNode()));
	int32_t var$3 = allContextFlags;
	checkOccurrences(var$0, var$1, var$2, var$3, $nc(defaultVals)->longValue());
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
}

$XSElementDecl* XSDElementTraverser::traverseGlobal($Element* elmDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmDecl, true, schemaDoc));
	$var($XSElementDecl, element, traverseNamedElement(elmDecl, attrValues, schemaDoc, grammar, true, nullptr));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return element;
}

$XSElementDecl* XSDElementTraverser::traverseNamedElement($Element* elmDecl, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, bool isGlobal, $XSObject* parent) {
	$useLocalCurrentObjectStackCache();
	$init($XSAttributeChecker);
	$var($Boolean, abstractAtt, $cast($Boolean, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_ABSTRACT)));
	$var($XInt, blockAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_BLOCK)));
	$var($String, defaultAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_DEFAULT)));
	$var($XInt, finalAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_FINAL)));
	$var($String, fixedAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_FIXED)));
	$var($XInt, formAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_FORM)));
	$var($String, nameAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_NAME)));
	$var($Boolean, nillableAtt, $cast($Boolean, attrValues->get($XSAttributeChecker::ATTIDX_NILLABLE)));
	$var($QName, subGroupAtt, $cast($QName, attrValues->get($XSAttributeChecker::ATTIDX_SUBSGROUP)));
	$var($QName, typeAtt, $cast($QName, attrValues->get($XSAttributeChecker::ATTIDX_TYPE)));
	$var($XSElementDecl, element, nullptr);
	if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
		$assign(element, $nc($nc(this->fSchemaHandler)->fDeclPool)->getElementDecl());
	} else {
		$assign(element, $new($XSElementDecl));
	}
	if (nameAtt != nullptr) {
		$set($nc(element), fName, $nc(this->fSymbolTable)->addSymbol(nameAtt));
	}
	if (isGlobal) {
		$set($nc(element), fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
		element->setIsGlobal();
	} else {
		if ($instanceOf($XSComplexTypeDecl, parent)) {
			$nc(element)->setIsLocal($cast($XSComplexTypeDecl, parent));
		}
		if (formAtt != nullptr) {
			if (formAtt->intValue() == $SchemaSymbols::FORM_QUALIFIED) {
				$set($nc(element), fTargetNamespace, $nc(schemaDoc)->fTargetNamespace);
			} else {
				$set($nc(element), fTargetNamespace, nullptr);
			}
		} else if ($nc(schemaDoc)->fAreLocalElementsQualified) {
			$set($nc(element), fTargetNamespace, schemaDoc->fTargetNamespace);
		} else {
			$set($nc(element), fTargetNamespace, nullptr);
		}
	}
	if (blockAtt == nullptr) {
		$nc(element)->fBlock = $nc(schemaDoc)->fBlockDefault;
		if (element->fBlock != $XSConstants::DERIVATION_ALL) {
			element->fBlock &= (uint16_t)(($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION) | $XSConstants::DERIVATION_SUBSTITUTION);
		}
	} else {
		$nc(element)->fBlock = $nc(blockAtt)->shortValue();
		if ((element->fBlock != $XSConstants::DERIVATION_ALL) && ((element->fBlock | $XSConstants::DERIVATION_EXTENSION_RESTRICTION_SUBSTITION) != $XSConstants::DERIVATION_EXTENSION_RESTRICTION_SUBSTITION)) {
			reportSchemaError("s4s-att-invalid-value"_s, $$new($ObjectArray, {
				$of(element->fName),
				$of("block"_s),
				$of("must be (#all | List of (extension | restriction | substitution))"_s)
			}), elmDecl);
		}
	}
	$nc(element)->fFinal = finalAtt == nullptr ? $nc(schemaDoc)->fFinalDefault : $nc(finalAtt)->shortValue();
	element->fFinal &= (uint16_t)($XSConstants::DERIVATION_EXTENSION | $XSConstants::DERIVATION_RESTRICTION);
	if ($nc(nillableAtt)->booleanValue()) {
		element->setIsNillable();
	}
	if (abstractAtt != nullptr && abstractAtt->booleanValue()) {
		element->setIsAbstract();
	}
	if (fixedAtt != nullptr) {
		$set(element, fDefault, $new($ValidatedInfo));
		$set($nc(element->fDefault), normalizedValue, fixedAtt);
		element->setConstraintType($XSConstants::VC_FIXED);
	} else if (defaultAtt != nullptr) {
		$set(element, fDefault, $new($ValidatedInfo));
		$set($nc(element->fDefault), normalizedValue, defaultAtt);
		element->setConstraintType($XSConstants::VC_DEFAULT);
	} else {
		element->setConstraintType($XSConstants::VC_NONE);
	}
	if (subGroupAtt != nullptr) {
		$set(element, fSubGroup, $cast($XSElementDecl, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::ELEMENT_TYPE, subGroupAtt, elmDecl)));
	}
	$var($Element, child, $DOMUtil::getFirstChildElement(elmDecl));
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
		$assign(child, $DOMUtil::getNextSiblingElement(child));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(elmDecl));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(elmDecl, text, attrValues, false, schemaDoc));
		}
	}
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$set(element, fAnnotations, annotations);
	$var($XSTypeDefinition, elementType, nullptr);
	bool haveAnonType = false;
	if (child != nullptr) {
		$var($String, childName, $DOMUtil::getLocalName(child));
		if ($nc(childName)->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
			$assign(elementType, $nc($nc(this->fSchemaHandler)->fComplexTypeTraverser)->traverseLocal(child, schemaDoc, grammar));
			haveAnonType = true;
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		} else {
			if (childName->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
				$assign(elementType, $nc($nc(this->fSchemaHandler)->fSimpleTypeTraverser)->traverseLocal(child, schemaDoc, grammar));
				haveAnonType = true;
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			}
		}
	}
	if (elementType == nullptr && typeAtt != nullptr) {
		$assign(elementType, $cast($XSTypeDefinition, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::TYPEDECL_TYPE, typeAtt, elmDecl)));
		if (elementType == nullptr) {
			$set(element, fUnresolvedTypeName, typeAtt);
		}
	}
	if (elementType == nullptr && element->fSubGroup != nullptr) {
		$assign(elementType, $nc(element->fSubGroup)->fType);
	}
	if (elementType == nullptr) {
		$init($SchemaGrammar);
		$assign(elementType, $SchemaGrammar::fAnyType);
	}
	$set(element, fType, elementType);
	if (child != nullptr) {
		$var($String, childName, $DOMUtil::getLocalName(child));
		while (true) {
			bool var$0 = child != nullptr;
			if (var$0) {
				bool var$2 = $nc(childName)->equals($SchemaSymbols::ELT_KEY);
				bool var$1 = var$2 || $nc(childName)->equals($SchemaSymbols::ELT_KEYREF);
				var$0 = (var$1 || $nc(childName)->equals($SchemaSymbols::ELT_UNIQUE));
			}
			if (!(var$0)) {
				break;
			}
			{
				bool var$3 = childName->equals($SchemaSymbols::ELT_KEY);
				if (var$3 || childName->equals($SchemaSymbols::ELT_UNIQUE)) {
					$DOMUtil::setHidden(child, $nc(this->fSchemaHandler)->fHiddenNodes);
					$nc($nc(this->fSchemaHandler)->fUniqueOrKeyTraverser)->traverse(child, element, schemaDoc, grammar);
					if ($nc($($DOMUtil::getAttrValue(child, $SchemaSymbols::ATT_NAME)))->length() != 0) {
						$var($String, var$4, (schemaDoc->fTargetNamespace == nullptr) ? $str({","_s, $($DOMUtil::getAttrValue(child, $SchemaSymbols::ATT_NAME))}) : $str({schemaDoc->fTargetNamespace, ","_s, $($DOMUtil::getAttrValue(child, $SchemaSymbols::ATT_NAME))}));
						$var($Map, var$5, $nc(this->fSchemaHandler)->getIDRegistry());
						$nc(this->fSchemaHandler)->checkForDuplicateNames(var$4, $XSDHandler::ATTRIBUTE_TYPE, var$5, $($nc(this->fSchemaHandler)->getIDRegistry_sub()), child, schemaDoc);
					}
				} else {
					if (childName->equals($SchemaSymbols::ELT_KEYREF)) {
						$nc(this->fSchemaHandler)->storeKeyRef(child, schemaDoc, element);
					}
				}
				$assign(child, $DOMUtil::getNextSiblingElement(child));
				if (child != nullptr) {
					$assign(childName, $DOMUtil::getLocalName(child));
				}
			}
		}
	}
	if (nameAtt == nullptr) {
		if (isGlobal) {
			reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_ELEMENT),
				$of($SchemaSymbols::ATT_NAME)
			}), elmDecl);
		} else {
			reportSchemaError("src-element.2.1"_s, nullptr, elmDecl);
		}
		$init($XSDAbstractTraverser);
		$assign(nameAtt, $XSDAbstractTraverser::NO_NAME);
	}
	if (child != nullptr) {
		reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
			$of(nameAtt),
			$of("(annotation?, (simpleType | complexType)?, (unique | key | keyref)*))"_s),
			$($of($DOMUtil::getLocalName(child)))
		}), child);
	}
	if (defaultAtt != nullptr && fixedAtt != nullptr) {
		reportSchemaError("src-element.1"_s, $$new($ObjectArray, {$of(nameAtt)}), elmDecl);
	}
	if (haveAnonType && (typeAtt != nullptr)) {
		reportSchemaError("src-element.3"_s, $$new($ObjectArray, {$of(nameAtt)}), elmDecl);
	}
	checkNotationType(nameAtt, elementType, elmDecl);
	if (element->fDefault != nullptr) {
		$nc(this->fValidationState)->setNamespaceSupport(schemaDoc->fNamespaceSupport);
		if ($XSConstraints::ElementDefaultValidImmediate(element->fType, $nc(element->fDefault)->normalizedValue, this->fValidationState, element->fDefault) == nullptr) {
			reportSchemaError("e-props-correct.2"_s, $$new($ObjectArray, {
				$of(nameAtt),
				$of($nc(element->fDefault)->normalizedValue)
			}), elmDecl);
			$set(element, fDefault, nullptr);
			element->setConstraintType($XSConstants::VC_NONE);
		}
	}
	if (element->fSubGroup != nullptr) {
		if (!$XSConstraints::checkTypeDerivationOk(element->fType, $nc(element->fSubGroup)->fType, $nc(element->fSubGroup)->fFinal)) {
			reportSchemaError("e-props-correct.4"_s, $$new($ObjectArray, {
				$of(nameAtt),
				$of($$str({$nc(subGroupAtt)->prefix, ":"_s, subGroupAtt->localpart}))
			}), elmDecl);
			$set(element, fSubGroup, nullptr);
		}
	}
	if (element->fDefault != nullptr) {
		bool var$7 = $nc(elementType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE;
		bool var$6 = (var$7 && $nc(($cast($XSSimpleType, elementType)))->isIDType());
		if (!var$6) {
			bool var$8 = $nc(elementType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE;
			var$6 = (var$8 && $nc(($cast($XSComplexTypeDecl, elementType)))->containsTypeID());
		}
		if (var$6) {
			reportSchemaError("e-props-correct.5"_s, $$new($ObjectArray, {$of(element->fName)}), elmDecl);
			$set(element, fDefault, nullptr);
			element->setConstraintType($XSConstants::VC_NONE);
		}
	}
	if (element->fName == nullptr) {
		return nullptr;
	}
	if (isGlobal) {
		$nc(grammar)->addGlobalElementDeclAll(element);
		if (grammar->getGlobalElementDecl(element->fName) == nullptr) {
			grammar->addGlobalElementDecl(element);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($XSElementDecl, element2, grammar->getGlobalElementDecl(element->fName, loc));
		if (element2 == nullptr) {
			grammar->addGlobalElementDecl(element, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (element2 != nullptr) {
				$assign(element, element2);
			}
			$nc(this->fSchemaHandler)->addGlobalElementDecl(element);
		}
	}
	return element;
}

void XSDElementTraverser::reset($SymbolTable* symbolTable, bool validateAnnotations, $Locale* locale) {
	$XSDAbstractTraverser::reset(symbolTable, validateAnnotations, locale);
	this->fDeferTraversingLocalElements = true;
}

XSDElementTraverser::XSDElementTraverser() {
}

$Class* XSDElementTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDElementTraverser, name, initialize, &_XSDElementTraverser_ClassInfo_, allocate$XSDElementTraverser);
	return class$;
}

$Class* XSDElementTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com