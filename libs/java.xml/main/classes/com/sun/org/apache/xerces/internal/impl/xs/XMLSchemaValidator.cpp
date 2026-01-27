#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ConfigurableValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationManager.h>
#include <com/sun/org/apache/xerces/internal/impl/validation/ValidationState.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/AttributePSVImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreCache.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XPathMatcherStack.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XSIErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$Matcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XS10TypeHelper.h>
#include <com/sun/org/apache/xerces/internal/parsers/XMLParser.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
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
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ElementPSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/io/IOException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/QName.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jcpp.h>

#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef ATTRIBUTE_PSVI
#undef ATTVAL_QNAME
#undef ATTVAL_TRUE
#undef ATTVAL_TRUE_1
#undef BUFFER_SIZE
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA_CHUNK_SIZE
#undef CDATA_CHUNK_SIZE_DEFAULT
#undef COMPLEX_TYPE
#undef CONTENTTYPE_ELEMENT
#undef CONTENTTYPE_EMPTY
#undef CONTENTTYPE_MIXED
#undef CONTENTTYPE_SIMPLE
#undef CONTEXT_ATTRIBUTE
#undef CONTEXT_ELEMENT
#undef CONTEXT_XSITYPE
#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef DEBUG
#undef DEBUG_NORMALIZATION
#undef DEFAULT_NS_PREFIX
#undef DERIVATION_NONE
#undef DYNAMIC_VALIDATION
#undef DYNAMIC_VALIDATION_FEATURE
#undef ELEMENT_PSVI
#undef EMPTY_STRING
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FEATURE_DEFAULTS
#undef FIRST_ERROR
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef HONOUR_ALL_SCHEMALOCATIONS
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef IC_KEYREF
#undef IDC_CHECKING_FEATURE
#undef IDENTITY_CONSTRAINT_CHECKING
#undef ID_CONSTRAINT_NUM
#undef ID_IDREF_CHECKING
#undef ID_IDREF_CHECKING_FEATURE
#undef IGNORE_XSI_TYPE
#undef IGNORE_XSI_TYPE_FEATURE
#undef INC_STACK_SIZE
#undef INITIAL_STACK_SIZE
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_LANGUAGE
#undef JAXP_SCHEMA_SOURCE
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NORMALIZE_DATA
#undef NULL_NS_URI
#undef OCCURRENCE_UNBOUNDED
#undef OVERRIDE_PARSER
#undef OVERRIDE_PARSER_DEFAULT
#undef PARSER_SETTINGS
#undef PC_SKIP
#undef PC_STRICT
#undef PREFIX_XMLNS
#undef PRIMITIVE_NOTATION
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef REPORT_WHITESPACE
#undef ROOT_ELEMENT_DECL
#undef ROOT_ELEMENT_DECLARATION_PROPERTY
#undef ROOT_TYPE_DEF
#undef ROOT_TYPE_DEFINITION_PROPERTY
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_AUGMENT_PSVI
#undef SCHEMA_DOMAIN
#undef SCHEMA_DV_FACTORY
#undef SCHEMA_DV_FACTORY_PROPERTY
#undef SCHEMA_ELEMENT_DEFAULT
#undef SCHEMA_FULL_CHECKING
#undef SCHEMA_LANGUAGE
#undef SCHEMA_LOCATION
#undef SCHEMA_NONS_LOCATION
#undef SCHEMA_NORMALIZED_VALUE
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION
#undef SCHEMA_VALIDATION_FEATURE
#undef SEVERITY_ERROR
#undef SEVERITY_WARNING
#undef SG_XSI
#undef SIMPLE_TYPE
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE
#undef SUN_SCHEMA_FEATURE_PREFIX
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef UNPARSED_ENTITY_CHECKING
#undef UNPARSED_ENTITY_CHECKING_FEATURE
#undef URI_SCHEMAFORSCHEMA
#undef URI_XSI
#undef USE_CATALOG
#undef USE_CATALOG_DEFAULT
#undef USE_GRAMMAR_POOL_ONLY
#undef USE_GRAMMAR_POOL_ONLY_FEATURE
#undef USE_REQUIRED
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef VALIDATION_FULL
#undef VALIDATION_MANAGER
#undef VALIDATION_MANAGER_PROPERTY
#undef VALIDATION_NONE
#undef VALIDATION_PARTIAL
#undef VALIDITY_INVALID
#undef VALIDITY_NOTKNOWN
#undef VALIDITY_VALID
#undef VARIETY_ATOMIC
#undef VARIETY_UNION
#undef VC_FIXED
#undef VC_NONE
#undef WS_COLLAPSE
#undef WS_PRESERVE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_SCHEMA
#undef XML_SECURITY_PROPERTY_MANAGER
#undef XSI_NIL
#undef XSI_NONAMESPACESCHEMALOCATION
#undef XSI_SCHEMALOCATION
#undef XSI_TYPE

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $XSNotationDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl>;
using $XSCMValidatorArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $XSTypeDefinitionArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition>;
using $BooleanArray = $Array<::java::lang::Boolean>;
using $intArray2 = $Array<int32_t, 2>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $DatatypeException = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ConfigurableValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ConfigurableValidationState;
using $ValidationManager = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager;
using $ValidationState = ::com::sun::org::apache::xerces::internal::impl::validation::ValidationState;
using $AttributePSVImpl = ::com::sun::org::apache::xerces::internal::impl::xs::AttributePSVImpl;
using $ElementPSVImpl = ::com::sun::org::apache::xerces::internal::impl::xs::ElementPSVImpl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $XMLSchemaLoader$LocationArray = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader$LocationArray;
using $XMLSchemaValidator$ValueStoreBase = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase;
using $XMLSchemaValidator$ValueStoreCache = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreCache;
using $XMLSchemaValidator$XPathMatcherStack = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$XPathMatcherStack;
using $XMLSchemaValidator$XSIErrorReporter = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$XSIErrorReporter;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSElementDeclHelper = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $FieldActivator = ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $Selector = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector;
using $Selector$Matcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector$Matcher;
using $ValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $CMBuilder = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMBuilder;
using $CMNodeFactory = ::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $XS10TypeHelper = ::com::sun::org::apache::xerces::internal::impl::xs::util::XS10TypeHelper;
using $XMLParser = ::com::sun::org::apache::xerces::internal::parsers::XMLParser;
using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLAttributesImpl = ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl;
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
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLDocumentSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ElementPSVI = ::com::sun::org::apache::xerces::internal::xs::ElementPSVI;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $1QName = ::javax::xml::namespace$::QName;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSchemaValidator, DEBUG)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, VALIDATION)},
	{"SCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_VALIDATION)},
	{"SCHEMA_FULL_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_FULL_CHECKING)},
	{"DYNAMIC_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, DYNAMIC_VALIDATION)},
	{"NORMALIZE_DATA", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, NORMALIZE_DATA)},
	{"SCHEMA_ELEMENT_DEFAULT", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_ELEMENT_DEFAULT)},
	{"SCHEMA_AUGMENT_PSVI", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_AUGMENT_PSVI)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ALLOW_JAVA_ENCODINGS)},
	{"STANDARD_URI_CONFORMANT_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, STANDARD_URI_CONFORMANT_FEATURE)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, VALIDATE_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, HONOUR_ALL_SCHEMALOCATIONS)},
	{"USE_GRAMMAR_POOL_ONLY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, USE_GRAMMAR_POOL_ONLY)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, CONTINUE_AFTER_FATAL_ERROR)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, PARSER_SETTINGS)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, TOLERATE_DUPLICATES)},
	{"IGNORE_XSI_TYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, IGNORE_XSI_TYPE)},
	{"ID_IDREF_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ID_IDREF_CHECKING)},
	{"UNPARSED_ENTITY_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, UNPARSED_ENTITY_CHECKING)},
	{"IDENTITY_CONSTRAINT_CHECKING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, IDENTITY_CONSTRAINT_CHECKING)},
	{"REPORT_WHITESPACE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, REPORT_WHITESPACE)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ERROR_REPORTER)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ENTITY_RESOLVER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSchemaValidator, XMLGRAMMAR_POOL)},
	{"VALIDATION_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, VALIDATION_MANAGER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ENTITY_MANAGER)},
	{"SCHEMA_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_LOCATION)},
	{"SCHEMA_NONS_LOCATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_NONS_LOCATION)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, JAXP_SCHEMA_SOURCE)},
	{"JAXP_SCHEMA_LANGUAGE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, JAXP_SCHEMA_LANGUAGE)},
	{"ROOT_TYPE_DEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ROOT_TYPE_DEF)},
	{"ROOT_ELEMENT_DECL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, ROOT_ELEMENT_DECL)},
	{"SCHEMA_DV_FACTORY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, SCHEMA_DV_FACTORY)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidator, XML_SECURITY_PROPERTY_MANAGER)},
	{"OVERRIDE_PARSER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, OVERRIDE_PARSER)},
	{"USE_CATALOG", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLSchemaValidator, USE_CATALOG)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidator, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidator, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidator, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSchemaValidator, PROPERTY_DEFAULTS)},
	{"ID_CONSTRAINT_NUM", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLSchemaValidator, ID_CONSTRAINT_NUM)},
	{"XSI_TYPE", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $STATIC | $FINAL, $staticField(XMLSchemaValidator, XSI_TYPE)},
	{"XSI_NIL", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $STATIC | $FINAL, $staticField(XMLSchemaValidator, XSI_NIL)},
	{"XSI_SCHEMALOCATION", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $STATIC | $FINAL, $staticField(XMLSchemaValidator, XSI_SCHEMALOCATION)},
	{"XSI_NONAMESPACESCHEMALOCATION", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $STATIC | $FINAL, $staticField(XMLSchemaValidator, XSI_NONAMESPACESCHEMALOCATION)},
	{"fCurrentPSVI", "Lcom/sun/org/apache/xerces/internal/impl/xs/ElementPSVImpl;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fCurrentPSVI)},
	{"fAugmentations", "Lcom/sun/org/apache/xerces/internal/util/AugmentationsImpl;", nullptr, $PROTECTED | $FINAL, $field(XMLSchemaValidator, fAugmentations)},
	{"fDefaultValue", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fDefaultValue)},
	{"fDynamicValidation", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fDynamicValidation)},
	{"fSchemaDynamicValidation", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fSchemaDynamicValidation)},
	{"fDoValidation", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fDoValidation)},
	{"fFullChecking", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fFullChecking)},
	{"fNormalizeData", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fNormalizeData)},
	{"fSchemaElementDefault", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fSchemaElementDefault)},
	{"fAugPSVI", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fAugPSVI)},
	{"fIdConstraint", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fIdConstraint)},
	{"fUseGrammarPoolOnly", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fUseGrammarPoolOnly)},
	{"fNamespaceGrowth", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fNamespaceGrowth)},
	{"fSchemaType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSchemaType)},
	{"fEntityRef", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fEntityRef)},
	{"fInCDATA", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fInCDATA)},
	{"fSawOnlyWhitespaceInElementContent", "Z", nullptr, $PROTECTED, $field(XMLSchemaValidator, fSawOnlyWhitespaceInElementContent)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fSymbolTable)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fLocator)},
	{"fXSIErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XSIErrorReporter;", nullptr, $PROTECTED | $FINAL, $field(XMLSchemaValidator, fXSIErrorReporter)},
	{"fEntityResolver", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fEntityResolver)},
	{"fValidationManager", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationManager;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fValidationManager)},
	{"fValidationState", "Lcom/sun/org/apache/xerces/internal/impl/validation/ConfigurableValidationState;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fValidationState)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fGrammarPool)},
	{"fExternalSchemas", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fExternalSchemas)},
	{"fExternalNoNamespaceSchema", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fExternalNoNamespaceSchema)},
	{"fJaxpSchemaSource", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fJaxpSchemaSource)},
	{"fXSDDescription", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;", nullptr, $PROTECTED | $FINAL, $field(XMLSchemaValidator, fXSDDescription)},
	{"fLocationPairs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;", $PROTECTED | $FINAL, $field(XMLSchemaValidator, fLocationPairs)},
	{"fDocumentHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fDocumentHandler)},
	{"fDocumentSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fDocumentSource)},
	{"reportWhitespace", "Z", nullptr, 0, $field(XMLSchemaValidator, reportWhitespace)},
	{"INITIAL_STACK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XMLSchemaValidator, INITIAL_STACK_SIZE)},
	{"INC_STACK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(XMLSchemaValidator, INC_STACK_SIZE)},
	{"DEBUG_NORMALIZATION", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSchemaValidator, DEBUG_NORMALIZATION)},
	{"fEmptyXMLStr", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fEmptyXMLStr)},
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSchemaValidator, BUFFER_SIZE)},
	{"fNormalizedStr", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fNormalizedStr)},
	{"fFirstChunk", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fFirstChunk)},
	{"fTrailing", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fTrailing)},
	{"fWhiteSpace", "S", nullptr, $PRIVATE, $field(XMLSchemaValidator, fWhiteSpace)},
	{"fUnionType", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fUnionType)},
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fGrammarBucket)},
	{"fSubGroupHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fSubGroupHandler)},
	{"fQNameDV", "Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fQNameDV)},
	{"nodeFactory", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMNodeFactory;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, nodeFactory)},
	{"fCMBuilder", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/CMBuilder;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fCMBuilder)},
	{"fSchemaLoader", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fSchemaLoader)},
	{"fValidationRoot", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fValidationRoot)},
	{"fSkipValidationDepth", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSkipValidationDepth)},
	{"fNFullValidationDepth", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNFullValidationDepth)},
	{"fNNoneValidationDepth", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNNoneValidationDepth)},
	{"fElementDepth", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fElementDepth)},
	{"fSubElement", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSubElement)},
	{"fSubElementStack", "[Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSubElementStack)},
	{"fCurrentElemDecl", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCurrentElemDecl)},
	{"fElemDeclStack", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fElemDeclStack)},
	{"fNil", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNil)},
	{"fNilStack", "[Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNilStack)},
	{"fNotation", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNotation)},
	{"fNotationStack", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fNotationStack)},
	{"fCurrentType", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCurrentType)},
	{"fTypeStack", "[Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fTypeStack)},
	{"fCurrentCM", "Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCurrentCM)},
	{"fCMStack", "[Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCMStack)},
	{"fCurrCMState", "[I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCurrCMState)},
	{"fCMStateStack", "[[I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fCMStateStack)},
	{"fStrictAssess", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fStrictAssess)},
	{"fStrictAssessStack", "[Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fStrictAssessStack)},
	{"fBuffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fBuffer)},
	{"fAppendBuffer", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fAppendBuffer)},
	{"fSawText", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSawText)},
	{"fSawTextStack", "[Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSawTextStack)},
	{"fSawCharacters", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fSawCharacters)},
	{"fStringContent", "[Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fStringContent)},
	{"fTempQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(XMLSchemaValidator, fTempQName)},
	{"fRootTypeQName", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fRootTypeQName)},
	{"fRootTypeDefinition", "Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fRootTypeDefinition)},
	{"fRootElementDeclQName", "Ljavax/xml/namespace/QName;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fRootElementDeclQName)},
	{"fRootElementDeclaration", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fRootElementDeclaration)},
	{"fIgnoreXSITypeDepth", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator, fIgnoreXSITypeDepth)},
	{"fIDCChecking", "Z", nullptr, $PRIVATE, $field(XMLSchemaValidator, fIDCChecking)},
	{"fValidatedInfo", "Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fValidatedInfo)},
	{"fState4XsiType", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fState4XsiType)},
	{"fState4ApplyDefault", "Lcom/sun/org/apache/xerces/internal/impl/validation/ValidationState;", nullptr, $PRIVATE, $field(XMLSchemaValidator, fState4ApplyDefault)},
	{"fMatcherStack", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$XPathMatcherStack;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fMatcherStack)},
	{"fValueStoreCache", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreCache;", nullptr, $PROTECTED, $field(XMLSchemaValidator, fValueStoreCache)},
	{}
};

$MethodInfo _XMLSchemaValidator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator, init$, void)},
	{"activateField", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;I)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, activateField, $XPathMatcher*, $Field*, int32_t)},
	{"activateSelectorFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, $PRIVATE, $method(XMLSchemaValidator, activateSelectorFor, void, $IdentityConstraint*)},
	{"addDefaultAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, addDefaultAttributes, void, $QName*, $XMLAttributes*, $XSAttributeGroupDecl*)},
	{"characterData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Z", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, characterData, bool, $String*, $Augmentations*)},
	{"characters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, characters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"checkElementMatchesRootElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, checkElementMatchesRootElementDecl, void, $XSElementDecl*, $QName*)},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"doctypeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, doctypeDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDefault", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, elementDefault, void, $String*)},
	{"elementLocallyValidComplexType", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XMLSchemaValidator, elementLocallyValidComplexType, $Object*, $QName*, Object$*)},
	{"elementLocallyValidType", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XMLSchemaValidator, elementLocallyValidType, $Object*, $QName*, Object$*)},
	{"emptyElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, emptyElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, endCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDocument", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, endDocument, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, endElement, void, $QName*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endElementPSVI", "(Z[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $FINAL, $method(XMLSchemaValidator, endElementPSVI, $Augmentations*, bool, $SchemaGrammarArray*, $Augmentations*)},
	{"endGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, endGeneralEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endValueScopeFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, endValueScopeFor, void, $IdentityConstraint*, int32_t)},
	{"ensureStackCapacity", "()V", nullptr, 0, $virtualMethod(XMLSchemaValidator, ensureStackCapacity, void)},
	{"expectedStr", "(Ljava/util/List;)Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/Object;>;)Ljava/lang/String;", $PRIVATE, $method(XMLSchemaValidator, expectedStr, $String*, $List*)},
	{"findSchemaGrammar", "(SLjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, 0, $virtualMethod(XMLSchemaValidator, findSchemaGrammar, $SchemaGrammar*, int16_t, $String*, $QName*, $QName*, $XMLAttributes*)},
	{"getAndCheckXsiType", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, 0, $virtualMethod(XMLSchemaValidator, getAndCheckXsiType, $XSTypeDefinition*, $QName*, $String*, $XMLAttributes*)},
	{"getDocumentHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getDocumentHandler, $XMLDocumentHandler*)},
	{"getDocumentSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getDocumentSource, $XMLDocumentSource*)},
	{"getEmptyAugs", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, 0, $virtualMethod(XMLSchemaValidator, getEmptyAugs, $Augmentations*, $Augmentations*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getFeatureDefault, $Boolean*, $String*)},
	{"getGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getGlobalElementDecl, $XSElementDecl*, $QName*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, getRecognizedProperties, $StringArray*)},
	{"getXsiNil", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(XMLSchemaValidator, getXsiNil, bool, $QName*, $String*)},
	{"handleCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleCharacters, $XMLString*, $XMLString*)},
	{"handleEndDocument", "()V", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleEndDocument, void)},
	{"handleEndElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleEndElement, $Augmentations*, $QName*, $Augmentations*)},
	{"handleIgnorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleIgnorableWhitespace, void, $XMLString*)},
	{"handleStartDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleStartDocument, void, $XMLLocator*, $String*)},
	{"handleStartElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, 0, $virtualMethod(XMLSchemaValidator, handleStartElement, $Augmentations*, $QName*, $XMLAttributes*, $Augmentations*)},
	{"hasSchemaComponent", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;SLcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PRIVATE, $method(XMLSchemaValidator, hasSchemaComponent, bool, $SchemaGrammar*, int16_t, $QName*)},
	{"ignorableWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, ignorableWhitespace, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"normalizeWhitespace", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Z)V", nullptr, $PRIVATE, $method(XMLSchemaValidator, normalizeWhitespace, void, $XMLString*, bool)},
	{"normalizeWhitespace", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(XMLSchemaValidator, normalizeWhitespace, void, $String*, bool)},
	{"processAttributes", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, processAttributes, void, $QName*, $XMLAttributes*, $XSAttributeGroupDecl*)},
	{"processElementContent", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, processElementContent, void, $QName*)},
	{"processOneAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;ILcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;Lcom/sun/org/apache/xerces/internal/impl/xs/AttributePSVImpl;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, processOneAttribute, void, $QName*, $XMLAttributes*, int32_t, $XSAttributeDecl*, $XSAttributeUseImpl*, $AttributePSVImpl*)},
	{"processRootElementDeclQName", "(Ljavax/xml/namespace/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, processRootElementDeclQName, void, $1QName*, $QName*)},
	{"processRootTypeQName", "(Ljavax/xml/namespace/QName;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, processRootTypeQName, void, $1QName*)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reportSchemaError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, reportSchemaError, void, $String*, $ObjectArray*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setDocumentHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDocumentHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, setDocumentHandler, void, $XMLDocumentHandler*)},
	{"setDocumentSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, setDocumentSource, void, $XMLDocumentSource*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocationHints", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;[Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XMLSchemaValidator, setLocationHints, void, $XSDDescription*, $StringArray*, $SchemaGrammar*)},
	{"setLocationHints", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;[Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xs/StringList;)V", nullptr, $PRIVATE, $method(XMLSchemaValidator, setLocationHints, void, $XSDDescription*, $StringArray*, $StringList*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startCDATA", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, startCDATA, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDocument", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, startDocument, void, $XMLLocator*, $String*, $NamespaceContext*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, startElement, void, $QName*, $XMLAttributes*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGeneralEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, startGeneralEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startValueScopeFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, startValueScopeFor, void, $IdentityConstraint*, int32_t)},
	{"storeLocations", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(XMLSchemaValidator, storeLocations, void, $String*, $String*)},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"xmlDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator, xmlDecl, void, $String*, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$InnerClassInfo _XMLSchemaValidator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ShortVector", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ShortVector", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "LocalIDKey", $PROTECTED | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreCache", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreCache", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyRefValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "KeyRefValueStore", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "KeyValueStore", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$UniqueValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "UniqueValueStore", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreBase", $PROTECTED | $ABSTRACT},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XPathMatcherStack", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "XPathMatcherStack", $PROTECTED | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XSIErrorReporter", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "XSIErrorReporter", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XMLSchemaValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.impl.xs.identity.FieldActivator,com.sun.org.apache.xerces.internal.impl.RevalidationHandler,com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper",
	_XMLSchemaValidator_FieldInfo_,
	_XMLSchemaValidator_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ShortVector,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$LocalIDKey,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreCache,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyRefValueStore,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyValueStore,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$UniqueValueStore,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XPathMatcherStack,com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$XSIErrorReporter"
};

$Object* allocate$XMLSchemaValidator($Class* clazz) {
	return $of($alloc(XMLSchemaValidator));
}

int32_t XMLSchemaValidator::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XMLSchemaValidator::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XMLSchemaValidator::clone() {
	 return this->$XMLComponent::clone();
}

$String* XMLSchemaValidator::toString() {
	 return this->$XMLComponent::toString();
}

void XMLSchemaValidator::finalize() {
	this->$XMLComponent::finalize();
}

$String* XMLSchemaValidator::VALIDATION = nullptr;
$String* XMLSchemaValidator::SCHEMA_VALIDATION = nullptr;
$String* XMLSchemaValidator::SCHEMA_FULL_CHECKING = nullptr;
$String* XMLSchemaValidator::DYNAMIC_VALIDATION = nullptr;
$String* XMLSchemaValidator::NORMALIZE_DATA = nullptr;
$String* XMLSchemaValidator::SCHEMA_ELEMENT_DEFAULT = nullptr;
$String* XMLSchemaValidator::SCHEMA_AUGMENT_PSVI = nullptr;
$String* XMLSchemaValidator::ALLOW_JAVA_ENCODINGS = nullptr;
$String* XMLSchemaValidator::STANDARD_URI_CONFORMANT_FEATURE = nullptr;
$String* XMLSchemaValidator::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* XMLSchemaValidator::VALIDATE_ANNOTATIONS = nullptr;
$String* XMLSchemaValidator::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* XMLSchemaValidator::USE_GRAMMAR_POOL_ONLY = nullptr;
$String* XMLSchemaValidator::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XMLSchemaValidator::PARSER_SETTINGS = nullptr;
$String* XMLSchemaValidator::NAMESPACE_GROWTH = nullptr;
$String* XMLSchemaValidator::TOLERATE_DUPLICATES = nullptr;
$String* XMLSchemaValidator::IGNORE_XSI_TYPE = nullptr;
$String* XMLSchemaValidator::ID_IDREF_CHECKING = nullptr;
$String* XMLSchemaValidator::UNPARSED_ENTITY_CHECKING = nullptr;
$String* XMLSchemaValidator::IDENTITY_CONSTRAINT_CHECKING = nullptr;
$String* XMLSchemaValidator::REPORT_WHITESPACE = nullptr;
$String* XMLSchemaValidator::SYMBOL_TABLE = nullptr;
$String* XMLSchemaValidator::ERROR_REPORTER = nullptr;
$String* XMLSchemaValidator::ENTITY_RESOLVER = nullptr;
$String* XMLSchemaValidator::XMLGRAMMAR_POOL = nullptr;
$String* XMLSchemaValidator::VALIDATION_MANAGER = nullptr;
$String* XMLSchemaValidator::ENTITY_MANAGER = nullptr;
$String* XMLSchemaValidator::SCHEMA_LOCATION = nullptr;
$String* XMLSchemaValidator::SCHEMA_NONS_LOCATION = nullptr;
$String* XMLSchemaValidator::JAXP_SCHEMA_SOURCE = nullptr;
$String* XMLSchemaValidator::JAXP_SCHEMA_LANGUAGE = nullptr;
$String* XMLSchemaValidator::ROOT_TYPE_DEF = nullptr;
$String* XMLSchemaValidator::ROOT_ELEMENT_DECL = nullptr;
$String* XMLSchemaValidator::SCHEMA_DV_FACTORY = nullptr;
$String* XMLSchemaValidator::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XMLSchemaValidator::OVERRIDE_PARSER = nullptr;
$String* XMLSchemaValidator::USE_CATALOG = nullptr;
$StringArray* XMLSchemaValidator::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLSchemaValidator::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLSchemaValidator::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLSchemaValidator::PROPERTY_DEFAULTS = nullptr;
$XSAttributeDecl* XMLSchemaValidator::XSI_TYPE = nullptr;
$XSAttributeDecl* XMLSchemaValidator::XSI_NIL = nullptr;
$XSAttributeDecl* XMLSchemaValidator::XSI_SCHEMALOCATION = nullptr;
$XSAttributeDecl* XMLSchemaValidator::XSI_NONAMESPACESCHEMALOCATION = nullptr;

$StringArray* XMLSchemaValidator::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLSchemaValidator::RECOGNIZED_FEATURES)->clone());
}

void XMLSchemaValidator::setFeature($String* featureId, bool state) {
}

$StringArray* XMLSchemaValidator::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLSchemaValidator::RECOGNIZED_PROPERTIES)->clone());
}

void XMLSchemaValidator::setProperty($String* propertyId, Object$* value) {
	if ($nc(propertyId)->equals(XMLSchemaValidator::ROOT_TYPE_DEF)) {
		if (value == nullptr) {
			$set(this, fRootTypeQName, nullptr);
			$set(this, fRootTypeDefinition, nullptr);
		} else if ($instanceOf($1QName, value)) {
			$set(this, fRootTypeQName, $cast($1QName, value));
			$set(this, fRootTypeDefinition, nullptr);
		} else {
			$set(this, fRootTypeDefinition, $cast($XSTypeDefinition, value));
			$set(this, fRootTypeQName, nullptr);
		}
	} else if (propertyId->equals(XMLSchemaValidator::ROOT_ELEMENT_DECL)) {
		if (value == nullptr) {
			$set(this, fRootElementDeclQName, nullptr);
			$set(this, fRootElementDeclaration, nullptr);
		} else if ($instanceOf($1QName, value)) {
			$set(this, fRootElementDeclQName, $cast($1QName, value));
			$set(this, fRootElementDeclaration, nullptr);
		} else {
			$set(this, fRootElementDeclaration, $cast($XSElementDecl, value));
			$set(this, fRootElementDeclQName, nullptr);
		}
	}
}

$Boolean* XMLSchemaValidator::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLSchemaValidator::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLSchemaValidator::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLSchemaValidator::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLSchemaValidator::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLSchemaValidator::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLSchemaValidator::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLSchemaValidator::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLSchemaValidator::setDocumentHandler($XMLDocumentHandler* documentHandler) {
	$set(this, fDocumentHandler, documentHandler);
	if ($instanceOf($XMLParser, documentHandler)) {
		try {
			this->reportWhitespace = $nc(($cast($XMLParser, documentHandler)))->getFeature(XMLSchemaValidator::REPORT_WHITESPACE);
		} catch ($Exception& e) {
			this->reportWhitespace = false;
		}
	}
}

$XMLDocumentHandler* XMLSchemaValidator::getDocumentHandler() {
	return this->fDocumentHandler;
}

void XMLSchemaValidator::setDocumentSource($XMLDocumentSource* source) {
	$set(this, fDocumentSource, source);
}

$XMLDocumentSource* XMLSchemaValidator::getDocumentSource() {
	return this->fDocumentSource;
}

void XMLSchemaValidator::startDocument($XMLLocator* locator, $String* encoding, $NamespaceContext* namespaceContext, $Augmentations* augs) {
	$nc(this->fValidationState)->setNamespaceSupport(namespaceContext);
	$nc(this->fState4XsiType)->setNamespaceSupport(namespaceContext);
	$nc(this->fState4ApplyDefault)->setNamespaceSupport(namespaceContext);
	$set(this, fLocator, locator);
	handleStartDocument(locator, encoding);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startDocument(locator, encoding, namespaceContext, augs);
	}
}

void XMLSchemaValidator::xmlDecl($String* version, $String* encoding, $String* standalone, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->xmlDecl(version, encoding, standalone, augs);
	}
}

void XMLSchemaValidator::doctypeDecl($String* rootElement, $String* publicId, $String* systemId, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->doctypeDecl(rootElement, publicId, systemId, augs);
	}
}

void XMLSchemaValidator::startElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$var($Augmentations, modifiedAugs, handleStartElement(element, attributes, augs));
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startElement(element, attributes, modifiedAugs);
	}
}

