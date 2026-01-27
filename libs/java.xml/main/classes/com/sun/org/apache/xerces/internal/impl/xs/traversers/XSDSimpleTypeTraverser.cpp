#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeFacetException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser$FacetInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAbstractTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_BASE
#undef ATTIDX_FINAL
#undef ATTIDX_ITEMTYPE
#undef ATTIDX_MEMBERTYPES
#undef ATTIDX_NAME
#undef ATT_NAME
#undef DERIVATION_LIST
#undef DERIVATION_RESTRICTION
#undef DERIVATION_UNION
#undef ELT_ANNOTATION
#undef ELT_LIST
#undef ELT_RESTRICTION
#undef ELT_SIMPLETYPE
#undef ELT_UNION
#undef NO_NAME
#undef SIMPLE_TYPE
#undef TYPEDECL_TYPE
#undef URI_SCHEMAFORSCHEMA
#undef VARIETY_LIST
#undef VARIETY_UNION

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $XSAnnotationImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $InvalidDatatypeFacetException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeFacetException;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAbstractTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser;
using $XSDAbstractTraverser$FacetInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAbstractTraverser$FacetInfo;
using $XSDHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
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

$FieldInfo _XSDSimpleTypeTraverser_FieldInfo_[] = {
	{"fIsBuiltIn", "Z", nullptr, $PRIVATE, $field(XSDSimpleTypeTraverser, fIsBuiltIn)},
	{}
};

$MethodInfo _XSDSimpleTypeTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;)V", nullptr, 0, $method(XSDSimpleTypeTraverser, init$, void, $XSDHandler*, $XSAttributeChecker*)},
	{"checkBuiltIn", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $FINAL, $method(XSDSimpleTypeTraverser, checkBuiltIn, bool, $String*, $String*)},
	{"errorType", "(Ljava/lang/String;Ljava/lang/String;S)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, errorType, $XSSimpleType*, $String*, $String*, int16_t)},
	{"findDTValidator", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/QName;SLcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, findDTValidator, $XSSimpleType*, $Element*, $String*, $QName*, int16_t, $XSDocumentInfo*)},
	{"genAnonTypeName", "(Lorg/w3c/dom/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, genAnonTypeName, $String*, $Element*)},
	{"getSimpleType", "(Ljava/lang/String;Lorg/w3c/dom/Element;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, getSimpleType, $XSSimpleType*, $String*, $Element*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"isListDatatype", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;)Z", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, isListDatatype, bool, $XSSimpleType*)},
	{"traverseGlobal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, 0, $virtualMethod(XSDSimpleTypeTraverser, traverseGlobal, $XSSimpleType*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocal", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, 0, $virtualMethod(XSDSimpleTypeTraverser, traverseLocal, $XSSimpleType*, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseSimpleTypeDecl", "(Lorg/w3c/dom/Element;[Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE, $method(XSDSimpleTypeTraverser, traverseSimpleTypeDecl, $XSSimpleType*, $Element*, $ObjectArray*, $XSDocumentInfo*, $SchemaGrammar*)},
	{}
};

$ClassInfo _XSDSimpleTypeTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDSimpleTypeTraverser",
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractTraverser",
	nullptr,
	_XSDSimpleTypeTraverser_FieldInfo_,
	_XSDSimpleTypeTraverser_MethodInfo_
};

$Object* allocate$XSDSimpleTypeTraverser($Class* clazz) {
	return $of($alloc(XSDSimpleTypeTraverser));
}

void XSDSimpleTypeTraverser::init$($XSDHandler* handler, $XSAttributeChecker* gAttrCheck) {
	$XSDAbstractTraverser::init$(handler, gAttrCheck);
	this->fIsBuiltIn = false;
}

$XSSimpleType* XSDSimpleTypeTraverser::traverseGlobal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, true, schemaDoc));
	$var($String, nameAtt, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	if (nameAtt == nullptr) {
		$init($XSDAbstractTraverser);
		attrValues->set($XSAttributeChecker::ATTIDX_NAME, $XSDAbstractTraverser::NO_NAME);
	}
	$var($XSSimpleType, type, traverseSimpleTypeDecl(elmNode, attrValues, schemaDoc, grammar));
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	if (nameAtt == nullptr) {
		$init($SchemaSymbols);
		reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_SIMPLETYPE),
			$of($SchemaSymbols::ATT_NAME)
		}), elmNode);
		$assign(type, nullptr);
	}
	if (type != nullptr) {
		if ($nc(grammar)->getGlobalTypeDecl($(type->getName())) == nullptr) {
			grammar->addGlobalSimpleTypeDecl(type);
		}
		$var($String, loc, $nc(this->fSchemaHandler)->schemaDocument2SystemId(schemaDoc));
		$var($XSTypeDefinition, type2, $nc(grammar)->getGlobalTypeDecl($(type->getName()), loc));
		if (type2 == nullptr) {
			grammar->addGlobalSimpleTypeDecl(type, loc);
		}
		if ($nc(this->fSchemaHandler)->fTolerateDuplicates) {
			if (type2 != nullptr) {
				if ($instanceOf($XSSimpleType, type2)) {
					$assign(type, $cast($XSSimpleType, type2));
				}
			}
			$nc(this->fSchemaHandler)->addGlobalTypeDecl(type);
		}
	}
	return type;
}

