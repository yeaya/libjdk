#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/BalancedDTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDocumentHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/io/IOException.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARED
#undef BALANCE_SYNTAX_TREES
#undef CHAR_REF_PROBABLE_WS
#undef DATATYPE_VALIDATOR_FACTORY
#undef DATATYPE_VALIDATOR_FACTORY_PROPERTY
#undef DEBUG_ATTRIBUTES
#undef DEBUG_ELEMENT_CHILDREN
#undef DEFAULT_TYPE_FIXED
#undef DEFAULT_TYPE_REQUIRED
#undef DYNAMIC_VALIDATION
#undef DYNAMIC_VALIDATION_FEATURE
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FALSE
#undef FEATURE_DEFAULTS
#undef GRAMMAR_POOL
#undef JAXP_PROPERTY_PREFIX
#undef NAMESPACES
#undef NAMESPACES_FEATURE
#undef NS_XMLSCHEMA
#undef PARSER_SETTINGS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_LANGUAGE
#undef SCHEMA_VALIDATION_FEATURE
#undef SEVERITY_ERROR
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TRUE
#undef TYPE_ANY
#undef TYPE_CHILDREN
#undef TYPE_EMPTY
#undef TYPE_ENTITY
#undef TYPE_ENUMERATION
#undef TYPE_ID
#undef TYPE_IDREF
#undef TYPE_MIXED
#undef TYPE_NMTOKEN
#undef TYPE_NOTATION
#undef TYPE_SIMPLE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_DOMAIN
#undef XML_DTD

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $BalancedDTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::BalancedDTDGrammar;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $DTDGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket;
using $XMLAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLAttributeDecl;
using $XMLDTDDescription = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription;
using $XMLDTDLoader = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader;
using $XMLElementDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl;
using $XMLEntityDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl;
using $XMLSimpleType = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType;
using $ContentModelValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator;
using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $EntityState = ::com::sun::org::apache::xerces::internal::impl::validation::EntityState;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $XMLDocumentHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $1XMLDTDDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLDTDValidator_FieldInfo_[] = {
	{"NAMESPACES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, NAMESPACES)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, VALIDATION)},
	{"DYNAMIC_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, DYNAMIC_VALIDATION)},
	{"BALANCE_SYNTAX_TREES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, BALANCE_SYNTAX_TREES)},
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, WARN_ON_DUPLICATE_ATTDEF)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, PARSER_SETTINGS)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, ERROR_REPORTER)},
	{"GRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, GRAMMAR_POOL)},
	{"DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, DATATYPE_VALIDATOR_FACTORY)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDValidator, VALIDATION_MANAGER)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDValidator, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDValidator, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDValidator, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDValidator, PROPERTY_DEFAULTS)},
	{"DEBUG_ATTRIBUTES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDTDValidator, DEBUG_ATTRIBUTES)},
	{"DEBUG_ELEMENT_CHILDREN", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDTDValidator, DEBUG_ELEMENT_CHILDREN)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValidationManager)},
	{"fValidationState", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;", nullptr, $PROTECTED | $FINAL, $field(XMLDTDValidator, fValidationState)},
	{"fNamespaces", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fNamespaces)},
	{"fValidation", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fValidation)},
	{"fDTDValidation", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fDTDValidation)},
	{"fDynamicValidation", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fDynamicValidation)},
	{"fBalanceSyntaxTrees", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fBalanceSyntaxTrees)},
	{"fWarnDuplicateAttdef", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fWarnDuplicateAttdef)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLDTDValidator, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLDTDValidator, fErrorReporter)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XMLDTDValidator, fGrammarPool)},
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket;", nullptr, $PROTECTED, $field(XMLDTDValidator, fGrammarBucket)},
	{"fDocLocation", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fDocLocation)},
	{"fNamespaceContext", "Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;", nullptr, $PROTECTED, $field(XMLDTDValidator, fNamespaceContext)},
	{"fDatatypeValidatorFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PROTECTED, $field(XMLDTDValidator, fDatatypeValidatorFactory)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XMLDTDValidator, fDocumentHandler)},
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XMLDTDValidator, fDocumentSource)},
	{"fDTDGrammar", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PROTECTED, $field(XMLDTDValidator, fDTDGrammar)},
	{"fSeenDoctypeDecl", "Z", nullptr, $PROTECTED, $field(XMLDTDValidator, fSeenDoctypeDecl)},
	{"fPerformValidation", "Z", nullptr, $PRIVATE, $field(XMLDTDValidator, fPerformValidation)},
	{"fSchemaType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDTDValidator, fSchemaType)},
	{"fCurrentElement", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fCurrentElement)},
	{"fCurrentElementIndex", "I", nullptr, $PRIVATE, $field(XMLDTDValidator, fCurrentElementIndex)},
	{"fCurrentContentSpecType", "I", nullptr, $PRIVATE, $field(XMLDTDValidator, fCurrentContentSpecType)},
	{"fRootElement", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fRootElement)},
	{"fInCDATASection", "Z", nullptr, $PRIVATE, $field(XMLDTDValidator, fInCDATASection)},
	{"fElementIndexStack", "[I", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementIndexStack)},
	{"fContentSpecTypeStack", "[I", nullptr, $PRIVATE, $field(XMLDTDValidator, fContentSpecTypeStack)},
	{"fElementQNamePartsStack", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementQNamePartsStack)},
	{"fElementChildren", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementChildren)},
	{"fElementChildrenLength", "I", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementChildrenLength)},
	{"fElementChildrenOffsetStack", "[I", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementChildrenOffsetStack)},
	{"fElementDepth", "I", nullptr, $PRIVATE, $field(XMLDTDValidator, fElementDepth)},
	{"fSeenRootElement", "Z", nullptr, $PRIVATE, $field(XMLDTDValidator, fSeenRootElement)},
	{"fInElementContent", "Z", nullptr, $PRIVATE, $field(XMLDTDValidator, fInElementContent)},
	{"fTempElementDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fTempElementDecl)},
	{"fTempAttDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fTempAttDecl)},
	{"fEntityDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fEntityDecl)},
	{"fTempQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fTempQName)},
	{"fBuffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDValidator, fBuffer)},
	{"fValID", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValID)},
	{"fValIDRef", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValIDRef)},
	{"fValIDRefs", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValIDRefs)},
	{"fValENTITY", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValENTITY)},
	{"fValENTITIES", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValENTITIES)},
	{"fValNMTOKEN", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValNMTOKEN)},
	{"fValNMTOKENS", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValNMTOKENS)},
	{"fValNOTATION", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PROTECTED, $field(XMLDTDValidator, fValNOTATION)},
	{}
};