void XMLSchemaValidator::emptyElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs) {
	$var($Augmentations, modifiedAugs, handleStartElement(element, attributes, augs));
	$set(this, fDefaultValue, nullptr);
	if (this->fElementDepth != -2) {
		$assign(modifiedAugs, handleEndElement(element, modifiedAugs));
	}
	if (this->fDocumentHandler != nullptr) {
		if (!this->fSchemaElementDefault || this->fDefaultValue == nullptr) {
			$nc(this->fDocumentHandler)->emptyElement(element, attributes, modifiedAugs);
		} else {
			$nc(this->fDocumentHandler)->startElement(element, attributes, modifiedAugs);
			$nc(this->fDocumentHandler)->characters(this->fDefaultValue, nullptr);
			$nc(this->fDocumentHandler)->endElement(element, modifiedAugs);
		}
	}
}

void XMLSchemaValidator::characters($XMLString* text$renamed, $Augmentations* augs) {
	$var($XMLString, text, text$renamed);
	$assign(text, handleCharacters(text));
	if (this->fSawOnlyWhitespaceInElementContent) {
		this->fSawOnlyWhitespaceInElementContent = false;
		if (!this->reportWhitespace) {
			ignorableWhitespace(text, augs);
			return;
		}
	}
	if (this->fDocumentHandler != nullptr) {
		if (this->fNormalizeData && this->fUnionType) {
			if (augs != nullptr) {
				$nc(this->fDocumentHandler)->characters(this->fEmptyXMLStr, augs);
			}
		} else {
			$nc(this->fDocumentHandler)->characters(text, augs);
		}
	}
}