$XSSimpleType* XSDSimpleTypeTraverser::traverseLocal($Element* elmNode, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, attrValues, $nc(this->fAttrChecker)->checkAttributes(elmNode, false, schemaDoc));
	$var($String, name, genAnonTypeName(elmNode));
	$var($XSSimpleType, type, getSimpleType(name, elmNode, attrValues, schemaDoc, grammar));
	if ($instanceOf($XSSimpleTypeDecl, type)) {
		$nc(($cast($XSSimpleTypeDecl, type)))->setAnonymous(true);
	}
	$nc(this->fAttrChecker)->returnAttrArray(attrValues, schemaDoc);
	return type;
}

$XSSimpleType* XSDSimpleTypeTraverser::traverseSimpleTypeDecl($Element* simpleTypeDecl, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$init($XSAttributeChecker);
	$var($String, name, $cast($String, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_NAME)));
	return getSimpleType(name, simpleTypeDecl, attrValues, schemaDoc, grammar);
}

$String* XSDSimpleTypeTraverser::genAnonTypeName($Element* simpleTypeDecl) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, typeName, $new($StringBuffer, "#AnonType_"_s));
	$var($Element, node, $DOMUtil::getParent(simpleTypeDecl));
	while (node != nullptr && (node != $DOMUtil::getRoot($($DOMUtil::getDocument(node))))) {
		$init($SchemaSymbols);
		typeName->append($(node->getAttribute($SchemaSymbols::ATT_NAME)));
		$assign(node, $DOMUtil::getParent(node));
	}
	return typeName->toString();
}