$MethodInfo _XMLDTDValidator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDTDValidator, init$, void)},
	{"addDTDDefaultAttrsAndValidate", "(Lcom/sun/org/apache/xerces/internal/xni/QName;ILcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, addDTDDefaultAttrsAndValidate, void, $QName*, int32_t, $XMLAttributes*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"charDataInContent", "()V", nullptr, $PRIVATE, $method(XMLDTDValidator, charDataInContent, void)},
	{"characterData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Z", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, characterData, bool, $String*, $Augmentations*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"checkContent", "(I[Lcom/sun/org/apache/xerces/internal/xni/QName;II)I", nullptr, $PRIVATE, $method(XMLDTDValidator, checkContent, int32_t, int32_t, $QNameArray*, int32_t, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endNamespaceScope", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, endNamespaceScope, void, $QName*, $Augmentations*, bool)},
	{"ensureStackCapacity", "(I)V", nullptr, $PRIVATE, $method(XMLDTDValidator, ensureStackCapacity, void, int32_t)},
	{"getAttributeTypeName", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XMLDTDValidator, getAttributeTypeName, $String*, $XMLAttributeDecl*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getDocumentSource, $XMLDocumentSource*)},
	{"getExternalEntityRefInAttrValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, getExternalEntityRefInAttrValue, $String*, $String*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getFeatureDefault, $Boolean*, $String*)},
	{"getGrammarBucket", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket;", nullptr, 0, $virtualMethod(XMLDTDValidator, getGrammarBucket, $DTDGrammarBucket*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, getRecognizedProperties, $StringArray*)},
	{"handleEndElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;Z)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, handleEndElement, void, $QName*, $Augmentations*, bool), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"handleStartElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Z", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, handleStartElement, bool, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"hasGrammar", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLDTDValidator, hasGrammar, bool)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"init", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, init, void)},
	{"invalidStandaloneAttDef", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, invalidStandaloneAttDef, bool, $QName*, $QName*)},
	{"isSpace", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, isSpace, bool, int32_t)},
	{"normalizeAttrValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;I)Z", nullptr, $PRIVATE, $method(XMLDTDValidator, normalizeAttrValue, bool, $XMLAttributes*, int32_t)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"rootElementSpecified", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PRIVATE | $FINAL, $method(XMLDTDValidator, rootElementSpecified, void, $QName*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, setDocumentSource, void, $XMLDocumentSource*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startNamespaceScope", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, startNamespaceScope, void, $QName*, $XMLAttributes*, $Augmentations*)},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(XMLDTDValidator, validate, bool)},
	{"validateDTDattribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLAttributeDecl;)V", nullptr, $PROTECTED, $virtualMethod(XMLDTDValidator, validateDTDattribute, void, $QName*, $String*, $XMLAttributeDecl*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDValidator, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDTDValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidatorFilter,com.sun.org.apache.xerces.internal.impl.RevalidationHandler",
	_XMLDTDValidator_FieldInfo_,
	_XMLDTDValidator_MethodInfo_
};

$Object* allocate$XMLDTDValidator($Class* clazz) {
	return $of($alloc(XMLDTDValidator));
}

int32_t XMLDTDValidator::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XMLDTDValidator::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XMLDTDValidator::clone() {
	 return this->$XMLComponent::clone();
}

$String* XMLDTDValidator::toString() {
	 return this->$XMLComponent::toString();
}

void XMLDTDValidator::finalize() {
	this->$XMLComponent::finalize();
}

$String* XMLDTDValidator::NAMESPACES = nullptr;
$String* XMLDTDValidator::VALIDATION = nullptr;
$String* XMLDTDValidator::DYNAMIC_VALIDATION = nullptr;
$String* XMLDTDValidator::BALANCE_SYNTAX_TREES = nullptr;
$String* XMLDTDValidator::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* XMLDTDValidator::PARSER_SETTINGS = nullptr;
$String* XMLDTDValidator::SYMBOL_TABLE = nullptr;
$String* XMLDTDValidator::ERROR_REPORTER = nullptr;
$String* XMLDTDValidator::GRAMMAR_POOL = nullptr;
$String* XMLDTDValidator::DATATYPE_VALIDATOR_FACTORY = nullptr;
$String* XMLDTDValidator::VALIDATION_MANAGER = nullptr;
$StringArray* XMLDTDValidator::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLDTDValidator::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLDTDValidator::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLDTDValidator::PROPERTY_DEFAULTS = nullptr;

void XMLDTDValidator::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, fValidationManager, nullptr);
	$set(this, fValidationState, $new($ValidationState));
	$set(this, fNamespaceContext, nullptr);
	this->fSeenDoctypeDecl = false;
	$set(this, fCurrentElement, $new($QName));
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	$set(this, fRootElement, $new($QName));
	this->fInCDATASection = false;
	$set(this, fElementIndexStack, $new($ints, 8));
	$set(this, fContentSpecTypeStack, $new($ints, 8));
	$set(this, fElementQNamePartsStack, $new($QNameArray, 8));
	$set(this, fElementChildren, $new($QNameArray, 32));
	this->fElementChildrenLength = 0;
	$set(this, fElementChildrenOffsetStack, $new($ints, 32));
	this->fElementDepth = -1;
	this->fSeenRootElement = false;
	this->fInElementContent = false;
	$set(this, fTempElementDecl, $new($XMLElementDecl));
	$set(this, fTempAttDecl, $new($XMLAttributeDecl));
	$set(this, fEntityDecl, $new($XMLEntityDecl));
	$set(this, fTempQName, $new($QName));
	$set(this, fBuffer, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->fElementQNamePartsStack)->length; ++i) {
		$nc(this->fElementQNamePartsStack)->set(i, $$new($QName));
	}
	$set(this, fGrammarBucket, $new($DTDGrammarBucket));
}

$DTDGrammarBucket* XMLDTDValidator::getGrammarBucket() {
	return this->fGrammarBucket;
}

void XMLDTDValidator::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	$set(this, fDTDGrammar, nullptr);
	this->fSeenDoctypeDecl = false;
	this->fInCDATASection = false;
	this->fSeenRootElement = false;
	this->fInElementContent = false;
	this->fCurrentElementIndex = -1;
	this->fCurrentContentSpecType = -1;
	$nc(this->fRootElement)->clear();
	$nc(this->fValidationState)->resetIDTables();
	$nc(this->fGrammarBucket)->clear();
	this->fElementDepth = -1;
	this->fElementChildrenLength = 0;
	bool parser_settings = $nc(componentManager)->getFeature(XMLDTDValidator::PARSER_SETTINGS, true);
	if (!parser_settings) {
		$nc(this->fValidationManager)->addValidationState(this->fValidationState);
		return;
	}
	this->fNamespaces = componentManager->getFeature(XMLDTDValidator::NAMESPACES, true);
	this->fValidation = componentManager->getFeature(XMLDTDValidator::VALIDATION, false);
	$init($Constants);
	this->fDTDValidation = !(componentManager->getFeature($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}), false));
	this->fDynamicValidation = componentManager->getFeature(XMLDTDValidator::DYNAMIC_VALIDATION, false);
	this->fBalanceSyntaxTrees = componentManager->getFeature(XMLDTDValidator::BALANCE_SYNTAX_TREES, false);
	this->fWarnDuplicateAttdef = componentManager->getFeature(XMLDTDValidator::WARN_ON_DUPLICATE_ATTDEF, false);
	$set(this, fSchemaType, $cast($String, componentManager->getProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), nullptr)));
	$set(this, fValidationManager, $cast($ValidationManager, componentManager->getProperty(XMLDTDValidator::VALIDATION_MANAGER)));
	$nc(this->fValidationManager)->addValidationState(this->fValidationState);
	$nc(this->fValidationState)->setUsingNamespaces(this->fNamespaces);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}))));
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}))));
	$set(this, fGrammarPool, $cast($XMLGrammarPool, componentManager->getProperty(XMLDTDValidator::GRAMMAR_POOL, nullptr)));
	$set(this, fDatatypeValidatorFactory, $cast($DTDDVFactory, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}))));
	init();
}