void XMLSchemaValidator::ignorableWhitespace($XMLString* text, $Augmentations* augs) {
	handleIgnorableWhitespace(text);
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->ignorableWhitespace(text, augs);
	}
}

void XMLSchemaValidator::endElement($QName* element, $Augmentations* augs) {
	$set(this, fDefaultValue, nullptr);
	$var($Augmentations, modifiedAugs, handleEndElement(element, augs));
	if (this->fDocumentHandler != nullptr) {
		if (!this->fSchemaElementDefault || this->fDefaultValue == nullptr) {
			$nc(this->fDocumentHandler)->endElement(element, modifiedAugs);
		} else {
			$nc(this->fDocumentHandler)->characters(this->fDefaultValue, nullptr);
			$nc(this->fDocumentHandler)->endElement(element, modifiedAugs);
		}
	}
}

void XMLSchemaValidator::startCDATA($Augmentations* augs) {
	this->fInCDATA = true;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startCDATA(augs);
	}
}

void XMLSchemaValidator::endCDATA($Augmentations* augs) {
	this->fInCDATA = false;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endCDATA(augs);
	}
}

void XMLSchemaValidator::endDocument($Augmentations* augs) {
	handleEndDocument();
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endDocument(augs);
	}
	$set(this, fLocator, nullptr);
}

bool XMLSchemaValidator::characterData($String* data, $Augmentations* augs) {
	this->fSawText = this->fSawText || $nc(data)->length() > 0;
	if (this->fNormalizeData && this->fWhiteSpace != -1 && this->fWhiteSpace != $XSSimpleType::WS_PRESERVE) {
		normalizeWhitespace(data, this->fWhiteSpace == $XSSimpleType::WS_COLLAPSE);
		$nc(this->fBuffer)->append($nc(this->fNormalizedStr)->ch, $nc(this->fNormalizedStr)->offset, $nc(this->fNormalizedStr)->length);
	} else if (this->fAppendBuffer) {
		$nc(this->fBuffer)->append(data);
	}
	bool allWhiteSpace = true;
	if (this->fCurrentType != nullptr && $nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
		if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_ELEMENT) {
			for (int32_t i = 0; i < data->length(); ++i) {
				if (!$XMLChar::isSpace(data->charAt(i))) {
					allWhiteSpace = false;
					this->fSawCharacters = true;
					break;
				}
			}
		}
	}
	return allWhiteSpace;
}

void XMLSchemaValidator::elementDefault($String* data) {
}

void XMLSchemaValidator::startGeneralEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	this->fEntityRef = true;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->startGeneralEntity(name, identifier, encoding, augs);
	}
}

void XMLSchemaValidator::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->textDecl(version, encoding, augs);
	}
}

void XMLSchemaValidator::comment($XMLString* text, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->comment(text, augs);
	}
}

void XMLSchemaValidator::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->processingInstruction(target, data, augs);
	}
}

void XMLSchemaValidator::endGeneralEntity($String* name, $Augmentations* augs) {
	this->fEntityRef = false;
	if (this->fDocumentHandler != nullptr) {
		$nc(this->fDocumentHandler)->endGeneralEntity(name, augs);
	}
}