$XSSimpleType* XSDSimpleTypeTraverser::getSimpleType($String* name, $Element* simpleTypeDecl, $ObjectArray* attrValues, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$init($XSAttributeChecker);
	$var($XInt, finalAttr, $cast($XInt, $nc(attrValues)->get($XSAttributeChecker::ATTIDX_FINAL)));
	int32_t finalProperty = finalAttr == nullptr ? (int32_t)$nc(schemaDoc)->fFinalDefault : $nc(finalAttr)->intValue();
	$var($Element, child, $DOMUtil::getFirstChildElement(simpleTypeDecl));
	$var($XSAnnotationImplArray, annotations, nullptr);
	$init($SchemaSymbols);
	if (child != nullptr && $nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$var($XSAnnotationImpl, annotation, traverseAnnotationDecl(child, attrValues, false, schemaDoc));
		if (annotation != nullptr) {
			$assign(annotations, $new($XSAnnotationImplArray, {annotation}));
		}
		$assign(child, $DOMUtil::getNextSiblingElement(child));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(simpleTypeDecl));
		if (text != nullptr) {
			$var($XSAnnotationImpl, annotation, traverseSyntheticAnnotation(simpleTypeDecl, text, attrValues, false, schemaDoc));
			$assign(annotations, $new($XSAnnotationImplArray, {annotation}));
		}
	}
	if (child == nullptr) {
		reportSchemaError("s4s-elt-must-match.2"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_SIMPLETYPE),
			$of("(annotation?, (restriction | list | union))"_s)
		}), simpleTypeDecl);
		return errorType(name, schemaDoc->fTargetNamespace, $XSConstants::DERIVATION_RESTRICTION);
	}
	$var($String, varietyProperty, $DOMUtil::getLocalName(child));
	int16_t refType = $XSConstants::DERIVATION_RESTRICTION;
	bool restriction = false;
	bool list = false;
	bool union$ = false;
	if ($nc(varietyProperty)->equals($SchemaSymbols::ELT_RESTRICTION)) {
		refType = $XSConstants::DERIVATION_RESTRICTION;
		restriction = true;
	} else {
		if (varietyProperty->equals($SchemaSymbols::ELT_LIST)) {
			refType = $XSConstants::DERIVATION_LIST;
			list = true;
		} else {
			if (varietyProperty->equals($SchemaSymbols::ELT_UNION)) {
				refType = $XSConstants::DERIVATION_UNION;
				union$ = true;
			} else {
				reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
					$of($SchemaSymbols::ELT_SIMPLETYPE),
					$of("(annotation?, (restriction | list | union))"_s),
					$of(varietyProperty)
				}), simpleTypeDecl);
				return errorType(name, schemaDoc->fTargetNamespace, $XSConstants::DERIVATION_RESTRICTION);
			}
		}
	}
	$var($Element, nextChild, $DOMUtil::getNextSiblingElement(child));
	if (nextChild != nullptr) {
		reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
			$of($SchemaSymbols::ELT_SIMPLETYPE),
			$of("(annotation?, (restriction | list | union))"_s),
			$($of($DOMUtil::getLocalName(nextChild)))
		}), nextChild);
	}
	$var($ObjectArray, contentAttrs, $nc(this->fAttrChecker)->checkAttributes(child, false, schemaDoc));
	$var($QName, baseTypeName, $cast($QName, $nc(contentAttrs)->get(restriction ? $XSAttributeChecker::ATTIDX_BASE : $XSAttributeChecker::ATTIDX_ITEMTYPE)));
	$var($List, memberTypes, $cast($ArrayList, contentAttrs->get($XSAttributeChecker::ATTIDX_MEMBERTYPES)));
	$var($Element, content, $DOMUtil::getFirstChildElement(child));
	if (content != nullptr && $nc($($DOMUtil::getLocalName(content)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
		$var($XSAnnotationImpl, annotation, traverseAnnotationDecl(content, contentAttrs, false, schemaDoc));
		if (annotation != nullptr) {
			if (annotations == nullptr) {
				$assign(annotations, $new($XSAnnotationImplArray, {annotation}));
			} else {
				$var($XSAnnotationImplArray, tempArray, $new($XSAnnotationImplArray, 2));
				tempArray->set(0, $nc(annotations)->get(0));
				$assign(annotations, tempArray);
				annotations->set(1, annotation);
			}
		}
		$assign(content, $DOMUtil::getNextSiblingElement(content));
	} else {
		$var($String, text, $DOMUtil::getSyntheticAnnotation(child));
		if (text != nullptr) {
			$var($XSAnnotationImpl, annotation, traverseSyntheticAnnotation(child, text, contentAttrs, false, schemaDoc));
			if (annotations == nullptr) {
				$assign(annotations, $new($XSAnnotationImplArray, {annotation}));
			} else {
				$var($XSAnnotationImplArray, tempArray, $new($XSAnnotationImplArray, 2));
				tempArray->set(0, $nc(annotations)->get(0));
				$assign(annotations, tempArray);
				annotations->set(1, annotation);
			}
		}
	}
	$var($XSSimpleType, baseValidator, nullptr);
	if ((restriction || list) && baseTypeName != nullptr) {
		$assign(baseValidator, findDTValidator(child, name, baseTypeName, refType, schemaDoc));
		if (baseValidator == nullptr && this->fIsBuiltIn) {
			this->fIsBuiltIn = false;
			return nullptr;
		}
	}
	$var($List, dTValidators, nullptr);
	$var($XSSimpleType, dv, nullptr);
	$var($XSObjectList, dvs, nullptr);
	if (union$ && memberTypes != nullptr && memberTypes->size() > 0) {
		int32_t size = memberTypes->size();
		$assign(dTValidators, $new($ArrayList, size));
		for (int32_t i = 0; i < size; ++i) {
			$assign(dv, findDTValidator(child, name, $cast($QName, $(memberTypes->get(i))), $XSConstants::DERIVATION_UNION, schemaDoc));
			if (dv != nullptr) {
				if (dv->getVariety() == $XSSimpleType::VARIETY_UNION) {
					$assign(dvs, dv->getMemberTypes());
					for (int32_t j = 0; j < $nc(dvs)->getLength(); ++j) {
						dTValidators->add($(dvs->item(j)));
					}
				} else {
					dTValidators->add(dv);
				}
			}
		}
	}
	if (content != nullptr && $nc($($DOMUtil::getLocalName(content)))->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
		if (restriction || list) {
			if (baseTypeName != nullptr) {
				reportSchemaError(list ? "src-simple-type.3.a"_s : "src-simple-type.2.a"_s, nullptr, content);
			}
			if (baseValidator == nullptr) {
				$assign(baseValidator, traverseLocal(content, schemaDoc, grammar));
			}
			$assign(content, $DOMUtil::getNextSiblingElement(content));
		} else if (union$) {
			if (dTValidators == nullptr) {
				$assign(dTValidators, $new($ArrayList, 2));
			}
			do {
				$assign(dv, traverseLocal(content, schemaDoc, grammar));
				if (dv != nullptr) {
					if (dv->getVariety() == $XSSimpleType::VARIETY_UNION) {
						$assign(dvs, dv->getMemberTypes());
						for (int32_t j = 0; j < $nc(dvs)->getLength(); ++j) {
							$nc(dTValidators)->add($(dvs->item(j)));
						}
					} else {
						$nc(dTValidators)->add(dv);
					}
				}
				$assign(content, $DOMUtil::getNextSiblingElement(content));
			} while (content != nullptr && $nc($($DOMUtil::getLocalName(content)))->equals($SchemaSymbols::ELT_SIMPLETYPE));
		}
	} else if ((restriction || list) && baseTypeName == nullptr) {
		reportSchemaError(list ? "src-simple-type.3.b"_s : "src-simple-type.2.b"_s, nullptr, child);
	} else if (union$ && (memberTypes == nullptr || $nc(memberTypes)->size() == 0)) {
		reportSchemaError("src-union-memberTypes-or-simpleTypes"_s, nullptr, child);
	}
	if ((restriction || list) && baseValidator == nullptr) {
		$nc(this->fAttrChecker)->returnAttrArray(contentAttrs, schemaDoc);
		return errorType(name, schemaDoc->fTargetNamespace, restriction ? $XSConstants::DERIVATION_RESTRICTION : $XSConstants::DERIVATION_LIST);
	}
	if (union$ && (dTValidators == nullptr || $nc(dTValidators)->size() == 0)) {
		$nc(this->fAttrChecker)->returnAttrArray(contentAttrs, schemaDoc);
		return errorType(name, schemaDoc->fTargetNamespace, $XSConstants::DERIVATION_UNION);
	}
	if (list && isListDatatype(baseValidator)) {
		reportSchemaError("cos-st-restricts.2.1"_s, $$new($ObjectArray, {
			$of(name),
			$($of($nc(baseValidator)->getName()))
		}), child);
		$nc(this->fAttrChecker)->returnAttrArray(contentAttrs, schemaDoc);
		return errorType(name, schemaDoc->fTargetNamespace, $XSConstants::DERIVATION_LIST);
	}
	$var($XSSimpleType, newDecl, nullptr);
	if (restriction) {
		$assign(newDecl, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeRestriction(name, schemaDoc->fTargetNamespace, (int16_t)finalProperty, baseValidator, annotations == nullptr ? ($XSObjectList*)nullptr : static_cast<$XSObjectList*>($$new($XSObjectListImpl, $fcast($XSObjectArray, annotations), $nc(annotations)->length))));
	} else if (list) {
		$assign(newDecl, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeList(name, schemaDoc->fTargetNamespace, (int16_t)finalProperty, baseValidator, annotations == nullptr ? ($XSObjectList*)nullptr : static_cast<$XSObjectList*>($$new($XSObjectListImpl, $fcast($XSObjectArray, annotations), $nc(annotations)->length))));
	} else if (union$) {
		$var($XSSimpleTypeArray, memberDecls, $fcast($XSSimpleTypeArray, $nc(dTValidators)->toArray($$new($XSSimpleTypeArray, dTValidators->size()))));
		$assign(newDecl, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeUnion(name, schemaDoc->fTargetNamespace, (int16_t)finalProperty, memberDecls, annotations == nullptr ? ($XSObjectList*)nullptr : static_cast<$XSObjectList*>($$new($XSObjectListImpl, $fcast($XSObjectArray, annotations), $nc(annotations)->length))));
	}
	if (restriction && content != nullptr) {
		$var($XSDAbstractTraverser$FacetInfo, fi, traverseFacets(content, newDecl, baseValidator, schemaDoc));
		$assign(content, $nc(fi)->nodeAfterFacets);
		try {
			$nc(this->fValidationState)->setNamespaceSupport(schemaDoc->fNamespaceSupport);
			$nc(newDecl)->applyFacets(fi->facetdata, fi->fPresentFacets, fi->fFixedFacets, this->fValidationState);
		} catch ($InvalidDatatypeFacetException& ex) {
			$var($String, var$0, ex->getKey());
			reportSchemaError(var$0, $(ex->getArgs()), child);
			$assign(newDecl, $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeRestriction(name, schemaDoc->fTargetNamespace, (int16_t)finalProperty, baseValidator, annotations == nullptr ? ($XSObjectList*)nullptr : static_cast<$XSObjectList*>($$new($XSObjectListImpl, $fcast($XSObjectArray, annotations), $nc(annotations)->length))));
		}
	}
	if (content != nullptr) {
		if (restriction) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_RESTRICTION),
				$of("(annotation?, (simpleType?, (minExclusive | minInclusive | maxExclusive | maxInclusive | totalDigits | fractionDigits | length | minLength | maxLength | enumeration | whiteSpace | pattern)*))"_s),
				$($of($DOMUtil::getLocalName(content)))
			}), content);
		} else if (list) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_LIST),
				$of("(annotation?, (simpleType?))"_s),
				$($of($DOMUtil::getLocalName(content)))
			}), content);
		} else if (union$) {
			reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
				$of($SchemaSymbols::ELT_UNION),
				$of("(annotation?, (simpleType*))"_s),
				$($of($DOMUtil::getLocalName(content)))
			}), content);
		}
	}
	$nc(this->fAttrChecker)->returnAttrArray(contentAttrs, schemaDoc);
	return newDecl;
}