$StringArray* XMLDTDValidator::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLDTDValidator::RECOGNIZED_FEATURES)->clone());
}

void XMLDTDValidator::setFeature($String* featureId, bool state) {
}

$StringArray* XMLDTDValidator::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLDTDValidator::RECOGNIZED_PROPERTIES)->clone());
}

void XMLDTDValidator::setProperty($String* propertyId, Object$* value) {
}

$Boolean* XMLDTDValidator::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLDTDValidator::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLDTDValidator::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLDTDValidator::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLDTDValidator::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLDTDValidator::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLDTDValidator::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLDTDValidator::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLDTDValidator::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
}

$XMLDocumentHandler* XMLDTDValidator::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XMLDTDValidator::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* XMLDTDValidator::getDocumentSource() {
	return this->fDocumentSource;
}

void XMLDTDValidator::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	if (this->fGrammarPool != nullptr) {
		$init($XMLGrammarDescription);
		$var($GrammarArray, grammars, $nc(this->fGrammarPool)->retrieveInitialGrammarSet($XMLGrammarDescription::XML_DTD));
		int32_t length = (grammars != nullptr) ? $nc(grammars)->length : 0;
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->fGrammarBucket)->putGrammar($cast($DTDGrammar, grammars->get(i)));
		}
	}
	$set(this, fDocLocation, locator);
	$set(this, fNamespaceContext, namespaceContext);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startDocument(locator, encoding, namespaceContext, augs);
	}
}

void XMLDTDValidator::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	$nc(this->fGrammarBucket)->setStandalone(standalone != nullptr && standalone->equals("yes"_s));
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->xmlDecl(version, encoding, standalone, augs);
	}
}

void XMLDTDValidator::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	this->fSeenDoctypeDecl = true;
	$nc(this->fRootElement)->setValues(nullptr, rootElement, rootElement, nullptr);
	$var($String, eid, nullptr);
	try {
		$assign(eid, $XMLEntityManager::expandSystemId(systemId, $($nc(this->fDocLocation)->getExpandedSystemId()), false));
	} catch ($IOException& e) {
	}
	$var($XMLDTDDescription, grammarDesc, $new($XMLDTDDescription, publicId, systemId, $($nc(this->fDocLocation)->getExpandedSystemId()), eid, rootElement));
	$set(this, fDTDGrammar, $nc(this->fGrammarBucket)->getGrammar(grammarDesc));
	if (this->fDTDGrammar == nullptr) {
		if (this->fGrammarPool != nullptr && (systemId != nullptr || publicId != nullptr)) {
			$set(this, fDTDGrammar, $cast($DTDGrammar, $nc(this->fGrammarPool)->retrieveGrammar(grammarDesc)));
		}
	}
	if (this->fDTDGrammar == nullptr) {
		if (!this->fBalanceSyntaxTrees) {
			$set(this, fDTDGrammar, $new($DTDGrammar, this->fSymbolTable, grammarDesc));
		} else {
			$set(this, fDTDGrammar, $new($BalancedDTDGrammar, this->fSymbolTable, grammarDesc));
		}
	} else {
		$nc(this->fValidationManager)->setCachedDTD(true);
	}
	$nc(this->fGrammarBucket)->setActiveGrammar(this->fDTDGrammar);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->doctypeDecl(rootElement, publicId, systemId, augs);
	}
}

void XMLDTDValidator::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	handleStartElement(element, attributes, augs);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startElement(element, attributes, augs);
	}
}

void XMLDTDValidator::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	bool removed = handleStartElement(element, attributes, augs);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->emptyElement(element, attributes, augs);
	}
	if (!removed) {
		handleEndElement(element, augs, true);
	}
}

void XMLDTDValidator::characters($XMLString* text, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	bool callNextCharacters = true;
	bool allWhiteSpace = true;
	for (int32_t i = $nc(text)->offset; i < text->offset + text->length; ++i) {
		if (!isSpace($nc(text->ch)->get(i))) {
			allWhiteSpace = false;
			break;
		}
	}
	if (this->fInElementContent && allWhiteSpace && !this->fInCDATASection) {
		if (this->fDocumentHandler != nullptr) {
			$nc(this->fDocumentHandler)->ignorableWhitespace(text, augs);
			callNextCharacters = false;
		}
	}
	if (this->fPerformValidation) {
		if (this->fInElementContent) {
			bool var$0 = $nc(this->fGrammarBucket)->getStandalone();
			if (var$0 && $nc(this->fDTDGrammar)->getElementDeclIsExternal(this->fCurrentElementIndex)) {
				if (allWhiteSpace) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_WHITE_SPACE_IN_ELEMENT_CONTENT_WHEN_STANDALONE"_s, nullptr, $XMLErrorReporter::SEVERITY_ERROR);
				}
			}
			if (!allWhiteSpace) {
				charDataInContent();
			}
			$init($Constants);
			$init($Boolean);
			if (augs != nullptr && $equals(augs->getItem($Constants::CHAR_REF_PROBABLE_WS), $Boolean::TRUE)) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENT_INVALID_SPECIFIED"_s, $$new($ObjectArray, {
					$of($nc(this->fCurrentElement)->rawname),
					$($of($nc(this->fDTDGrammar)->getContentSpecAsString(this->fElementDepth))),
					$of("character reference"_s)
				}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if (this->fCurrentContentSpecType == $XMLElementDecl::TYPE_EMPTY) {
			charDataInContent();
		}
	}
	if (callNextCharacters && this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->characters(text, augs);
	}
}

void XMLDTDValidator::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->ignorableWhitespace(text, augs);
	}
}