void XMLSchemaValidator::init$() {
	$set(this, fCurrentPSVI, $new($ElementPSVImpl));
	$set(this, fAugmentations, $new($AugmentationsImpl));
	this->fDynamicValidation = false;
	this->fSchemaDynamicValidation = false;
	this->fDoValidation = false;
	this->fFullChecking = false;
	this->fNormalizeData = true;
	this->fSchemaElementDefault = true;
	this->fAugPSVI = true;
	this->fIdConstraint = false;
	this->fUseGrammarPoolOnly = false;
	this->fNamespaceGrowth = false;
	$set(this, fSchemaType, nullptr);
	this->fEntityRef = false;
	this->fInCDATA = false;
	this->fSawOnlyWhitespaceInElementContent = false;
	$set(this, fXSIErrorReporter, $new($XMLSchemaValidator$XSIErrorReporter, this));
	$set(this, fValidationManager, nullptr);
	$set(this, fValidationState, $new($ConfigurableValidationState));
	$set(this, fExternalSchemas, nullptr);
	$set(this, fExternalNoNamespaceSchema, nullptr);
	$set(this, fJaxpSchemaSource, nullptr);
	$set(this, fXSDDescription, $new($XSDDescription));
	$set(this, fLocationPairs, $new($HashMap));
	this->reportWhitespace = false;
	$set(this, fEmptyXMLStr, $new($XMLString, nullptr, 0, -1));
	$set(this, fNormalizedStr, $new($XMLString));
	this->fFirstChunk = true;
	this->fTrailing = false;
	this->fWhiteSpace = (int16_t)-1;
	this->fUnionType = false;
	$set(this, fGrammarBucket, $new($XSGrammarBucket));
	$set(this, fSubGroupHandler, $new($SubstitutionGroupHandler, this));
	$init($SchemaGrammar);
	$init($SchemaSymbols);
	$set(this, fQNameDV, $cast($XSSimpleType, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl($SchemaSymbols::ATTVAL_QNAME)));
	$set(this, nodeFactory, $new($CMNodeFactory));
	$set(this, fCMBuilder, $new($CMBuilder, this->nodeFactory));
	$set(this, fSchemaLoader, $new($XMLSchemaLoader, $nc(this->fXSIErrorReporter)->fErrorReporter, this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder));
	$set(this, fSubElementStack, $new($booleans, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fElemDeclStack, $new($XSElementDeclArray, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fNilStack, $new($booleans, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fNotationStack, $new($XSNotationDeclArray, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fTypeStack, $new($XSTypeDefinitionArray, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fCMStack, $new($XSCMValidatorArray, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fCMStateStack, $new($intArray2, XMLSchemaValidator::INITIAL_STACK_SIZE));
	this->fStrictAssess = true;
	$set(this, fStrictAssessStack, $new($booleans, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fBuffer, $new($StringBuilder));
	this->fAppendBuffer = true;
	this->fSawText = false;
	$set(this, fSawTextStack, $new($booleans, XMLSchemaValidator::INITIAL_STACK_SIZE));
	this->fSawCharacters = false;
	$set(this, fStringContent, $new($booleans, XMLSchemaValidator::INITIAL_STACK_SIZE));
	$set(this, fTempQName, $new($QName));
	$set(this, fRootTypeQName, nullptr);
	$set(this, fRootTypeDefinition, nullptr);
	$set(this, fRootElementDeclQName, nullptr);
	$set(this, fRootElementDeclaration, nullptr);
	$set(this, fValidatedInfo, $new($ValidatedInfo));
	$set(this, fState4XsiType, $new($ValidationState));
	$set(this, fState4ApplyDefault, $new($ValidationState));
	$set(this, fMatcherStack, $new($XMLSchemaValidator$XPathMatcherStack));
	$set(this, fValueStoreCache, $new($XMLSchemaValidator$ValueStoreCache, this));
	$nc(this->fState4XsiType)->setExtraChecking(false);
	$nc(this->fState4ApplyDefault)->setFacetChecking(false);
}

void XMLSchemaValidator::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	this->fIdConstraint = false;
	$nc(this->fLocationPairs)->clear();
	$nc(this->fValidationState)->resetIDTables();
	$nc(this->fSchemaLoader)->reset(componentManager);
	$set(this, fCurrentElemDecl, nullptr);
	$set(this, fCurrentCM, nullptr);
	$set(this, fCurrCMState, nullptr);
	this->fSkipValidationDepth = -1;
	this->fNFullValidationDepth = -1;
	this->fNNoneValidationDepth = -1;
	this->fElementDepth = -1;
	this->fSubElement = false;
	this->fSchemaDynamicValidation = false;
	this->fEntityRef = false;
	this->fInCDATA = false;
	$nc(this->fMatcherStack)->clear();
	$nc(this->fXSIErrorReporter)->reset($cast($XMLErrorReporter, $($nc(componentManager)->getProperty(XMLSchemaValidator::ERROR_REPORTER))));
	bool parser_settings = $nc(componentManager)->getFeature(XMLSchemaValidator::PARSER_SETTINGS, true);
	if (!parser_settings) {
		$nc(this->fValidationManager)->addValidationState(this->fValidationState);
		$nc(this->nodeFactory)->reset();
		$XMLSchemaLoader::processExternalHints(this->fExternalSchemas, this->fExternalNoNamespaceSchema, this->fLocationPairs, $nc(this->fXSIErrorReporter)->fErrorReporter);
		return;
	}
	$nc(this->nodeFactory)->reset(componentManager);
	$var($SymbolTable, symbolTable, $cast($SymbolTable, componentManager->getProperty(XMLSchemaValidator::SYMBOL_TABLE)));
	if (symbolTable != this->fSymbolTable) {
		$set(this, fSymbolTable, symbolTable);
	}
	this->fNamespaceGrowth = componentManager->getFeature(XMLSchemaValidator::NAMESPACE_GROWTH, false);
	this->fDynamicValidation = componentManager->getFeature(XMLSchemaValidator::DYNAMIC_VALIDATION, false);
	if (this->fDynamicValidation) {
		this->fDoValidation = true;
	} else {
		this->fDoValidation = componentManager->getFeature(XMLSchemaValidator::VALIDATION, false);
	}
	if (this->fDoValidation) {
		this->fDoValidation |= componentManager->getFeature(XMLSchemaValidator::SCHEMA_VALIDATION, false);
	}
	this->fFullChecking = componentManager->getFeature(XMLSchemaValidator::SCHEMA_FULL_CHECKING, false);
	this->fNormalizeData = componentManager->getFeature(XMLSchemaValidator::NORMALIZE_DATA, false);
	this->fSchemaElementDefault = componentManager->getFeature(XMLSchemaValidator::SCHEMA_ELEMENT_DEFAULT, false);
	this->fAugPSVI = componentManager->getFeature(XMLSchemaValidator::SCHEMA_AUGMENT_PSVI, true);
	$init($Constants);
	$set(this, fSchemaType, $cast($String, componentManager->getProperty($$str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}), nullptr)));
	this->fUseGrammarPoolOnly = componentManager->getFeature(XMLSchemaValidator::USE_GRAMMAR_POOL_ONLY, false);
	$set(this, fEntityResolver, $cast($XMLEntityResolver, componentManager->getProperty(XMLSchemaValidator::ENTITY_MANAGER)));
	$set(this, fValidationManager, $cast($ValidationManager, componentManager->getProperty(XMLSchemaValidator::VALIDATION_MANAGER)));
	$nc(this->fValidationManager)->addValidationState(this->fValidationState);
	$nc(this->fValidationState)->setSymbolTable(this->fSymbolTable);
	try {
		$var($Object, rootType, componentManager->getProperty(XMLSchemaValidator::ROOT_TYPE_DEF));
		if (rootType == nullptr) {
			$set(this, fRootTypeQName, nullptr);
			$set(this, fRootTypeDefinition, nullptr);
		} else if ($instanceOf($1QName, rootType)) {
			$set(this, fRootTypeQName, $cast($1QName, rootType));
			$set(this, fRootTypeDefinition, nullptr);
		} else {
			$set(this, fRootTypeDefinition, $cast($XSTypeDefinition, rootType));
			$set(this, fRootTypeQName, nullptr);
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fRootTypeQName, nullptr);
		$set(this, fRootTypeDefinition, nullptr);
	}
	try {
		$var($Object, rootDecl, componentManager->getProperty(XMLSchemaValidator::ROOT_ELEMENT_DECL));
		if (rootDecl == nullptr) {
			$set(this, fRootElementDeclQName, nullptr);
			$set(this, fRootElementDeclaration, nullptr);
		} else if ($instanceOf($1QName, rootDecl)) {
			$set(this, fRootElementDeclQName, $cast($1QName, rootDecl));
			$set(this, fRootElementDeclaration, nullptr);
		} else {
			$set(this, fRootElementDeclaration, $cast($XSElementDecl, rootDecl));
			$set(this, fRootElementDeclQName, nullptr);
		}
	} catch ($XMLConfigurationException& e) {
		$set(this, fRootElementDeclQName, nullptr);
		$set(this, fRootElementDeclaration, nullptr);
	}
	bool ignoreXSIType = componentManager->getFeature(XMLSchemaValidator::IGNORE_XSI_TYPE, false);
	this->fIgnoreXSITypeDepth = ignoreXSIType ? 0 : -1;
	try {
		this->fIDCChecking = componentManager->getFeature(XMLSchemaValidator::IDENTITY_CONSTRAINT_CHECKING);
	} catch ($XMLConfigurationException& e) {
		this->fIDCChecking = true;
	}
	try {
		$nc(this->fValidationState)->setIdIdrefChecking(componentManager->getFeature(XMLSchemaValidator::ID_IDREF_CHECKING));
	} catch ($XMLConfigurationException& e) {
		$nc(this->fValidationState)->setIdIdrefChecking(true);
	}
	try {
		$nc(this->fValidationState)->setUnparsedEntityChecking(componentManager->getFeature(XMLSchemaValidator::UNPARSED_ENTITY_CHECKING));
	} catch ($XMLConfigurationException& e) {
		$nc(this->fValidationState)->setUnparsedEntityChecking(true);
	}
	try {
		$set(this, fExternalSchemas, $cast($String, componentManager->getProperty(XMLSchemaValidator::SCHEMA_LOCATION)));
		$set(this, fExternalNoNamespaceSchema, $cast($String, componentManager->getProperty(XMLSchemaValidator::SCHEMA_NONS_LOCATION)));
	} catch ($XMLConfigurationException& e) {
		$set(this, fExternalSchemas, nullptr);
		$set(this, fExternalNoNamespaceSchema, nullptr);
	}
	$XMLSchemaLoader::processExternalHints(this->fExternalSchemas, this->fExternalNoNamespaceSchema, this->fLocationPairs, $nc(this->fXSIErrorReporter)->fErrorReporter);
	$set(this, fJaxpSchemaSource, componentManager->getProperty(XMLSchemaValidator::JAXP_SCHEMA_SOURCE, nullptr));
	$set(this, fGrammarPool, $cast($XMLGrammarPool, componentManager->getProperty(XMLSchemaValidator::XMLGRAMMAR_POOL, nullptr)));
	$nc(this->fState4XsiType)->setSymbolTable(symbolTable);
	$nc(this->fState4ApplyDefault)->setSymbolTable(symbolTable);
}

void XMLSchemaValidator::startValueScopeFor($IdentityConstraint* identityConstraint, int32_t initialDepth) {
	$var($XMLSchemaValidator$ValueStoreBase, valueStore, $nc(this->fValueStoreCache)->getValueStoreFor(identityConstraint, initialDepth));
	$nc(valueStore)->startValueScope();
}

$XPathMatcher* XMLSchemaValidator::activateField($Field* field, int32_t initialDepth) {
	$useLocalCurrentObjectStackCache();
	$var($ValueStore, valueStore, $nc(this->fValueStoreCache)->getValueStoreFor($($nc(field)->getIdentityConstraint()), initialDepth));
	$var($XPathMatcher, matcher, $nc(field)->createMatcher(valueStore));
	$nc(this->fMatcherStack)->addMatcher(matcher);
	$nc(matcher)->startDocumentFragment();
	return matcher;
}

void XMLSchemaValidator::endValueScopeFor($IdentityConstraint* identityConstraint, int32_t initialDepth) {
	$var($XMLSchemaValidator$ValueStoreBase, valueStore, $nc(this->fValueStoreCache)->getValueStoreFor(identityConstraint, initialDepth));
	$nc(valueStore)->endValueScope();
}

void XMLSchemaValidator::activateSelectorFor($IdentityConstraint* ic) {
	$useLocalCurrentObjectStackCache();
	$var($Selector, selector, $nc(ic)->getSelector());
	$var($FieldActivator, activator, this);
	if (selector == nullptr) {
		return;
	}
	$var($XPathMatcher, matcher, $nc(selector)->createMatcher(activator, this->fElementDepth));
	$nc(this->fMatcherStack)->addMatcher(matcher);
	$nc(matcher)->startDocumentFragment();
}

$XSElementDecl* XMLSchemaValidator::getGlobalElementDecl($QName* element) {
	$var($SchemaGrammar, sGrammar, findSchemaGrammar($XSDDescription::CONTEXT_ELEMENT, $nc(element)->uri, nullptr, element, nullptr));
	if (sGrammar != nullptr) {
		return sGrammar->getGlobalElementDecl($nc(element)->localpart);
	}
	return nullptr;
}

void XMLSchemaValidator::ensureStackCapacity() {
	$useLocalCurrentObjectStackCache();
	if (this->fElementDepth == $nc(this->fElemDeclStack)->length) {
		int32_t newSize = this->fElementDepth + XMLSchemaValidator::INC_STACK_SIZE;
		$var($booleans, newArrayB, $new($booleans, newSize));
		$System::arraycopy(this->fSubElementStack, 0, newArrayB, 0, this->fElementDepth);
		$set(this, fSubElementStack, newArrayB);
		$var($XSElementDeclArray, newArrayE, $new($XSElementDeclArray, newSize));
		$System::arraycopy(this->fElemDeclStack, 0, newArrayE, 0, this->fElementDepth);
		$set(this, fElemDeclStack, newArrayE);
		$assign(newArrayB, $new($booleans, newSize));
		$System::arraycopy(this->fNilStack, 0, newArrayB, 0, this->fElementDepth);
		$set(this, fNilStack, newArrayB);
		$var($XSNotationDeclArray, newArrayN, $new($XSNotationDeclArray, newSize));
		$System::arraycopy(this->fNotationStack, 0, newArrayN, 0, this->fElementDepth);
		$set(this, fNotationStack, newArrayN);
		$var($XSTypeDefinitionArray, newArrayT, $new($XSTypeDefinitionArray, newSize));
		$System::arraycopy(this->fTypeStack, 0, newArrayT, 0, this->fElementDepth);
		$set(this, fTypeStack, newArrayT);
		$var($XSCMValidatorArray, newArrayC, $new($XSCMValidatorArray, newSize));
		$System::arraycopy(this->fCMStack, 0, newArrayC, 0, this->fElementDepth);
		$set(this, fCMStack, newArrayC);
		$assign(newArrayB, $new($booleans, newSize));
		$System::arraycopy(this->fSawTextStack, 0, newArrayB, 0, this->fElementDepth);
		$set(this, fSawTextStack, newArrayB);
		$assign(newArrayB, $new($booleans, newSize));
		$System::arraycopy(this->fStringContent, 0, newArrayB, 0, this->fElementDepth);
		$set(this, fStringContent, newArrayB);
		$assign(newArrayB, $new($booleans, newSize));
		$System::arraycopy(this->fStrictAssessStack, 0, newArrayB, 0, this->fElementDepth);
		$set(this, fStrictAssessStack, newArrayB);
		$var($intArray2, newArrayIA, $new($intArray2, newSize));
		$System::arraycopy(this->fCMStateStack, 0, newArrayIA, 0, this->fElementDepth);
		$set(this, fCMStateStack, newArrayIA);
	}
}

void XMLSchemaValidator::handleStartDocument($XMLLocator* locator, $String* encoding) {
	if (this->fIDCChecking) {
		$nc(this->fValueStoreCache)->startDocument();
	}
	if (this->fAugPSVI) {
		$set($nc(this->fCurrentPSVI), fGrammars, nullptr);
		$set($nc(this->fCurrentPSVI), fSchemaInformation, nullptr);
	}
}

void XMLSchemaValidator::handleEndDocument() {
	if (this->fIDCChecking) {
		$nc(this->fValueStoreCache)->endDocument();
	}
}

$XMLString* XMLSchemaValidator::handleCharacters($XMLString* text$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($XMLString, text, text$renamed);
	if (this->fSkipValidationDepth >= 0) {
		return text;
	}
	this->fSawText = this->fSawText || $nc(text)->length > 0;
	if (this->fNormalizeData && this->fWhiteSpace != -1 && this->fWhiteSpace != $XSSimpleType::WS_PRESERVE) {
		normalizeWhitespace(text, this->fWhiteSpace == $XSSimpleType::WS_COLLAPSE);
		$assign(text, this->fNormalizedStr);
	}
	if (this->fAppendBuffer) {
		$nc(this->fBuffer)->append(text->ch, text->offset, text->length);
	}
	this->fSawOnlyWhitespaceInElementContent = false;
	if (this->fCurrentType != nullptr && $nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
		if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_ELEMENT) {
			for (int32_t i = text->offset; i < text->offset + text->length; ++i) {
				if (!$XMLChar::isSpace($nc(text->ch)->get(i))) {
					this->fSawCharacters = true;
					break;
				}
				this->fSawOnlyWhitespaceInElementContent = !this->fSawCharacters;
			}
		}
	}
	return text;
}

void XMLSchemaValidator::normalizeWhitespace($XMLString* value, bool collapse) {
	bool skipSpace = collapse;
	bool sawNonWS = false;
	bool leading = false;
	bool trailing = false;
	char16_t c = 0;
	int32_t size = $nc(value)->offset + value->length;
	if ($nc(this->fNormalizedStr)->ch == nullptr || $nc($nc(this->fNormalizedStr)->ch)->length < value->length + 1) {
		$set($nc(this->fNormalizedStr), ch, $new($chars, value->length + 1));
	}
	$nc(this->fNormalizedStr)->offset = 1;
	$nc(this->fNormalizedStr)->length = 1;
	for (int32_t i = value->offset; i < size; ++i) {
		c = $nc(value->ch)->get(i);
		if ($XMLChar::isSpace(c)) {
			if (!skipSpace) {
				$nc($nc(this->fNormalizedStr)->ch)->set($nc(this->fNormalizedStr)->length++, u' ');
				skipSpace = collapse;
			}
			if (!sawNonWS) {
				leading = true;
			}
		} else {
			$nc($nc(this->fNormalizedStr)->ch)->set($nc(this->fNormalizedStr)->length++, c);
			skipSpace = false;
			sawNonWS = true;
		}
	}
	if (skipSpace) {
		if ($nc(this->fNormalizedStr)->length > 1) {
			--$nc(this->fNormalizedStr)->length;
			trailing = true;
		} else if (leading && !this->fFirstChunk) {
			trailing = true;
		}
	}
	if ($nc(this->fNormalizedStr)->length > 1) {
		if (!this->fFirstChunk && (this->fWhiteSpace == $XSSimpleType::WS_COLLAPSE)) {
			if (this->fTrailing) {
				$nc(this->fNormalizedStr)->offset = 0;
				$nc($nc(this->fNormalizedStr)->ch)->set(0, u' ');
			} else if (leading) {
				$nc(this->fNormalizedStr)->offset = 0;
				$nc($nc(this->fNormalizedStr)->ch)->set(0, u' ');
			}
		}
	}
	$nc(this->fNormalizedStr)->length -= $nc(this->fNormalizedStr)->offset;
	this->fTrailing = trailing;
	if (trailing || sawNonWS) {
		this->fFirstChunk = false;
	}
}

void XMLSchemaValidator::normalizeWhitespace($String* value, bool collapse) {
	bool skipSpace = collapse;
	char16_t c = 0;
	int32_t size = $nc(value)->length();
	if ($nc(this->fNormalizedStr)->ch == nullptr || $nc($nc(this->fNormalizedStr)->ch)->length < size) {
		$set($nc(this->fNormalizedStr), ch, $new($chars, size));
	}
	$nc(this->fNormalizedStr)->offset = 0;
	$nc(this->fNormalizedStr)->length = 0;
	for (int32_t i = 0; i < size; ++i) {
		c = value->charAt(i);
		if ($XMLChar::isSpace(c)) {
			if (!skipSpace) {
				$nc($nc(this->fNormalizedStr)->ch)->set($nc(this->fNormalizedStr)->length++, u' ');
				skipSpace = collapse;
			}
		} else {
			$nc($nc(this->fNormalizedStr)->ch)->set($nc(this->fNormalizedStr)->length++, c);
			skipSpace = false;
		}
	}
	if (skipSpace) {
		if ($nc(this->fNormalizedStr)->length != 0) {
			--$nc(this->fNormalizedStr)->length;
		}
	}
}

void XMLSchemaValidator::handleIgnorableWhitespace($XMLString* text) {
	if (this->fSkipValidationDepth >= 0) {
		return;
	}
}

$Augmentations* XMLSchemaValidator::handleStartElement($QName* element, $XMLAttributes* attributes, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Augmentations, augs, augs$renamed);
	if (this->fElementDepth == -1 && $nc(this->fValidationManager)->isGrammarFound()) {
		if (this->fSchemaType == nullptr && !this->fUseGrammarPoolOnly) {
			this->fSchemaDynamicValidation = true;
		} else {
		}
	}
	if (!this->fUseGrammarPoolOnly) {
		$init($SchemaSymbols);
		$var($String, sLocation, $nc(attributes)->getValue($SchemaSymbols::URI_XSI, $SchemaSymbols::XSI_SCHEMALOCATION));
		$var($String, nsLocation, attributes->getValue($SchemaSymbols::URI_XSI, $SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION));
		storeLocations(sLocation, nsLocation);
	}
	if (this->fSkipValidationDepth >= 0) {
		++this->fElementDepth;
		if (this->fAugPSVI) {
			$assign(augs, getEmptyAugs(augs));
		}
		return augs;
	}
	$var($Object, decl, nullptr);
	if (this->fCurrentCM != nullptr) {
		$assign(decl, $nc(this->fCurrentCM)->oneTransition(element, this->fCurrCMState, this->fSubGroupHandler));
		if ($nc(this->fCurrCMState)->get(0) == $XSCMValidator::FIRST_ERROR) {
			$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
			$var($List, next, nullptr);
			if ($nc(ctype)->fParticle != nullptr && $nc(($assign(next, $nc(this->fCurrentCM)->whatCanGoHere(this->fCurrCMState))))->size() > 0) {
				$var($String, expected, expectedStr(next));
				$var($ints, occurenceInfo, $nc(this->fCurrentCM)->occurenceInfo(this->fCurrCMState));
				$var($String, elemExpandedQname, ($nc(element)->uri != nullptr) ? $str({"{"_s, $$str(u'\"'), $nc(element)->uri, $$str(u'\"'), ":"_s, element->localpart, "}"_s}) : element->localpart);
				if (occurenceInfo != nullptr) {
					int32_t minOccurs = occurenceInfo->get(0);
					int32_t maxOccurs = occurenceInfo->get(1);
					int32_t count = occurenceInfo->get(2);
					if (count < minOccurs) {
						int32_t required = minOccurs - count;
						if (required > 1) {
							reportSchemaError("cvc-complex-type.2.4.h"_s, $$new($ObjectArray, {
								$of(element->rawname),
								$($of($nc(this->fCurrentCM)->getTermName(occurenceInfo->get(3)))),
								$($of($Integer::toString(minOccurs))),
								$($of($Integer::toString(required)))
							}));
						} else {
							reportSchemaError("cvc-complex-type.2.4.g"_s, $$new($ObjectArray, {
								$of(element->rawname),
								$($of($nc(this->fCurrentCM)->getTermName(occurenceInfo->get(3)))),
								$($of($Integer::toString(minOccurs)))
							}));
						}
					} else if (count >= maxOccurs && maxOccurs != $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
						reportSchemaError("cvc-complex-type.2.4.e"_s, $$new($ObjectArray, {
							$of(element->rawname),
							$of(expected),
							$($of($Integer::toString(maxOccurs)))
						}));
					} else {
						reportSchemaError("cvc-complex-type.2.4.a"_s, $$new($ObjectArray, {
							$of(elemExpandedQname),
							$of(expected)
						}));
					}
				} else {
					reportSchemaError("cvc-complex-type.2.4.a"_s, $$new($ObjectArray, {
						$of(elemExpandedQname),
						$of(expected)
					}));
				}
			} else {
				$var($ints, occurenceInfo, $nc(this->fCurrentCM)->occurenceInfo(this->fCurrCMState));
				if (occurenceInfo != nullptr) {
					int32_t maxOccurs = occurenceInfo->get(1);
					int32_t count = occurenceInfo->get(2);
					if (count >= maxOccurs && maxOccurs != $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
						reportSchemaError("cvc-complex-type.2.4.f"_s, $$new($ObjectArray, {
							$($of($nc(this->fCurrentCM)->getTermName(occurenceInfo->get(3)))),
							$($of($Integer::toString(maxOccurs)))
						}));
					} else {
						reportSchemaError("cvc-complex-type.2.4.d"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
					}
				} else {
					reportSchemaError("cvc-complex-type.2.4.d"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
				}
			}
		}
	}
	if (this->fElementDepth != -1) {
		ensureStackCapacity();
		$nc(this->fSubElementStack)->set(this->fElementDepth, true);
		this->fSubElement = false;
		$nc(this->fElemDeclStack)->set(this->fElementDepth, this->fCurrentElemDecl);
		$nc(this->fNilStack)->set(this->fElementDepth, this->fNil);
		$nc(this->fNotationStack)->set(this->fElementDepth, this->fNotation);
		$nc(this->fTypeStack)->set(this->fElementDepth, this->fCurrentType);
		$nc(this->fStrictAssessStack)->set(this->fElementDepth, this->fStrictAssess);
		$nc(this->fCMStack)->set(this->fElementDepth, this->fCurrentCM);
		$nc(this->fCMStateStack)->set(this->fElementDepth, this->fCurrCMState);
		$nc(this->fSawTextStack)->set(this->fElementDepth, this->fSawText);
		$nc(this->fStringContent)->set(this->fElementDepth, this->fSawCharacters);
	}
	++this->fElementDepth;
	$set(this, fCurrentElemDecl, nullptr);
	$var($XSWildcardDecl, wildcard, nullptr);
	$set(this, fCurrentType, nullptr);
	this->fStrictAssess = true;
	this->fNil = false;
	$set(this, fNotation, nullptr);
	$nc(this->fBuffer)->setLength(0);
	this->fSawText = false;
	this->fSawCharacters = false;
	if (decl != nullptr) {
		if ($instanceOf($XSElementDecl, decl)) {
			$set(this, fCurrentElemDecl, $cast($XSElementDecl, decl));
		} else {
			$assign(wildcard, $cast($XSWildcardDecl, decl));
		}
	}
	if (wildcard != nullptr && wildcard->fProcessContents == $XSWildcardDecl::PC_SKIP) {
		this->fSkipValidationDepth = this->fElementDepth;
		if (this->fAugPSVI) {
			$assign(augs, getEmptyAugs(augs));
		}
		return augs;
	}
	if (this->fElementDepth == 0) {
		if (this->fRootElementDeclaration != nullptr) {
			$set(this, fCurrentElemDecl, this->fRootElementDeclaration);
			checkElementMatchesRootElementDecl(this->fCurrentElemDecl, element);
		} else if (this->fRootElementDeclQName != nullptr) {
			processRootElementDeclQName(this->fRootElementDeclQName, element);
		} else if (this->fRootTypeDefinition != nullptr) {
			$set(this, fCurrentType, this->fRootTypeDefinition);
		} else if (this->fRootTypeQName != nullptr) {
			processRootTypeQName(this->fRootTypeQName);
		}
	}
	if (this->fCurrentType == nullptr) {
		if (this->fCurrentElemDecl == nullptr) {
			$var($SchemaGrammar, sGrammar, findSchemaGrammar($XSDDescription::CONTEXT_ELEMENT, $nc(element)->uri, nullptr, element, attributes));
			if (sGrammar != nullptr) {
				$set(this, fCurrentElemDecl, sGrammar->getGlobalElementDecl($nc(element)->localpart));
			}
		}
		if (this->fCurrentElemDecl != nullptr) {
			$set(this, fCurrentType, $nc(this->fCurrentElemDecl)->fType);
		}
	}
	if (this->fElementDepth == this->fIgnoreXSITypeDepth && this->fCurrentElemDecl == nullptr) {
		++this->fIgnoreXSITypeDepth;
	}
	$var($String, xsiType, nullptr);
	if (this->fElementDepth >= this->fIgnoreXSITypeDepth) {
		$init($SchemaSymbols);
		$assign(xsiType, $nc(attributes)->getValue($SchemaSymbols::URI_XSI, $SchemaSymbols::XSI_TYPE));
	}
	if (this->fCurrentType == nullptr && xsiType == nullptr) {
		if (this->fElementDepth == 0) {
			if (this->fDynamicValidation || this->fSchemaDynamicValidation) {
				if (this->fDocumentSource != nullptr) {
					$nc(this->fDocumentSource)->setDocumentHandler(this->fDocumentHandler);
					if (this->fDocumentHandler != nullptr) {
						$nc(this->fDocumentHandler)->setDocumentSource(this->fDocumentSource);
					}
					this->fElementDepth = -2;
					return augs;
				}
				this->fSkipValidationDepth = this->fElementDepth;
				if (this->fAugPSVI) {
					$assign(augs, getEmptyAugs(augs));
				}
				return augs;
			}
			$init($XSMessageFormatter);
			$nc($nc(this->fXSIErrorReporter)->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "cvc-elt.1.a"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}), $XMLErrorReporter::SEVERITY_ERROR);
		} else if (wildcard != nullptr && wildcard->fProcessContents == $XSWildcardDecl::PC_STRICT) {
			reportSchemaError("cvc-complex-type.2.4.c"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		$init($SchemaGrammar);
		$set(this, fCurrentType, $SchemaGrammar::fAnyType);
		this->fStrictAssess = false;
		this->fNFullValidationDepth = this->fElementDepth;
		this->fAppendBuffer = false;
		$nc(this->fXSIErrorReporter)->pushContext();
	} else {
		$nc(this->fXSIErrorReporter)->pushContext();
		if (xsiType != nullptr) {
			$var($XSTypeDefinition, oldType, this->fCurrentType);
			$set(this, fCurrentType, getAndCheckXsiType(element, xsiType, attributes));
			if (this->fCurrentType == nullptr) {
				if (oldType == nullptr) {
					$init($SchemaGrammar);
					$set(this, fCurrentType, $SchemaGrammar::fAnyType);
				} else {
					$set(this, fCurrentType, oldType);
				}
			}
		}
		this->fNNoneValidationDepth = this->fElementDepth;
		if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->getConstraintType() == $XSConstants::VC_FIXED) {
			this->fAppendBuffer = true;
		} else if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
			this->fAppendBuffer = true;
		} else {
			$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
			this->fAppendBuffer = ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE);
		}
	}
	if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->getAbstract()) {
		reportSchemaError("cvc-elt.2"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
	}
	if (this->fElementDepth == 0) {
		$set(this, fValidationRoot, $nc(element)->rawname);
	}
	if (this->fNormalizeData) {
		this->fFirstChunk = true;
		this->fTrailing = false;
		this->fUnionType = false;
		this->fWhiteSpace = (int16_t)-1;
	}
	if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
		if ($nc(ctype)->getAbstract()) {
			reportSchemaError("cvc-type.2"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (this->fNormalizeData) {
			if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
				if ($nc(ctype->fXSSimpleType)->getVariety() == $XSSimpleType::VARIETY_UNION) {
					this->fUnionType = true;
				} else {
					try {
						this->fWhiteSpace = $nc(ctype->fXSSimpleType)->getWhitespace();
					} catch ($DatatypeException& e) {
					}
				}
			}
		}
	} else if (this->fNormalizeData) {
		$var($XSSimpleType, dv, $cast($XSSimpleType, this->fCurrentType));
		if ($nc(dv)->getVariety() == $XSSimpleType::VARIETY_UNION) {
			this->fUnionType = true;
		} else {
			try {
				this->fWhiteSpace = dv->getWhitespace();
			} catch ($DatatypeException& e) {
			}
		}
	}
	$set(this, fCurrentCM, nullptr);
	if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$set(this, fCurrentCM, $nc(($cast($XSComplexTypeDecl, this->fCurrentType)))->getContentModel(this->fCMBuilder));
	}
	$set(this, fCurrCMState, nullptr);
	if (this->fCurrentCM != nullptr) {
		$set(this, fCurrCMState, $nc(this->fCurrentCM)->startContentModel());
	}
	$init($SchemaSymbols);
	$var($String, xsiNil, $nc(attributes)->getValue($SchemaSymbols::URI_XSI, $SchemaSymbols::XSI_NIL));
	if (xsiNil != nullptr && this->fCurrentElemDecl != nullptr) {
		this->fNil = getXsiNil(element, xsiNil);
	}
	$var($XSAttributeGroupDecl, attrGrp, nullptr);
	if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
		$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
		$assign(attrGrp, $nc(ctype)->getAttrGrp());
	}
	if (this->fIDCChecking) {
		$nc(this->fValueStoreCache)->startElement();
		$nc(this->fMatcherStack)->pushContext();
		if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->fIDCPos > 0) {
			this->fIdConstraint = true;
			$nc(this->fValueStoreCache)->initValueStoresFor(this->fCurrentElemDecl, this);
		}
	}
	processAttributes(element, attributes, attrGrp);
	if (attrGrp != nullptr) {
		addDefaultAttributes(element, attributes, attrGrp);
	}
	int32_t count = $nc(this->fMatcherStack)->getMatcherCount();
	for (int32_t i = 0; i < count; ++i) {
		$var($XPathMatcher, matcher, $nc(this->fMatcherStack)->getMatcherAt(i));
		$nc(matcher)->startElement(element, attributes);
	}
	if (this->fAugPSVI) {
		$assign(augs, getEmptyAugs(augs));
		$set($nc(this->fCurrentPSVI), fValidationContext, this->fValidationRoot);
		$set($nc(this->fCurrentPSVI), fDeclaration, this->fCurrentElemDecl);
		$set($nc(this->fCurrentPSVI), fTypeDecl, this->fCurrentType);
		$set($nc(this->fCurrentPSVI), fNotation, this->fNotation);
		$nc(this->fCurrentPSVI)->fNil = this->fNil;
	}
	return augs;
}

