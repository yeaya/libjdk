#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_DEFAULT
#undef ATTIDX_FIXED
#undef ATTIDX_FORM
#undef ATTIDX_NAME
#undef ATTIDX_REF
#undef ATTIDX_TYPE
#undef ATTIDX_USE
#undef ATTRIBUTE_TYPE
#undef ATT_NAME
#undef ATT_REF
#undef ELT_ANNOTATION
#undef ELT_ATTRIBUTE
#undef ELT_SIMPLETYPE
#undef EMPTY_LIST
#undef FORM_QUALIFIED
#undef NO_NAME
#undef PREFIX_XMLNS
#undef SCOPE_ABSENT
#undef SCOPE_GLOBAL
#undef SCOPE_LOCAL
#undef SIMPLE_TYPE
#undef TYPEDECL_TYPE
#undef URI_XSI
#undef USE_OPTIONAL
#undef VC_DEFAULT
#undef VC_FIXED
#undef VC_NONE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDSimpleTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDSimpleTypeTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _XSDAttributeTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, $PUBLIC, $method(XSDAttributeTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"checkDefaultValid", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;)V", nullptr, 0, $virtualMethod(XSDAttributeTraverser, checkDefaultValid, void, $XSAttributeDecl*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"checkDefaultValid", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;)V", nullptr, 0, $virtualMethod(XSDAttributeTraverser, checkDefaultValid, void, $XSAttributeUseImpl*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PROTECTED, $virtualMethod(XSDAttributeTraverser, traverseGlobal, $XSAttributeDecl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, $PROTECTED, $virtualMethod(XSDAttributeTraverser, traverseLocal, $XSAttributeUseImpl*, $Element*, $XSDocumentInfo*, $SchemaGrammar*, $XSComplexTypeDecl*)},
	{"traverseNamedAttr", "(Lorg/w3c/dom/Element;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ZLcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, 0, $virtualMethod(XSDAttributeTraverser, traverseNamedAttr, $XSAttributeDecl*, $Element*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*, bool, $XSComplexTypeDecl*)},
	{}
};

$ClassInfo _XSDAttributeTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAttributeTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	nullptr,
	_XSDAttributeTraverser_MethodInfo_
};

$Object* allocate$XSDAttributeTraverser($Class* clazz) {
	return $of($alloc(XSDAttributeTraverser));
}

void XSDAttributeTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
}