void XMLDTDValidator::endElement($QName* element, $Augmentations* augs) {
	handleEndElement(element, augs, false);
}

void XMLDTDValidator::startCDATA($Augmentations* augs) {
	if (this->fPerformValidation && this->fInElementContent) {
		charDataInContent();
	}
	this->fInCDATASection = true;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startCDATA(augs);
	}
}

void XMLDTDValidator::endCDATA($Augmentations* augs) {
	this->fInCDATASection = false;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endCDATA(augs);
	}
}

void XMLDTDValidator::endDocument($Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endDocument(augs);
	}
}

void XMLDTDValidator::comment($XMLString* text, $Augmentations* augs) {
	if (this->fPerformValidation && this->fElementDepth >= 0 && this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->getElementDecl(this->fCurrentElementIndex, this->fTempElementDecl);
		if ($nc(this->fTempElementDecl)->type == $XMLElementDecl::TYPE_EMPTY) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENT_INVALID_SPECIFIED"_s, $$new($ObjectArray, {
				$of($nc(this->fCurrentElement)->rawname),
				$of("EMPTY"_s),
				$of("comment"_s)
			}), $XMLErrorReporter::SEVERITY_ERROR);
		}
	}
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->comment(text, augs);
	}
}

void XMLDTDValidator::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fPerformValidation && this->fElementDepth >= 0 && this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->getElementDecl(this->fCurrentElementIndex, this->fTempElementDecl);
		if ($nc(this->fTempElementDecl)->type == $XMLElementDecl::TYPE_EMPTY) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENT_INVALID_SPECIFIED"_s, $$new($ObjectArray, {
				$of($nc(this->fCurrentElement)->rawname),
				$of("EMPTY"_s),
				$of("processing instruction"_s)
			}), $XMLErrorReporter::SEVERITY_ERROR);
		}
	}
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->processingInstruction(target, data, augs);
	}
}

void XMLDTDValidator::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	if (this->fPerformValidation && this->fElementDepth >= 0 && this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->getElementDecl(this->fCurrentElementIndex, this->fTempElementDecl);
		if ($nc(this->fTempElementDecl)->type == $XMLElementDecl::TYPE_EMPTY) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENT_INVALID_SPECIFIED"_s, $$new($ObjectArray, {
				$of($nc(this->fCurrentElement)->rawname),
				$of("EMPTY"_s),
				$of("ENTITY"_s)
			}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		if ($nc(this->fGrammarBucket)->getStandalone()) {
			$XMLDTDLoader::checkStandaloneEntityRef(name, this->fDTDGrammar, this->fEntityDecl, this->fErrorReporter);
		}
	}
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startGeneralEntity(name, identifier, encoding, augs);
	}
}

void XMLDTDValidator::endGeneralEntity($String* name, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endGeneralEntity(name, augs);
	}
}

void XMLDTDValidator::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->textDecl(version, encoding, augs);
	}
}

bool XMLDTDValidator::hasGrammar() {
	return (this->fDTDGrammar != nullptr);
}

bool XMLDTDValidator::validate() {
	$init($Constants);
	return (this->fSchemaType != $Constants::NS_XMLSCHEMA) && (!this->fDynamicValidation && this->fValidation || this->fDynamicValidation && this->fSeenDoctypeDecl) && (this->fDTDValidation || this->fSeenDoctypeDecl);
}