$Augmentations* XMLSchemaValidator::handleEndElement($QName* element, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Augmentations, augs, augs$renamed);
	if (this->fSkipValidationDepth >= 0) {
		if (this->fSkipValidationDepth == this->fElementDepth && this->fSkipValidationDepth > 0) {
			this->fNFullValidationDepth = this->fSkipValidationDepth - 1;
			this->fSkipValidationDepth = -1;
			--this->fElementDepth;
			this->fSubElement = $nc(this->fSubElementStack)->get(this->fElementDepth);
			$set(this, fCurrentElemDecl, $nc(this->fElemDeclStack)->get(this->fElementDepth));
			this->fNil = $nc(this->fNilStack)->get(this->fElementDepth);
			$set(this, fNotation, $nc(this->fNotationStack)->get(this->fElementDepth));
			$set(this, fCurrentType, $nc(this->fTypeStack)->get(this->fElementDepth));
			$set(this, fCurrentCM, $nc(this->fCMStack)->get(this->fElementDepth));
			this->fStrictAssess = $nc(this->fStrictAssessStack)->get(this->fElementDepth);
			$set(this, fCurrCMState, $nc(this->fCMStateStack)->get(this->fElementDepth));
			this->fSawText = $nc(this->fSawTextStack)->get(this->fElementDepth);
			this->fSawCharacters = $nc(this->fStringContent)->get(this->fElementDepth);
		} else {
			--this->fElementDepth;
		}
		if (this->fElementDepth == -1 && this->fFullChecking && !this->fUseGrammarPoolOnly) {
			$XSConstraints::fullSchemaChecking(this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder, $nc(this->fXSIErrorReporter)->fErrorReporter);
		}
		if (this->fAugPSVI) {
			$assign(augs, getEmptyAugs(augs));
		}
		return augs;
	}
	processElementContent(element);
	if (this->fIDCChecking) {
		int32_t oldCount = $nc(this->fMatcherStack)->getMatcherCount();
		for (int32_t i = oldCount - 1; i >= 0; --i) {
			$var($XPathMatcher, matcher, $nc(this->fMatcherStack)->getMatcherAt(i));
			if (this->fCurrentElemDecl == nullptr) {
				$nc(matcher)->endElement(element, this->fCurrentType, false, $nc(this->fValidatedInfo)->actualValue, $nc(this->fValidatedInfo)->actualValueType, $nc(this->fValidatedInfo)->itemValueTypes);
			} else {
				$nc(matcher)->endElement(element, this->fCurrentType, $nc(this->fCurrentElemDecl)->getNillable(), this->fDefaultValue == nullptr ? $nc(this->fValidatedInfo)->actualValue : $nc($nc(this->fCurrentElemDecl)->fDefault)->actualValue, this->fDefaultValue == nullptr ? $nc(this->fValidatedInfo)->actualValueType : $nc($nc(this->fCurrentElemDecl)->fDefault)->actualValueType, this->fDefaultValue == nullptr ? $nc(this->fValidatedInfo)->itemValueTypes : $nc($nc(this->fCurrentElemDecl)->fDefault)->itemValueTypes);
			}
		}
		if ($nc(this->fMatcherStack)->size() > 0) {
			$nc(this->fMatcherStack)->popContext();
		}
		int32_t newCount = $nc(this->fMatcherStack)->getMatcherCount();
		for (int32_t i = oldCount - 1; i >= newCount; --i) {
			$var($XPathMatcher, matcher, $nc(this->fMatcherStack)->getMatcherAt(i));
			if ($instanceOf($Selector$Matcher, matcher)) {
				$var($Selector$Matcher, selMatcher, $cast($Selector$Matcher, matcher));
				$var($IdentityConstraint, id, nullptr);
				bool var$0 = ($assign(id, $nc(selMatcher)->getIdentityConstraint())) != nullptr;
				if (var$0 && $nc(id)->getCategory() != $IdentityConstraint::IC_KEYREF) {
					$nc(this->fValueStoreCache)->transplant(id, selMatcher->getInitialDepth());
				}
			}
		}
		for (int32_t i = oldCount - 1; i >= newCount; --i) {
			$var($XPathMatcher, matcher, $nc(this->fMatcherStack)->getMatcherAt(i));
			if ($instanceOf($Selector$Matcher, matcher)) {
				$var($Selector$Matcher, selMatcher, $cast($Selector$Matcher, matcher));
				$var($IdentityConstraint, id, nullptr);
				bool var$1 = ($assign(id, $nc(selMatcher)->getIdentityConstraint())) != nullptr;
				if (var$1 && $nc(id)->getCategory() == $IdentityConstraint::IC_KEYREF) {
					$var($XMLSchemaValidator$ValueStoreBase, values, $nc(this->fValueStoreCache)->getValueStoreFor(id, selMatcher->getInitialDepth()));
					if (values != nullptr && values->fHasValue) {
						values->endDocumentFragment();
					}
				}
			}
		}
		$nc(this->fValueStoreCache)->endElement();
	}
	if (this->fElementDepth < this->fIgnoreXSITypeDepth) {
		--this->fIgnoreXSITypeDepth;
	}
	$var($SchemaGrammarArray, grammars, nullptr);
	if (this->fElementDepth == 0) {
		$var($Iterator, invIdRefs, $nc(this->fValidationState)->checkIDRefID());
		$nc(this->fValidationState)->resetIDTables();
		if (invIdRefs != nullptr) {
			while (invIdRefs->hasNext()) {
				reportSchemaError("cvc-id.1"_s, $$new($ObjectArray, {$(invIdRefs->next())}));
			}
		}
		if (this->fFullChecking && !this->fUseGrammarPoolOnly) {
			$XSConstraints::fullSchemaChecking(this->fGrammarBucket, this->fSubGroupHandler, this->fCMBuilder, $nc(this->fXSIErrorReporter)->fErrorReporter);
		}
		$assign(grammars, $nc(this->fGrammarBucket)->getGrammars());
		if (this->fGrammarPool != nullptr) {
			for (int32_t k = 0; k < $nc(grammars)->length; ++k) {
				$nc(grammars->get(k))->setImmutable(true);
			}
			$init($XMLGrammarDescription);
			$nc(this->fGrammarPool)->cacheGrammars($XMLGrammarDescription::XML_SCHEMA, $fcast($GrammarArray, grammars));
		}
		$assign(augs, endElementPSVI(true, grammars, augs));
	} else {
		$assign(augs, endElementPSVI(false, grammars, augs));
		--this->fElementDepth;
		this->fSubElement = $nc(this->fSubElementStack)->get(this->fElementDepth);
		$set(this, fCurrentElemDecl, $nc(this->fElemDeclStack)->get(this->fElementDepth));
		this->fNil = $nc(this->fNilStack)->get(this->fElementDepth);
		$set(this, fNotation, $nc(this->fNotationStack)->get(this->fElementDepth));
		$set(this, fCurrentType, $nc(this->fTypeStack)->get(this->fElementDepth));
		$set(this, fCurrentCM, $nc(this->fCMStack)->get(this->fElementDepth));
		this->fStrictAssess = $nc(this->fStrictAssessStack)->get(this->fElementDepth);
		$set(this, fCurrCMState, $nc(this->fCMStateStack)->get(this->fElementDepth));
		this->fSawText = $nc(this->fSawTextStack)->get(this->fElementDepth);
		this->fSawCharacters = $nc(this->fStringContent)->get(this->fElementDepth);
		this->fWhiteSpace = (int16_t)-1;
		this->fAppendBuffer = false;
		this->fUnionType = false;
	}
	return augs;
}

$Augmentations* XMLSchemaValidator::endElementPSVI(bool root, $SchemaGrammarArray* grammars, $Augmentations* augs$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Augmentations, augs, augs$renamed);
	if (this->fAugPSVI) {
		$assign(augs, getEmptyAugs(augs));
		$set($nc(this->fCurrentPSVI), fDeclaration, this->fCurrentElemDecl);
		$set($nc(this->fCurrentPSVI), fTypeDecl, this->fCurrentType);
		$set($nc(this->fCurrentPSVI), fNotation, this->fNotation);
		$set($nc(this->fCurrentPSVI), fValidationContext, this->fValidationRoot);
		$nc(this->fCurrentPSVI)->fNil = this->fNil;
		if (this->fElementDepth > this->fNFullValidationDepth) {
			$nc(this->fCurrentPSVI)->fValidationAttempted = $ElementPSVI::VALIDATION_FULL;
		} else if (this->fElementDepth > this->fNNoneValidationDepth) {
			$nc(this->fCurrentPSVI)->fValidationAttempted = $ElementPSVI::VALIDATION_NONE;
		} else {
			$nc(this->fCurrentPSVI)->fValidationAttempted = $ElementPSVI::VALIDATION_PARTIAL;
		}
		if (this->fNFullValidationDepth == this->fElementDepth) {
			this->fNFullValidationDepth = this->fElementDepth - 1;
		}
		if (this->fNNoneValidationDepth == this->fElementDepth) {
			this->fNNoneValidationDepth = this->fElementDepth - 1;
		}
		if (this->fDefaultValue != nullptr) {
			$nc(this->fCurrentPSVI)->fSpecified = true;
		}
		$nc($nc(this->fCurrentPSVI)->fValue)->copyFrom(this->fValidatedInfo);
		if (this->fStrictAssess) {
			$var($StringArray, errors, $nc(this->fXSIErrorReporter)->mergeContext());
			$set($nc(this->fCurrentPSVI), fErrors, errors);
			$nc(this->fCurrentPSVI)->fValidity = (errors == nullptr) ? $ElementPSVI::VALIDITY_VALID : $ElementPSVI::VALIDITY_INVALID;
		} else {
			$nc(this->fCurrentPSVI)->fValidity = $ElementPSVI::VALIDITY_NOTKNOWN;
			$nc(this->fXSIErrorReporter)->popContext();
		}
		if (root) {
			$set($nc(this->fCurrentPSVI), fGrammars, grammars);
			$set($nc(this->fCurrentPSVI), fSchemaInformation, nullptr);
		}
	}
	return augs;
}