$XSSimpleType* XSDSimpleTypeTraverser::findDTValidator($Element* elm, $String* refName, $QName* baseTypeStr, int16_t baseRefContext, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	if (baseTypeStr == nullptr) {
		return nullptr;
	}
	$var($XSTypeDefinition, baseType, $cast($XSTypeDefinition, $nc(this->fSchemaHandler)->getGlobalDecl(schemaDoc, $XSDHandler::TYPEDECL_TYPE, baseTypeStr, elm)));
	if (baseType == nullptr) {
		return nullptr;
	}
	if ($nc(baseType)->getTypeCategory() != $XSTypeDefinition::SIMPLE_TYPE) {
		reportSchemaError("cos-st-restricts.1.1"_s, $$new($ObjectArray, {
			$of($nc(baseTypeStr)->rawname),
			$of(refName)
		}), elm);
		return nullptr;
	}
	$init($SchemaGrammar);
	if ($equals(baseType, $SchemaGrammar::fAnySimpleType) && baseRefContext == $XSConstants::DERIVATION_RESTRICTION) {
		if (checkBuiltIn(refName, $nc(schemaDoc)->fTargetNamespace)) {
			return nullptr;
		}
		reportSchemaError("cos-st-restricts.1.1"_s, $$new($ObjectArray, {
			$of($nc(baseTypeStr)->rawname),
			$of(refName)
		}), elm);
		return nullptr;
	}
	if (((int32_t)($nc(baseType)->getFinal() & (uint32_t)(int32_t)baseRefContext)) != 0) {
		if (baseRefContext == $XSConstants::DERIVATION_RESTRICTION) {
			reportSchemaError("st-props-correct.3"_s, $$new($ObjectArray, {
				$of(refName),
				$of($nc(baseTypeStr)->rawname)
			}), elm);
		} else if (baseRefContext == $XSConstants::DERIVATION_LIST) {
			reportSchemaError("cos-st-restricts.2.3.1.1"_s, $$new($ObjectArray, {
				$of($nc(baseTypeStr)->rawname),
				$of(refName)
			}), elm);
		} else if (baseRefContext == $XSConstants::DERIVATION_UNION) {
			reportSchemaError("cos-st-restricts.3.3.1.1"_s, $$new($ObjectArray, {
				$of($nc(baseTypeStr)->rawname),
				$of(refName)
			}), elm);
		}
		return nullptr;
	}
	return $cast($XSSimpleType, baseType);
}