void XMLDTDValidator::addDTDDefaultAttrsAndValidate($QName* elementName, int32_t elementIndex, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	if (elementIndex == -1 || this->fDTDGrammar == nullptr) {
		return;
	}
	int32_t attlistIndex = $nc(this->fDTDGrammar)->getFirstAttributeDeclIndex(elementIndex);
	while (attlistIndex != -1) {
		$nc(this->fDTDGrammar)->getAttributeDecl(attlistIndex, this->fTempAttDecl);
		$var($String, attPrefix, $nc($nc(this->fTempAttDecl)->name)->prefix);
		$var($String, attLocalpart, $nc($nc(this->fTempAttDecl)->name)->localpart);
		$var($String, attRawName, $nc($nc(this->fTempAttDecl)->name)->rawname);
		$var($String, attType, getAttributeTypeName(this->fTempAttDecl));
		int32_t attDefaultType = $nc($nc(this->fTempAttDecl)->simpleType)->defaultType;
		$var($String, attValue, nullptr);
		if ($nc($nc(this->fTempAttDecl)->simpleType)->defaultValue != nullptr) {
			$assign(attValue, $nc($nc(this->fTempAttDecl)->simpleType)->defaultValue);
		}
		bool specified = false;
		bool required = attDefaultType == $XMLSimpleType::DEFAULT_TYPE_REQUIRED;
		$init($XMLSymbols);
		bool cdata = attType == $XMLSymbols::fCDATASymbol;
		if (!cdata || required || attValue != nullptr) {
			int32_t attrCount = $nc(attributes)->getLength();
			for (int32_t i = 0; i < attrCount; ++i) {
				if (attributes->getQName(i) == attRawName) {
					specified = true;
					break;
				}
			}
		}
		if (!specified) {
			if (required) {
				if (this->fPerformValidation) {
					$var($ObjectArray, args, $new($ObjectArray, {
						$of($nc(elementName)->localpart),
						$of(attRawName)
					}));
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_REQUIRED_ATTRIBUTE_NOT_SPECIFIED"_s, args, $XMLErrorReporter::SEVERITY_ERROR);
				}
			} else if (attValue != nullptr) {
				if (this->fPerformValidation && $nc(this->fGrammarBucket)->getStandalone()) {
					if ($nc(this->fDTDGrammar)->getAttributeDeclIsExternal(attlistIndex)) {
						$var($ObjectArray, args, $new($ObjectArray, {
							$of($nc(elementName)->localpart),
							$of(attRawName)
						}));
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DEFAULTED_ATTRIBUTE_NOT_SPECIFIED"_s, args, $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
				if (this->fNamespaces) {
					int32_t index = $nc(attRawName)->indexOf((int32_t)u':');
					if (index != -1) {
						$assign(attPrefix, attRawName->substring(0, index));
						$assign(attPrefix, $nc(this->fSymbolTable)->addSymbol(attPrefix));
						$assign(attLocalpart, attRawName->substring(index + 1));
						$assign(attLocalpart, $nc(this->fSymbolTable)->addSymbol(attLocalpart));
					}
				}
				$nc(this->fTempQName)->setValues(attPrefix, attLocalpart, attRawName, $nc($nc(this->fTempAttDecl)->name)->uri);
				$nc(attributes)->addAttribute(this->fTempQName, attType, attValue);
			}
		}
		attlistIndex = $nc(this->fDTDGrammar)->getNextAttributeDeclIndex(attlistIndex);
	}
	int32_t attrCount = $nc(attributes)->getLength();
	for (int32_t i = 0; i < attrCount; ++i) {
		$var($String, attrRawName, attributes->getQName(i));
		bool declared = false;
		if (this->fPerformValidation) {
			if ($nc(this->fGrammarBucket)->getStandalone()) {
				$var($String, nonNormalizedValue, attributes->getNonNormalizedValue(i));
				if (nonNormalizedValue != nullptr) {
					$var($String, entityName, getExternalEntityRefInAttrValue(nonNormalizedValue));
					if (entityName != nullptr) {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_REFERENCE_TO_EXTERNALLY_DECLARED_ENTITY_WHEN_STANDALONE"_s, $$new($ObjectArray, {$of(entityName)}), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
			}
		}
		int32_t position = $nc(this->fDTDGrammar)->getFirstAttributeDeclIndex(elementIndex);
		while (position != -1) {
			$nc(this->fDTDGrammar)->getAttributeDecl(position, this->fTempAttDecl);
			if ($nc($nc(this->fTempAttDecl)->name)->rawname == attrRawName) {
				declared = true;
				break;
			}
			position = $nc(this->fDTDGrammar)->getNextAttributeDeclIndex(position);
		}
		if (!declared) {
			if (this->fPerformValidation) {
				$var($ObjectArray, args, $new($ObjectArray, {
					$of($nc(elementName)->rawname),
					$of(attrRawName)
				}));
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ATTRIBUTE_NOT_DECLARED"_s, args, $XMLErrorReporter::SEVERITY_ERROR);
			}
			continue;
		}
		$var($String, type, getAttributeTypeName(this->fTempAttDecl));
		attributes->setType(i, type);
		$init($Constants);
		$init($Boolean);
		$nc($(attributes->getAugmentations(i)))->putItem($Constants::ATTRIBUTE_DECLARED, $Boolean::TRUE);
		bool changedByNormalization = false;
		$var($String, oldValue, attributes->getValue(i));
		$var($String, attrValue, oldValue);
		$init($XMLSymbols);
		if (attributes->isSpecified(i) && type != $XMLSymbols::fCDATASymbol) {
			changedByNormalization = normalizeAttrValue(attributes, i);
			$assign(attrValue, attributes->getValue(i));
			bool var$0 = this->fPerformValidation && $nc(this->fGrammarBucket)->getStandalone() && changedByNormalization;
			if (var$0 && $nc(this->fDTDGrammar)->getAttributeDeclIsExternal(position)) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ATTVALUE_CHANGED_DURING_NORMALIZATION_WHEN_STANDALONE"_s, $$new($ObjectArray, {
					$of(attrRawName),
					$of(oldValue),
					$of(attrValue)
				}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if (!this->fPerformValidation) {
			continue;
		}
		if ($nc($nc(this->fTempAttDecl)->simpleType)->defaultType == $XMLSimpleType::DEFAULT_TYPE_FIXED) {
			$var($String, defaultValue, $nc($nc(this->fTempAttDecl)->simpleType)->defaultValue);
			if (!$nc(attrValue)->equals(defaultValue)) {
				$var($ObjectArray, args, $new($ObjectArray, {
					$of($nc(elementName)->localpart),
					$of(attrRawName),
					$of(attrValue),
					$of(defaultValue)
				}));
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_FIXED_ATTVALUE_INVALID"_s, args, $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if ($nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_ENTITY || $nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_ENUMERATION || $nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_ID || $nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_IDREF || $nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_NMTOKEN || $nc($nc(this->fTempAttDecl)->simpleType)->type == $XMLSimpleType::TYPE_NOTATION) {
			validateDTDattribute(elementName, attrValue, this->fTempAttDecl);
		}
	}
}

$String* XMLDTDValidator::getExternalEntityRefInAttrValue($String* nonNormalizedValue) {
	$useLocalCurrentObjectStackCache();
	int32_t valLength = $nc(nonNormalizedValue)->length();
	int32_t ampIndex = nonNormalizedValue->indexOf((int32_t)u'&');
	while (ampIndex != -1) {
		if (ampIndex + 1 < valLength && nonNormalizedValue->charAt(ampIndex + 1) != u'#') {
			int32_t semicolonIndex = nonNormalizedValue->indexOf((int32_t)u';', ampIndex + 1);
			$var($String, entityName, nonNormalizedValue->substring(ampIndex + 1, semicolonIndex));
			$assign(entityName, $nc(this->fSymbolTable)->addSymbol(entityName));
			int32_t entIndex = $nc(this->fDTDGrammar)->getEntityDeclIndex(entityName);
			if (entIndex > -1) {
				$nc(this->fDTDGrammar)->getEntityDecl(entIndex, this->fEntityDecl);
				if ($nc(this->fEntityDecl)->inExternal || ($assign(entityName, getExternalEntityRefInAttrValue($nc(this->fEntityDecl)->value))) != nullptr) {
					return entityName;
				}
			}
		}
		ampIndex = nonNormalizedValue->indexOf((int32_t)u'&', ampIndex + 1);
	}
	return nullptr;
}

void XMLDTDValidator::validateDTDattribute($QName* element, $String* attValue, $XMLAttributeDecl* attributeDecl) {
	$useLocalCurrentObjectStackCache();
	switch ($nc($nc(attributeDecl)->simpleType)->type) {
	case $XMLSimpleType::TYPE_ENTITY:
		{
			{
				bool isAlistAttribute = $nc(attributeDecl->simpleType)->list;
				try {
					if (isAlistAttribute) {
						$nc(this->fValENTITIES)->validate(attValue, this->fValidationState);
					} else {
						$nc(this->fValENTITY)->validate(attValue, this->fValidationState);
					}
				} catch ($InvalidDatatypeValueException& ex) {
					$init($XMLMessageFormatter);
					$var($String, var$0, $XMLMessageFormatter::XML_DOMAIN);
					$var($String, var$1, ex->getKey());
					$nc(this->fErrorReporter)->reportError(var$0, var$1, $(ex->getArgs()), $XMLErrorReporter::SEVERITY_ERROR);
				}
				break;
			}
		}
	case $XMLSimpleType::TYPE_NOTATION:
		{}
	case $XMLSimpleType::TYPE_ENUMERATION:
		{
			{
				bool found = false;
				$var($StringArray, enumVals, $nc(attributeDecl->simpleType)->enumeration);
				if (enumVals == nullptr) {
					found = false;
				} else {
					for (int32_t i = 0; i < $nc(enumVals)->length; ++i) {
						if (attValue == enumVals->get(i) || $nc(attValue)->equals(enumVals->get(i))) {
							found = true;
							break;
						}
					}
				}
				if (!found) {
					$var($StringBuilder, enumValueString, $new($StringBuilder));
					if (enumVals != nullptr) {
						for (int32_t i = 0; i < enumVals->length; ++i) {
							enumValueString->append($$str({enumVals->get(i), " "_s}));
						}
					}
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ATTRIBUTE_VALUE_NOT_IN_LIST"_s, $$new($ObjectArray, {
						$of($nc(attributeDecl->name)->rawname),
						$of(attValue),
						$of(enumValueString)
					}), $XMLErrorReporter::SEVERITY_ERROR);
				}
				break;
			}
		}
	case $XMLSimpleType::TYPE_ID:
		{
			{
				try {
					$nc(this->fValID)->validate(attValue, this->fValidationState);
				} catch ($InvalidDatatypeValueException& ex) {
					$init($XMLMessageFormatter);
					$var($String, var$2, $XMLMessageFormatter::XML_DOMAIN);
					$var($String, var$3, ex->getKey());
					$nc(this->fErrorReporter)->reportError(var$2, var$3, $(ex->getArgs()), $XMLErrorReporter::SEVERITY_ERROR);
				}
				break;
			}
		}
	case $XMLSimpleType::TYPE_IDREF:
		{
			{
				bool isAlistAttribute = $nc(attributeDecl->simpleType)->list;
				try {
					if (isAlistAttribute) {
						$nc(this->fValIDRefs)->validate(attValue, this->fValidationState);
					} else {
						$nc(this->fValIDRef)->validate(attValue, this->fValidationState);
					}
				} catch ($InvalidDatatypeValueException& ex) {
					if (isAlistAttribute) {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "IDREFSInvalid"_s, $$new($ObjectArray, {$of(attValue)}), $XMLErrorReporter::SEVERITY_ERROR);
					} else {
						$init($XMLMessageFormatter);
						$var($String, var$4, $XMLMessageFormatter::XML_DOMAIN);
						$var($String, var$5, ex->getKey());
						$nc(this->fErrorReporter)->reportError(var$4, var$5, $(ex->getArgs()), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
				break;
			}
		}
	case $XMLSimpleType::TYPE_NMTOKEN:
		{
			{
				bool isAlistAttribute = $nc(attributeDecl->simpleType)->list;
				try {
					if (isAlistAttribute) {
						$nc(this->fValNMTOKENS)->validate(attValue, this->fValidationState);
					} else {
						$nc(this->fValNMTOKEN)->validate(attValue, this->fValidationState);
					}
				} catch ($InvalidDatatypeValueException& ex) {
					if (isAlistAttribute) {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "NMTOKENSInvalid"_s, $$new($ObjectArray, {$of(attValue)}), $XMLErrorReporter::SEVERITY_ERROR);
					} else {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "NMTOKENInvalid"_s, $$new($ObjectArray, {$of(attValue)}), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
				break;
			}
		}
	}
}

bool XMLDTDValidator::invalidStandaloneAttDef($QName* element, $QName* attribute) {
	bool state = true;
	return state;
}

bool XMLDTDValidator::normalizeAttrValue($XMLAttributes* attributes, int32_t index) {
	$useLocalCurrentObjectStackCache();
	bool leadingSpace = true;
	bool spaceStart = false;
	bool readingNonSpace = false;
	int32_t count = 0;
	$var($String, attrValue, $nc(attributes)->getValue(index));
	$var($chars, attValue, $new($chars, $nc(attrValue)->length()));
	$nc(this->fBuffer)->setLength(0);
	attrValue->getChars(0, attrValue->length(), attValue, 0);
	for (int32_t i = 0; i < attValue->length; ++i) {
		if (attValue->get(i) == u' ') {
			if (readingNonSpace) {
				spaceStart = true;
				readingNonSpace = false;
			}
			if (spaceStart && !leadingSpace) {
				spaceStart = false;
				$nc(this->fBuffer)->append(attValue->get(i));
				++count;
			}
		} else {
			readingNonSpace = true;
			spaceStart = false;
			leadingSpace = false;
			$nc(this->fBuffer)->append(attValue->get(i));
			++count;
		}
	}
	if (count > 0 && $nc(this->fBuffer)->charAt(count - 1) == u' ') {
		$nc(this->fBuffer)->setLength(count - 1);
	}
	$var($String, newValue, $nc(this->fBuffer)->toString());
	attributes->setValue(index, newValue);
	return !attrValue->equals(newValue);
}

void XMLDTDValidator::rootElementSpecified($QName* rootElement) {
	$useLocalCurrentObjectStackCache();
	if (this->fPerformValidation) {
		$var($String, root1, $nc(this->fRootElement)->rawname);
		$var($String, root2, $nc(rootElement)->rawname);
		if (root1 == nullptr || !$nc(root1)->equals(root2)) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "RootElementTypeMustMatchDoctypedecl"_s, $$new($ObjectArray, {
				$of(root1),
				$of(root2)
			}), $XMLErrorReporter::SEVERITY_ERROR);
		}
	}
}

int32_t XMLDTDValidator::checkContent(int32_t elementIndex, $QNameArray* children, int32_t childOffset, int32_t childCount) {
	$nc(this->fDTDGrammar)->getElementDecl(elementIndex, this->fTempElementDecl);
	int32_t contentType = this->fCurrentContentSpecType;
	if (contentType == $XMLElementDecl::TYPE_EMPTY) {
		if (childCount != 0) {
			return 0;
		}
	} else if (contentType == $XMLElementDecl::TYPE_ANY) {
	} else if (contentType == $XMLElementDecl::TYPE_MIXED || contentType == $XMLElementDecl::TYPE_CHILDREN) {
		$var($ContentModelValidator, cmElem, nullptr);
		$assign(cmElem, $nc(this->fTempElementDecl)->contentModelValidator);
		int32_t result = $nc(cmElem)->validate(children, childOffset, childCount);
		return result;
	} else if (contentType == -1) {
	} else if (contentType == $XMLElementDecl::TYPE_SIMPLE) {
	} else {
	}
	return -1;
}

void XMLDTDValidator::charDataInContent() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fElementChildren)->length <= this->fElementChildrenLength) {
		$var($QNameArray, newarray, $new($QNameArray, $nc(this->fElementChildren)->length * 2));
		$System::arraycopy(this->fElementChildren, 0, newarray, 0, $nc(this->fElementChildren)->length);
		$set(this, fElementChildren, newarray);
	}
	$var($QName, qname, $nc(this->fElementChildren)->get(this->fElementChildrenLength));
	if (qname == nullptr) {
		for (int32_t i = this->fElementChildrenLength; i < $nc(this->fElementChildren)->length; ++i) {
			$nc(this->fElementChildren)->set(i, $$new($QName));
		}
		$assign(qname, $nc(this->fElementChildren)->get(this->fElementChildrenLength));
	}
	$nc(qname)->clear();
	++this->fElementChildrenLength;
}