$Augmentations* XMLSchemaValidator::getEmptyAugs($Augmentations* augs$renamed) {
	$var($Augmentations, augs, augs$renamed);
	if (augs == nullptr) {
		$assign(augs, this->fAugmentations);
		$nc(augs)->removeAllItems();
	}
	$init($Constants);
	$nc(augs)->putItem($Constants::ELEMENT_PSVI, this->fCurrentPSVI);
	$nc(this->fCurrentPSVI)->reset();
	return augs;
}

void XMLSchemaValidator::storeLocations($String* sLocation, $String* nsLocation$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, nsLocation, nsLocation$renamed);
	if (sLocation != nullptr) {
		if (!$XMLSchemaLoader::tokenizeSchemaLocationStr(sLocation, this->fLocationPairs, this->fLocator == nullptr ? ($String*)nullptr : $($nc(this->fLocator)->getExpandedSystemId()))) {
			$init($XSMessageFormatter);
			$nc(this->fXSIErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "SchemaLocation"_s, $$new($ObjectArray, {$of(sLocation)}), $XMLErrorReporter::SEVERITY_WARNING);
		}
	}
	if (nsLocation != nullptr) {
		$init($XMLSymbols);
		$var($XMLSchemaLoader$LocationArray, la, $cast($XMLSchemaLoader$LocationArray, $nc(this->fLocationPairs)->get($XMLSymbols::EMPTY_STRING)));
		if (la == nullptr) {
			$assign(la, $new($XMLSchemaLoader$LocationArray));
			$nc(this->fLocationPairs)->put($XMLSymbols::EMPTY_STRING, la);
		}
		if (this->fLocator != nullptr) {
			try {
				$assign(nsLocation, $XMLEntityManager::expandSystemId(nsLocation, $($nc(this->fLocator)->getExpandedSystemId()), false));
			} catch ($URI$MalformedURIException& e) {
			}
		}
		$nc(la)->addLocation(nsLocation);
	}
}

$SchemaGrammar* XMLSchemaValidator::findSchemaGrammar(int16_t contextType, $String* namespace$, $QName* enclosingElement, $QName* triggeringComponent, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, grammar, nullptr);
	$assign(grammar, $nc(this->fGrammarBucket)->getGrammar(namespace$));
	if (grammar == nullptr) {
		$nc(this->fXSDDescription)->setNamespace(namespace$);
		if (this->fGrammarPool != nullptr) {
			$assign(grammar, $cast($SchemaGrammar, $nc(this->fGrammarPool)->retrieveGrammar(this->fXSDDescription)));
			if (grammar != nullptr) {
				if (!$nc(this->fGrammarBucket)->putGrammar(grammar, true, this->fNamespaceGrowth)) {
					$init($XSMessageFormatter);
					$nc($nc(this->fXSIErrorReporter)->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "GrammarConflict"_s, nullptr, $XMLErrorReporter::SEVERITY_WARNING);
					$assign(grammar, nullptr);
				}
			}
		}
	}
	if (!this->fUseGrammarPoolOnly && (grammar == nullptr || (this->fNamespaceGrowth && !hasSchemaComponent(grammar, contextType, triggeringComponent)))) {
		$nc(this->fXSDDescription)->reset();
		$nc(this->fXSDDescription)->fContextType = contextType;
		$nc(this->fXSDDescription)->setNamespace(namespace$);
		$set($nc(this->fXSDDescription), fEnclosedElementName, enclosingElement);
		$set($nc(this->fXSDDescription), fTriggeringComponent, triggeringComponent);
		$set($nc(this->fXSDDescription), fAttributes, attributes);
		if (this->fLocator != nullptr) {
			$nc(this->fXSDDescription)->setBaseSystemId($($nc(this->fLocator)->getExpandedSystemId()));
		}
		$var($Map, locationPairs, this->fLocationPairs);
		$init($XMLSymbols);
		$var($XMLSchemaLoader$LocationArray, locationArray, $cast($XMLSchemaLoader$LocationArray, $nc(locationPairs)->get(namespace$ == nullptr ? $of($XMLSymbols::EMPTY_STRING) : $of(namespace$))));
		if (locationArray != nullptr) {
			$var($StringArray, temp, locationArray->getLocationArray());
			if ($nc(temp)->length != 0) {
				setLocationHints(this->fXSDDescription, temp, grammar);
			}
		}
		if (grammar == nullptr || $nc(this->fXSDDescription)->fLocationHints != nullptr) {
			bool toParseSchema = true;
			if (grammar != nullptr) {
				$assign(locationPairs, $Collections::emptyMap());
			}
			try {
				$var($XMLInputSource, xis, $XMLSchemaLoader::resolveDocument(this->fXSDDescription, locationPairs, this->fEntityResolver));
				if (grammar != nullptr && this->fNamespaceGrowth) {
					try {
						$var($String, var$0, $nc(xis)->getSystemId());
						if ($nc($(grammar->getDocumentLocations()))->contains($($XMLEntityManager::expandSystemId(var$0, $(xis->getBaseSystemId()), false)))) {
							toParseSchema = false;
						}
					} catch ($URI$MalformedURIException& e) {
					}
				}
				if (toParseSchema) {
					$assign(grammar, $nc(this->fSchemaLoader)->loadSchema(this->fXSDDescription, xis, this->fLocationPairs));
				}
			} catch ($IOException& ex) {
				$var($StringArray, locationHints, $nc(this->fXSDDescription)->getLocationHints());
				$init($XSMessageFormatter);
				$nc($nc(this->fXSIErrorReporter)->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, "schema_reference.4"_s, $$new($ObjectArray, {locationHints != nullptr ? $of($nc(locationHints)->get(0)) : $of($XMLSymbols::EMPTY_STRING)}), $XMLErrorReporter::SEVERITY_WARNING, static_cast<$Exception*>(ex));
			}
		}
	}
	return grammar;
}

bool XMLSchemaValidator::hasSchemaComponent($SchemaGrammar* grammar, int16_t contextType, $QName* triggeringComponent) {
	if (grammar != nullptr && triggeringComponent != nullptr) {
		$var($String, localName, triggeringComponent->localpart);
		if (localName != nullptr && localName->length() > 0) {
			switch (contextType) {
			case $XSDDescription::CONTEXT_ELEMENT:
				{
					return grammar->getElementDeclaration(localName) != nullptr;
				}
			case $XSDDescription::CONTEXT_ATTRIBUTE:
				{
					return grammar->getAttributeDeclaration(localName) != nullptr;
				}
			case $XSDDescription::CONTEXT_XSITYPE:
				{
					return grammar->getTypeDefinition(localName) != nullptr;
				}
			}
		}
	}
	return false;
}

void XMLSchemaValidator::setLocationHints($XSDDescription* desc, $StringArray* locations, $SchemaGrammar* grammar) {
	int32_t length = $nc(locations)->length;
	if (grammar == nullptr) {
		$set($nc(this->fXSDDescription), fLocationHints, $new($StringArray, length));
		$System::arraycopy(locations, 0, $nc(this->fXSDDescription)->fLocationHints, 0, length);
	} else {
		setLocationHints(desc, locations, $($nc(grammar)->getDocumentLocations()));
	}
}

void XMLSchemaValidator::setLocationHints($XSDDescription* desc, $StringArray* locations, $StringList* docLocations) {
	int32_t length = $nc(locations)->length;
	$var($StringArray, hints, $new($StringArray, length));
	int32_t counter = 0;
	for (int32_t i = 0; i < length; ++i) {
		if (!$nc(docLocations)->contains(locations->get(i))) {
			hints->set(counter++, locations->get(i));
		}
	}
	if (counter > 0) {
		if (counter == length) {
			$set($nc(this->fXSDDescription), fLocationHints, hints);
		} else {
			$set($nc(this->fXSDDescription), fLocationHints, $new($StringArray, counter));
			$System::arraycopy(hints, 0, $nc(this->fXSDDescription)->fLocationHints, 0, counter);
		}
	}
}

$XSTypeDefinition* XMLSchemaValidator::getAndCheckXsiType($QName* element, $String* xsiType, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($QName, typeName, nullptr);
	try {
		$assign(typeName, $cast($QName, $nc(this->fQNameDV)->validate(xsiType, static_cast<$ValidationContext*>(this->fValidationState), ($ValidatedInfo*)nullptr)));
	} catch ($InvalidDatatypeValueException& e) {
		$var($String, var$0, e->getKey());
		reportSchemaError(var$0, $(e->getArgs()));
		$init($SchemaSymbols);
		reportSchemaError("cvc-elt.4.1"_s, $$new($ObjectArray, {
			$of($nc(element)->rawname),
			$of($$str({$SchemaSymbols::URI_XSI, ","_s, $SchemaSymbols::XSI_TYPE})),
			$of(xsiType)
		}));
		return nullptr;
	}
	$var($XSTypeDefinition, type, nullptr);
	$init($SchemaSymbols);
	if ($nc(typeName)->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA) {
		$init($SchemaGrammar);
		$assign(type, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl(typeName->localpart));
	}
	if (type == nullptr) {
		$var($SchemaGrammar, grammar, findSchemaGrammar($XSDDescription::CONTEXT_XSITYPE, $nc(typeName)->uri, element, typeName, attributes));
		if (grammar != nullptr) {
			$assign(type, grammar->getGlobalTypeDecl($nc(typeName)->localpart));
		}
	}
	if (type == nullptr) {
		reportSchemaError("cvc-elt.4.2"_s, $$new($ObjectArray, {
			$of($nc(element)->rawname),
			$of(xsiType)
		}));
		return nullptr;
	}
	if (this->fCurrentType != nullptr) {
		int16_t block = $XSConstants::DERIVATION_NONE;
		if (this->fCurrentElemDecl != nullptr) {
			block = $nc(this->fCurrentElemDecl)->fBlock;
		}
		if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
			block |= $nc(($cast($XSComplexTypeDecl, this->fCurrentType)))->fBlock;
		}
		if (!$XSConstraints::checkTypeDerivationOk(type, this->fCurrentType, block)) {
			reportSchemaError("cvc-elt.4.3"_s, $$new($ObjectArray, {
				$of($nc(element)->rawname),
				$of(xsiType),
				$($of($XS10TypeHelper::getSchemaTypeName(this->fCurrentType)))
			}));
		}
	}
	return type;
}

bool XMLSchemaValidator::getXsiNil($QName* element, $String* xsiNil) {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentElemDecl != nullptr && !$nc(this->fCurrentElemDecl)->getNillable()) {
		$init($SchemaSymbols);
		reportSchemaError("cvc-elt.3.1"_s, $$new($ObjectArray, {
			$of($nc(element)->rawname),
			$of($$str({$SchemaSymbols::URI_XSI, ","_s, $SchemaSymbols::XSI_NIL}))
		}));
	} else {
		$var($String, value, $XMLChar::trim(xsiNil));
		$init($SchemaSymbols);
		bool var$0 = $nc(value)->equals($SchemaSymbols::ATTVAL_TRUE);
		if (var$0 || $nc(value)->equals($SchemaSymbols::ATTVAL_TRUE_1)) {
			if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->getConstraintType() == $XSConstants::VC_FIXED) {
				reportSchemaError("cvc-elt.3.2.2"_s, $$new($ObjectArray, {
					$of($nc(element)->rawname),
					$of($$str({$SchemaSymbols::URI_XSI, ","_s, $SchemaSymbols::XSI_NIL}))
				}));
			}
			return true;
		}
	}
	return false;
}

