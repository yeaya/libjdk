#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>

#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Stack.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTIDX_AFORMDEFAULT
#undef ATTIDX_BLOCKDEFAULT
#undef ATTIDX_EFORMDEFAULT
#undef ATTIDX_FINALDEFAULT
#undef ATTIDX_TARGETNAMESPACE
#undef ELEMENT_NODE
#undef FORM_QUALIFIED

using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SchemaNamespaceSupport = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XMLSchemaException = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaException;
using $XSAnnotationInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XInt = ::com::sun::org::apache::xerces::internal::impl::xs::util::XInt;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Stack = ::java::util::Stack;
using $Attr = ::org::w3c::dom::Attr;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
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

$FieldInfo _XSDocumentInfo_FieldInfo_[] = {
	{"fNamespaceSupport", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;", nullptr, $PROTECTED, $field(XSDocumentInfo, fNamespaceSupport)},
	{"fNamespaceSupportRoot", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;", nullptr, $PROTECTED, $field(XSDocumentInfo, fNamespaceSupportRoot)},
	{"SchemaNamespaceSupportStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;>;", $PROTECTED, $field(XSDocumentInfo, SchemaNamespaceSupportStack)},
	{"fAreLocalAttributesQualified", "Z", nullptr, $PROTECTED, $field(XSDocumentInfo, fAreLocalAttributesQualified)},
	{"fAreLocalElementsQualified", "Z", nullptr, $PROTECTED, $field(XSDocumentInfo, fAreLocalElementsQualified)},
	{"fBlockDefault", "S", nullptr, $PROTECTED, $field(XSDocumentInfo, fBlockDefault)},
	{"fFinalDefault", "S", nullptr, $PROTECTED, $field(XSDocumentInfo, fFinalDefault)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, 0, $field(XSDocumentInfo, fTargetNamespace)},
	{"fIsChameleonSchema", "Z", nullptr, $PROTECTED, $field(XSDocumentInfo, fIsChameleonSchema)},
	{"fSchemaElement", "Lorg/w3c/dom/Element;", nullptr, $PROTECTED, $field(XSDocumentInfo, fSchemaElement)},
	{"fImportedNS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(XSDocumentInfo, fImportedNS)},
	{"fValidationContext", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;", nullptr, $PROTECTED, $field(XSDocumentInfo, fValidationContext)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, 0, $field(XSDocumentInfo, fSymbolTable)},
	{"fAttrChecker", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;", nullptr, $PROTECTED, $field(XSDocumentInfo, fAttrChecker)},
	{"fSchemaAttrs", "[Ljava/lang/Object;", nullptr, $PROTECTED, $field(XSDocumentInfo, fSchemaAttrs)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo;", nullptr, $PROTECTED, $field(XSDocumentInfo, fAnnotations)},
	{"fReportedTNS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSDocumentInfo, fReportedTNS)},
	{}
};

$MethodInfo _XSDocumentInfo_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, 0, $method(XSDocumentInfo, init$, void, $Element*, $XSAttributeChecker*, $SymbolTable*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"addAllowedNS", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XSDocumentInfo, addAllowedNS, void, $String*)},
	{"addAnnotation", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo;)V", nullptr, 0, $virtualMethod(XSDocumentInfo, addAnnotation, void, $XSAnnotationInfo*)},
	{"backupNSSupport", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;)V", nullptr, 0, $virtualMethod(XSDocumentInfo, backupNSSupport, void, $SchemaNamespaceSupport*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo;", nullptr, 0, $virtualMethod(XSDocumentInfo, getAnnotations, $XSAnnotationInfo*)},
	{"getSchemaAttrs", "()[Ljava/lang/Object;", nullptr, 0, $virtualMethod(XSDocumentInfo, getSchemaAttrs, $ObjectArray*)},
	{"initNamespaceSupport", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(XSDocumentInfo, initNamespaceSupport, void, $Element*)},
	{"isAllowedNS", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSDocumentInfo, isAllowedNS, bool, $String*)},
	{"needReportTNSError", "(Ljava/lang/String;)Z", nullptr, $FINAL, $method(XSDocumentInfo, needReportTNSError, bool, $String*)},
	{"removeAnnotations", "()V", nullptr, 0, $virtualMethod(XSDocumentInfo, removeAnnotations, void)},
	{"restoreNSSupport", "()V", nullptr, 0, $virtualMethod(XSDocumentInfo, restoreNSSupport, void)},
	{"returnSchemaAttrs", "()V", nullptr, 0, $virtualMethod(XSDocumentInfo, returnSchemaAttrs, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDocumentInfo, toString, $String*)},
	{}
};

$ClassInfo _XSDocumentInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDocumentInfo",
	"java.lang.Object",
	nullptr,
	_XSDocumentInfo_FieldInfo_,
	_XSDocumentInfo_MethodInfo_
};

$Object* allocate$XSDocumentInfo($Class* clazz) {
	return $of($alloc(XSDocumentInfo));
}

void XSDocumentInfo::init$($Element* schemaRoot, $XSAttributeChecker* attrChecker, $SymbolTable* symbolTable) {
	$set(this, SchemaNamespaceSupportStack, $new($Stack));
	$set(this, fImportedNS, $new($ArrayList));
	$set(this, fValidationContext, $new($ValidationState));
	$set(this, fSymbolTable, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fReportedTNS, nullptr);
	$set(this, fSchemaElement, schemaRoot);
	initNamespaceSupport(schemaRoot);
	this->fIsChameleonSchema = false;
	$set(this, fSymbolTable, symbolTable);
	$set(this, fAttrChecker, attrChecker);
	if (schemaRoot != nullptr) {
		$var($Element, root, schemaRoot);
		$set(this, fSchemaAttrs, $nc(attrChecker)->checkAttributes(root, true, this));
		if (this->fSchemaAttrs == nullptr) {
			$throwNew($XMLSchemaException, nullptr, nullptr);
		}
		this->fAreLocalAttributesQualified = $nc(($cast($XInt, $nc(this->fSchemaAttrs)->get($XSAttributeChecker::ATTIDX_AFORMDEFAULT))))->intValue() == $SchemaSymbols::FORM_QUALIFIED;
		this->fAreLocalElementsQualified = $nc(($cast($XInt, $nc(this->fSchemaAttrs)->get($XSAttributeChecker::ATTIDX_EFORMDEFAULT))))->intValue() == $SchemaSymbols::FORM_QUALIFIED;
		this->fBlockDefault = $nc(($cast($XInt, $nc(this->fSchemaAttrs)->get($XSAttributeChecker::ATTIDX_BLOCKDEFAULT))))->shortValue();
		this->fFinalDefault = $nc(($cast($XInt, $nc(this->fSchemaAttrs)->get($XSAttributeChecker::ATTIDX_FINALDEFAULT))))->shortValue();
		$set(this, fTargetNamespace, $cast($String, $nc(this->fSchemaAttrs)->get($XSAttributeChecker::ATTIDX_TARGETNAMESPACE)));
		if (this->fTargetNamespace != nullptr) {
			$set(this, fTargetNamespace, $nc(symbolTable)->addSymbol(this->fTargetNamespace));
		}
		$set(this, fNamespaceSupportRoot, $new($SchemaNamespaceSupport, this->fNamespaceSupport));
		$nc(this->fValidationContext)->setNamespaceSupport(this->fNamespaceSupport);
		$nc(this->fValidationContext)->setSymbolTable(symbolTable);
	}
}

void XSDocumentInfo::initNamespaceSupport($Element* schemaRoot) {
	$useLocalCurrentObjectStackCache();
	$set(this, fNamespaceSupport, $new($SchemaNamespaceSupport));
	$nc(this->fNamespaceSupport)->reset();
	$var($Node, parent, $nc(schemaRoot)->getParentNode());
	while (true) {
		bool var$0 = parent != nullptr && parent->getNodeType() == $Node::ELEMENT_NODE;
		if (!(var$0 && !$nc($(parent->getNodeName()))->equals("DOCUMENT_NODE"_s))) {
			break;
		}
		{
			$var($Element, eparent, $cast($Element, parent));
			$var($NamedNodeMap, map, eparent->getAttributes());
			int32_t length = (map != nullptr) ? $nc(map)->getLength() : 0;
			for (int32_t i = 0; i < length; ++i) {
				$var($Attr, attr, $cast($Attr, map->item(i)));
				$var($String, uri, $nc(attr)->getNamespaceURI());
				if (uri != nullptr && uri->equals("http://www.w3.org/2000/xmlns/"_s)) {
					$var($String, prefix, $nc($(attr->getLocalName()))->intern());
					if (prefix == "xmlns"_s) {
						$assign(prefix, ""_s);
					}
					if ($nc(this->fNamespaceSupport)->getURI(prefix) == nullptr) {
						$nc(this->fNamespaceSupport)->declarePrefix(prefix, $($nc($(attr->getValue()))->intern()));
					}
				}
			}
			$assign(parent, parent->getParentNode());
		}
	}
}

void XSDocumentInfo::backupNSSupport($SchemaNamespaceSupport* nsSupport$renamed) {
	$var($SchemaNamespaceSupport, nsSupport, nsSupport$renamed);
	$nc(this->SchemaNamespaceSupportStack)->push(this->fNamespaceSupport);
	if (nsSupport == nullptr) {
		$assign(nsSupport, this->fNamespaceSupportRoot);
	}
	$set(this, fNamespaceSupport, $new($SchemaNamespaceSupport, nsSupport));
	$nc(this->fValidationContext)->setNamespaceSupport(this->fNamespaceSupport);
}

void XSDocumentInfo::restoreNSSupport() {
	$set(this, fNamespaceSupport, $cast($SchemaNamespaceSupport, $nc(this->SchemaNamespaceSupportStack)->pop()));
	$nc(this->fValidationContext)->setNamespaceSupport(this->fNamespaceSupport);
}

$String* XSDocumentInfo::toString() {
	return this->fTargetNamespace == nullptr ? "no targetNamspace"_s : $str({"targetNamespace is "_s, this->fTargetNamespace});
}

void XSDocumentInfo::addAllowedNS($String* namespace$) {
	$nc(this->fImportedNS)->add(namespace$ == nullptr ? ""_s : namespace$);
}

bool XSDocumentInfo::isAllowedNS($String* namespace$) {
	return $nc(this->fImportedNS)->contains(namespace$ == nullptr ? $of(""_s) : $of(namespace$));
}

bool XSDocumentInfo::needReportTNSError($String* uri) {
	if (this->fReportedTNS == nullptr) {
		$set(this, fReportedTNS, $new($ArrayList));
	} else if ($nc(this->fReportedTNS)->contains(uri)) {
		return false;
	}
	$nc(this->fReportedTNS)->add(uri);
	return true;
}

$ObjectArray* XSDocumentInfo::getSchemaAttrs() {
	return this->fSchemaAttrs;
}

void XSDocumentInfo::returnSchemaAttrs() {
	$nc(this->fAttrChecker)->returnAttrArray(this->fSchemaAttrs, nullptr);
	$set(this, fSchemaAttrs, nullptr);
}

void XSDocumentInfo::addAnnotation($XSAnnotationInfo* info) {
	$set($nc(info), next, this->fAnnotations);
	$set(this, fAnnotations, info);
}

$XSAnnotationInfo* XSDocumentInfo::getAnnotations() {
	return this->fAnnotations;
}

void XSDocumentInfo::removeAnnotations() {
	$set(this, fAnnotations, nullptr);
}

XSDocumentInfo::XSDocumentInfo() {
}

$Class* XSDocumentInfo::load$($String* name, bool initialize) {
	$loadClass(XSDocumentInfo, name, initialize, &_XSDocumentInfo_ClassInfo_, allocate$XSDocumentInfo);
	return class$;
}

$Class* XSDocumentInfo::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com