$String* XMLDTDValidator::getAttributeTypeName($XMLAttributeDecl* attrDecl) {
	$useLocalCurrentObjectStackCache();
	switch ($nc($nc(attrDecl)->simpleType)->type) {
	case $XMLSimpleType::TYPE_ENTITY:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fENTITIESSymbol : $XMLSymbols::fENTITYSymbol;
			}
		}
	case $XMLSimpleType::TYPE_ENUMERATION:
		{
			{
				int32_t totalLength = 2;
				for (int32_t i = 0; i < $nc($nc(attrDecl->simpleType)->enumeration)->length; ++i) {
					totalLength += $nc($nc($nc(attrDecl->simpleType)->enumeration)->get(i))->length() + 1;
				}
				$var($StringBuilder, buffer, $new($StringBuilder, totalLength));
				buffer->append(u'(');
				for (int32_t i = 0; i < $nc($nc(attrDecl->simpleType)->enumeration)->length; ++i) {
					if (i > 0) {
						buffer->append(u'|');
					}
					buffer->append($nc($nc(attrDecl->simpleType)->enumeration)->get(i));
				}
				buffer->append(u')');
				return $nc(this->fSymbolTable)->addSymbol($(buffer->toString()));
			}
		}
	case $XMLSimpleType::TYPE_ID:
		{
			{
				$init($XMLSymbols);
				return $XMLSymbols::fIDSymbol;
			}
		}
	case $XMLSimpleType::TYPE_IDREF:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fIDREFSSymbol : $XMLSymbols::fIDREFSymbol;
			}
		}
	case $XMLSimpleType::TYPE_NMTOKEN:
		{
			{
				$init($XMLSymbols);
				return $nc(attrDecl->simpleType)->list ? $XMLSymbols::fNMTOKENSSymbol : $XMLSymbols::fNMTOKENSymbol;
			}
		}
	case $XMLSimpleType::TYPE_NOTATION:
		{
			{
				$init($XMLSymbols);
				return $XMLSymbols::fNOTATIONSymbol;
			}
		}
	}
	$init($XMLSymbols);
	return $XMLSymbols::fCDATASymbol;
}