void XMLSchemaValidator::processAttributes($QName* element, $XMLAttributes* attributes, $XSAttributeGroupDecl* attrGrp) {
	$useLocalCurrentObjectStackCache();
	$var($String, wildcardIDName, nullptr);
	int32_t attCount = $nc(attributes)->getLength();
	$var($Augmentations, augs, nullptr);
	$var($AttributePSVImpl, attrPSVI, nullptr);
	bool isSimple = this->fCurrentType == nullptr || $nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE;
	$var($XSObjectList, attrUses, nullptr);
	int32_t useCount = 0;
	$var($XSWildcardDecl, attrWildcard, nullptr);
	if (!isSimple) {
		$assign(attrUses, $nc(attrGrp)->getAttributeUses());
		useCount = $nc(attrUses)->getLength();
		$assign(attrWildcard, attrGrp->fAttributeWC);
	}
	for (int32_t index = 0; index < attCount; ++index) {
		attributes->getName(index, this->fTempQName);
		if (this->fAugPSVI || this->fIdConstraint) {
			$assign(augs, attributes->getAugmentations(index));
			$init($Constants);
			$assign(attrPSVI, $cast($AttributePSVImpl, $nc(augs)->getItem($Constants::ATTRIBUTE_PSVI)));
			if (attrPSVI != nullptr) {
				attrPSVI->reset();
			} else {
				$assign(attrPSVI, $new($AttributePSVImpl));
				augs->putItem($Constants::ATTRIBUTE_PSVI, attrPSVI);
			}
			$set($nc(attrPSVI), fValidationContext, this->fValidationRoot);
		}
		$init($SchemaSymbols);
		if ($nc(this->fTempQName)->uri == $SchemaSymbols::URI_XSI) {
			$var($XSAttributeDecl, attrDecl, nullptr);
			if ($nc(this->fTempQName)->localpart == $SchemaSymbols::XSI_TYPE) {
				$assign(attrDecl, XMLSchemaValidator::XSI_TYPE);
			} else {
				if ($nc(this->fTempQName)->localpart == $SchemaSymbols::XSI_NIL) {
					$assign(attrDecl, XMLSchemaValidator::XSI_NIL);
				} else {
					if ($nc(this->fTempQName)->localpart == $SchemaSymbols::XSI_SCHEMALOCATION) {
						$assign(attrDecl, XMLSchemaValidator::XSI_SCHEMALOCATION);
					} else {
						if ($nc(this->fTempQName)->localpart == $SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION) {
							$assign(attrDecl, XMLSchemaValidator::XSI_NONAMESPACESCHEMALOCATION);
						}
					}
				}
			}
			if (attrDecl != nullptr) {
				processOneAttribute(element, attributes, index, attrDecl, nullptr, attrPSVI);
				continue;
			}
		}
		$init($XMLSymbols);
		if ($nc(this->fTempQName)->rawname == $XMLSymbols::PREFIX_XMLNS || $nc($nc(this->fTempQName)->rawname)->startsWith("xmlns:"_s)) {
			continue;
		}
		if (isSimple) {
			reportSchemaError("cvc-type.3.1.1"_s, $$new($ObjectArray, {
				$of($nc(element)->rawname),
				$of($nc(this->fTempQName)->rawname)
			}));
			continue;
		}
		$var($XSAttributeUseImpl, currUse, nullptr);
		$var($XSAttributeUseImpl, oneUse, nullptr);
		for (int32_t i = 0; i < useCount; ++i) {
			$assign(oneUse, $cast($XSAttributeUseImpl, $nc(attrUses)->item(i)));
			if ($nc($nc(oneUse)->fAttrDecl)->fName == $nc(this->fTempQName)->localpart && $nc(oneUse->fAttrDecl)->fTargetNamespace == $nc(this->fTempQName)->uri) {
				$assign(currUse, oneUse);
				break;
			}
		}
		if (currUse == nullptr) {
			if (attrWildcard == nullptr || !$nc(attrWildcard)->allowNamespace($nc(this->fTempQName)->uri)) {
				reportSchemaError("cvc-complex-type.3.2.2"_s, $$new($ObjectArray, {
					$of($nc(element)->rawname),
					$of($nc(this->fTempQName)->rawname)
				}));
				this->fNFullValidationDepth = this->fElementDepth;
				continue;
			}
		}
		$var($XSAttributeDecl, currDecl, nullptr);
		if (currUse != nullptr) {
			$assign(currDecl, currUse->fAttrDecl);
		} else {
			if ($nc(attrWildcard)->fProcessContents == $XSWildcardDecl::PC_SKIP) {
				continue;
			}
			$var($SchemaGrammar, grammar, findSchemaGrammar($XSDDescription::CONTEXT_ATTRIBUTE, $nc(this->fTempQName)->uri, element, this->fTempQName, attributes));
			if (grammar != nullptr) {
				$assign(currDecl, grammar->getGlobalAttributeDecl($nc(this->fTempQName)->localpart));
			}
			if (currDecl == nullptr) {
				if ($nc(attrWildcard)->fProcessContents == $XSWildcardDecl::PC_STRICT) {
					reportSchemaError("cvc-complex-type.3.2.2"_s, $$new($ObjectArray, {
						$of($nc(element)->rawname),
						$of($nc(this->fTempQName)->rawname)
					}));
				}
				continue;
			} else {
				bool var$1 = $nc($nc(currDecl)->fType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE;
				if (var$1 && $nc((currDecl->fType))->isIDType()) {
					if (wildcardIDName != nullptr) {
						reportSchemaError("cvc-complex-type.5.1"_s, $$new($ObjectArray, {
							$of($nc(element)->rawname),
							$of(currDecl->fName),
							$of(wildcardIDName)
						}));
					} else {
						$assign(wildcardIDName, currDecl->fName);
					}
				}
			}
		}
		processOneAttribute(element, attributes, index, currDecl, currUse, attrPSVI);
	}
	if (!isSimple && $nc(attrGrp)->fIDAttrName != nullptr && wildcardIDName != nullptr) {
		reportSchemaError("cvc-complex-type.5.2"_s, $$new($ObjectArray, {
			$of($nc(element)->rawname),
			$of(wildcardIDName),
			$of(attrGrp->fIDAttrName)
		}));
	}
}

void XMLSchemaValidator::processOneAttribute($QName* element, $XMLAttributes* attributes, int32_t index, $XSAttributeDecl* currDecl, $XSAttributeUseImpl* currUse, $AttributePSVImpl* attrPSVI) {
	$useLocalCurrentObjectStackCache();
	$var($String, attrValue, $nc(attributes)->getValue(index));
	$nc(this->fXSIErrorReporter)->pushContext();
	$var($XSSimpleType, attDV, $nc(currDecl)->fType);
	$var($Object, actualValue, nullptr);
	try {
		$assign(actualValue, $nc(attDV)->validate(attrValue, static_cast<$ValidationContext*>(this->fValidationState), this->fValidatedInfo));
		if (this->fNormalizeData) {
			attributes->setValue(index, $nc(this->fValidatedInfo)->normalizedValue);
		}
		bool var$0 = attDV->getVariety() == $XSSimpleType::VARIETY_ATOMIC;
		if (var$0 && attDV->getPrimitiveKind() == $XSSimpleType::PRIMITIVE_NOTATION) {
			$var($QName, qName, $cast($QName, actualValue));
			$var($SchemaGrammar, grammar, $nc(this->fGrammarBucket)->getGrammar($nc(qName)->uri));
			if (grammar != nullptr) {
				$set(this, fNotation, grammar->getGlobalNotationDecl($nc(qName)->localpart));
			}
		}
	} catch ($InvalidDatatypeValueException& idve) {
		$var($String, var$1, idve->getKey());
		reportSchemaError(var$1, $(idve->getArgs()));
		reportSchemaError("cvc-attribute.3"_s, $$new($ObjectArray, {
			$of($nc(element)->rawname),
			$of($nc(this->fTempQName)->rawname),
			$of(attrValue),
			($instanceOf($XSSimpleTypeDecl, attDV)) ? $($of($nc(($cast($XSSimpleTypeDecl, attDV)))->getTypeName())) : $($of($nc(attDV)->getName()))
		}));
	}
	if (actualValue != nullptr && currDecl->getConstraintType() == $XSConstants::VC_FIXED) {
		bool var$2 = !$ValidatedInfo::isComparable(this->fValidatedInfo, currDecl->fDefault);
		if (var$2 || !$of(actualValue)->equals($nc(currDecl->fDefault)->actualValue)) {
			reportSchemaError("cvc-attribute.4"_s, $$new($ObjectArray, {
				$of($nc(element)->rawname),
				$of($nc(this->fTempQName)->rawname),
				$of(attrValue),
				$($of($nc(currDecl->fDefault)->stringValue()))
			}));
		}
	}
	if (actualValue != nullptr && currUse != nullptr && currUse->fConstraintType == $XSConstants::VC_FIXED) {
		bool var$3 = !$ValidatedInfo::isComparable(this->fValidatedInfo, currUse->fDefault);
		if (var$3 || !$of(actualValue)->equals($nc(currUse->fDefault)->actualValue)) {
			reportSchemaError("cvc-complex-type.3.1"_s, $$new($ObjectArray, {
				$of($nc(element)->rawname),
				$of($nc(this->fTempQName)->rawname),
				$of(attrValue),
				$($of($nc(currUse->fDefault)->stringValue()))
			}));
		}
	}
	if (this->fIdConstraint) {
		$nc($nc(attrPSVI)->fValue)->copyFrom(this->fValidatedInfo);
	}
	if (this->fAugPSVI) {
		$set($nc(attrPSVI), fDeclaration, currDecl);
		$set(attrPSVI, fTypeDecl, attDV);
		$nc(attrPSVI->fValue)->copyFrom(this->fValidatedInfo);
		attrPSVI->fValidationAttempted = $AttributePSVI::VALIDATION_FULL;
		if (!this->fUseGrammarPoolOnly && !(this->fElementDepth < this->fIgnoreXSITypeDepth && this->fCurrentElemDecl == nullptr)) {
			this->fNNoneValidationDepth = this->fElementDepth;
		}
		$var($StringArray, errors, $nc(this->fXSIErrorReporter)->mergeContext());
		$set(attrPSVI, fErrors, errors);
		attrPSVI->fValidity = (errors == nullptr) ? $AttributePSVI::VALIDITY_VALID : $AttributePSVI::VALIDITY_INVALID;
	}
}

void XMLSchemaValidator::addDefaultAttributes($QName* element, $XMLAttributes* attributes, $XSAttributeGroupDecl* attrGrp) {
	$useLocalCurrentObjectStackCache();
	$var($XSObjectList, attrUses, $nc(attrGrp)->getAttributeUses());
	int32_t useCount = $nc(attrUses)->getLength();
	$var($XSAttributeUseImpl, currUse, nullptr);
	$var($XSAttributeDecl, currDecl, nullptr);
	int16_t constType = 0;
	$var($ValidatedInfo, defaultValue, nullptr);
	bool isSpecified = false;
	$var($QName, attName, nullptr);
	for (int32_t i = 0; i < useCount; ++i) {
		$assign(currUse, $cast($XSAttributeUseImpl, attrUses->item(i)));
		$assign(currDecl, $nc(currUse)->fAttrDecl);
		constType = currUse->fConstraintType;
		$assign(defaultValue, currUse->fDefault);
		if (constType == $XSConstants::VC_NONE) {
			constType = $nc(currDecl)->getConstraintType();
			$assign(defaultValue, currDecl->fDefault);
		}
		isSpecified = $nc(attributes)->getValue($nc(currDecl)->fTargetNamespace, currDecl->fName) != nullptr;
		if (currUse->fUse == $SchemaSymbols::USE_REQUIRED) {
			if (!isSpecified) {
				reportSchemaError("cvc-complex-type.4"_s, $$new($ObjectArray, {
					$of($nc(element)->rawname),
					$of($nc(currDecl)->fName)
				}));
			}
		}
		if (!isSpecified && constType != $XSConstants::VC_NONE) {
			$assign(attName, $new($QName, nullptr, $nc(currDecl)->fName, currDecl->fName, currDecl->fTargetNamespace));
			$var($String, normalized, (defaultValue != nullptr) ? $nc(defaultValue)->stringValue() : ""_s);
			int32_t attrIndex = 0;
			if ($instanceOf($XMLAttributesImpl, attributes)) {
				$var($XMLAttributesImpl, attrs, $cast($XMLAttributesImpl, attributes));
				attrIndex = attrs->getLength();
				attrs->addAttributeNS(attName, "CDATA"_s, normalized);
			} else {
				attrIndex = attributes->addAttribute(attName, "CDATA"_s, normalized);
			}
			if (this->fAugPSVI) {
				$var($Augmentations, augs, attributes->getAugmentations(attrIndex));
				$var($AttributePSVImpl, attrPSVI, $new($AttributePSVImpl));
				$init($Constants);
				$nc(augs)->putItem($Constants::ATTRIBUTE_PSVI, attrPSVI);
				$set(attrPSVI, fDeclaration, currDecl);
				$set(attrPSVI, fTypeDecl, $nc(currDecl)->fType);
				$nc(attrPSVI->fValue)->copyFrom(defaultValue);
				$set(attrPSVI, fValidationContext, this->fValidationRoot);
				attrPSVI->fValidity = $AttributePSVI::VALIDITY_VALID;
				attrPSVI->fValidationAttempted = $AttributePSVI::VALIDATION_FULL;
				attrPSVI->fSpecified = true;
			}
		}
	}
}

void XMLSchemaValidator::processElementContent($QName* element) {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->fDefault != nullptr && !this->fSawText && !this->fSubElement && !this->fNil) {
		$var($String, strv, $nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue());
		int32_t bufLen = $nc(strv)->length();
		if ($nc(this->fNormalizedStr)->ch == nullptr || $nc($nc(this->fNormalizedStr)->ch)->length < bufLen) {
			$set($nc(this->fNormalizedStr), ch, $new($chars, bufLen));
		}
		strv->getChars(0, bufLen, $nc(this->fNormalizedStr)->ch, 0);
		$nc(this->fNormalizedStr)->offset = 0;
		$nc(this->fNormalizedStr)->length = bufLen;
		$set(this, fDefaultValue, this->fNormalizedStr);
	}
	$set($nc(this->fValidatedInfo), normalizedValue, nullptr);
	if (this->fNil) {
		if (this->fSubElement || this->fSawText) {
			$init($SchemaSymbols);
			reportSchemaError("cvc-elt.3.2.1"_s, $$new($ObjectArray, {
				$of($nc(element)->rawname),
				$of($$str({$SchemaSymbols::URI_XSI, ","_s, $SchemaSymbols::XSI_NIL}))
			}));
		}
	}
	$nc(this->fValidatedInfo)->reset();
	if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->getConstraintType() != $XSConstants::VC_NONE && !this->fSubElement && !this->fSawText && !this->fNil) {
		if (this->fCurrentType != $nc(this->fCurrentElemDecl)->fType) {
			if ($XSConstraints::ElementDefaultValidImmediate(this->fCurrentType, $($nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue()), this->fState4XsiType, nullptr) == nullptr) {
				reportSchemaError("cvc-elt.5.1.1"_s, $$new($ObjectArray, {
					$of($nc(element)->rawname),
					$($of($nc(this->fCurrentType)->getName())),
					$($of($nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue()))
				}));
			}
		}
		elementLocallyValidType(element, $($nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue()));
	} else {
		$var($Object, actualValue, elementLocallyValidType(element, this->fBuffer));
		if (this->fCurrentElemDecl != nullptr && $nc(this->fCurrentElemDecl)->getConstraintType() == $XSConstants::VC_FIXED && !this->fNil) {
			$var($String, content, $nc(this->fBuffer)->toString());
			if (this->fSubElement) {
				reportSchemaError("cvc-elt.5.2.2.1"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
			}
			if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE) {
				$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
				if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_MIXED) {
					if (!$nc($nc($nc(this->fCurrentElemDecl)->fDefault)->normalizedValue)->equals(content)) {
						reportSchemaError("cvc-elt.5.2.2.2.1"_s, $$new($ObjectArray, {
							$of($nc(element)->rawname),
							$of(content),
							$of($nc($nc(this->fCurrentElemDecl)->fDefault)->normalizedValue)
						}));
					}
				} else if (ctype->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
					bool var$0 = actualValue != nullptr;
					if (var$0) {
						bool var$1 = !$ValidatedInfo::isComparable(this->fValidatedInfo, $nc(this->fCurrentElemDecl)->fDefault);
						var$0 = (var$1 || !$of(actualValue)->equals($nc($nc(this->fCurrentElemDecl)->fDefault)->actualValue));
					}
					if (var$0) {
						reportSchemaError("cvc-elt.5.2.2.2.2"_s, $$new($ObjectArray, {
							$of($nc(element)->rawname),
							$of(content),
							$($of($nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue()))
						}));
					}
				}
			} else if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
				bool var$2 = actualValue != nullptr;
				if (var$2) {
					bool var$3 = !$ValidatedInfo::isComparable(this->fValidatedInfo, $nc(this->fCurrentElemDecl)->fDefault);
					var$2 = (var$3 || !$of(actualValue)->equals($nc($nc(this->fCurrentElemDecl)->fDefault)->actualValue));
				}
				if (var$2) {
					reportSchemaError("cvc-elt.5.2.2.2.2"_s, $$new($ObjectArray, {
						$of($nc(element)->rawname),
						$of(content),
						$($of($nc($nc(this->fCurrentElemDecl)->fDefault)->stringValue()))
					}));
				}
			}
		}
	}
	if (this->fDefaultValue == nullptr && this->fNormalizeData && this->fDocumentHandler != nullptr && this->fUnionType) {
		$var($String, content, $nc(this->fValidatedInfo)->normalizedValue);
		if (content == nullptr) {
			$assign(content, $nc(this->fBuffer)->toString());
		}
		int32_t bufLen = $nc(content)->length();
		if ($nc(this->fNormalizedStr)->ch == nullptr || $nc($nc(this->fNormalizedStr)->ch)->length < bufLen) {
			$set($nc(this->fNormalizedStr), ch, $new($chars, bufLen));
		}
		content->getChars(0, bufLen, $nc(this->fNormalizedStr)->ch, 0);
		$nc(this->fNormalizedStr)->offset = 0;
		$nc(this->fNormalizedStr)->length = bufLen;
		$nc(this->fDocumentHandler)->characters(this->fNormalizedStr, nullptr);
	}
}