bool XSDSimpleTypeTraverser::checkBuiltIn($String* name, $String* namespace$) {
	$init($SchemaSymbols);
	if (namespace$ != $SchemaSymbols::URI_SCHEMAFORSCHEMA) {
		return false;
	}
	$init($SchemaGrammar);
	if ($nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl(name) != nullptr) {
		this->fIsBuiltIn = true;
	}
	return this->fIsBuiltIn;
}

bool XSDSimpleTypeTraverser::isListDatatype($XSSimpleType* validator) {
	$useLocalCurrentObjectStackCache();
	if ($nc(validator)->getVariety() == $XSSimpleType::VARIETY_LIST) {
		return true;
	}
	if ($nc(validator)->getVariety() == $XSSimpleType::VARIETY_UNION) {
		$var($XSObjectList, temp, validator->getMemberTypes());
		for (int32_t i = 0; i < $nc(temp)->getLength(); ++i) {
			if ($nc(($cast($XSSimpleType, $(temp->item(i)))))->getVariety() == $XSSimpleType::VARIETY_LIST) {
				return true;
			}
		}
	}
	return false;
}

$XSSimpleType* XSDSimpleTypeTraverser::errorType($String* name, $String* namespace$, int16_t refType) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaGrammar);
	$var($XSSimpleType, stringType, $cast($XSSimpleType, $nc($SchemaGrammar::SG_SchemaNS)->getTypeDefinition("string"_s)));
	switch (refType) {
	case $XSConstants::DERIVATION_RESTRICTION:
		{
			return $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeRestriction(name, namespace$, (int16_t)0, stringType, nullptr);
		}
	case $XSConstants::DERIVATION_LIST:
		{
			return $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeList(name, namespace$, (int16_t)0, stringType, nullptr);
		}
	case $XSConstants::DERIVATION_UNION:
		{
			return $nc($nc(this->fSchemaHandler)->fDVFactory)->createTypeUnion(name, namespace$, (int16_t)0, $$new($XSSimpleTypeArray, {stringType}), nullptr);
		}
	}
	return nullptr;
}

XSDSimpleTypeTraverser::XSDSimpleTypeTraverser() {
}

$Class* XSDSimpleTypeTraverser::load$($String* name, bool initialize) {
	$loadClass(XSDSimpleTypeTraverser, name, initialize, &_XSDSimpleTypeTraverser_ClassInfo_, allocate$XSDSimpleTypeTraverser);
	return class$;
}

$Class* XSDSimpleTypeTraverser::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com