void XMLDTDValidator::init() {
	if (this->fValidation || this->fDynamicValidation) {
		try {
			$init($XMLSymbols);
			$set(this, fValID, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fIDSymbol));
			$set(this, fValIDRef, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fIDREFSymbol));
			$set(this, fValIDRefs, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fIDREFSSymbol));
			$set(this, fValENTITY, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fENTITYSymbol));
			$set(this, fValENTITIES, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fENTITIESSymbol));
			$set(this, fValNMTOKEN, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fNMTOKENSymbol));
			$set(this, fValNMTOKENS, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fNMTOKENSSymbol));
			$set(this, fValNOTATION, $nc(this->fDatatypeValidatorFactory)->getBuiltInDV($XMLSymbols::fNOTATIONSymbol));
		} catch ($Exception& e) {
			e->printStackTrace($System::err);
		}
	}
}

void XMLDTDValidator::ensureStackCapacity(int32_t newElementDepth) {
	$useLocalCurrentObjectStackCache();
	if (newElementDepth == $nc(this->fElementQNamePartsStack)->length) {
		$var($QNameArray, newStackOfQueue, $new($QNameArray, newElementDepth * 2));
		$System::arraycopy(this->fElementQNamePartsStack, 0, newStackOfQueue, 0, newElementDepth);
		$set(this, fElementQNamePartsStack, newStackOfQueue);
		$var($QName, qname, $nc(this->fElementQNamePartsStack)->get(newElementDepth));
		if (qname == nullptr) {
			for (int32_t i = newElementDepth; i < $nc(this->fElementQNamePartsStack)->length; ++i) {
				$nc(this->fElementQNamePartsStack)->set(i, $$new($QName));
			}
		}
		$var($ints, newStack, $new($ints, newElementDepth * 2));
		$System::arraycopy(this->fElementIndexStack, 0, newStack, 0, newElementDepth);
		$set(this, fElementIndexStack, newStack);
		$assign(newStack, $new($ints, newElementDepth * 2));
		$System::arraycopy(this->fContentSpecTypeStack, 0, newStack, 0, newElementDepth);
		$set(this, fContentSpecTypeStack, newStack);
	}
}

bool XMLDTDValidator::handleStartElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (!this->fSeenRootElement) {
		this->fPerformValidation = validate();
		this->fSeenRootElement = true;
		$nc(this->fValidationManager)->setEntityState(this->fDTDGrammar);
		$nc(this->fValidationManager)->setGrammarFound(this->fSeenDoctypeDecl);
		rootElementSpecified(element);
	}
	if (this->fDTDGrammar == nullptr) {
		if (!this->fPerformValidation) {
			this->fCurrentElementIndex = -1;
			this->fCurrentContentSpecType = -1;
			this->fInElementContent = false;
		}
		if (this->fPerformValidation) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_GRAMMAR_NOT_FOUND"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		if (this->fDocumentSource != nullptr) {
			$nc(this->fDocumentSource)->setDocumentHandler(this->fDocumentHandler);
			if (this->fDocumentHandler != nullptr) {
				$nc(this->fDocumentHandler)->setDocumentSource(this->fDocumentSource);
			}
			return true;
		}
	} else {
		this->fCurrentElementIndex = $nc(this->fDTDGrammar)->getElementDeclIndex(element);
		this->fCurrentContentSpecType = $nc(this->fDTDGrammar)->getContentSpecType(this->fCurrentElementIndex);
		if (this->fCurrentContentSpecType == -1 && this->fPerformValidation) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_NOT_DECLARED"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
		addDTDDefaultAttrsAndValidate(element, this->fCurrentElementIndex, attributes);
	}
	this->fInElementContent = this->fCurrentContentSpecType == $XMLElementDecl::TYPE_CHILDREN;
	++this->fElementDepth;
	if (this->fPerformValidation) {
		if ($nc(this->fElementChildrenOffsetStack)->length <= this->fElementDepth) {
			$var($ints, newarray, $new($ints, $nc(this->fElementChildrenOffsetStack)->length * 2));
			$System::arraycopy(this->fElementChildrenOffsetStack, 0, newarray, 0, $nc(this->fElementChildrenOffsetStack)->length);
			$set(this, fElementChildrenOffsetStack, newarray);
		}
		$nc(this->fElementChildrenOffsetStack)->set(this->fElementDepth, this->fElementChildrenLength);
		if ($nc(this->fElementChildren)->length <= this->fElementChildrenLength) {
			$var($QNameArray, newarray, $new($QNameArray, this->fElementChildrenLength * 2));
			$System::arraycopy(this->fElementChildren, 0, newarray, 0, $nc(this->fElementChildren)->length);
			$set(this, fElementChildren, newarray);
		}
		$var($QName, qname, $nc(this->fElementChildren)->get(this->fElementChildrenLength));
		if (qname == nullptr) {
			for (int32_t i = this->fElementChildrenLength; i < $nc(this->fElementChildren)->length; ++i) {
				$nc(this->fElementChildren)->set(i, $$new($QName));
			}
			$assign(qname, $nc(this->fElementChildren)->get(this->fElementChildrenLength));
		}
		$nc(qname)->setValues(element);
		++this->fElementChildrenLength;
	}
	$nc(this->fCurrentElement)->setValues(element);
	ensureStackCapacity(this->fElementDepth);
	$nc($nc(this->fElementQNamePartsStack)->get(this->fElementDepth))->setValues(this->fCurrentElement);
	$nc(this->fElementIndexStack)->set(this->fElementDepth, this->fCurrentElementIndex);
	$nc(this->fContentSpecTypeStack)->set(this->fElementDepth, this->fCurrentContentSpecType);
	startNamespaceScope(element, attributes, augs);
	return false;
}