$Object* XMLSchemaValidator::elementLocallyValidType($QName* element, Object$* textContent) {
	$useLocalCurrentObjectStackCache();
	if (this->fCurrentType == nullptr) {
		return $of(nullptr);
	}
	$var($Object, retValue, nullptr);
	if ($nc(this->fCurrentType)->getTypeCategory() == $XSTypeDefinition::SIMPLE_TYPE) {
		if (this->fSubElement) {
			reportSchemaError("cvc-type.3.1.2"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		}
		if (!this->fNil) {
			$var($XSSimpleType, dv, $cast($XSSimpleType, this->fCurrentType));
			try {
				if (!this->fNormalizeData || this->fUnionType) {
					$nc(this->fValidationState)->setNormalizationRequired(true);
				}
				$assign(retValue, $nc(dv)->validate(textContent, static_cast<$ValidationContext*>(this->fValidationState), this->fValidatedInfo));
			} catch ($InvalidDatatypeValueException& e) {
				$var($String, var$0, e->getKey());
				reportSchemaError(var$0, $(e->getArgs()));
				reportSchemaError("cvc-type.3.1.3"_s, $$new($ObjectArray, {
					$of($nc(element)->rawname),
					textContent
				}));
			}
		}
	} else {
		$assign(retValue, elementLocallyValidComplexType(element, textContent));
	}
	return $of(retValue);
}

$Object* XMLSchemaValidator::elementLocallyValidComplexType($QName* element, Object$* textContent) {
	$useLocalCurrentObjectStackCache();
	$var($Object, actualValue, nullptr);
	$var($XSComplexTypeDecl, ctype, $cast($XSComplexTypeDecl, this->fCurrentType));
	if (!this->fNil) {
		if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_EMPTY && (this->fSubElement || this->fSawText)) {
			reportSchemaError("cvc-complex-type.2.1"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
		} else if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_SIMPLE) {
			if (this->fSubElement) {
				reportSchemaError("cvc-complex-type.2.2"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
			}
			$var($XSSimpleType, dv, ctype->fXSSimpleType);
			try {
				if (!this->fNormalizeData || this->fUnionType) {
					$nc(this->fValidationState)->setNormalizationRequired(true);
				}
				$assign(actualValue, $nc(dv)->validate(textContent, static_cast<$ValidationContext*>(this->fValidationState), this->fValidatedInfo));
			} catch ($InvalidDatatypeValueException& e) {
				$var($String, var$0, e->getKey());
				reportSchemaError(var$0, $(e->getArgs()));
				reportSchemaError("cvc-complex-type.2.2"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
			}
		} else if (ctype->fContentType == $XSComplexTypeDecl::CONTENTTYPE_ELEMENT) {
			if (this->fSawCharacters) {
				reportSchemaError("cvc-complex-type.2.3"_s, $$new($ObjectArray, {$of($nc(element)->rawname)}));
			}
		}
		if ($nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_ELEMENT || $nc(ctype)->fContentType == $XSComplexTypeDecl::CONTENTTYPE_MIXED) {
			if ($nc(this->fCurrCMState)->get(0) >= 0 && !$nc(this->fCurrentCM)->endContentModel(this->fCurrCMState)) {
				$var($String, expected, expectedStr($($nc(this->fCurrentCM)->whatCanGoHere(this->fCurrCMState))));
				$var($ints, occurenceInfo, $nc(this->fCurrentCM)->occurenceInfo(this->fCurrCMState));
				if (occurenceInfo != nullptr) {
					int32_t minOccurs = occurenceInfo->get(0);
					int32_t count = occurenceInfo->get(2);
					if (count < minOccurs) {
						int32_t required = minOccurs - count;
						if (required > 1) {
							reportSchemaError("cvc-complex-type.2.4.j"_s, $$new($ObjectArray, {
								$of($nc(element)->rawname),
								$($of($nc(this->fCurrentCM)->getTermName(occurenceInfo->get(3)))),
								$($of($Integer::toString(minOccurs))),
								$($of($Integer::toString(required)))
							}));
						} else {
							reportSchemaError("cvc-complex-type.2.4.i"_s, $$new($ObjectArray, {
								$of($nc(element)->rawname),
								$($of($nc(this->fCurrentCM)->getTermName(occurenceInfo->get(3)))),
								$($of($Integer::toString(minOccurs)))
							}));
						}
					} else {
						reportSchemaError("cvc-complex-type.2.4.b"_s, $$new($ObjectArray, {
							$of($nc(element)->rawname),
							$of(expected)
						}));
					}
				} else {
					reportSchemaError("cvc-complex-type.2.4.b"_s, $$new($ObjectArray, {
						$of($nc(element)->rawname),
						$of(expected)
					}));
				}
			} else {
				$var($List, errors, $nc(this->fCurrentCM)->checkMinMaxBounds());
				if (errors != nullptr) {
					for (int32_t i = 0; i < errors->size(); i += 2) {
						$var($String, var$1, $cast($String, errors->get(i)));
						reportSchemaError(var$1, $$new($ObjectArray, {
							$of($nc(element)->rawname),
							$(errors->get(i + 1))
						}));
					}
				}
			}
		}
	}
	return $of(actualValue);
}

void XMLSchemaValidator::processRootTypeQName($1QName* rootTypeQName) {
	$useLocalCurrentObjectStackCache();
	$var($String, rootTypeNamespace, $nc(rootTypeQName)->getNamespaceURI());
	$assign(rootTypeNamespace, $nc(this->fSymbolTable)->addSymbol(rootTypeNamespace));
	$init($XMLConstants);
	if (rootTypeNamespace != nullptr && rootTypeNamespace->equals($XMLConstants::NULL_NS_URI)) {
		$assign(rootTypeNamespace, nullptr);
	}
	$init($SchemaSymbols);
	if ($nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals(rootTypeNamespace)) {
		$init($SchemaGrammar);
		$set(this, fCurrentType, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl($(rootTypeQName->getLocalPart())));
	} else {
		$var($SchemaGrammar, grammarForRootType, findSchemaGrammar($XSDDescription::CONTEXT_ELEMENT, rootTypeNamespace, nullptr, nullptr, nullptr));
		if (grammarForRootType != nullptr) {
			$set(this, fCurrentType, grammarForRootType->getGlobalTypeDecl($(rootTypeQName->getLocalPart())));
		}
	}
	if (this->fCurrentType == nullptr) {
		$var($String, var$0, nullptr);
		if ($nc($(rootTypeQName->getPrefix()))->equals($XMLConstants::DEFAULT_NS_PREFIX)) {
			$assign(var$0, rootTypeQName->getLocalPart());
		} else {
			$var($String, var$1, $$str({$(rootTypeQName->getPrefix()), ":"_s}));
			$assign(var$0, $concat(var$1, $(rootTypeQName->getLocalPart())));
		}
		$var($String, typeName, var$0);
		reportSchemaError("cvc-type.1"_s, $$new($ObjectArray, {$of(typeName)}));
	}
}

void XMLSchemaValidator::processRootElementDeclQName($1QName* rootElementDeclQName, $QName* element) {
	$useLocalCurrentObjectStackCache();
	$var($String, rootElementDeclNamespace, $nc(rootElementDeclQName)->getNamespaceURI());
	$assign(rootElementDeclNamespace, $nc(this->fSymbolTable)->addSymbol(rootElementDeclNamespace));
	$init($XMLConstants);
	if (rootElementDeclNamespace != nullptr && rootElementDeclNamespace->equals($XMLConstants::NULL_NS_URI)) {
		$assign(rootElementDeclNamespace, nullptr);
	}
	$var($SchemaGrammar, grammarForRootElement, findSchemaGrammar($XSDDescription::CONTEXT_ELEMENT, rootElementDeclNamespace, nullptr, nullptr, nullptr));
	if (grammarForRootElement != nullptr) {
		$set(this, fCurrentElemDecl, grammarForRootElement->getGlobalElementDecl($(rootElementDeclQName->getLocalPart())));
	}
	if (this->fCurrentElemDecl == nullptr) {
		$var($String, var$0, nullptr);
		if ($nc($(rootElementDeclQName->getPrefix()))->equals($XMLConstants::DEFAULT_NS_PREFIX)) {
			$assign(var$0, rootElementDeclQName->getLocalPart());
		} else {
			$var($String, var$1, $$str({$(rootElementDeclQName->getPrefix()), ":"_s}));
			$assign(var$0, $concat(var$1, $(rootElementDeclQName->getLocalPart())));
		}
		$var($String, declName, var$0);
		reportSchemaError("cvc-elt.1.a"_s, $$new($ObjectArray, {$of(declName)}));
	} else {
		checkElementMatchesRootElementDecl(this->fCurrentElemDecl, element);
	}
}

void XMLSchemaValidator::checkElementMatchesRootElementDecl($XSElementDecl* rootElementDecl, $QName* element) {
	if ($nc(element)->localpart != $nc(rootElementDecl)->fName || $nc(element)->uri != $nc(rootElementDecl)->fTargetNamespace) {
		reportSchemaError("cvc-elt.1.b"_s, $$new($ObjectArray, {
			$of(element->rawname),
			$of(rootElementDecl->fName)
		}));
	}
}

void XMLSchemaValidator::reportSchemaError($String* key, $ObjectArray* arguments) {
	if (this->fDoValidation) {
		$init($XSMessageFormatter);
		$nc(this->fXSIErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, key, arguments, $XMLErrorReporter::SEVERITY_ERROR);
	}
}

$String* XMLSchemaValidator::expectedStr($List* expected) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, "{"_s));
	int32_t size = $nc(expected)->size();
	for (int32_t i = 0; i < size; ++i) {
		if (i > 0) {
			ret->append(", "_s);
		}
		ret->append($($nc($of($(expected->get(i))))->toString()));
	}
	ret->append(u'}');
	return ret->toString();
}

void clinit$XMLSchemaValidator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$assignStatic(XMLSchemaValidator::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLSchemaValidator::SCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(XMLSchemaValidator::SCHEMA_FULL_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_FULL_CHECKING}));
	$assignStatic(XMLSchemaValidator::DYNAMIC_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DYNAMIC_VALIDATION_FEATURE}));
	$assignStatic(XMLSchemaValidator::NORMALIZE_DATA, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_NORMALIZED_VALUE}));
	$assignStatic(XMLSchemaValidator::SCHEMA_ELEMENT_DEFAULT, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_ELEMENT_DEFAULT}));
	$assignStatic(XMLSchemaValidator::SCHEMA_AUGMENT_PSVI, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_AUGMENT_PSVI}));
	$assignStatic(XMLSchemaValidator::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XMLSchemaValidator::STANDARD_URI_CONFORMANT_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XMLSchemaValidator::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(XMLSchemaValidator::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(XMLSchemaValidator::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(XMLSchemaValidator::USE_GRAMMAR_POOL_ONLY, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::USE_GRAMMAR_POOL_ONLY_FEATURE}));
	$assignStatic(XMLSchemaValidator::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XMLSchemaValidator::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(XMLSchemaValidator::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(XMLSchemaValidator::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(XMLSchemaValidator::IGNORE_XSI_TYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IGNORE_XSI_TYPE_FEATURE}));
	$assignStatic(XMLSchemaValidator::ID_IDREF_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ID_IDREF_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidator::UNPARSED_ENTITY_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::UNPARSED_ENTITY_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidator::IDENTITY_CONSTRAINT_CHECKING, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::IDC_CHECKING_FEATURE}));
	$assignStatic(XMLSchemaValidator::REPORT_WHITESPACE, $str({$Constants::SUN_SCHEMA_FEATURE_PREFIX, $Constants::SUN_REPORT_IGNORED_ELEMENT_CONTENT_WHITESPACE}));
	$assignStatic(XMLSchemaValidator::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLSchemaValidator::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLSchemaValidator::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XMLSchemaValidator::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLSchemaValidator::VALIDATION_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::VALIDATION_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaValidator::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XMLSchemaValidator::SCHEMA_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_LOCATION}));
	$assignStatic(XMLSchemaValidator::SCHEMA_NONS_LOCATION, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_NONS_LOCATION}));
	$assignStatic(XMLSchemaValidator::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(XMLSchemaValidator::JAXP_SCHEMA_LANGUAGE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_LANGUAGE}));
	$assignStatic(XMLSchemaValidator::ROOT_TYPE_DEF, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_TYPE_DEFINITION_PROPERTY}));
	$assignStatic(XMLSchemaValidator::ROOT_ELEMENT_DECL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ROOT_ELEMENT_DECLARATION_PROPERTY}));
	$assignStatic(XMLSchemaValidator::SCHEMA_DV_FACTORY, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SCHEMA_DV_FACTORY_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XMLSchemaValidator::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XMLSchemaValidator::OVERRIDE_PARSER, $JdkConstants::OVERRIDE_PARSER);
	$init($XMLConstants);
	$assignStatic(XMLSchemaValidator::USE_CATALOG, $XMLConstants::USE_CATALOG);
	$assignStatic(XMLSchemaValidator::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLSchemaValidator::VALIDATION,
		XMLSchemaValidator::SCHEMA_VALIDATION,
		XMLSchemaValidator::DYNAMIC_VALIDATION,
		XMLSchemaValidator::SCHEMA_FULL_CHECKING,
		XMLSchemaValidator::ALLOW_JAVA_ENCODINGS,
		XMLSchemaValidator::CONTINUE_AFTER_FATAL_ERROR,
		XMLSchemaValidator::STANDARD_URI_CONFORMANT_FEATURE,
		XMLSchemaValidator::GENERATE_SYNTHETIC_ANNOTATIONS,
		XMLSchemaValidator::VALIDATE_ANNOTATIONS,
		XMLSchemaValidator::HONOUR_ALL_SCHEMALOCATIONS,
		XMLSchemaValidator::USE_GRAMMAR_POOL_ONLY,
		XMLSchemaValidator::IGNORE_XSI_TYPE,
		XMLSchemaValidator::ID_IDREF_CHECKING,
		XMLSchemaValidator::IDENTITY_CONSTRAINT_CHECKING,
		XMLSchemaValidator::UNPARSED_ENTITY_CHECKING,
		XMLSchemaValidator::NAMESPACE_GROWTH,
		XMLSchemaValidator::TOLERATE_DUPLICATES,
		XMLSchemaValidator::OVERRIDE_PARSER,
		XMLSchemaValidator::USE_CATALOG
	}));
	$init($JdkConstants);
	$init($JdkXmlUtils);
	$assignStatic(XMLSchemaValidator::FEATURE_DEFAULTS, $new($BooleanArray, {
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		($Boolean*)nullptr,
		$($Boolean::valueOf($JdkConstants::OVERRIDE_PARSER_DEFAULT)),
		$($Boolean::valueOf($JdkXmlUtils::USE_CATALOG_DEFAULT))
	}));
	$assignStatic(XMLSchemaValidator::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLSchemaValidator::SYMBOL_TABLE,
		XMLSchemaValidator::ERROR_REPORTER,
		XMLSchemaValidator::ENTITY_RESOLVER,
		XMLSchemaValidator::VALIDATION_MANAGER,
		XMLSchemaValidator::SCHEMA_LOCATION,
		XMLSchemaValidator::SCHEMA_NONS_LOCATION,
		XMLSchemaValidator::JAXP_SCHEMA_SOURCE,
		XMLSchemaValidator::JAXP_SCHEMA_LANGUAGE,
		XMLSchemaValidator::ROOT_TYPE_DEF,
		XMLSchemaValidator::ROOT_ELEMENT_DECL,
		XMLSchemaValidator::SCHEMA_DV_FACTORY,
		XMLSchemaValidator::XML_SECURITY_PROPERTY_MANAGER,
		$JdkXmlUtils::CATALOG_DEFER,
		$JdkXmlUtils::CATALOG_FILES,
		$JdkXmlUtils::CATALOG_PREFER,
		$JdkXmlUtils::CATALOG_RESOLVE,
		$JdkConstants::CDATA_CHUNK_SIZE
	}));
	$assignStatic(XMLSchemaValidator::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		$($of($Integer::valueOf($JdkConstants::CDATA_CHUNK_SIZE_DEFAULT)))
	}));
	$init($SchemaGrammar);
	$init($SchemaSymbols);
	$assignStatic(XMLSchemaValidator::XSI_TYPE, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_TYPE));
	$assignStatic(XMLSchemaValidator::XSI_NIL, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_NIL));
	$assignStatic(XMLSchemaValidator::XSI_SCHEMALOCATION, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_SCHEMALOCATION));
	$assignStatic(XMLSchemaValidator::XSI_NONAMESPACESCHEMALOCATION, $nc($SchemaGrammar::SG_XSI)->getGlobalAttributeDecl($SchemaSymbols::XSI_NONAMESPACESCHEMALOCATION));
}

XMLSchemaValidator::XMLSchemaValidator() {
}

$Class* XMLSchemaValidator::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator, name, initialize, &_XMLSchemaValidator_ClassInfo_, clinit$XMLSchemaValidator, allocate$XMLSchemaValidator);
	return class$;
}

$Class* XMLSchemaValidator::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com