$XSAttributeUseImpl* XSDAttributeTraverser::traverseLocal($Element* attrDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, $XSComplexTypeDecl* enclosingCT) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(attrDecl, false, schemaDoc));
	$var($String, defaultAtt, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_DEFAULT)));
	$var($String, fixedAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_FIXED)));
	$var($String, nameAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_NAME)));
	$var($QName, refAtt, $cast($QName, attrValues->get($XSAttributeChecker::ATTIDX_REF)));
	$var($XInt, useAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_USE)));
	$var($XSAttributeDecl, attribute, nullptr);
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if ($nc(attrDecl)->getAttributeNode($SchemaSymbols::ATT_REF) != nullptr) {
		if (refAtt != nullptr) {
			$assign(attribute, $cast($XSAttributeDecl, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::ATTRIBUTE_TYPE, refAtt, attrDecl)));
			$var($Element, child, $DOMUtil::getFirstChildElement(attrDecl));
			if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
				$assign(child, $DOMUtil::getNextSiblingElement(child));
			} else {
				$var($String, text, $DOMUtil::getSyntheticAnnotation(attrDecl));
				if (text != nullptr) {
					$assign(annotation, traverseSyntheticAnnotation(attrDecl, text, attrValues, false, schemaDoc));
				}
			}
			if (child != nullptr) {
				reportSchemaError("src-attribute.3.2"_s, $$new($ObjectArray, {$of(refAtt->rawname)}), child);
			}
			$assign(nameAtt, refAtt->localpart);
		} else {
			$assign(attribute, nullptr);
		}
	} else {
		$assign(attribute, traverseNamedAttr(attrDecl, attrValues, schemaDoc, grammar, false, enclosingCT));
	}
	int16_t consType = $XSConstants::VC_NONE;
	if (defaultAtt != nullptr) {
		consType = $XSConstants::VC_DEFAULT;
	} else if (fixedAtt != nullptr) {
		consType = $XSConstants::VC_FIXED;
		$assign(defaultAtt, fixedAtt);
		$assign(fixedAtt, nullptr);
	}
	$var($XSAttributeUseImpl, attrUse, nullptr);
	if (attribute != nullptr) {
		if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
			$assign(attrUse, $nc($nc(this->fSchemaHandler)->fDeclPool)->getAttributeUse());
		} else {
			$assign(attrUse, $new($XSAttributeUseImpl));
		}
		$set($nc(attrUse), fAttrDecl, attribute);
		attrUse->fUse = $nc(useAtt)->shortValue();
		attrUse->fConstraintType = consType;
		if (defaultAtt != nullptr) {
			$set(attrUse, fDefault, $new($ValidatedInfo));
			$set($nc(attrUse->fDefault), normalizedValue, defaultAtt);
		}
		if ($nc(attrDecl)->getAttributeNode($SchemaSymbols::ATT_REF) == nullptr) {
			$set(attrUse, fAnnotations, attribute->getAnnotations());
		} else {
			$var($XSObjectList, annotations, nullptr);
			if (annotation != nullptr) {
				$assign(annotations, $new($XSObjectListImpl));
				$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
			} else {
				$init($XSObjectListImpl);
				$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
			}
			$set(attrUse, fAnnotations, annotations);
		}
	}
	if (defaultAtt != nullptr && fixedAtt != nullptr) {
		reportSchemaError("src-attribute.1"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
	}
	if (consType == $XSConstants::VC_DEFAULT && useAtt != nullptr && useAtt->intValue() != $SchemaSymbols::USE_OPTIONAL) {
		reportSchemaError("src-attribute.2"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
		$nc(attrUse)->fUse = $SchemaSymbols::USE_OPTIONAL;
	}
	if (defaultAtt != nullptr && attrUse != nullptr) {
		$nc(this->fValidationState)->setNamespaceSupport($nc(schemaDoc)->fNamespaceSupport);
		try {
			checkDefaultValid(attrUse);
		} catch ($InvalidDatatypeValueException& ide) {
			$var($String, var$0, ide->getKey());
			reportSchemaError(var$0, $(ide->getArgs()), attrDecl);
			reportSchemaError("a-props-correct.2"_s, $$new($ObjectArray, {
				$of(nameAtt),
				$of(defaultAtt)
			}), attrDecl);
			$set(attrUse, fDefault, nullptr);
			attrUse->fConstraintType = $XSConstants::VC_NONE;
		}
		if ($nc(($cast($XSSimpleType, $($nc(attribute)->getTypeDefinition()))))->isIDType()) {
			reportSchemaError("a-props-correct.3"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
			$set(attrUse, fDefault, nullptr);
			attrUse->fConstraintType = $XSConstants::VC_NONE;
		}
		if ($nc(attrUse->fAttrDecl)->getConstraintType() == $XSConstants::VC_FIXED && attrUse->fConstraintType != $XSConstants::VC_NONE) {
			if (attrUse->fConstraintType != $XSConstants::VC_FIXED || !$nc($of($nc($($nc(attrUse->fAttrDecl)->getValInfo()))->actualValue))->equals($nc(attrUse->fDefault)->actualValue)) {
				reportSchemaError("au-props-correct.2"_s, $$new($ObjectArray, {
					$of(nameAtt),
					$($of($nc($($nc(attrUse->fAttrDecl)->getValInfo()))->stringValue()))
				}), attrDecl);
				$set(attrUse, fDefault, $nc(attrUse->fAttrDecl)->getValInfo());
				attrUse->fConstraintType = $XSConstants::VC_FIXED;
			}
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return attrUse;
}

$XSAttributeDecl* XSDAttributeTraverser::traverseGlobal($Element* attrDecl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(attrDecl, true, schemaDoc));
	$var($XSAttributeDecl, attribute, traverseNamedAttr(attrDecl, attrValues, schemaDoc, grammar, true, nullptr));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return attribute;
}

$XSAttributeDecl* XSDAttributeTraverser::traverseNamedAttr($Element* attrDecl, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar, bool isGlobal, $XSComplexTypeDecl* enclosingCT) {
	$useLocalCurrentObjectStackCache();
	$init($XSAttributeChecker);
	$var($String, defaultAtt, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_DEFAULT)));
	$var($String, fixedAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_FIXED)));
	$var($XInt, formAtt, $cast($XInt, attrValues->get($XSAttributeChecker::ATTIDX_FORM)));
	$var($String, nameAtt, $cast($String, attrValues->get($XSAttributeChecker::ATTIDX_NAME)));
	$var($QName, typeAtt, $cast($QName, attrValues->get($XSAttributeChecker::ATTIDX_TYPE)));
	$var($XSAttributeDecl, attribute, nullptr);
	if ($nc(this->fSchemaHandler)->fDeclPool != nullptr) {
		$assign(attribute, $nc($nc(this->fSchemaHandler)->fDeclPool)->getAttributeDecl());
	} else {
		$assign(attribute, $new($XSAttributeDecl));
	}
	if (nameAtt != nullptr) {
		$assign(nameAtt, $nc(this->fSymbolTable)->addSymbol(nameAtt));
	}
	$var($String, tnsAtt, nullptr);
	$var($XSComplexTypeDecl, enclCT, nullptr);
	int16_t scope = $XSAttributeDecl::SCOPE_ABSENT;
	if (isGlobal) {
		$assign(tnsAtt, $nc(schemaDoc)->fTargetNamespace);
		scope = $XSAttributeDecl::SCOPE_GLOBAL;
	} else {
		if (enclosingCT != nullptr) {
			$assign(enclCT, enclosingCT);
			scope = $XSAttributeDecl::SCOPE_LOCAL;
		}
		if (formAtt != nullptr) {
			if (formAtt->intValue() == $SchemaSymbols::FORM_QUALIFIED) {
				$assign(tnsAtt, $nc(schemaDoc)->fTargetNamespace);
			}
		} else if ($nc(schemaDoc)->fAreLocalAttributesQualified) {
			$assign(tnsAtt, schemaDoc->fTargetNamespace);
		}
	}
	$var($ValidatedInfo, attDefault, nullptr);
	int16_t constraintType = $XSConstants::VC_NONE;
	if (isGlobal) {
		if (fixedAtt != nullptr) {
			$assign(attDefault, $new($ValidatedInfo));
			$set(attDefault, normalizedValue, fixedAtt);
			constraintType = $XSConstants::VC_FIXED;
		} else if (defaultAtt != nullptr) {
			$assign(attDefault, $new($ValidatedInfo));
			$set(attDefault, normalizedValue, defaultAtt);
			constraintType = $XSConstants::VC_DEFAULT;
		}
	}
	$var($Element, child, $DOMUtil::getFirstChildElement(attrDecl));
	$var($XSAnnotationImpl, annotation, nullptr);
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$assign(annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
		$assign(child, $DOMUtil::getNextSiblingElement(child));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(attrDecl));
		if (text != nullptr) {
			$assign(annotation, traverseSyntheticAnnotation(attrDecl, text, attrValues, false, schemaDoc));
		}
	}
	$var($XSSimpleType, attrType, nullptr);
	bool haveAnonType = false;
	if (child != nullptr) {
		$var($String, childName, $DOMUtil::getLocalName(child));
		if ($nc(childName)->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
			$assign(attrType, $nc($nc(this->fSchemaHandler)->fSimpleTypeTraverser)->traverseLocal(child, schemaDoc, grammar));
			haveAnonType = true;
			$assign(child, $DOMUtil::getNextSiblingElement(child));
		}
	}
	if (attrType == nullptr && typeAtt != nullptr) {
		$var($XSTypeDefinition, type, $cast($XSTypeDefinition, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::TYPEDECL_TYPE, typeAtt, attrDecl)));
		if (type != nullptr && type->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
			$assign(attrType, $cast($XSSimpleType, type));
		} else {
			reportSchemaError("src-resolve"_s, $$new($ObjectArray, {
				$of(typeAtt->rawname),
				$of("simpleType definition"_s)
			}), attrDecl);
			if (type == nullptr) {
				$set($nc(attribute), fUnresolvedTypeName, typeAtt);
			}
		}
	}
	if (attrType == nullptr) {
		$init($SchemaGrammar);
		$assign(attrType, $SchemaGrammar::fAnySimpleType);
	}
	$var($XSObjectList, annotations, nullptr);
	if (annotation != nullptr) {
		$assign(annotations, $new($XSObjectListImpl));
		$nc(($cast($XSObjectListImpl, annotations)))->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$assign(annotations, $XSObjectListImpl::EMPTY_LIST);
	}
	$nc(attribute)->setValues(nameAtt, tnsAtt, attrType, constraintType, scope, attDefault, enclCT, annotations);
	if (nameAtt == nullptr) {
		if (isGlobal) {
			reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_ATTRIBUTE),
				$of($SchemaSymbols::ATT_NAME)
			}), attrDecl);
		} else {
			reportSchemaError("src-attribute.3.1"_s, nullptr, attrDecl);
		}
		$init($XSDAbstractTraverser);
		$assign(nameAtt, $XSDAbstractTraverser::NO_NAME);
	}
	if (child != nullptr) {
		reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
			$of(nameAtt),
			$of("(annotation?, (simpleType?))"_s),
			$($of($DOMUtil::getLocalName(child)))
		}), child);
	}
	if (defaultAtt != nullptr && fixedAtt != nullptr) {
		reportSchemaError("src-attribute.1"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
	}
	if (haveAnonType && (typeAtt != nullptr)) {
		reportSchemaError("src-attribute.4"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
	}
	checkNotationType(nameAtt, attrType, attrDecl);
	if (attDefault != nullptr) {
		$nc(this->fValidationState)->setNamespaceSupport($nc(schemaDoc)->fNamespaceSupport);
		try {
			checkDefaultValid(attribute);
		} catch ($InvalidDatatypeValueException& ide) {
			$var($String, var$0, ide->getKey());
			reportSchemaError(var$0, $(ide->getArgs()), attrDecl);
			reportSchemaError("a-props-correct.2"_s, $$new($ObjectArray, {
				$of(nameAtt),
				$of(attDefault->normalizedValue)
			}), attrDecl);
			$assign(attDefault, nullptr);
			constraintType = $XSConstants::VC_NONE;
			attribute->setValues(nameAtt, tnsAtt, attrType, constraintType, scope, attDefault, enclCT, annotations);
		}
	}
	if (attDefault != nullptr) {
		if ($nc(attrType)->isIDType()) {
			reportSchemaError("a-props-correct.3"_s, $$new($ObjectArray, {$of(nameAtt)}), attrDecl);
			$assign(attDefault, nullptr);
			constraintType = $XSConstants::VC_NONE;
			attribute->setValues(nameAtt, tnsAtt, attrType, constraintType, scope, attDefault, enclCT, annotations);
		}
	}
	$init($XMLSymbols);
	if (nameAtt != nullptr && nameAtt->equals($XMLSymbols::PREFIX_XMLNS)) {
		reportSchemaError("no-xmlns"_s, nullptr, attrDecl);
		return nullptr;
	}
	if (tnsAtt != nullptr && tnsAtt->equals($SchemaSymbols::URI_XSI)) {
		reportSchemaError("no-xsi"_s, $$new($ObjectArray, {$of($SchemaSymbols::URI_XSI)}), attrDecl);
		return nullptr;
	}
	$init($XSDAbstractTraverser);
	if ($nc(nameAtt)->equals($XSDAbstractTraverser::NO_NAME)) {
		return nullptr;
	}
	if (isGlobal) {
		if ($nc(grammar)->getGlobalAttributeDecl(nameAtt) == nullptr) {
			grammar->addGlobalAttributeDecl(attribute);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($XSAttributeDecl, attribute2, $nc(grammar)->getGlobalAttributeDecl(nameAtt, loc));
		if (attribute2 == nullptr) {
			grammar->addGlobalAttributeDecl(attribute, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (attribute2 != nullptr) {
				$assign(attribute, attribute2);
			}
			$nc(this->fSchemaHandler)->addGlobalAttributeDecl(attribute);
		}
	}
	return attribute;
}

void XSDAttributeTraverser::checkDefaultValid($XSAttributeDecl* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc($(attribute->getValInfo()))->normalizedValue);
	$var($ValidationContext, var$1, static_cast<$ValidationContext*>(this->fValidationState));
	$nc(($cast($XSSimpleType, $($nc(attribute)->getTypeDefinition()))))->validate(var$0, var$1, $(attribute->getValInfo()));
	$var($String, var$2, $nc($(attribute->getValInfo()))->stringValue());
	$var($ValidationContext, var$3, static_cast<$ValidationContext*>(this->fValidationState));
	$nc(($cast($XSSimpleType, $(attribute->getTypeDefinition()))))->validate(var$2, var$3, $(attribute->getValInfo()));
}

void XSDAttributeTraverser::checkDefaultValid($XSAttributeUseImpl* attrUse) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($XSSimpleType, $($nc($nc(attrUse)->fAttrDecl)->getTypeDefinition()))))->validate($nc(attrUse->fDefault)->normalizedValue, static_cast<$ValidationContext*>(this->fValidationState), attrUse->fDefault);
	$nc(($cast($XSSimpleType, $($nc(attrUse->fAttrDecl)->getTypeDefinition()))))->validate($($nc(attrUse->fDefault)->stringValue()), static_cast<$ValidationContext*>(this->fValidationState), attrUse->fDefault);
}

XSDAttributeTraverser::XSDAttributeTraverser() {
}

$Class* XSDAttributeTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDAttributeTraverser, name, initialize, &_XSDAttributeTraverser_ClassInfo_, allocate$XSDAttributeTraverser);
	return class$;
}

$Class* XSDAttributeTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com