void XMLDTDValidator::startNamespaceScope($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
}

void XMLDTDValidator::handleEndElement($QName* element, $Augmentations* augs, bool isEmpty) {
	$useLocalCurrentObjectStackCache();
	--this->fElementDepth;
	if (this->fPerformValidation) {
		int32_t elementIndex = this->fCurrentElementIndex;
		if (elementIndex != -1 && this->fCurrentContentSpecType != -1) {
			$var($QNameArray, children, this->fElementChildren);
			int32_t childrenOffset = $nc(this->fElementChildrenOffsetStack)->get(this->fElementDepth + 1) + 1;
			int32_t childrenLength = this->fElementChildrenLength - childrenOffset;
			int32_t result = checkContent(elementIndex, children, childrenOffset, childrenLength);
			if (result != -1) {
				$nc(this->fDTDGrammar)->getElementDecl(elementIndex, this->fTempElementDecl);
				if ($nc(this->fTempElementDecl)->type == $XMLElementDecl::TYPE_EMPTY) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_CONTENT_INVALID"_s, $$new($ObjectArray, {
						$of($nc(element)->rawname),
						$of("EMPTY"_s)
					}), $XMLErrorReporter::SEVERITY_ERROR);
				} else {
					$var($String, messageKey, result != childrenLength ? "MSG_CONTENT_INVALID"_s : "MSG_CONTENT_INCOMPLETE"_s);
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, messageKey, $$new($ObjectArray, {
						$of($nc(element)->rawname),
						$($of($nc(this->fDTDGrammar)->getContentSpecAsString(elementIndex)))
					}), $XMLErrorReporter::SEVERITY_ERROR);
				}
			}
		}
		this->fElementChildrenLength = $nc(this->fElementChildrenOffsetStack)->get(this->fElementDepth + 1) + 1;
	}
	endNamespaceScope(this->fCurrentElement, augs, isEmpty);
	if (this->fElementDepth < -1) {
		$throwNew($RuntimeException, "FWK008 Element stack underflow"_s);
	}
	if (this->fElementDepth < 0) {
		$nc(this->fCurrentElement)->clear();
		this->fCurrentElementIndex = -1;
		this->fCurrentContentSpecType = -1;
		this->fInElementContent = false;
		if (this->fPerformValidation) {
			$var($Iterator, invIdRefs, $nc(this->fValidationState)->checkIDRefID());
			if (invIdRefs != nullptr) {
				while (invIdRefs->hasNext()) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_WITH_ID_REQUIRED"_s, $$new($ObjectArray, {$(invIdRefs->next())}), $XMLErrorReporter::SEVERITY_ERROR);
				}
			}
		}
		return;
	}
	$nc(this->fCurrentElement)->setValues($nc(this->fElementQNamePartsStack)->get(this->fElementDepth));
	this->fCurrentElementIndex = $nc(this->fElementIndexStack)->get(this->fElementDepth);
	this->fCurrentContentSpecType = $nc(this->fContentSpecTypeStack)->get(this->fElementDepth);
	this->fInElementContent = (this->fCurrentContentSpecType == $XMLElementDecl::TYPE_CHILDREN);
}

void XMLDTDValidator::endNamespaceScope($QName* element, $Augmentations* augs, bool isEmpty) {
	if (this->fDocumentHandler != nullptr && !isEmpty) {
		$nc(this->fDocumentHandler)->endElement(this->fCurrentElement, augs);
	}
}

bool XMLDTDValidator::isSpace(int32_t c) {
	return $XMLChar::isSpace(c);
}

bool XMLDTDValidator::characterData($String* data, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$var($chars, var$0, $nc(data)->toCharArray());
	characters($$new($XMLString, var$0, 0, data->length()), augs);
	return true;
}

void clinit$XMLDTDValidator($Class* class$) {
	$init($Constants);
	$assignStatic(XMLDTDValidator::NAMESPACES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACES_FEATURE}));
	$assignStatic(XMLDTDValidator::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLDTDValidator::DYNAMIC_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DYNAMIC_VALIDATION_FEATURE}));
	$assignStatic(XMLDTDValidator::BALANCE_SYNTAX_TREES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::BALANCE_SYNTAX_TREES}));
	$assignStatic(XMLDTDValidator::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(XMLDTDValidator::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(XMLDTDValidator::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLDTDValidator::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLDTDValidator::GRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLDTDValidator::DATATYPE_VALIDATOR_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DATATYPE_VALIDATOR_FACTORY_PROPERTY}));
	$assignStatic(XMLDTDValidator::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XMLDTDValidator::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLDTDValidator::NAMESPACES,
		XMLDTDValidator::VALIDATION,
		XMLDTDValidator::DYNAMIC_VALIDATION,
		XMLDTDValidator::BALANCE_SYNTAX_TREES
	}));
	$init($Boolean);
	$assignStatic(XMLDTDValidator::FEATURE_DEFAULTS, $new($BooleanArray, {
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		$Boolean::FALSE,
		$Boolean::FALSE
	}));
	$assignStatic(XMLDTDValidator::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLDTDValidator::SYMBOL_TABLE,
		XMLDTDValidator::ERROR_REPORTER,
		XMLDTDValidator::GRAMMAR_POOL,
		XMLDTDValidator::DATATYPE_VALIDATOR_FACTORY,
		XMLDTDValidator::VALIDATION_MANAGER
	}));
	$assignStatic(XMLDTDValidator::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr
	}));
}

XMLDTDValidator::XMLDTDValidator() {
}

$Class* XMLDTDValidator::load$($String* name, bool initialize) {
	$loadClass(XMLDTDValidator, name, initialize, &_XMLDTDValidator_ClassInfo_, clinit$XMLDTDValidator, allocate$XMLDTDValidator);
	return class$;
}

$Class* XMLDTDValidator::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com