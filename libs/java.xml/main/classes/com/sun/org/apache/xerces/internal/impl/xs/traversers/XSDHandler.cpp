#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar$BuiltinSchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDDescription.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOM.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/opti/SchemaParsingConfig.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/SchemaContentHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/StAXSchemaParser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAnnotationInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeGroupTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDElementTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDGroupTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$SAX2XNIUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSAnnotationGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSDKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDKeyrefTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDNotationTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDUniqueOrKeyTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDWildcardTraverser.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSInputSource.h>
#include <com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>
#include <com/sun/org/apache/xerces/internal/util/DOMInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/DefaultErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/util/SAXInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/StAXInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/StAXLocationWrapper.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityManager.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager$Property.h>
#include <com/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLConfigurationException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLEventReader.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/stream/XMLStreamReader.h>
#include <javax/xml/stream/events/XMLEvent.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_DTD
#undef ACCESS_EXTERNAL_SCHEMA
#undef ALLOW_JAVA_ENCODINGS
#undef ALLOW_JAVA_ENCODINGS_FEATURE
#undef ATTIDX_BASE
#undef ATTIDX_NAMESPACE
#undef ATTIDX_SCHEMALOCATION
#undef ATTRIBUTEGROUP_TYPE
#undef ATTRIBUTE_DECLARATION
#undef ATTRIBUTE_GROUP
#undef ATTRIBUTE_TYPE
#undef ATTRIBUTE_USE
#undef ATT_BASE
#undef ATT_MAXOCCURS
#undef ATT_MINOCCURS
#undef ATT_NAME
#undef ATT_REF
#undef ATT_TARGETNAMESPACE
#undef CATALOG_DEFER
#undef CATALOG_FILES
#undef CATALOG_PREFER
#undef CATALOG_RESOLVE
#undef CDATA_CHUNK_SIZE
#undef CIRCULAR_CODES
#undef COMP_TYPE
#undef CONTEXT_IMPORT
#undef CONTEXT_INCLUDE
#undef CONTEXT_PREPARSE
#undef CONTEXT_REDEFINE
#undef CONTINUE_AFTER_FATAL_ERROR
#undef CONTINUE_AFTER_FATAL_ERROR_FEATURE
#undef DEBUG_NODE_POOL
#undef DISALLOW_DOCTYPE
#undef DISALLOW_DOCTYPE_DECL_FEATURE
#undef DOCUMENT_NODE
#undef ELEMENT_DECLARATION
#undef ELEMENT_NODE
#undef ELEMENT_TYPE
#undef ELE_ERROR_CODES
#undef ELT_ANNOTATION
#undef ELT_ATTRIBUTE
#undef ELT_ATTRIBUTEGROUP
#undef ELT_COMPLEXTYPE
#undef ELT_ELEMENT
#undef ELT_EXTENSION
#undef ELT_GROUP
#undef ELT_IMPORT
#undef ELT_INCLUDE
#undef ELT_NOTATION
#undef ELT_REDEFINE
#undef ELT_RESTRICTION
#undef ELT_SCHEMA
#undef ELT_SIMPLETYPE
#undef EMPTY_STRING
#undef ENTITY_MANAGER
#undef ENTITY_MANAGER_PROPERTY
#undef ENTITY_RESOLVER
#undef ENTITY_RESOLVER_PROPERTY
#undef ERROR_HANDLER
#undef ERROR_HANDLER_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef GENERATE_SYNTHETIC_ANNOTATIONS
#undef GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE
#undef GROUP_TYPE
#undef HONOUR_ALL_SCHEMALOCATIONS
#undef HONOUR_ALL_SCHEMALOCATIONS_FEATURE
#undef IDENTITYCONSTRAINT_TYPE
#undef IDENTITY_CONSTRAINT
#undef INC_KEYREF_STACK_AMOUNT
#undef INC_STACK_SIZE
#undef INIT_KEYREF_STACK
#undef INIT_STACK_SIZE
#undef JAXP_PROPERTY_PREFIX
#undef JAXP_SCHEMA_SOURCE
#undef LOCALE
#undef LOCALE_PROPERTY
#undef MODEL_GROUP
#undef MODEL_GROUP_DEFINITION
#undef NAMESPACE_GROWTH
#undef NAMESPACE_GROWTH_FEATURE
#undef NAMESPACE_PREFIXES
#undef NAMESPACE_PREFIXES_FEATURE
#undef NOTATION_DECLARATION
#undef NOTATION_TYPE
#undef NS_ERROR_CODES
#undef OVERRIDE_PARSER
#undef PARTICLE_EMPTY
#undef PARTICLE_MODELGROUP
#undef REDEF_IDENTIFIER
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_DOMAIN
#undef SCHEMA_SOURCE
#undef SCHEMA_VALIDATION_FEATURE
#undef SCOPE_GLOBAL
#undef SECURITY_MANAGER
#undef SECURITY_MANAGER_PROPERTY
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef STANDARD_URI_CONFORMANT_FEATURE
#undef START_DOCUMENT
#undef STRING_INTERNING
#undef STRING_INTERNING_FEATURE
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOLERATE_DUPLICATES
#undef TOLERATE_DUPLICATES_FEATURE
#undef TYPEDECL_TYPE
#undef TYPE_DEFINITION
#undef URI_SCHEMAFORSCHEMA
#undef USE_CATALOG
#undef VALIDATE_ANNOTATIONS
#undef VALIDATE_ANNOTATIONS_FEATURE
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XMLSCHEMA_VALIDATION
#undef XML_SECURITY_PROPERTY_MANAGER

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $XSDocumentInfoArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $HashMapArray = $Array<::java::util::HashMap>;
using $MapArray = $Array<::java::util::Map>;
using $CatalogFeatures$FeatureArray = $Array<::javax::xml::catalog::CatalogFeatures$Feature>;
using $ElementArray = $Array<::org::w3c::dom::Element>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $SchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $SchemaGrammar$BuiltinSchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar$BuiltinSchemaGrammar;
using $SchemaNamespaceSupport = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XMLSchemaException = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaException;
using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSDDescription = ::com::sun::org::apache::xerces::internal::impl::xs::XSDDescription;
using $XSDeclarationPool = ::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::xs::XSGrammarBucket;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::xs::XSMessageFormatter;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl;
using $SchemaDOM = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM;
using $SchemaDOMParser = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser;
using $SchemaParsingConfig = ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaParsingConfig;
using $SchemaContentHandler = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::SchemaContentHandler;
using $StAXSchemaParser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::StAXSchemaParser;
using $XSAnnotationInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo;
using $XSAttributeChecker = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker;
using $XSDAttributeGroupTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeGroupTraverser;
using $XSDAttributeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDAttributeTraverser;
using $XSDComplexTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDComplexTypeTraverser;
using $XSDElementTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDElementTraverser;
using $XSDGroupTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDGroupTraverser;
using $XSDHandler$SAX2XNIUtil = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler$SAX2XNIUtil;
using $XSDHandler$XSAnnotationGrammarPool = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler$XSAnnotationGrammarPool;
using $XSDHandler$XSDKey = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDHandler$XSDKey;
using $XSDKeyrefTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDKeyrefTraverser;
using $XSDNotationTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDNotationTraverser;
using $XSDSimpleTypeTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDSimpleTypeTraverser;
using $XSDUniqueOrKeyTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDUniqueOrKeyTraverser;
using $XSDWildcardTraverser = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDWildcardTraverser;
using $XSDocumentInfo = ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSDocumentInfo;
using $SimpleLocator = ::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator;
using $XSInputSource = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSInputSource;
using $BasicParserConfiguration = ::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $XML11Configuration = ::com::sun::org::apache::xerces::internal::parsers::XML11Configuration;
using $DOMInputSource = ::com::sun::org::apache::xerces::internal::util::DOMInputSource;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $DefaultErrorHandler = ::com::sun::org::apache::xerces::internal::util::DefaultErrorHandler;
using $SAXInputSource = ::com::sun::org::apache::xerces::internal::util::SAXInputSource;
using $StAXInputSource = ::com::sun::org::apache::xerces::internal::util::StAXInputSource;
using $StAXLocationWrapper = ::com::sun::org::apache::xerces::internal::util::StAXLocationWrapper;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $XMLSecurityManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityManager;
using $XMLSecurityPropertyManager = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager;
using $XMLSecurityPropertyManager$Property = ::com::sun::org::apache::xerces::internal::utils::XMLSecurityPropertyManager$Property;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLConfigurationException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLConfigurationException;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $XMLParserConfiguration = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSAttributeGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition;
using $XSAttributeUse = ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSParticle = ::com::sun::org::apache::xerces::internal::xs::XSParticle;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ObjectList = ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $XMLConstants = ::javax::xml::XMLConstants;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $XMLEventReader = ::javax::xml::stream::XMLEventReader;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $XMLStreamReader = ::javax::xml::stream::XMLStreamReader;
using $XMLEvent = ::javax::xml::stream::events::XMLEvent;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

$FieldInfo _XSDHandler_FieldInfo_[] = {
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, VALIDATION)},
	{"XMLSCHEMA_VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, XMLSCHEMA_VALIDATION)},
	{"ALLOW_JAVA_ENCODINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, ALLOW_JAVA_ENCODINGS)},
	{"CONTINUE_AFTER_FATAL_ERROR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, CONTINUE_AFTER_FATAL_ERROR)},
	{"STANDARD_URI_CONFORMANT_FEATURE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, STANDARD_URI_CONFORMANT_FEATURE)},
	{"DISALLOW_DOCTYPE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, DISALLOW_DOCTYPE)},
	{"GENERATE_SYNTHETIC_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, GENERATE_SYNTHETIC_ANNOTATIONS)},
	{"VALIDATE_ANNOTATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, VALIDATE_ANNOTATIONS)},
	{"HONOUR_ALL_SCHEMALOCATIONS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, HONOUR_ALL_SCHEMALOCATIONS)},
	{"NAMESPACE_GROWTH", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, NAMESPACE_GROWTH)},
	{"TOLERATE_DUPLICATES", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, TOLERATE_DUPLICATES)},
	{"NAMESPACE_PREFIXES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, NAMESPACE_PREFIXES)},
	{"STRING_INTERNING", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, STRING_INTERNING)},
	{"ERROR_HANDLER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, ERROR_HANDLER)},
	{"JAXP_SCHEMA_SOURCE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, JAXP_SCHEMA_SOURCE)},
	{"ENTITY_RESOLVER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSDHandler, ENTITY_RESOLVER)},
	{"ENTITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, ENTITY_MANAGER)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSDHandler, ERROR_REPORTER)},
	{"XMLGRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSDHandler, XMLGRAMMAR_POOL)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSDHandler, SYMBOL_TABLE)},
	{"SECURITY_MANAGER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, SECURITY_MANAGER)},
	{"LOCALE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XSDHandler, LOCALE)},
	{"XML_SECURITY_PROPERTY_MANAGER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, XML_SECURITY_PROPERTY_MANAGER)},
	{"DEBUG_NODE_POOL", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XSDHandler, DEBUG_NODE_POOL)},
	{"ATTRIBUTE_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, ATTRIBUTE_TYPE)},
	{"ATTRIBUTEGROUP_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, ATTRIBUTEGROUP_TYPE)},
	{"ELEMENT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, ELEMENT_TYPE)},
	{"GROUP_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, GROUP_TYPE)},
	{"IDENTITYCONSTRAINT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, IDENTITYCONSTRAINT_TYPE)},
	{"NOTATION_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, NOTATION_TYPE)},
	{"TYPEDECL_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(XSDHandler, TYPEDECL_TYPE)},
	{"REDEF_IDENTIFIER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSDHandler, REDEF_IDENTIFIER)},
	{"fDeclPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;", nullptr, $PROTECTED, $field(XSDHandler, fDeclPool)},
	{"fSecurityManager", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityManager;", nullptr, $PROTECTED, $field(XSDHandler, fSecurityManager)},
	{"fAccessExternalSchema", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fAccessExternalSchema)},
	{"fAccessExternalDTD", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fAccessExternalDTD)},
	{"registryEmpty", "Z", nullptr, $PRIVATE, $field(XSDHandler, registryEmpty)},
	{"fUnparsedAttributeRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedAttributeRegistry)},
	{"fUnparsedAttributeGroupRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedAttributeGroupRegistry)},
	{"fUnparsedElementRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedElementRegistry)},
	{"fUnparsedGroupRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedGroupRegistry)},
	{"fUnparsedIdentityConstraintRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedIdentityConstraintRegistry)},
	{"fUnparsedNotationRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedNotationRegistry)},
	{"fUnparsedTypeRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fUnparsedTypeRegistry)},
	{"fUnparsedAttributeRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedAttributeRegistrySub)},
	{"fUnparsedAttributeGroupRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedAttributeGroupRegistrySub)},
	{"fUnparsedElementRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedElementRegistrySub)},
	{"fUnparsedGroupRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedGroupRegistrySub)},
	{"fUnparsedIdentityConstraintRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedIdentityConstraintRegistrySub)},
	{"fUnparsedNotationRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedNotationRegistrySub)},
	{"fUnparsedTypeRegistrySub", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedTypeRegistrySub)},
	{"fUnparsedRegistriesExt", "[Ljava/util/Map;", "[Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fUnparsedRegistriesExt)},
	{"fDependencyMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;>;", $PRIVATE, $field(XSDHandler, fDependencyMap)},
	{"fImportMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE, $field(XSDHandler, fImportMap)},
	{"fAllTNSs", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSDHandler, fAllTNSs)},
	{"fLocationPairs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;", $PRIVATE, $field(XSDHandler, fLocationPairs)},
	{"fHiddenNodes", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Node;Ljava/lang/String;>;", 0, $field(XSDHandler, fHiddenNodes)},
	{"fTraversed", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSDKey;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(XSDHandler, fTraversed)},
	{"fDoc2SystemId", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Element;Ljava/lang/String;>;", $PRIVATE, $field(XSDHandler, fDoc2SystemId)},
	{"fRoot", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", nullptr, $PRIVATE, $field(XSDHandler, fRoot)},
	{"fDoc2XSDocumentMap", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fDoc2XSDocumentMap)},
	{"fRedefine2XSDMap", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PRIVATE, $field(XSDHandler, fRedefine2XSDMap)},
	{"fRedefine2NSSupport", "Ljava/util/Map;", "Ljava/util/Map<Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaNamespaceSupport;>;", $PRIVATE, $field(XSDHandler, fRedefine2NSSupport)},
	{"fRedefinedRestrictedAttributeGroupRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XSDHandler, fRedefinedRestrictedAttributeGroupRegistry)},
	{"fRedefinedRestrictedGroupRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XSDHandler, fRedefinedRestrictedGroupRegistry)},
	{"fLastSchemaWasDuplicate", "Z", nullptr, $PRIVATE, $field(XSDHandler, fLastSchemaWasDuplicate)},
	{"fValidateAnnotations", "Z", nullptr, $PRIVATE, $field(XSDHandler, fValidateAnnotations)},
	{"fHonourAllSchemaLocations", "Z", nullptr, $PRIVATE, $field(XSDHandler, fHonourAllSchemaLocations)},
	{"fNamespaceGrowth", "Z", nullptr, 0, $field(XSDHandler, fNamespaceGrowth)},
	{"fTolerateDuplicates", "Z", nullptr, 0, $field(XSDHandler, fTolerateDuplicates)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(XSDHandler, fErrorReporter)},
	{"fErrorHandler", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PRIVATE, $field(XSDHandler, fErrorHandler)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XSDHandler, fLocale)},
	{"fEntityManager", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $PRIVATE, $field(XSDHandler, fEntityManager)},
	{"fAttributeChecker", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSAttributeChecker;", nullptr, $PRIVATE, $field(XSDHandler, fAttributeChecker)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XSDHandler, fSymbolTable)},
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;", nullptr, $PRIVATE, $field(XSDHandler, fGrammarBucket)},
	{"fSchemaGrammarDescription", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;", nullptr, $PRIVATE, $field(XSDHandler, fSchemaGrammarDescription)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PRIVATE, $field(XSDHandler, fGrammarPool)},
	{"fSecurityPropertyMgr", "Lcom/sun/org/apache/xerces/internal/utils/XMLSecurityPropertyManager;", nullptr, $PRIVATE, $field(XSDHandler, fSecurityPropertyMgr)},
	{"fUseCatalog", "Z", nullptr, $PRIVATE, $field(XSDHandler, fUseCatalog)},
	{"fCatalogFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fCatalogFile)},
	{"fDefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fDefer)},
	{"fPrefer", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fPrefer)},
	{"fResolve", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fResolve)},
	{"fOverrideDefaultParser", "Z", nullptr, $PRIVATE, $field(XSDHandler, fOverrideDefaultParser)},
	{"fAttributeGroupTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeGroupTraverser;", nullptr, 0, $field(XSDHandler, fAttributeGroupTraverser)},
	{"fAttributeTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDAttributeTraverser;", nullptr, 0, $field(XSDHandler, fAttributeTraverser)},
	{"fComplexTypeTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDComplexTypeTraverser;", nullptr, 0, $field(XSDHandler, fComplexTypeTraverser)},
	{"fElementTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDElementTraverser;", nullptr, 0, $field(XSDHandler, fElementTraverser)},
	{"fGroupTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDGroupTraverser;", nullptr, 0, $field(XSDHandler, fGroupTraverser)},
	{"fKeyrefTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDKeyrefTraverser;", nullptr, 0, $field(XSDHandler, fKeyrefTraverser)},
	{"fNotationTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDNotationTraverser;", nullptr, 0, $field(XSDHandler, fNotationTraverser)},
	{"fSimpleTypeTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDSimpleTypeTraverser;", nullptr, 0, $field(XSDHandler, fSimpleTypeTraverser)},
	{"fUniqueOrKeyTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDUniqueOrKeyTraverser;", nullptr, 0, $field(XSDHandler, fUniqueOrKeyTraverser)},
	{"fWildCardTraverser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDWildcardTraverser;", nullptr, 0, $field(XSDHandler, fWildCardTraverser)},
	{"fDVFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory;", nullptr, 0, $field(XSDHandler, fDVFactory)},
	{"fSchemaParser", "Lcom/sun/org/apache/xerces/internal/impl/xs/opti/SchemaDOMParser;", nullptr, 0, $field(XSDHandler, fSchemaParser)},
	{"fXSContentHandler", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/SchemaContentHandler;", nullptr, 0, $field(XSDHandler, fXSContentHandler)},
	{"fStAXSchemaParser", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/StAXSchemaParser;", nullptr, 0, $field(XSDHandler, fStAXSchemaParser)},
	{"fAnnotationValidator", "Lcom/sun/org/apache/xerces/internal/parsers/XML11Configuration;", nullptr, 0, $field(XSDHandler, fAnnotationValidator)},
	{"fGrammarBucketAdapter", "Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSAnnotationGrammarPool;", nullptr, 0, $field(XSDHandler, fGrammarBucketAdapter)},
	{"INIT_STACK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDHandler, INIT_STACK_SIZE)},
	{"INC_STACK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDHandler, INC_STACK_SIZE)},
	{"fLocalElemStackPos", "I", nullptr, $PRIVATE, $field(XSDHandler, fLocalElemStackPos)},
	{"fParticle", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $field(XSDHandler, fParticle)},
	{"fLocalElementDecl", "[Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(XSDHandler, fLocalElementDecl)},
	{"fLocalElementDecl_schema", "[Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", nullptr, $PRIVATE, $field(XSDHandler, fLocalElementDecl_schema)},
	{"fAllContext", "[I", nullptr, $PRIVATE, $field(XSDHandler, fAllContext)},
	{"fParent", "[Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PRIVATE, $field(XSDHandler, fParent)},
	{"fLocalElemNamespaceContext", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fLocalElemNamespaceContext)},
	{"INIT_KEYREF_STACK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDHandler, INIT_KEYREF_STACK)},
	{"INC_KEYREF_STACK_AMOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDHandler, INC_KEYREF_STACK_AMOUNT)},
	{"fKeyrefStackPos", "I", nullptr, $PRIVATE, $field(XSDHandler, fKeyrefStackPos)},
	{"fKeyrefs", "[Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(XSDHandler, fKeyrefs)},
	{"fKeyrefsMapXSDocumentInfo", "[Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", nullptr, $PRIVATE, $field(XSDHandler, fKeyrefsMapXSDocumentInfo)},
	{"fKeyrefElems", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XSDHandler, fKeyrefElems)},
	{"fKeyrefNamespaceContext", "[[Ljava/lang/String;", nullptr, $PRIVATE, $field(XSDHandler, fKeyrefNamespaceContext)},
	{"fGlobalAttrDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalAttrDecls)},
	{"fGlobalAttrGrpDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalAttrGrpDecls)},
	{"fGlobalElemDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalElemDecls)},
	{"fGlobalGroupDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalGroupDecls)},
	{"fGlobalNotationDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalNotationDecls)},
	{"fGlobalIDConstraintDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalIDConstraintDecls)},
	{"fGlobalTypeDecls", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, 0, $field(XSDHandler, fGlobalTypeDecls)},
	{"NS_ERROR_CODES", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, NS_ERROR_CODES)},
	{"ELE_ERROR_CODES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, ELE_ERROR_CODES)},
	{"fReportedTNS", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(XSDHandler, fReportedTNS)},
	{"COMP_TYPE", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, COMP_TYPE)},
	{"CIRCULAR_CODES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSDHandler, CIRCULAR_CODES)},
	{"xl", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $PRIVATE, $field(XSDHandler, xl)},
	{}
};

$MethodInfo _XSDHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSDHandler, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket;)V", nullptr, $PUBLIC, $method(XSDHandler, init$, void, $XSGrammarBucket*)},
	{"addGlobalAttributeDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalAttributeDecl, void, $XSAttributeDecl*)},
	{"addGlobalAttributeDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalAttributeDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGlobalAttributeGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalAttributeGroupDecl, void, $XSAttributeGroupDecl*)},
	{"addGlobalAttributeGroupDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalAttributeGroupDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGlobalComponent", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalComponent, void, $XSObject*, $XSDDescription*)},
	{"addGlobalComponents", "(Ljava/util/List;Ljava/util/Map;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, addGlobalComponents, void, $List*, $Map*)},
	{"addGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalElementDecl, void, $XSElementDecl*)},
	{"addGlobalElementDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalElementDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGlobalGroupDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalGroupDecl, void, $XSGroupDecl*)},
	{"addGlobalGroupDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalGroupDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGlobalNotationDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalNotationDecl, void, $XSNotationDecl*)},
	{"addGlobalNotationDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalNotationDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGlobalTypeDecl", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)V", nullptr, 0, $virtualMethod(XSDHandler, addGlobalTypeDecl, void, $XSTypeDefinition*)},
	{"addGlobalTypeDecls", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGlobalTypeDecls, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGrammarComponents", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addGrammarComponents, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addGrammars", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)V", $PRIVATE, $method(XSDHandler, addGrammars, void, $List*)},
	{"addIDConstraintDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)V", nullptr, 0, $virtualMethod(XSDHandler, addIDConstraintDecl, void, $IdentityConstraint*)},
	{"addImportList", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Ljava/util/List;Ljava/util/List;)V", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(XSDHandler, addImportList, void, $SchemaGrammar*, $List*, $List*)},
	{"addNamespaceDependency", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(XSDHandler, addNamespaceDependency, void, $String*, $String*, $List*)},
	{"addNewGrammarComponents", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addNewGrammarComponents, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addNewGrammarLocations", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addNewGrammarLocations, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addNewImportedGrammars", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, addNewImportedGrammars, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"addRelatedAttribute", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, addRelatedAttribute, void, $XSAttributeDeclaration*, $List*, $String*, $Map*)},
	{"addRelatedElement", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, addRelatedElement, void, $XSElementDeclaration*, $List*, $String*, $Map*)},
	{"addRelatedType", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, addRelatedType, void, $XSTypeDefinition*, $List*, $String*, $Map*)},
	{"buildGlobalNameRegistries", "()V", nullptr, $PROTECTED, $virtualMethod(XSDHandler, buildGlobalNameRegistries, void)},
	{"canAddComponent", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;)Z", nullptr, $PRIVATE, $method(XSDHandler, canAddComponent, bool, $XSObject*, $XSDDescription*)},
	{"canAddComponents", "(Ljava/util/List;)Z", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;)Z", $PRIVATE, $method(XSDHandler, canAddComponents, bool, $List*)},
	{"changeRedefineGroup", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)I", nullptr, $PRIVATE, $method(XSDHandler, changeRedefineGroup, int32_t, $String*, $String*, $String*, $Element*, $XSDocumentInfo*)},
	{"checkForDuplicateNames", "(Ljava/lang/String;ILjava/util/Map;Ljava/util/Map;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)V", "(Ljava/lang/String;ILjava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)V", 0, $virtualMethod(XSDHandler, checkForDuplicateNames, void, $String*, int32_t, $Map*, $Map*, $Element*, $XSDocumentInfo*)},
	{"checkForDuplicateNames", "(Ljava/lang/String;ILorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDHandler, checkForDuplicateNames, void, $String*, int32_t, $Element*)},
	{"constructTrees", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Z)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, constructTrees, $XSDocumentInfo*, $Element*, $String*, $XSDDescription*, bool)},
	{"containedImportedGrammar", "(Ljava/util/List;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Z", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Z", $PRIVATE, $method(XSDHandler, containedImportedGrammar, bool, $List*, $SchemaGrammar*)},
	{"createAnnotationValidator", "()V", nullptr, $PRIVATE, $method(XSDHandler, createAnnotationValidator, void)},
	{"createGrammarFrom", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $method(XSDHandler, createGrammarFrom, $SchemaGrammar*, $SchemaGrammar*)},
	{"createTraversers", "()V", nullptr, $PRIVATE, $method(XSDHandler, createTraversers, void)},
	{"doc2SystemId", "(Lorg/w3c/dom/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDHandler, doc2SystemId, $String*, $Element*)},
	{"element2Locator", "(Lorg/w3c/dom/Element;)Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;", nullptr, $PUBLIC, $virtualMethod(XSDHandler, element2Locator, $SimpleLocator*, $Element*)},
	{"element2Locator", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/util/SimpleLocator;)Z", nullptr, $PUBLIC, $virtualMethod(XSDHandler, element2Locator, bool, $Element*, $SimpleLocator*)},
	{"emptyString2Null", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDHandler, emptyString2Null, $String*, $String*)},
	{"existingGrammars", "(Ljava/util/List;)Z", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)Z", $PRIVATE, $method(XSDHandler, existingGrammars, bool, $List*)},
	{"expandComponents", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;Ljava/util/Map;)Ljava/util/List;", "([Lcom/sun/org/apache/xerces/internal/xs/XSObject;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;", $PRIVATE, $method(XSDHandler, expandComponents, $List*, $XSObjectArray*, $Map*)},
	{"expandGrammars", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Ljava/util/List;", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;", $PRIVATE, $method(XSDHandler, expandGrammars, $List*, $SchemaGrammarArray*)},
	{"expandImportList", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(XSDHandler, expandImportList, void, $String*, $List*)},
	{"expandRelatedAttributeComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedAttributeComponents, void, $XSAttributeDeclaration*, $List*, $String*, $Map*)},
	{"expandRelatedAttributeGroupComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedAttributeGroupComponents, void, $XSAttributeGroupDefinition*, $List*, $String*, $Map*)},
	{"expandRelatedAttributeUseComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSAttributeUse;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedAttributeUseComponents, void, $XSAttributeUse*, $List*, $String*, $Map*)},
	{"expandRelatedAttributeUsesComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedAttributeUsesComponents, void, $XSObjectList*, $List*, $String*, $Map*)},
	{"expandRelatedComplexTypeComponents", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedComplexTypeComponents, void, $XSComplexTypeDecl*, $List*, $String*, $Map*)},
	{"expandRelatedComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;Ljava/util/List;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSObject;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedComponents, void, $XSObject*, $List*, $Map*)},
	{"expandRelatedElementComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedElementComponents, void, $XSElementDeclaration*, $List*, $String*, $Map*)},
	{"expandRelatedModelGroupComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSModelGroup;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSModelGroup;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedModelGroupComponents, void, $XSModelGroup*, $List*, $String*, $Map*)},
	{"expandRelatedModelGroupDefinitionComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedModelGroupDefinitionComponents, void, $XSModelGroupDefinition*, $List*, $String*, $Map*)},
	{"expandRelatedParticleComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSParticle;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSParticle;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedParticleComponents, void, $XSParticle*, $List*, $String*, $Map*)},
	{"expandRelatedSimpleTypeComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedSimpleTypeComponents, void, $XSSimpleTypeDefinition*, $List*, $String*, $Map*)},
	{"expandRelatedTypeComponents", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/util/List;Ljava/lang/String;Ljava/util/Map;)V", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, expandRelatedTypeComponents, void, $XSTypeDefinition*, $List*, $String*, $Map*)},
	{"fillInLocalElemInfo", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;ILcom/sun/org/apache/xerces/internal/xs/XSObject;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)V", nullptr, 0, $virtualMethod(XSDHandler, fillInLocalElemInfo, void, $Element*, $XSDocumentInfo*, int32_t, $XSObject*, $XSParticleDecl*)},
	{"findDependentNamespaces", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(XSDHandler, findDependentNamespaces, $List*, $String*, $Map*)},
	{"findGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Z)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, findGrammar, $SchemaGrammar*, $XSDDescription*, bool)},
	{"findQName", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDHandler, findQName, $String*, $String*, $XSDocumentInfo*)},
	{"findXSDocumentForDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", nullptr, $PRIVATE, $method(XSDHandler, findXSDocumentForDecl, $XSDocumentInfo*, $XSDocumentInfo*, $Element*, $XSDocumentInfo*)},
	{"getDVFactory", "()Lcom/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory;", nullptr, $PUBLIC, $virtualMethod(XSDHandler, getDVFactory, $SchemaDVFactory*)},
	{"getDocInfoFromMap", "(Ljava/util/Map;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;", $PRIVATE, $method(XSDHandler, getDocInfoFromMap, $XSDocumentInfo*, $Map*, $String*)},
	{"getElementFromMap", "(Ljava/util/Map;Ljava/lang/String;)Lorg/w3c/dom/Element;", "(Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;Ljava/lang/String;)Lorg/w3c/dom/Element;", $PRIVATE, $method(XSDHandler, getElementFromMap, $Element*, $Map*, $String*)},
	{"getFromMap", "(Ljava/util/Map;Ljava/lang/String;)Ljava/util/List;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $method(XSDHandler, getFromMap, $List*, $Map*, $String*)},
	{"getGlobalAttributeDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalAttributeDecl, $XSAttributeDecl*, $String*)},
	{"getGlobalAttributeGroupDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalAttributeGroupDecl, $XSAttributeGroupDecl*, $String*)},
	{"getGlobalDecl", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;ILcom/sun/org/apache/xerces/internal/xni/QName;Lorg/w3c/dom/Element;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, getGlobalDecl, $Object*, $XSDocumentInfo*, int32_t, $QName*, $Element*)},
	{"getGlobalDecl", "(Ljava/lang/String;I)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, getGlobalDecl, $Object*, $String*, int32_t)},
	{"getGlobalDeclFromGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILjava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, getGlobalDeclFromGrammar, $Object*, $SchemaGrammar*, int32_t, $String*)},
	{"getGlobalDeclFromGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ILjava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, getGlobalDeclFromGrammar, $Object*, $SchemaGrammar*, int32_t, $String*, $String*)},
	{"getGlobalElementDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalElementDecl, $XSElementDecl*, $String*)},
	{"getGlobalGroupDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalGroupDecl, $XSGroupDecl*, $String*)},
	{"getGlobalNotationDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalNotationDecl, $XSNotationDecl*, $String*)},
	{"getGlobalTypeDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PRIVATE, $method(XSDHandler, getGlobalTypeDecl, $XSTypeDefinition*, $String*)},
	{"getGrammar", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, 0, $virtualMethod(XSDHandler, getGrammar, $SchemaGrammar*, $String*)},
	{"getGrpOrAttrGrpRedefinedByRestriction", "(ILcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lorg/w3c/dom/Element;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XSDHandler, getGrpOrAttrGrpRedefinedByRestriction, $Object*, int32_t, $QName*, $XSDocumentInfo*, $Element*)},
	{"getIDConstraintDecl", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;", nullptr, $PRIVATE, $method(XSDHandler, getIDConstraintDecl, $IdentityConstraint*, $String*)},
	{"getIDRegistry", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PROTECTED, $virtualMethod(XSDHandler, getIDRegistry, $Map*)},
	{"getIDRegistry_sub", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;>;", $PROTECTED, $virtualMethod(XSDHandler, getIDRegistry_sub, $Map*)},
	{"getSchemaDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;ZSLorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument, $Element*, $String*, $XMLInputSource*, bool, int16_t, $Element*)},
	{"getSchemaDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SAXInputSource;ZSLorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument, $Element*, $String*, $SAXInputSource*, bool, int16_t, $Element*)},
	{"getSchemaDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/DOMInputSource;ZSLorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument, $Element*, $String*, $DOMInputSource*, bool, int16_t, $Element*)},
	{"getSchemaDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/StAXInputSource;ZSLorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument, $Element*, $String*, $StAXInputSource*, bool, int16_t, $Element*)},
	{"getSchemaDocument", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSInputSource;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument, $Element*, $XSInputSource*, $XSDDescription*)},
	{"getSchemaDocument0", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$XSDKey;Ljava/lang/String;Lorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument0, $Element*, $XSDHandler$XSDKey*, $String*, $Element*)},
	{"getSchemaDocument1", "(ZZLcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lorg/w3c/dom/Element;Ljava/io/IOException;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaDocument1, $Element*, bool, bool, $XMLInputSource*, $Element*, $IOException*)},
	{"getSchemaGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $method(XSDHandler, getSchemaGrammar, $SchemaGrammar*, $XSDDescription*)},
	{"isExistingGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Z)Z", nullptr, $PRIVATE, $method(XSDHandler, isExistingGrammar, bool, $XSDDescription*, bool)},
	{"needReportTNSError", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $FINAL, $method(XSDHandler, needReportTNSError, bool, $String*)},
	{"nonAnnotationContent", "(Lorg/w3c/dom/Element;)Z", nullptr, $PRIVATE, $method(XSDHandler, nonAnnotationContent, bool, $Element*)},
	{"null2EmptyString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XSDHandler, null2EmptyString, $String*, $String*)},
	{"parseSchema", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Ljava/util/Map;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray;>;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", $PUBLIC, $virtualMethod(XSDHandler, parseSchema, $SchemaGrammar*, $XMLInputSource*, $XSDDescription*, $Map*), "java.io.IOException"},
	{"prepareForParse", "()V", nullptr, 0, $virtualMethod(XSDHandler, prepareForParse, void)},
	{"prepareForTraverse", "()V", nullptr, 0, $virtualMethod(XSDHandler, prepareForTraverse, void)},
	{"removeParticle", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;)Z", nullptr, $PRIVATE, $method(XSDHandler, removeParticle, bool, $XSModelGroupImpl*, $XSParticleDecl*)},
	{"renameRedefiningComponents", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XSDHandler, renameRedefiningComponents, void, $XSDocumentInfo*, $Element*, $String*, $String*, $String*)},
	{"reportSchemaErr", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;SLjava/lang/Exception;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaErr, void, $String*, $ObjectArray*, $Element*, int16_t, $Exception*)},
	{"reportSchemaError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaError, void, $String*, $ObjectArray*, $Element*)},
	{"reportSchemaError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;Ljava/lang/Exception;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaError, void, $String*, $ObjectArray*, $Element*, $Exception*)},
	{"reportSchemaFatalError", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaFatalError, void, $String*, $ObjectArray*, $Element*)},
	{"reportSchemaWarning", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaWarning, void, $String*, $ObjectArray*, $Element*)},
	{"reportSchemaWarning", "(Ljava/lang/String;[Ljava/lang/Object;Lorg/w3c/dom/Element;Ljava/lang/Exception;)V", nullptr, 0, $virtualMethod(XSDHandler, reportSchemaWarning, void, $String*, $ObjectArray*, $Element*, $Exception*)},
	{"reportSharingError", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XSDHandler, reportSharingError, void, $String*, $String*)},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler, reset, void, $XMLComponentManager*)},
	{"resolveKeyRefs", "()V", nullptr, $PROTECTED, $virtualMethod(XSDHandler, resolveKeyRefs, void)},
	{"resolveSchema", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;ZLorg/w3c/dom/Element;Z)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, resolveSchema, $Element*, $XSDDescription*, bool, $Element*, bool)},
	{"resolveSchema", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;ZLorg/w3c/dom/Element;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(XSDHandler, resolveSchema, $Element*, $XMLInputSource*, $XSDDescription*, bool, $Element*)},
	{"resolveSchemaSource", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDDescription;ZLorg/w3c/dom/Element;Z)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $method(XSDHandler, resolveSchemaSource, $XMLInputSource*, $XSDDescription*, bool, $Element*, bool)},
	{"schemaDocument2SystemId", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDHandler, schemaDocument2SystemId, $String*, $XSDocumentInfo*)},
	{"setDVFactory", "(Lcom/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory;)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler, setDVFactory, void, $SchemaDVFactory*)},
	{"setDeclPool", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool;)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler, setDeclPool, void, $XSDeclarationPool*)},
	{"setGenerateSyntheticAnnotations", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSDHandler, setGenerateSyntheticAnnotations, void, bool)},
	{"setSchemasVisible", "(Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;)V", nullptr, $PRIVATE, $method(XSDHandler, setSchemasVisible, void, $XSDocumentInfo*)},
	{"storeKeyRef", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;)V", nullptr, $PROTECTED, $virtualMethod(XSDHandler, storeKeyRef, void, $Element*, $XSDocumentInfo*, $XSElementDecl*)},
	{"traverseGlobalDecl", "(ILorg/w3c/dom/Element;Lcom/sun/org/apache/xerces/internal/impl/xs/traversers/XSDocumentInfo;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(XSDHandler, traverseGlobalDecl, $Object*, int32_t, $Element*, $XSDocumentInfo*, $SchemaGrammar*)},
	{"traverseLocalElements", "()V", nullptr, 0, $virtualMethod(XSDHandler, traverseLocalElements, void)},
	{"traverseSchemas", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/Object;>;)V", $PROTECTED, $virtualMethod(XSDHandler, traverseSchemas, void, $List*)},
	{"updateImportDependencies", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PRIVATE, $method(XSDHandler, updateImportDependencies, void, $Map*)},
	{"updateImportList", "(Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;)V", $PRIVATE, $method(XSDHandler, updateImportList, void, $List*, $List*)},
	{"updateImportList", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Ljava/util/List;Ljava/util/List;)V", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(XSDHandler, updateImportList, void, $SchemaGrammar*, $List*, $List*)},
	{"updateImportListFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, updateImportListFor, void, $SchemaGrammar*)},
	{"updateImportListWith", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSDHandler, updateImportListWith, void, $SchemaGrammar*)},
	{"validateAnnotations", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/Object;>;)V", $PRIVATE, $method(XSDHandler, validateAnnotations, void, $List*)},
	{}
};

$InnerClassInfo _XSDHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "SAX2XNIUtil", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSDKey", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "XSDKey", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSAnnotationGrammarPool", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "XSAnnotationGrammarPool", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XSDHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler",
	"java.lang.Object",
	nullptr,
	_XSDHandler_FieldInfo_,
	_XSDHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XSDHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil,com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSDKey,com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$XSAnnotationGrammarPool"
};

$Object* allocate$XSDHandler($Class* clazz) {
	return $of($alloc(XSDHandler));
}

$String* XSDHandler::VALIDATION = nullptr;
$String* XSDHandler::XMLSCHEMA_VALIDATION = nullptr;
$String* XSDHandler::ALLOW_JAVA_ENCODINGS = nullptr;
$String* XSDHandler::CONTINUE_AFTER_FATAL_ERROR = nullptr;
$String* XSDHandler::STANDARD_URI_CONFORMANT_FEATURE = nullptr;
$String* XSDHandler::DISALLOW_DOCTYPE = nullptr;
$String* XSDHandler::GENERATE_SYNTHETIC_ANNOTATIONS = nullptr;
$String* XSDHandler::VALIDATE_ANNOTATIONS = nullptr;
$String* XSDHandler::HONOUR_ALL_SCHEMALOCATIONS = nullptr;
$String* XSDHandler::NAMESPACE_GROWTH = nullptr;
$String* XSDHandler::TOLERATE_DUPLICATES = nullptr;
$String* XSDHandler::NAMESPACE_PREFIXES = nullptr;
$String* XSDHandler::STRING_INTERNING = nullptr;
$String* XSDHandler::ERROR_HANDLER = nullptr;
$String* XSDHandler::JAXP_SCHEMA_SOURCE = nullptr;
$String* XSDHandler::ENTITY_RESOLVER = nullptr;
$String* XSDHandler::ENTITY_MANAGER = nullptr;
$String* XSDHandler::ERROR_REPORTER = nullptr;
$String* XSDHandler::XMLGRAMMAR_POOL = nullptr;
$String* XSDHandler::SYMBOL_TABLE = nullptr;
$String* XSDHandler::SECURITY_MANAGER = nullptr;
$String* XSDHandler::LOCALE = nullptr;
$String* XSDHandler::XML_SECURITY_PROPERTY_MANAGER = nullptr;
$String* XSDHandler::REDEF_IDENTIFIER = nullptr;
$StringArray2* XSDHandler::NS_ERROR_CODES = nullptr;
$StringArray* XSDHandler::ELE_ERROR_CODES = nullptr;
$StringArray* XSDHandler::COMP_TYPE = nullptr;
$StringArray* XSDHandler::CIRCULAR_CODES = nullptr;

$String* XSDHandler::null2EmptyString($String* ns) {
	$init($XMLSymbols);
	return ns == nullptr ? $XMLSymbols::EMPTY_STRING : ns;
}

$String* XSDHandler::emptyString2Null($String* ns) {
	$init($XMLSymbols);
	return ns == $XMLSymbols::EMPTY_STRING ? ($String*)nullptr : ns;
}

$String* XSDHandler::doc2SystemId($Element* ele) {
	$useLocalCurrentObjectStackCache();
	$var($String, documentURI, nullptr);
	if ($instanceOf($SchemaDOM, $($nc(ele)->getOwnerDocument()))) {
		$assign(documentURI, $nc(($cast($SchemaDOM, $(ele->getOwnerDocument()))))->getDocumentURI());
	}
	return documentURI != nullptr ? documentURI : $cast($String, $nc(this->fDoc2SystemId)->get(ele));
}

void XSDHandler::init$() {
	$set(this, fDeclPool, nullptr);
	$set(this, fSecurityManager, nullptr);
	this->registryEmpty = true;
	$set(this, fUnparsedAttributeRegistry, $new($HashMap));
	$set(this, fUnparsedAttributeGroupRegistry, $new($HashMap));
	$set(this, fUnparsedElementRegistry, $new($HashMap));
	$set(this, fUnparsedGroupRegistry, $new($HashMap));
	$set(this, fUnparsedIdentityConstraintRegistry, $new($HashMap));
	$set(this, fUnparsedNotationRegistry, $new($HashMap));
	$set(this, fUnparsedTypeRegistry, $new($HashMap));
	$set(this, fUnparsedAttributeRegistrySub, $new($HashMap));
	$set(this, fUnparsedAttributeGroupRegistrySub, $new($HashMap));
	$set(this, fUnparsedElementRegistrySub, $new($HashMap));
	$set(this, fUnparsedGroupRegistrySub, $new($HashMap));
	$set(this, fUnparsedIdentityConstraintRegistrySub, $new($HashMap));
	$set(this, fUnparsedNotationRegistrySub, $new($HashMap));
	$set(this, fUnparsedTypeRegistrySub, $new($HashMap));
	$set(this, fUnparsedRegistriesExt, $fcast($MapArray, $new($HashMapArray, {
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr,
		($HashMap*)nullptr
	})));
	$set(this, fDependencyMap, $new($HashMap));
	$set(this, fImportMap, $new($HashMap));
	$set(this, fAllTNSs, $new($ArrayList));
	$set(this, fLocationPairs, nullptr);
	$set(this, fHiddenNodes, nullptr);
	$set(this, fTraversed, $new($HashMap));
	$set(this, fDoc2SystemId, $new($HashMap));
	$set(this, fRoot, nullptr);
	$set(this, fDoc2XSDocumentMap, $new($HashMap));
	$set(this, fRedefine2XSDMap, nullptr);
	$set(this, fRedefine2NSSupport, nullptr);
	$set(this, fRedefinedRestrictedAttributeGroupRegistry, $new($HashMap));
	$set(this, fRedefinedRestrictedGroupRegistry, $new($HashMap));
	this->fValidateAnnotations = false;
	this->fHonourAllSchemaLocations = false;
	this->fNamespaceGrowth = false;
	this->fTolerateDuplicates = false;
	$set(this, fSecurityPropertyMgr, nullptr);
	this->fUseCatalog = true;
	this->fLocalElemStackPos = 0;
	$set(this, fParticle, $new($XSParticleDeclArray, XSDHandler::INIT_STACK_SIZE));
	$set(this, fLocalElementDecl, $new($ElementArray, XSDHandler::INIT_STACK_SIZE));
	$set(this, fLocalElementDecl_schema, $new($XSDocumentInfoArray, XSDHandler::INIT_STACK_SIZE));
	$set(this, fAllContext, $new($ints, XSDHandler::INIT_STACK_SIZE));
	$set(this, fParent, $new($XSObjectArray, XSDHandler::INIT_STACK_SIZE));
	$set(this, fLocalElemNamespaceContext, $new($StringArray2, XSDHandler::INIT_STACK_SIZE, 1));
	this->fKeyrefStackPos = 0;
	$set(this, fKeyrefs, $new($ElementArray, XSDHandler::INIT_KEYREF_STACK));
	$set(this, fKeyrefsMapXSDocumentInfo, $new($XSDocumentInfoArray, XSDHandler::INIT_KEYREF_STACK));
	$set(this, fKeyrefElems, $new($XSElementDeclArray, XSDHandler::INIT_KEYREF_STACK));
	$set(this, fKeyrefNamespaceContext, $new($StringArray2, XSDHandler::INIT_KEYREF_STACK, 1));
	$set(this, fGlobalAttrDecls, $new($SymbolHash, 12));
	$set(this, fGlobalAttrGrpDecls, $new($SymbolHash, 5));
	$set(this, fGlobalElemDecls, $new($SymbolHash, 25));
	$set(this, fGlobalGroupDecls, $new($SymbolHash, 5));
	$set(this, fGlobalNotationDecls, $new($SymbolHash, 1));
	$set(this, fGlobalIDConstraintDecls, $new($SymbolHash, 3));
	$set(this, fGlobalTypeDecls, $new($SymbolHash, 25));
	$set(this, fReportedTNS, nullptr);
	$set(this, xl, $new($SimpleLocator));
	$set(this, fHiddenNodes, $new($HashMap));
	$set(this, fSchemaParser, $new($SchemaDOMParser, static_cast<$XMLParserConfiguration*>(static_cast<$BasicParserConfiguration*>($$new($SchemaParsingConfig)))));
}

void XSDHandler::init$($XSGrammarBucket* gBucket) {
	XSDHandler::init$();
	$set(this, fGrammarBucket, gBucket);
	$set(this, fSchemaGrammarDescription, $new($XSDDescription));
}

$SchemaGrammar* XSDHandler::parseSchema($XMLInputSource* is, $XSDDescription* desc, $Map* locationPairs) {
	$useLocalCurrentObjectStackCache();
	$set(this, fLocationPairs, locationPairs);
	$nc(this->fSchemaParser)->resetNodePool();
	$var($SchemaGrammar, grammar, nullptr);
	$var($String, schemaNamespace, nullptr);
	int16_t referType = $nc(desc)->getContextType();
	if (referType != $XSDDescription::CONTEXT_PREPARSE) {
		if (this->fHonourAllSchemaLocations && referType == $XSDDescription::CONTEXT_IMPORT && isExistingGrammar(desc, this->fNamespaceGrowth)) {
			$assign(grammar, $nc(this->fGrammarBucket)->getGrammar($(desc->getTargetNamespace())));
		} else {
			$assign(grammar, findGrammar(desc, this->fNamespaceGrowth));
		}
		if (grammar != nullptr) {
			if (!this->fNamespaceGrowth) {
				return grammar;
			} else {
				try {
					$var($String, var$0, $nc(is)->getSystemId());
					if ($nc($(grammar->getDocumentLocations()))->contains($($XMLEntityManager::expandSystemId(var$0, $(is->getBaseSystemId()), false)))) {
						return grammar;
					}
				} catch ($URI$MalformedURIException& e) {
				}
			}
		}
		$assign(schemaNamespace, desc->getTargetNamespace());
		if (schemaNamespace != nullptr) {
			$assign(schemaNamespace, $nc(this->fSymbolTable)->addSymbol(schemaNamespace));
		}
	}
	prepareForParse();
	$var($Element, schemaRoot, nullptr);
	if ($instanceOf($DOMInputSource, is)) {
		$assign(schemaRoot, getSchemaDocument(schemaNamespace, $cast($DOMInputSource, is), referType == $XSDDescription::CONTEXT_PREPARSE, referType, ($Element*)nullptr));
	} else if ($instanceOf($SAXInputSource, is)) {
		$assign(schemaRoot, getSchemaDocument(schemaNamespace, $cast($SAXInputSource, is), referType == $XSDDescription::CONTEXT_PREPARSE, referType, ($Element*)nullptr));
	} else if ($instanceOf($StAXInputSource, is)) {
		$assign(schemaRoot, getSchemaDocument(schemaNamespace, $cast($StAXInputSource, is), referType == $XSDDescription::CONTEXT_PREPARSE, referType, ($Element*)nullptr));
	} else if ($instanceOf($XSInputSource, is)) {
		$assign(schemaRoot, getSchemaDocument($cast($XSInputSource, is), desc));
	} else {
		$assign(schemaRoot, getSchemaDocument(schemaNamespace, is, referType == $XSDDescription::CONTEXT_PREPARSE, referType, ($Element*)nullptr));
	}
	if (schemaRoot == nullptr) {
		if ($instanceOf($XSInputSource, is)) {
			$var($XSInputSource, xsinput, $cast($XSInputSource, is));
			$var($SchemaGrammarArray, grammars, $nc(xsinput)->getGrammars());
			if (grammars != nullptr && grammars->length > 0) {
				$assign(grammar, $nc(this->fGrammarBucket)->getGrammar($($nc(grammars->get(0))->getTargetNamespace())));
			} else {
				$var($XSObjectArray, components, xsinput->getComponents());
				if (components != nullptr && components->length > 0) {
					$assign(grammar, $nc(this->fGrammarBucket)->getGrammar($($nc(components->get(0))->getNamespace())));
				}
			}
		}
		return grammar;
	}
	if (referType == $XSDDescription::CONTEXT_PREPARSE) {
		$var($Element, schemaElem, schemaRoot);
		$init($SchemaSymbols);
		$assign(schemaNamespace, $DOMUtil::getAttrValue(schemaElem, $SchemaSymbols::ATT_TARGETNAMESPACE));
		if (schemaNamespace != nullptr && schemaNamespace->length() > 0) {
			$assign(schemaNamespace, $nc(this->fSymbolTable)->addSymbol(schemaNamespace));
			desc->setTargetNamespace(schemaNamespace);
		} else {
			$assign(schemaNamespace, nullptr);
		}
		$assign(grammar, findGrammar(desc, this->fNamespaceGrowth));
		$var($String, var$1, $nc(is)->getSystemId());
		$var($String, schemaId, $XMLEntityManager::expandSystemId(var$1, $(is->getBaseSystemId()), false));
		if (grammar != nullptr) {
			if (!this->fNamespaceGrowth || (schemaId != nullptr && $nc($(grammar->getDocumentLocations()))->contains(schemaId))) {
				return grammar;
			}
		}
		$var($XSDHandler$XSDKey, key, $new($XSDHandler$XSDKey, schemaId, referType, schemaNamespace));
		$nc(this->fTraversed)->put(key, schemaRoot);
		if (schemaId != nullptr) {
			$nc(this->fDoc2SystemId)->put(schemaRoot, schemaId);
		}
	}
	prepareForTraverse();
	$set(this, fRoot, constructTrees(schemaRoot, $($nc(is)->getSystemId()), desc, grammar != nullptr));
	if (this->fRoot == nullptr) {
		return nullptr;
	}
	buildGlobalNameRegistries();
	$var($List, annotationInfo, this->fValidateAnnotations ? static_cast<$List*>($new($ArrayList)) : ($List*)nullptr);
	traverseSchemas(annotationInfo);
	traverseLocalElements();
	resolveKeyRefs();
	for (int32_t i = $nc(this->fAllTNSs)->size() - 1; i >= 0; --i) {
		$var($String, tns, $cast($String, $nc(this->fAllTNSs)->get(i)));
		$var($List, ins, $cast($List, $nc(this->fImportMap)->get(tns)));
		$var($List, grammars, $new($ArrayList));
		$var($SchemaGrammar, sg, $nc(this->fGrammarBucket)->getGrammar($(emptyString2Null(tns))));
		if (sg == nullptr) {
			continue;
		}
		$var($SchemaGrammar, isg, nullptr);
		int32_t count = 0;
		for (int32_t j = 0; j < $nc(ins)->size(); ++j) {
			$assign(isg, $nc(this->fGrammarBucket)->getGrammar($cast($String, $(ins->get(j)))));
			if (isg != nullptr) {
				grammars->add(isg);
			}
		}
		$nc(sg)->setImportedGrammars(grammars);
	}
	if (this->fValidateAnnotations && $nc(annotationInfo)->size() > 0) {
		validateAnnotations(annotationInfo);
	}
	return $nc(this->fGrammarBucket)->getGrammar($nc(this->fRoot)->fTargetNamespace);
}

void XSDHandler::validateAnnotations($List* annotationInfo) {
	$useLocalCurrentObjectStackCache();
	if (this->fAnnotationValidator == nullptr) {
		createAnnotationValidator();
	}
	int32_t size = $nc(annotationInfo)->size();
	$var($XMLInputSource, src, $new($XMLInputSource, nullptr, nullptr, nullptr, false));
	$nc(this->fGrammarBucketAdapter)->refreshGrammars(this->fGrammarBucket);
	for (int32_t i = 0; i < size; i += 2) {
		src->setSystemId($cast($String, $(annotationInfo->get(i))));
		$var($XSAnnotationInfo, annotation, $cast($XSAnnotationInfo, annotationInfo->get(i + 1)));
		while (annotation != nullptr) {
			src->setCharacterStream($$new($StringReader, annotation->fAnnotation));
			try {
				$nc(this->fAnnotationValidator)->parse(src);
			} catch ($IOException& exc) {
			}
			$assign(annotation, annotation->next);
		}
	}
}

void XSDHandler::createAnnotationValidator() {
	$useLocalCurrentObjectStackCache();
	$set(this, fAnnotationValidator, $new($XML11Configuration));
	$set(this, fGrammarBucketAdapter, $new($XSDHandler$XSAnnotationGrammarPool));
	$nc(this->fAnnotationValidator)->setFeature(XSDHandler::VALIDATION, true);
	$nc(this->fAnnotationValidator)->setFeature(XSDHandler::XMLSCHEMA_VALIDATION, true);
	$nc(this->fAnnotationValidator)->setProperty(XSDHandler::XMLGRAMMAR_POOL, this->fGrammarBucketAdapter);
	$nc(this->fAnnotationValidator)->setProperty(XSDHandler::SECURITY_MANAGER, (this->fSecurityManager != nullptr) ? $of(this->fSecurityManager) : $of($$new($XMLSecurityManager, true)));
	$nc(this->fAnnotationValidator)->setProperty(XSDHandler::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$nc(this->fAnnotationValidator)->setProperty(XSDHandler::ERROR_HANDLER, (this->fErrorHandler != nullptr) ? $of(this->fErrorHandler) : $of($$new($DefaultErrorHandler)));
	$nc(this->fAnnotationValidator)->setProperty(XSDHandler::LOCALE, this->fLocale);
	$init($XMLConstants);
	$nc(this->fAnnotationValidator)->setFeature($XMLConstants::USE_CATALOG, this->fUseCatalog);
	$init($JdkXmlUtils);
	$nc(this->fAnnotationValidator)->setProperty($JdkXmlUtils::CATALOG_FILES, this->fCatalogFile);
	$nc(this->fAnnotationValidator)->setProperty($JdkXmlUtils::CATALOG_DEFER, this->fDefer);
	$nc(this->fAnnotationValidator)->setProperty($JdkXmlUtils::CATALOG_PREFER, this->fPrefer);
	$nc(this->fAnnotationValidator)->setProperty($JdkXmlUtils::CATALOG_RESOLVE, this->fResolve);
}

$SchemaGrammar* XSDHandler::getGrammar($String* tns) {
	return $nc(this->fGrammarBucket)->getGrammar(tns);
}

$SchemaGrammar* XSDHandler::findGrammar($XSDDescription* desc, bool ignoreConflict) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $nc(this->fGrammarBucket)->getGrammar($($nc(desc)->getTargetNamespace())));
	if (sg == nullptr) {
		if (this->fGrammarPool != nullptr) {
			$assign(sg, $cast($SchemaGrammar, $nc(this->fGrammarPool)->retrieveGrammar(desc)));
			if (sg != nullptr) {
				if (!$nc(this->fGrammarBucket)->putGrammar(sg, true, ignoreConflict)) {
					reportSchemaWarning("GrammarConflict"_s, nullptr, nullptr);
					$assign(sg, nullptr);
				}
			}
		}
	}
	return sg;
}

$XSDocumentInfo* XSDHandler::constructTrees($Element* schemaRoot, $String* locationHint, $XSDDescription* desc, bool nsCollision) {
	$useLocalCurrentObjectStackCache();
	if (schemaRoot == nullptr) {
		return nullptr;
	}
	$var($String, callerTNS, $nc(desc)->getTargetNamespace());
	int16_t referType = desc->getContextType();
	$var($XSDocumentInfo, currSchemaInfo, nullptr);
	try {
		$assign(currSchemaInfo, $new($XSDocumentInfo, schemaRoot, this->fAttributeChecker, this->fSymbolTable));
	} catch ($XMLSchemaException& se) {
		reportSchemaError($nc(XSDHandler::ELE_ERROR_CODES)->get(referType), $$new($ObjectArray, {$of(locationHint)}), schemaRoot);
		return nullptr;
	}
	if ($nc(currSchemaInfo)->fTargetNamespace != nullptr && $nc(currSchemaInfo->fTargetNamespace)->length() == 0) {
		reportSchemaWarning("EmptyTargetNamespace"_s, $$new($ObjectArray, {$of(locationHint)}), schemaRoot);
		$set(currSchemaInfo, fTargetNamespace, nullptr);
	}
	if (callerTNS != nullptr) {
		int32_t secondIdx = 0;
		if (referType == $XSDDescription::CONTEXT_INCLUDE || referType == $XSDDescription::CONTEXT_REDEFINE) {
			if ($nc(currSchemaInfo)->fTargetNamespace == nullptr) {
				$set(currSchemaInfo, fTargetNamespace, callerTNS);
				currSchemaInfo->fIsChameleonSchema = true;
			} else if (callerTNS != currSchemaInfo->fTargetNamespace) {
				reportSchemaError($nc($nc(XSDHandler::NS_ERROR_CODES)->get(referType))->get(secondIdx), $$new($ObjectArray, {
					$of(callerTNS),
					$of(currSchemaInfo->fTargetNamespace)
				}), schemaRoot);
				return nullptr;
			}
		} else if (referType != $XSDDescription::CONTEXT_PREPARSE && callerTNS != $nc(currSchemaInfo)->fTargetNamespace) {
			reportSchemaError($nc($nc(XSDHandler::NS_ERROR_CODES)->get(referType))->get(secondIdx), $$new($ObjectArray, {
				$of(callerTNS),
				$of(currSchemaInfo->fTargetNamespace)
			}), schemaRoot);
			return nullptr;
		}
	} else if ($nc(currSchemaInfo)->fTargetNamespace != nullptr) {
		if (referType == $XSDDescription::CONTEXT_PREPARSE) {
			desc->setTargetNamespace(currSchemaInfo->fTargetNamespace);
			$assign(callerTNS, currSchemaInfo->fTargetNamespace);
		} else {
			int32_t secondIdx = 1;
			reportSchemaError($nc($nc(XSDHandler::NS_ERROR_CODES)->get(referType))->get(secondIdx), $$new($ObjectArray, {
				$of(callerTNS),
				$of(currSchemaInfo->fTargetNamespace)
			}), schemaRoot);
			return nullptr;
		}
	}
	$nc(currSchemaInfo)->addAllowedNS(currSchemaInfo->fTargetNamespace);
	$var($SchemaGrammar, sg, nullptr);
	if (nsCollision) {
		$var($SchemaGrammar, sg2, $nc(this->fGrammarBucket)->getGrammar(currSchemaInfo->fTargetNamespace));
		if ($nc(sg2)->isImmutable()) {
			$assign(sg, $new($SchemaGrammar, sg2));
			$nc(this->fGrammarBucket)->putGrammar(sg);
			updateImportListWith(sg);
		} else {
			$assign(sg, sg2);
		}
		updateImportListFor(sg);
	} else if (referType == $XSDDescription::CONTEXT_INCLUDE || referType == $XSDDescription::CONTEXT_REDEFINE) {
		$assign(sg, $nc(this->fGrammarBucket)->getGrammar(currSchemaInfo->fTargetNamespace));
	} else if (this->fHonourAllSchemaLocations && referType == $XSDDescription::CONTEXT_IMPORT) {
		$assign(sg, findGrammar(desc, false));
		if (sg == nullptr) {
			$assign(sg, $new($SchemaGrammar, currSchemaInfo->fTargetNamespace, $(desc->makeClone()), this->fSymbolTable));
			$nc(this->fGrammarBucket)->putGrammar(sg);
		}
	} else {
		$assign(sg, $new($SchemaGrammar, currSchemaInfo->fTargetNamespace, $(desc->makeClone()), this->fSymbolTable));
		$nc(this->fGrammarBucket)->putGrammar(sg);
	}
	$nc(sg)->addDocument(nullptr, $cast($String, $($nc(this->fDoc2SystemId)->get(currSchemaInfo->fSchemaElement))));
	$nc(this->fDoc2XSDocumentMap)->put(schemaRoot, currSchemaInfo);
	$var($List, dependencies, $new($ArrayList));
	$var($Element, rootNode, schemaRoot);
	$var($Element, newSchemaRoot, nullptr);
	{
		$var($Element, child, $DOMUtil::getFirstChildElement(rootNode));
		for (; child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
			$var($String, schemaNamespace, nullptr);
			$var($String, schemaHint, nullptr);
			$var($String, localName, $DOMUtil::getLocalName(child));
			int16_t refType = (int16_t)-1;
			bool importCollision = false;
			$init($SchemaSymbols);
			if ($nc(localName)->equals($SchemaSymbols::ELT_ANNOTATION)) {
				continue;
			} else {
				if (localName->equals($SchemaSymbols::ELT_IMPORT)) {
					refType = $XSDDescription::CONTEXT_IMPORT;
					$var($ObjectArray, importAttrs, $nc(this->fAttributeChecker)->checkAttributes(child, true, currSchemaInfo));
					$assign(schemaHint, $cast($String, $nc(importAttrs)->get($XSAttributeChecker::ATTIDX_SCHEMALOCATION)));
					$assign(schemaNamespace, $cast($String, importAttrs->get($XSAttributeChecker::ATTIDX_NAMESPACE)));
					if (schemaNamespace != nullptr) {
						$assign(schemaNamespace, $nc(this->fSymbolTable)->addSymbol(schemaNamespace));
					}
					$var($Element, importChild, $DOMUtil::getFirstChildElement(child));
					if (importChild != nullptr) {
						$var($String, importComponentType, $DOMUtil::getLocalName(importChild));
						if ($nc(importComponentType)->equals($SchemaSymbols::ELT_ANNOTATION)) {
							sg->addAnnotation($($nc(this->fElementTraverser)->traverseAnnotationDecl(importChild, importAttrs, true, currSchemaInfo)));
						} else {
							reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
								$of(localName),
								$of("annotation?"_s),
								$of(importComponentType)
							}), child);
						}
						if ($DOMUtil::getNextSiblingElement(importChild) != nullptr) {
							reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
								$of(localName),
								$of("annotation?"_s),
								$($of($DOMUtil::getLocalName($($DOMUtil::getNextSiblingElement(importChild)))))
							}), child);
						}
					} else {
						$var($String, text, $DOMUtil::getSyntheticAnnotation(child));
						if (text != nullptr) {
							sg->addAnnotation($($nc(this->fElementTraverser)->traverseSyntheticAnnotation(child, text, importAttrs, true, currSchemaInfo)));
						}
					}
					$nc(this->fAttributeChecker)->returnAttrArray(importAttrs, currSchemaInfo);
					if (schemaNamespace == currSchemaInfo->fTargetNamespace) {
						reportSchemaError(schemaNamespace != nullptr ? "src-import.1.1"_s : "src-import.1.2"_s, $$new($ObjectArray, {$of(schemaNamespace)}), child);
						continue;
					}
					if (currSchemaInfo->isAllowedNS(schemaNamespace)) {
						if (!this->fHonourAllSchemaLocations && !this->fNamespaceGrowth) {
							continue;
						}
					} else {
						currSchemaInfo->addAllowedNS(schemaNamespace);
					}
					$var($String, tns, null2EmptyString(currSchemaInfo->fTargetNamespace));
					$var($List, ins, $cast($List, $nc(this->fImportMap)->get(tns)));
					if (ins == nullptr) {
						$nc(this->fAllTNSs)->add(tns);
						$assign(ins, $new($ArrayList));
						$nc(this->fImportMap)->put(tns, ins);
						ins->add(schemaNamespace);
					} else if (!$nc(ins)->contains(schemaNamespace)) {
						ins->add(schemaNamespace);
					}
					$nc(this->fSchemaGrammarDescription)->reset();
					$nc(this->fSchemaGrammarDescription)->setContextType($XSDDescription::CONTEXT_IMPORT);
					$nc(this->fSchemaGrammarDescription)->setBaseSystemId($(doc2SystemId(schemaRoot)));
					$nc(this->fSchemaGrammarDescription)->setLiteralSystemId(schemaHint);
					$nc(this->fSchemaGrammarDescription)->setLocationHints($$new($StringArray, {schemaHint}));
					$nc(this->fSchemaGrammarDescription)->setTargetNamespace(schemaNamespace);
					$var($SchemaGrammar, isg, findGrammar(this->fSchemaGrammarDescription, this->fNamespaceGrowth));
					if (isg != nullptr) {
						if (this->fNamespaceGrowth) {
							try {
								if ($nc($(isg->getDocumentLocations()))->contains($($XMLEntityManager::expandSystemId(schemaHint, $($nc(this->fSchemaGrammarDescription)->getBaseSystemId()), false)))) {
									continue;
								} else {
									importCollision = true;
								}
							} catch ($URI$MalformedURIException& e) {
							}
						} else if (!this->fHonourAllSchemaLocations || isExistingGrammar(this->fSchemaGrammarDescription, false)) {
							continue;
						}
					}
					$assign(newSchemaRoot, resolveSchema(this->fSchemaGrammarDescription, false, child, isg == nullptr));
				} else {
					bool var$1 = (localName->equals($SchemaSymbols::ELT_INCLUDE));
					if (var$1 || (localName->equals($SchemaSymbols::ELT_REDEFINE))) {
						$var($ObjectArray, includeAttrs, $nc(this->fAttributeChecker)->checkAttributes(child, true, currSchemaInfo));
						$assign(schemaHint, $cast($String, $nc(includeAttrs)->get($XSAttributeChecker::ATTIDX_SCHEMALOCATION)));
						if (localName->equals($SchemaSymbols::ELT_REDEFINE)) {
							if (this->fRedefine2NSSupport == nullptr) {
								$set(this, fRedefine2NSSupport, $new($HashMap));
							}
							$nc(this->fRedefine2NSSupport)->put(child, $$new($SchemaNamespaceSupport, currSchemaInfo->fNamespaceSupport));
						}
						if (localName->equals($SchemaSymbols::ELT_INCLUDE)) {
							$var($Element, includeChild, $DOMUtil::getFirstChildElement(child));
							if (includeChild != nullptr) {
								$var($String, includeComponentType, $DOMUtil::getLocalName(includeChild));
								if ($nc(includeComponentType)->equals($SchemaSymbols::ELT_ANNOTATION)) {
									sg->addAnnotation($($nc(this->fElementTraverser)->traverseAnnotationDecl(includeChild, includeAttrs, true, currSchemaInfo)));
								} else {
									reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
										$of(localName),
										$of("annotation?"_s),
										$of(includeComponentType)
									}), child);
								}
								if ($DOMUtil::getNextSiblingElement(includeChild) != nullptr) {
									reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
										$of(localName),
										$of("annotation?"_s),
										$($of($DOMUtil::getLocalName($($DOMUtil::getNextSiblingElement(includeChild)))))
									}), child);
								}
							} else {
								$var($String, text, $DOMUtil::getSyntheticAnnotation(child));
								if (text != nullptr) {
									sg->addAnnotation($($nc(this->fElementTraverser)->traverseSyntheticAnnotation(child, text, includeAttrs, true, currSchemaInfo)));
								}
							}
						} else {
							{
								$var($Element, redefinedChild, $DOMUtil::getFirstChildElement(child));
								for (; redefinedChild != nullptr; $assign(redefinedChild, $DOMUtil::getNextSiblingElement(redefinedChild))) {
									$var($String, redefinedComponentType, $DOMUtil::getLocalName(redefinedChild));
									if ($nc(redefinedComponentType)->equals($SchemaSymbols::ELT_ANNOTATION)) {
										sg->addAnnotation($($nc(this->fElementTraverser)->traverseAnnotationDecl(redefinedChild, includeAttrs, true, currSchemaInfo)));
										$DOMUtil::setHidden(redefinedChild, this->fHiddenNodes);
									} else {
										$var($String, text, $DOMUtil::getSyntheticAnnotation(child));
										if (text != nullptr) {
											sg->addAnnotation($($nc(this->fElementTraverser)->traverseSyntheticAnnotation(child, text, includeAttrs, true, currSchemaInfo)));
										}
									}
								}
							}
						}
						$nc(this->fAttributeChecker)->returnAttrArray(includeAttrs, currSchemaInfo);
						if (schemaHint == nullptr) {
							reportSchemaError("s4s-att-must-appear"_s, $$new($ObjectArray, {
								$of("<include> or <redefine>"_s),
								$of("schemaLocation"_s)
							}), child);
						}
						bool mustResolve = false;
						refType = $XSDDescription::CONTEXT_INCLUDE;
						if (localName->equals($SchemaSymbols::ELT_REDEFINE)) {
							mustResolve = nonAnnotationContent(child);
							refType = $XSDDescription::CONTEXT_REDEFINE;
						}
						$nc(this->fSchemaGrammarDescription)->reset();
						$nc(this->fSchemaGrammarDescription)->setContextType(refType);
						$nc(this->fSchemaGrammarDescription)->setBaseSystemId($(doc2SystemId(schemaRoot)));
						$nc(this->fSchemaGrammarDescription)->setLocationHints($$new($StringArray, {schemaHint}));
						$nc(this->fSchemaGrammarDescription)->setTargetNamespace(callerTNS);
						bool alreadyTraversed = false;
						$var($XMLInputSource, schemaSource, resolveSchemaSource(this->fSchemaGrammarDescription, mustResolve, child, true));
						if (this->fNamespaceGrowth && refType == $XSDDescription::CONTEXT_INCLUDE) {
							try {
								$var($String, var$2, $nc(schemaSource)->getSystemId());
								$var($String, schemaId, $XMLEntityManager::expandSystemId(var$2, $(schemaSource->getBaseSystemId()), false));
								alreadyTraversed = $nc($(sg->getDocumentLocations()))->contains(schemaId);
							} catch ($URI$MalformedURIException& e) {
							}
						}
						if (!alreadyTraversed) {
							$assign(newSchemaRoot, resolveSchema(schemaSource, this->fSchemaGrammarDescription, mustResolve, child));
							$assign(schemaNamespace, currSchemaInfo->fTargetNamespace);
						} else {
							this->fLastSchemaWasDuplicate = true;
						}
					} else {
						break;
					}
				}
			}
			$var($XSDocumentInfo, newSchemaInfo, nullptr);
			if (this->fLastSchemaWasDuplicate) {
				$assign(newSchemaInfo, newSchemaRoot == nullptr ? ($XSDocumentInfo*)nullptr : $cast($XSDocumentInfo, $nc(this->fDoc2XSDocumentMap)->get(newSchemaRoot)));
			} else {
				$assign(newSchemaInfo, constructTrees(newSchemaRoot, schemaHint, this->fSchemaGrammarDescription, importCollision));
			}
			if ($nc(localName)->equals($SchemaSymbols::ELT_REDEFINE) && newSchemaInfo != nullptr) {
				if (this->fRedefine2XSDMap == nullptr) {
					$set(this, fRedefine2XSDMap, $new($HashMap));
				}
				$nc(this->fRedefine2XSDMap)->put(child, newSchemaInfo);
			}
			if (newSchemaRoot != nullptr) {
				if (newSchemaInfo != nullptr) {
					dependencies->add(newSchemaInfo);
				}
				$assign(newSchemaRoot, nullptr);
			}
		}
	}
	$nc(this->fDependencyMap)->put(currSchemaInfo, dependencies);
	return currSchemaInfo;
}

bool XSDHandler::isExistingGrammar($XSDDescription* desc, bool ignoreConflict) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $nc(this->fGrammarBucket)->getGrammar($($nc(desc)->getTargetNamespace())));
	if (sg == nullptr) {
		return findGrammar(desc, ignoreConflict) != nullptr;
	} else if ($nc(sg)->isImmutable()) {
		return true;
	} else {
		try {
			$var($String, var$0, $nc(desc)->getLiteralSystemId());
			return $nc($(sg->getDocumentLocations()))->contains($($XMLEntityManager::expandSystemId(var$0, $(desc->getBaseSystemId()), false)));
		} catch ($URI$MalformedURIException& e) {
			return false;
		}
	}
	$shouldNotReachHere();
}

void XSDHandler::updateImportListFor($SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($List, importedGrammars, $nc(grammar)->getImportedGrammars());
	if (importedGrammars != nullptr) {
		for (int32_t i = 0; i < importedGrammars->size(); ++i) {
			$var($SchemaGrammar, isg1, $cast($SchemaGrammar, importedGrammars->get(i)));
			$var($SchemaGrammar, isg2, $nc(this->fGrammarBucket)->getGrammar($($nc(isg1)->getTargetNamespace())));
			if (isg2 != nullptr && isg1 != isg2) {
				importedGrammars->set(i, isg2);
			}
		}
	}
}

void XSDHandler::updateImportListWith($SchemaGrammar* newGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammarArray, schemaGrammars, $nc(this->fGrammarBucket)->getGrammars());
	for (int32_t i = 0; i < $nc(schemaGrammars)->length; ++i) {
		$var($SchemaGrammar, sg, schemaGrammars->get(i));
		if (sg != newGrammar) {
			$var($List, importedGrammars, $nc(sg)->getImportedGrammars());
			if (importedGrammars != nullptr) {
				for (int32_t j = 0; j < importedGrammars->size(); ++j) {
					$var($SchemaGrammar, isg, $cast($SchemaGrammar, importedGrammars->get(j)));
					if ($nc($(null2EmptyString($($nc(isg)->getTargetNamespace()))))->equals($(null2EmptyString($($nc(newGrammar)->getTargetNamespace()))))) {
						if (isg != newGrammar) {
							importedGrammars->set(j, newGrammar);
						}
						break;
					}
				}
			}
		}
	}
}

void XSDHandler::buildGlobalNameRegistries() {
	$useLocalCurrentObjectStackCache();
	this->registryEmpty = false;
	$var($Stack, schemasToProcess, $new($Stack));
	schemasToProcess->push(this->fRoot);
	while (!schemasToProcess->empty()) {
		$var($XSDocumentInfo, currSchemaDoc, $cast($XSDocumentInfo, schemasToProcess->pop()));
		$var($Element, currDoc, $nc(currSchemaDoc)->fSchemaElement);
		if ($DOMUtil::isHidden(currDoc, this->fHiddenNodes)) {
			continue;
		}
		$var($Element, currRoot, currDoc);
		bool dependenciesCanOccur = true;
		{
			$var($Element, globalComp, $DOMUtil::getFirstChildElement(currRoot));
			for (; globalComp != nullptr; $assign(globalComp, $DOMUtil::getNextSiblingElement(globalComp))) {
				$init($SchemaSymbols);
				if ($nc($($DOMUtil::getLocalName(globalComp)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
					continue;
				} else {
					bool var$1 = $nc($($DOMUtil::getLocalName(globalComp)))->equals($SchemaSymbols::ELT_INCLUDE);
					if (var$1 || $nc($($DOMUtil::getLocalName(globalComp)))->equals($SchemaSymbols::ELT_IMPORT)) {
						if (!dependenciesCanOccur) {
							reportSchemaError("s4s-elt-invalid-content.3"_s, $$new($ObjectArray, {$($of($DOMUtil::getLocalName(globalComp)))}), globalComp);
						}
						$DOMUtil::setHidden(globalComp, this->fHiddenNodes);
					} else {
						if ($nc($($DOMUtil::getLocalName(globalComp)))->equals($SchemaSymbols::ELT_REDEFINE)) {
							if (!dependenciesCanOccur) {
								reportSchemaError("s4s-elt-invalid-content.3"_s, $$new($ObjectArray, {$($of($DOMUtil::getLocalName(globalComp)))}), globalComp);
							}
							{
								$var($Element, redefineComp, $DOMUtil::getFirstChildElement(globalComp));
								for (; redefineComp != nullptr; $assign(redefineComp, $DOMUtil::getNextSiblingElement(redefineComp))) {
									$var($String, lName, $DOMUtil::getAttrValue(redefineComp, $SchemaSymbols::ATT_NAME));
									if ($nc(lName)->length() == 0) {
										continue;
									}
									$var($String, qName, currSchemaDoc->fTargetNamespace == nullptr ? $str({","_s, lName}) : $str({currSchemaDoc->fTargetNamespace, ","_s, lName}));
									$assign(qName, $XMLChar::trim(qName));
									$var($String, componentType, $DOMUtil::getLocalName(redefineComp));
									if ($nc(componentType)->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
										checkForDuplicateNames(qName, XSDHandler::ATTRIBUTEGROUP_TYPE, this->fUnparsedAttributeGroupRegistry, this->fUnparsedAttributeGroupRegistrySub, redefineComp, currSchemaDoc);
										$var($String, targetLName, $str({$($DOMUtil::getAttrValue(redefineComp, $SchemaSymbols::ATT_NAME)), XSDHandler::REDEF_IDENTIFIER}));
										renameRedefiningComponents(currSchemaDoc, redefineComp, $SchemaSymbols::ELT_ATTRIBUTEGROUP, lName, targetLName);
									} else {
										bool var$3 = (componentType->equals($SchemaSymbols::ELT_COMPLEXTYPE));
										if (var$3 || (componentType->equals($SchemaSymbols::ELT_SIMPLETYPE))) {
											checkForDuplicateNames(qName, XSDHandler::TYPEDECL_TYPE, this->fUnparsedTypeRegistry, this->fUnparsedTypeRegistrySub, redefineComp, currSchemaDoc);
											$var($String, targetLName, $str({$($DOMUtil::getAttrValue(redefineComp, $SchemaSymbols::ATT_NAME)), XSDHandler::REDEF_IDENTIFIER}));
											if (componentType->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
												renameRedefiningComponents(currSchemaDoc, redefineComp, $SchemaSymbols::ELT_COMPLEXTYPE, lName, targetLName);
											} else {
												renameRedefiningComponents(currSchemaDoc, redefineComp, $SchemaSymbols::ELT_SIMPLETYPE, lName, targetLName);
											}
										} else {
											if (componentType->equals($SchemaSymbols::ELT_GROUP)) {
												checkForDuplicateNames(qName, XSDHandler::GROUP_TYPE, this->fUnparsedGroupRegistry, this->fUnparsedGroupRegistrySub, redefineComp, currSchemaDoc);
												$var($String, targetLName, $str({$($DOMUtil::getAttrValue(redefineComp, $SchemaSymbols::ATT_NAME)), XSDHandler::REDEF_IDENTIFIER}));
												renameRedefiningComponents(currSchemaDoc, redefineComp, $SchemaSymbols::ELT_GROUP, lName, targetLName);
											}
										}
									}
								}
							}
						} else {
							dependenciesCanOccur = false;
							$var($String, lName, $DOMUtil::getAttrValue(globalComp, $SchemaSymbols::ATT_NAME));
							if ($nc(lName)->length() == 0) {
								continue;
							}
							$var($String, qName, currSchemaDoc->fTargetNamespace == nullptr ? $str({","_s, lName}) : $str({currSchemaDoc->fTargetNamespace, ","_s, lName}));
							$assign(qName, $XMLChar::trim(qName));
							$var($String, componentType, $DOMUtil::getLocalName(globalComp));
							if ($nc(componentType)->equals($SchemaSymbols::ELT_ATTRIBUTE)) {
								checkForDuplicateNames(qName, XSDHandler::ATTRIBUTE_TYPE, this->fUnparsedAttributeRegistry, this->fUnparsedAttributeRegistrySub, globalComp, currSchemaDoc);
							} else {
								if (componentType->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
									checkForDuplicateNames(qName, XSDHandler::ATTRIBUTEGROUP_TYPE, this->fUnparsedAttributeGroupRegistry, this->fUnparsedAttributeGroupRegistrySub, globalComp, currSchemaDoc);
								} else {
									bool var$5 = (componentType->equals($SchemaSymbols::ELT_COMPLEXTYPE));
									if (var$5 || (componentType->equals($SchemaSymbols::ELT_SIMPLETYPE))) {
										checkForDuplicateNames(qName, XSDHandler::TYPEDECL_TYPE, this->fUnparsedTypeRegistry, this->fUnparsedTypeRegistrySub, globalComp, currSchemaDoc);
									} else {
										if (componentType->equals($SchemaSymbols::ELT_ELEMENT)) {
											checkForDuplicateNames(qName, XSDHandler::ELEMENT_TYPE, this->fUnparsedElementRegistry, this->fUnparsedElementRegistrySub, globalComp, currSchemaDoc);
										} else {
											if (componentType->equals($SchemaSymbols::ELT_GROUP)) {
												checkForDuplicateNames(qName, XSDHandler::GROUP_TYPE, this->fUnparsedGroupRegistry, this->fUnparsedGroupRegistrySub, globalComp, currSchemaDoc);
											} else {
												if (componentType->equals($SchemaSymbols::ELT_NOTATION)) {
													checkForDuplicateNames(qName, XSDHandler::NOTATION_TYPE, this->fUnparsedNotationRegistry, this->fUnparsedNotationRegistrySub, globalComp, currSchemaDoc);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		$DOMUtil::setHidden(currDoc, this->fHiddenNodes);
		$var($List, currSchemaDepends, $cast($List, $nc(this->fDependencyMap)->get(currSchemaDoc)));
		{
			$var($Iterator, i$, $nc(currSchemaDepends)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($XSDocumentInfo, currSchemaDepend, $cast($XSDocumentInfo, i$->next()));
				{
					schemasToProcess->push(currSchemaDepend);
				}
			}
		}
	}
}

void XSDHandler::traverseSchemas($List* annotationInfo) {
	$useLocalCurrentObjectStackCache();
	setSchemasVisible(this->fRoot);
	$var($Stack, schemasToProcess, $new($Stack));
	schemasToProcess->push(this->fRoot);
	while (!schemasToProcess->empty()) {
		$var($XSDocumentInfo, currSchemaDoc, $cast($XSDocumentInfo, schemasToProcess->pop()));
		$var($Element, currDoc, $nc(currSchemaDoc)->fSchemaElement);
		$var($SchemaGrammar, currSG, $nc(this->fGrammarBucket)->getGrammar(currSchemaDoc->fTargetNamespace));
		if ($DOMUtil::isHidden(currDoc, this->fHiddenNodes)) {
			continue;
		}
		$var($Element, currRoot, currDoc);
		bool sawAnnotation = false;
		{
			$var($Element, globalComp, $DOMUtil::getFirstVisibleChildElement(currRoot, this->fHiddenNodes));
			for (; globalComp != nullptr; $assign(globalComp, $DOMUtil::getNextVisibleSiblingElement(globalComp, this->fHiddenNodes))) {
				$DOMUtil::setHidden(globalComp, this->fHiddenNodes);
				$var($String, componentType, $DOMUtil::getLocalName(globalComp));
				$init($SchemaSymbols);
				if ($nc($($DOMUtil::getLocalName(globalComp)))->equals($SchemaSymbols::ELT_REDEFINE)) {
					currSchemaDoc->backupNSSupport((this->fRedefine2NSSupport != nullptr) ? $cast($SchemaNamespaceSupport, $($nc(this->fRedefine2NSSupport)->get(globalComp))) : ($SchemaNamespaceSupport*)nullptr);
					{
						$var($Element, redefinedComp, $DOMUtil::getFirstVisibleChildElement(globalComp, this->fHiddenNodes));
						for (; redefinedComp != nullptr; $assign(redefinedComp, $DOMUtil::getNextVisibleSiblingElement(redefinedComp, this->fHiddenNodes))) {
							$var($String, redefinedComponentType, $DOMUtil::getLocalName(redefinedComp));
							$DOMUtil::setHidden(redefinedComp, this->fHiddenNodes);
							if ($nc(redefinedComponentType)->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
								$nc(this->fAttributeGroupTraverser)->traverseGlobal(redefinedComp, currSchemaDoc, currSG);
							} else {
								if (redefinedComponentType->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
									$nc(this->fComplexTypeTraverser)->traverseGlobal(redefinedComp, currSchemaDoc, currSG);
								} else {
									if (redefinedComponentType->equals($SchemaSymbols::ELT_GROUP)) {
										$nc(this->fGroupTraverser)->traverseGlobal(redefinedComp, currSchemaDoc, currSG);
									} else {
										if (redefinedComponentType->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
											$nc(this->fSimpleTypeTraverser)->traverseGlobal(redefinedComp, currSchemaDoc, currSG);
										} else {
											reportSchemaError("s4s-elt-must-match.1"_s, $$new($ObjectArray, {
												$($of($DOMUtil::getLocalName(globalComp))),
												$of("(annotation | (simpleType | complexType | group | attributeGroup))*"_s),
												$of(redefinedComponentType)
											}), redefinedComp);
										}
									}
								}
							}
						}
					}
					currSchemaDoc->restoreNSSupport();
				} else {
					if ($nc(componentType)->equals($SchemaSymbols::ELT_ATTRIBUTE)) {
						$nc(this->fAttributeTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
					} else {
						if (componentType->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
							$nc(this->fAttributeGroupTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
						} else {
							if (componentType->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
								$nc(this->fComplexTypeTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
							} else {
								if (componentType->equals($SchemaSymbols::ELT_ELEMENT)) {
									$nc(this->fElementTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
								} else {
									if (componentType->equals($SchemaSymbols::ELT_GROUP)) {
										$nc(this->fGroupTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
									} else {
										if (componentType->equals($SchemaSymbols::ELT_NOTATION)) {
											$nc(this->fNotationTraverser)->traverse(globalComp, currSchemaDoc, currSG);
										} else {
											if (componentType->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
												$nc(this->fSimpleTypeTraverser)->traverseGlobal(globalComp, currSchemaDoc, currSG);
											} else {
												if (componentType->equals($SchemaSymbols::ELT_ANNOTATION)) {
													$nc(currSG)->addAnnotation($($nc(this->fElementTraverser)->traverseAnnotationDecl(globalComp, $(currSchemaDoc->getSchemaAttrs()), true, currSchemaDoc)));
													sawAnnotation = true;
												} else {
													reportSchemaError("s4s-elt-invalid-content.1"_s, $$new($ObjectArray, {
														$of($SchemaSymbols::ELT_SCHEMA),
														$($of($DOMUtil::getLocalName(globalComp)))
													}), globalComp);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!sawAnnotation) {
			$var($String, text, $DOMUtil::getSyntheticAnnotation(currRoot));
			if (text != nullptr) {
				$nc(currSG)->addAnnotation($($nc(this->fElementTraverser)->traverseSyntheticAnnotation(currRoot, text, $(currSchemaDoc->getSchemaAttrs()), true, currSchemaDoc)));
			}
		}
		if (annotationInfo != nullptr) {
			$var($XSAnnotationInfo, info, currSchemaDoc->getAnnotations());
			if (info != nullptr) {
				annotationInfo->add($(doc2SystemId(currDoc)));
				annotationInfo->add(info);
			}
		}
		currSchemaDoc->returnSchemaAttrs();
		$DOMUtil::setHidden(currDoc, this->fHiddenNodes);
		$var($List, currSchemaDepends, $cast($List, $nc(this->fDependencyMap)->get(currSchemaDoc)));
		{
			$var($Iterator, i$, $nc(currSchemaDepends)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($XSDocumentInfo, currSchemaDepend, $cast($XSDocumentInfo, i$->next()));
				{
					schemasToProcess->push(currSchemaDepend);
				}
			}
		}
	}
}

bool XSDHandler::needReportTNSError($String* uri) {
	if (this->fReportedTNS == nullptr) {
		$set(this, fReportedTNS, $new($ArrayList));
	} else if ($nc(this->fReportedTNS)->contains(uri)) {
		return false;
	}
	$nc(this->fReportedTNS)->add(uri);
	return true;
}

void XSDHandler::addGlobalAttributeDecl($XSAttributeDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalAttrDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalAttrDecls)->put(declKey, decl);
	}
}

void XSDHandler::addGlobalAttributeGroupDecl($XSAttributeGroupDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalAttrGrpDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalAttrGrpDecls)->put(declKey, decl);
	}
}

void XSDHandler::addGlobalElementDecl($XSElementDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalElemDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalElemDecls)->put(declKey, decl);
	}
}

void XSDHandler::addGlobalGroupDecl($XSGroupDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalGroupDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalGroupDecls)->put(declKey, decl);
	}
}

void XSDHandler::addGlobalNotationDecl($XSNotationDecl* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalNotationDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalNotationDecls)->put(declKey, decl);
	}
}

void XSDHandler::addGlobalTypeDecl($XSTypeDefinition* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getName())}) : $str({namespace$, ","_s, $(decl->getName())}));
	if ($nc(this->fGlobalTypeDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalTypeDecls)->put(declKey, decl);
	}
}

void XSDHandler::addIDConstraintDecl($IdentityConstraint* decl) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(decl)->getNamespace());
	$var($String, declKey, (namespace$ == nullptr || $nc(namespace$)->length() == 0) ? $str({","_s, $(decl->getIdentityConstraintName())}) : $str({namespace$, ","_s, $(decl->getIdentityConstraintName())}));
	if ($nc(this->fGlobalIDConstraintDecls)->get(declKey) == nullptr) {
		$nc(this->fGlobalIDConstraintDecls)->put(declKey, decl);
	}
}

$XSAttributeDecl* XSDHandler::getGlobalAttributeDecl($String* declKey) {
	return $cast($XSAttributeDecl, $nc(this->fGlobalAttrDecls)->get(declKey));
}

$XSAttributeGroupDecl* XSDHandler::getGlobalAttributeGroupDecl($String* declKey) {
	return $cast($XSAttributeGroupDecl, $nc(this->fGlobalAttrGrpDecls)->get(declKey));
}

$XSElementDecl* XSDHandler::getGlobalElementDecl($String* declKey) {
	return $cast($XSElementDecl, $nc(this->fGlobalElemDecls)->get(declKey));
}

$XSGroupDecl* XSDHandler::getGlobalGroupDecl($String* declKey) {
	return $cast($XSGroupDecl, $nc(this->fGlobalGroupDecls)->get(declKey));
}

$XSNotationDecl* XSDHandler::getGlobalNotationDecl($String* declKey) {
	return $cast($XSNotationDecl, $nc(this->fGlobalNotationDecls)->get(declKey));
}

$XSTypeDefinition* XSDHandler::getGlobalTypeDecl($String* declKey) {
	return $cast($XSTypeDefinition, $nc(this->fGlobalTypeDecls)->get(declKey));
}

$IdentityConstraint* XSDHandler::getIDConstraintDecl($String* declKey) {
	return $cast($IdentityConstraint, $nc(this->fGlobalIDConstraintDecls)->get(declKey));
}

$Object* XSDHandler::getGlobalDecl($XSDocumentInfo* currSchema, int32_t declType, $QName* declToTraverse, $Element* elmNode) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	if ($nc(declToTraverse)->uri != nullptr && declToTraverse->uri == $SchemaSymbols::URI_SCHEMAFORSCHEMA) {
		if (declType == XSDHandler::TYPEDECL_TYPE) {
			$init($SchemaGrammar);
			$var($Object, retObj, $nc($SchemaGrammar::SG_SchemaNS)->getGlobalTypeDecl(declToTraverse->localpart));
			if (retObj != nullptr) {
				return $of(retObj);
			}
		}
	}
	if (!$nc(currSchema)->isAllowedNS($nc(declToTraverse)->uri)) {
		if (currSchema->needReportTNSError($nc(declToTraverse)->uri)) {
			$var($String, code, $nc(declToTraverse)->uri == nullptr ? "src-resolve.4.1"_s : "src-resolve.4.2"_s);
			reportSchemaError(code, $$new($ObjectArray, {
				$($nc(this->fDoc2SystemId)->get(currSchema->fSchemaElement)),
				$of($nc(declToTraverse)->uri),
				$of(declToTraverse->rawname)
			}), elmNode);
		}
	}
	$var($SchemaGrammar, sGrammar, $nc(this->fGrammarBucket)->getGrammar($nc(declToTraverse)->uri));
	if (sGrammar == nullptr) {
		if (needReportTNSError($nc(declToTraverse)->uri)) {
			reportSchemaError("src-resolve"_s, $$new($ObjectArray, {
				$of($nc(declToTraverse)->rawname),
				$of($nc(XSDHandler::COMP_TYPE)->get(declType))
			}), elmNode);
		}
		return $of(nullptr);
	}
	$var($Object, retObj, getGlobalDeclFromGrammar(sGrammar, declType, $nc(declToTraverse)->localpart));
	$var($String, declKey, $nc(declToTraverse)->uri == nullptr ? $str({","_s, $nc(declToTraverse)->localpart}) : $str({declToTraverse->uri, ","_s, declToTraverse->localpart}));
	if (!this->fTolerateDuplicates) {
		if (retObj != nullptr) {
			return $of(retObj);
		}
	} else {
		$var($Object, retObj2, getGlobalDecl(declKey, declType));
		if (retObj2 != nullptr) {
			return $of(retObj2);
		}
	}
	$var($XSDocumentInfo, schemaWithDecl, nullptr);
	$var($Element, decl, nullptr);
	$var($XSDocumentInfo, declDoc, nullptr);
	switch (declType) {
	case XSDHandler::ATTRIBUTE_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedAttributeRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedAttributeRegistrySub, declKey));
			break;
		}
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedAttributeGroupRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedAttributeGroupRegistrySub, declKey));
			break;
		}
	case XSDHandler::ELEMENT_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedElementRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedElementRegistrySub, declKey));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedGroupRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedGroupRegistrySub, declKey));
			break;
		}
	case XSDHandler::IDENTITYCONSTRAINT_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedIdentityConstraintRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedIdentityConstraintRegistrySub, declKey));
			break;
		}
	case XSDHandler::NOTATION_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedNotationRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedNotationRegistrySub, declKey));
			break;
		}
	case XSDHandler::TYPEDECL_TYPE:
		{
			$assign(decl, getElementFromMap(this->fUnparsedTypeRegistry, declKey));
			$assign(declDoc, getDocInfoFromMap(this->fUnparsedTypeRegistrySub, declKey));
			break;
		}
	default:
		{
			reportSchemaError("Internal-Error"_s, $$new($ObjectArray, {$of($$str({"XSDHandler asked to locate component of type "_s, $$str(declType), "; it does not recognize this type!"_s}))}), elmNode);
		}
	}
	if (decl == nullptr) {
		if (retObj == nullptr) {
			reportSchemaError("src-resolve"_s, $$new($ObjectArray, {
				$of(declToTraverse->rawname),
				$of($nc(XSDHandler::COMP_TYPE)->get(declType))
			}), elmNode);
		}
		return $of(retObj);
	}
	$assign(schemaWithDecl, findXSDocumentForDecl(currSchema, decl, declDoc));
	if (schemaWithDecl == nullptr) {
		if (retObj == nullptr) {
			$var($String, code, declToTraverse->uri == nullptr ? "src-resolve.4.1"_s : "src-resolve.4.2"_s);
			reportSchemaError(code, $$new($ObjectArray, {
				$($nc(this->fDoc2SystemId)->get($nc(currSchema)->fSchemaElement)),
				$of(declToTraverse->uri),
				$of(declToTraverse->rawname)
			}), elmNode);
		}
		return $of(retObj);
	}
	if ($DOMUtil::isHidden(decl, this->fHiddenNodes)) {
		if (retObj == nullptr) {
			$var($String, code, $nc(XSDHandler::CIRCULAR_CODES)->get(declType));
			if (declType == XSDHandler::TYPEDECL_TYPE) {
				if ($nc($SchemaSymbols::ELT_COMPLEXTYPE)->equals($($DOMUtil::getLocalName(decl)))) {
					$assign(code, "ct-props-correct.3"_s);
				}
			}
			reportSchemaError(code, $$new($ObjectArray, {$of($$str({declToTraverse->prefix, ":"_s, declToTraverse->localpart}))}), elmNode);
		}
		return $of(retObj);
	}
	return $of(traverseGlobalDecl(declType, decl, schemaWithDecl, sGrammar));
}

$Object* XSDHandler::getGlobalDecl($String* declKey, int32_t declType) {
	$var($Object, retObj, nullptr);
	switch (declType) {
	case XSDHandler::ATTRIBUTE_TYPE:
		{
			$assign(retObj, getGlobalAttributeDecl(declKey));
			break;
		}
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(retObj, getGlobalAttributeGroupDecl(declKey));
			break;
		}
	case XSDHandler::ELEMENT_TYPE:
		{
			$assign(retObj, getGlobalElementDecl(declKey));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(retObj, getGlobalGroupDecl(declKey));
			break;
		}
	case XSDHandler::IDENTITYCONSTRAINT_TYPE:
		{
			$assign(retObj, getIDConstraintDecl(declKey));
			break;
		}
	case XSDHandler::NOTATION_TYPE:
		{
			$assign(retObj, getGlobalNotationDecl(declKey));
			break;
		}
	case XSDHandler::TYPEDECL_TYPE:
		{
			$assign(retObj, getGlobalTypeDecl(declKey));
			break;
		}
	}
	return $of(retObj);
}

$Object* XSDHandler::getGlobalDeclFromGrammar($SchemaGrammar* sGrammar, int32_t declType, $String* localpart) {
	$var($Object, retObj, nullptr);
	switch (declType) {
	case XSDHandler::ATTRIBUTE_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalAttributeDecl(localpart));
			break;
		}
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalAttributeGroupDecl(localpart));
			break;
		}
	case XSDHandler::ELEMENT_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalElementDecl(localpart));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalGroupDecl(localpart));
			break;
		}
	case XSDHandler::IDENTITYCONSTRAINT_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getIDConstraintDecl(localpart));
			break;
		}
	case XSDHandler::NOTATION_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalNotationDecl(localpart));
			break;
		}
	case XSDHandler::TYPEDECL_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalTypeDecl(localpart));
			break;
		}
	}
	return $of(retObj);
}

$Object* XSDHandler::getGlobalDeclFromGrammar($SchemaGrammar* sGrammar, int32_t declType, $String* localpart, $String* schemaLoc) {
	$var($Object, retObj, nullptr);
	switch (declType) {
	case XSDHandler::ATTRIBUTE_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalAttributeDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalAttributeGroupDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::ELEMENT_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalElementDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalGroupDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::IDENTITYCONSTRAINT_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getIDConstraintDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::NOTATION_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalNotationDecl(localpart, schemaLoc));
			break;
		}
	case XSDHandler::TYPEDECL_TYPE:
		{
			$assign(retObj, $nc(sGrammar)->getGlobalTypeDecl(localpart, schemaLoc));
			break;
		}
	}
	return $of(retObj);
}

$Object* XSDHandler::traverseGlobalDecl(int32_t declType, $Element* decl, $XSDocumentInfo* schemaDoc, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($Object, retObj, nullptr);
	$DOMUtil::setHidden(decl, this->fHiddenNodes);
	$var($SchemaNamespaceSupport, nsSupport, nullptr);
	$var($Element, parent, $DOMUtil::getParent(decl));
	$init($SchemaSymbols);
	if ($nc($($DOMUtil::getLocalName(parent)))->equals($SchemaSymbols::ELT_REDEFINE)) {
		$assign(nsSupport, (this->fRedefine2NSSupport != nullptr) ? $cast($SchemaNamespaceSupport, $nc(this->fRedefine2NSSupport)->get(parent)) : ($SchemaNamespaceSupport*)nullptr);
	}
	$nc(schemaDoc)->backupNSSupport(nsSupport);
	switch (declType) {
	case XSDHandler::TYPEDECL_TYPE:
		{
			if ($nc($($DOMUtil::getLocalName(decl)))->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
				$assign(retObj, $nc(this->fComplexTypeTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			} else {
				$assign(retObj, $nc(this->fSimpleTypeTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			}
			break;
		}
	case XSDHandler::ATTRIBUTE_TYPE:
		{
			$assign(retObj, $nc(this->fAttributeTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			break;
		}
	case XSDHandler::ELEMENT_TYPE:
		{
			$assign(retObj, $nc(this->fElementTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			break;
		}
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(retObj, $nc(this->fAttributeGroupTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(retObj, $nc(this->fGroupTraverser)->traverseGlobal(decl, schemaDoc, grammar));
			break;
		}
	case XSDHandler::NOTATION_TYPE:
		{
			$assign(retObj, $nc(this->fNotationTraverser)->traverse(decl, schemaDoc, grammar));
			break;
		}
	case XSDHandler::IDENTITYCONSTRAINT_TYPE:
		{
			break;
		}
	}
	schemaDoc->restoreNSSupport();
	return $of(retObj);
}

$String* XSDHandler::schemaDocument2SystemId($XSDocumentInfo* schemaDoc) {
	return $cast($String, $nc(this->fDoc2SystemId)->get($nc(schemaDoc)->fSchemaElement));
}

$Object* XSDHandler::getGrpOrAttrGrpRedefinedByRestriction(int32_t type, $QName* name, $XSDocumentInfo* currSchema, $Element* elmNode) {
	$useLocalCurrentObjectStackCache();
	$var($String, realName, $nc(name)->uri != nullptr ? $str({$nc(name)->uri, ","_s, name->localpart}) : $str({","_s, name->localpart}));
	$var($String, nameToFind, nullptr);
	switch (type) {
	case XSDHandler::ATTRIBUTEGROUP_TYPE:
		{
			$assign(nameToFind, $cast($String, $nc(this->fRedefinedRestrictedAttributeGroupRegistry)->get(realName)));
			break;
		}
	case XSDHandler::GROUP_TYPE:
		{
			$assign(nameToFind, $cast($String, $nc(this->fRedefinedRestrictedGroupRegistry)->get(realName)));
			break;
		}
	default:
		{
			return $of(nullptr);
		}
	}
	if (nameToFind == nullptr) {
		return $of(nullptr);
	}
	int32_t commaPos = $nc(nameToFind)->indexOf(","_s);
	$init($XMLSymbols);
	$var($String, var$0, $XMLSymbols::EMPTY_STRING);
	$var($String, var$1, nameToFind->substring(commaPos + 1));
	$var($String, var$2, nameToFind->substring(commaPos));
	$var($QName, qNameToFind, $new($QName, var$0, var$1, var$2, (commaPos == 0) ? ($String*)nullptr : $(nameToFind->substring(0, commaPos))));
	$var($Object, retObj, getGlobalDecl(currSchema, type, qNameToFind, elmNode));
	if (retObj == nullptr) {
		switch (type) {
		case XSDHandler::ATTRIBUTEGROUP_TYPE:
			{
				reportSchemaError("src-redefine.7.2.1"_s, $$new($ObjectArray, {$of(name->localpart)}), elmNode);
				break;
			}
		case XSDHandler::GROUP_TYPE:
			{
				reportSchemaError("src-redefine.6.2.1"_s, $$new($ObjectArray, {$of(name->localpart)}), elmNode);
				break;
			}
		}
		return $of(nullptr);
	}
	return $of(retObj);
}

void XSDHandler::resolveKeyRefs() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->fKeyrefStackPos; ++i) {
		$var($XSDocumentInfo, keyrefSchemaDoc, $nc(this->fKeyrefsMapXSDocumentInfo)->get(i));
		$nc($nc(keyrefSchemaDoc)->fNamespaceSupport)->makeGlobal();
		$nc(keyrefSchemaDoc->fNamespaceSupport)->setEffectiveContext($nc(this->fKeyrefNamespaceContext)->get(i));
		$var($SchemaGrammar, keyrefGrammar, $nc(this->fGrammarBucket)->getGrammar(keyrefSchemaDoc->fTargetNamespace));
		$DOMUtil::setHidden($nc(this->fKeyrefs)->get(i), this->fHiddenNodes);
		$nc(this->fKeyrefTraverser)->traverse($nc(this->fKeyrefs)->get(i), $nc(this->fKeyrefElems)->get(i), keyrefSchemaDoc, keyrefGrammar);
	}
}

$Map* XSDHandler::getIDRegistry() {
	return this->fUnparsedIdentityConstraintRegistry;
}

$Map* XSDHandler::getIDRegistry_sub() {
	return this->fUnparsedIdentityConstraintRegistrySub;
}

void XSDHandler::storeKeyRef($Element* keyrefToStore, $XSDocumentInfo* schemaDoc, $XSElementDecl* currElemDecl) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	$var($String, keyrefName, $DOMUtil::getAttrValue(keyrefToStore, $SchemaSymbols::ATT_NAME));
	if ($nc(keyrefName)->length() != 0) {
		$var($String, keyrefQName, $nc(schemaDoc)->fTargetNamespace == nullptr ? $str({","_s, keyrefName}) : $str({$nc(schemaDoc)->fTargetNamespace, ","_s, keyrefName}));
		checkForDuplicateNames(keyrefQName, XSDHandler::IDENTITYCONSTRAINT_TYPE, this->fUnparsedIdentityConstraintRegistry, this->fUnparsedIdentityConstraintRegistrySub, keyrefToStore, schemaDoc);
	}
	if (this->fKeyrefStackPos == $nc(this->fKeyrefs)->length) {
		$var($ElementArray, elemArray, $new($ElementArray, this->fKeyrefStackPos + XSDHandler::INC_KEYREF_STACK_AMOUNT));
		$System::arraycopy(this->fKeyrefs, 0, elemArray, 0, this->fKeyrefStackPos);
		$set(this, fKeyrefs, elemArray);
		$var($XSElementDeclArray, declArray, $new($XSElementDeclArray, this->fKeyrefStackPos + XSDHandler::INC_KEYREF_STACK_AMOUNT));
		$System::arraycopy(this->fKeyrefElems, 0, declArray, 0, this->fKeyrefStackPos);
		$set(this, fKeyrefElems, declArray);
		$var($StringArray2, stringArray, $new($StringArray2, this->fKeyrefStackPos + XSDHandler::INC_KEYREF_STACK_AMOUNT));
		$System::arraycopy(this->fKeyrefNamespaceContext, 0, stringArray, 0, this->fKeyrefStackPos);
		$set(this, fKeyrefNamespaceContext, stringArray);
		$var($XSDocumentInfoArray, xsDocumentInfo, $new($XSDocumentInfoArray, this->fKeyrefStackPos + XSDHandler::INC_KEYREF_STACK_AMOUNT));
		$System::arraycopy(this->fKeyrefsMapXSDocumentInfo, 0, xsDocumentInfo, 0, this->fKeyrefStackPos);
		$set(this, fKeyrefsMapXSDocumentInfo, xsDocumentInfo);
	}
	$nc(this->fKeyrefs)->set(this->fKeyrefStackPos, keyrefToStore);
	$nc(this->fKeyrefElems)->set(this->fKeyrefStackPos, currElemDecl);
	$nc(this->fKeyrefNamespaceContext)->set(this->fKeyrefStackPos, $($nc($nc(schemaDoc)->fNamespaceSupport)->getEffectiveLocalContext()));
	$nc(this->fKeyrefsMapXSDocumentInfo)->set(this->fKeyrefStackPos++, schemaDoc);
}

$Element* XSDHandler::resolveSchema($XSDDescription* desc, bool mustResolve, $Element* referElement, bool usePairs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, schemaSource, nullptr);
	try {
		$var($Map, pairs, usePairs ? this->fLocationPairs : $Collections::emptyMap());
		$assign(schemaSource, $XMLSchemaLoader::resolveDocument(desc, pairs, this->fEntityManager));
	} catch ($IOException& ex) {
		if (mustResolve) {
			reportSchemaError("schema_reference.4"_s, $$new($ObjectArray, {$of($nc($($nc(desc)->getLocationHints()))->get(0))}), referElement);
		} else {
			reportSchemaWarning("schema_reference.4"_s, $$new($ObjectArray, {$of($nc($($nc(desc)->getLocationHints()))->get(0))}), referElement);
		}
	}
	if ($instanceOf($DOMInputSource, schemaSource)) {
		$var($String, var$0, $nc(desc)->getTargetNamespace());
		$var($DOMInputSource, var$1, $cast($DOMInputSource, schemaSource));
		bool var$2 = mustResolve;
		return getSchemaDocument(var$0, var$1, var$2, desc->getContextType(), referElement);
	} else if ($instanceOf($SAXInputSource, schemaSource)) {
		$var($String, var$3, $nc(desc)->getTargetNamespace());
		$var($SAXInputSource, var$4, $cast($SAXInputSource, schemaSource));
		bool var$5 = mustResolve;
		return getSchemaDocument(var$3, var$4, var$5, desc->getContextType(), referElement);
	} else if ($instanceOf($StAXInputSource, schemaSource)) {
		$var($String, var$6, $nc(desc)->getTargetNamespace());
		$var($StAXInputSource, var$7, $cast($StAXInputSource, schemaSource));
		bool var$8 = mustResolve;
		return getSchemaDocument(var$6, var$7, var$8, desc->getContextType(), referElement);
	} else if ($instanceOf($XSInputSource, schemaSource)) {
		return getSchemaDocument($cast($XSInputSource, schemaSource), desc);
	}
	$var($String, var$9, $nc(desc)->getTargetNamespace());
	$var($XMLInputSource, var$10, schemaSource);
	bool var$11 = mustResolve;
	return getSchemaDocument(var$9, var$10, var$11, desc->getContextType(), referElement);
}

$Element* XSDHandler::resolveSchema($XMLInputSource* schemaSource, $XSDDescription* desc, bool mustResolve, $Element* referElement) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOMInputSource, schemaSource)) {
		$var($String, var$0, $nc(desc)->getTargetNamespace());
		$var($DOMInputSource, var$1, $cast($DOMInputSource, schemaSource));
		bool var$2 = mustResolve;
		return getSchemaDocument(var$0, var$1, var$2, desc->getContextType(), referElement);
	} else if ($instanceOf($SAXInputSource, schemaSource)) {
		$var($String, var$3, $nc(desc)->getTargetNamespace());
		$var($SAXInputSource, var$4, $cast($SAXInputSource, schemaSource));
		bool var$5 = mustResolve;
		return getSchemaDocument(var$3, var$4, var$5, desc->getContextType(), referElement);
	} else if ($instanceOf($StAXInputSource, schemaSource)) {
		$var($String, var$6, $nc(desc)->getTargetNamespace());
		$var($StAXInputSource, var$7, $cast($StAXInputSource, schemaSource));
		bool var$8 = mustResolve;
		return getSchemaDocument(var$6, var$7, var$8, desc->getContextType(), referElement);
	} else if ($instanceOf($XSInputSource, schemaSource)) {
		return getSchemaDocument($cast($XSInputSource, schemaSource), desc);
	}
	$var($String, var$9, $nc(desc)->getTargetNamespace());
	$var($XMLInputSource, var$10, schemaSource);
	bool var$11 = mustResolve;
	return getSchemaDocument(var$9, var$10, var$11, desc->getContextType(), referElement);
}

$XMLInputSource* XSDHandler::resolveSchemaSource($XSDDescription* desc, bool mustResolve, $Element* referElement, bool usePairs) {
	$useLocalCurrentObjectStackCache();
	$var($XMLInputSource, schemaSource, nullptr);
	try {
		$var($Map, pairs, usePairs ? this->fLocationPairs : $Collections::emptyMap());
		$assign(schemaSource, $XMLSchemaLoader::resolveDocument(desc, pairs, this->fEntityManager));
	} catch ($IOException& ex) {
		if (mustResolve) {
			reportSchemaError("schema_reference.4"_s, $$new($ObjectArray, {$of($nc($($nc(desc)->getLocationHints()))->get(0))}), referElement);
		} else {
			reportSchemaWarning("schema_reference.4"_s, $$new($ObjectArray, {$of($nc($($nc(desc)->getLocationHints()))->get(0))}), referElement);
		}
	}
	return schemaSource;
}

$Element* XSDHandler::getSchemaDocument($String* schemaNamespace, $XMLInputSource* schemaSource, bool mustResolve, int16_t referType, $Element* referElement) {
	$useLocalCurrentObjectStackCache();
	bool hasInput = true;
	$var($IOException, exception, nullptr);
	$var($Element, schemaElement, nullptr);
	try {
		bool var$0 = schemaSource != nullptr;
		if (var$0) {
			bool var$2 = schemaSource->getSystemId() != nullptr;
			bool var$1 = var$2 || $nc(schemaSource)->getByteStream() != nullptr;
			var$0 = (var$1 || schemaSource->getCharacterStream() != nullptr);
		}
		if (var$0) {
			$var($XSDHandler$XSDKey, key, nullptr);
			$var($String, schemaId, nullptr);
			if (referType != $XSDDescription::CONTEXT_PREPARSE) {
				$var($String, var$3, $nc(schemaSource)->getSystemId());
				$assign(schemaId, $XMLEntityManager::expandSystemId(var$3, $(schemaSource->getBaseSystemId()), false));
				$assign(key, $new($XSDHandler$XSDKey, schemaId, referType, schemaNamespace));
				if (($assign(schemaElement, $cast($Element, $nc(this->fTraversed)->get(key)))) != nullptr) {
					this->fLastSchemaWasDuplicate = true;
					return schemaElement;
				}
				if ((!$nc(schemaSource)->isCreatedByResolver()) && (referType == $XSDDescription::CONTEXT_IMPORT || referType == $XSDDescription::CONTEXT_INCLUDE || referType == $XSDDescription::CONTEXT_REDEFINE)) {
					$init($JdkConstants);
					$var($String, accessError, $SecuritySupport::checkAccess(schemaId, this->fAccessExternalSchema, $JdkConstants::ACCESS_EXTERNAL_ALL));
					if (accessError != nullptr) {
						reportSchemaFatalError("schema_reference.access"_s, $$new($ObjectArray, {
							$($of($SecuritySupport::sanitizePath(schemaId))),
							$of(accessError)
						}), referElement);
					}
				}
			}
			$nc(this->fSchemaParser)->parse(schemaSource);
			$var($Document, schemaDocument, $nc(this->fSchemaParser)->getDocument());
			$assign(schemaElement, schemaDocument != nullptr ? $DOMUtil::getRoot(schemaDocument) : ($Element*)nullptr);
			return getSchemaDocument0(key, schemaId, schemaElement);
		} else {
			hasInput = false;
		}
	} catch ($IOException& ex) {
		$assign(exception, ex);
	}
	return getSchemaDocument1(mustResolve, hasInput, schemaSource, referElement, exception);
}

$Element* XSDHandler::getSchemaDocument($String* schemaNamespace, $SAXInputSource* schemaSource, bool mustResolve, int16_t referType, $Element* referElement) {
	$useLocalCurrentObjectStackCache();
	$var($XMLReader, parser, $nc(schemaSource)->getXMLReader());
	$var($InputSource, inputSource, schemaSource->getInputSource());
	bool hasInput = true;
	$var($IOException, exception, nullptr);
	$var($Element, schemaElement, nullptr);
	try {
		bool var$0 = inputSource != nullptr;
		if (var$0) {
			bool var$2 = inputSource->getSystemId() != nullptr;
			bool var$1 = var$2 || $nc(inputSource)->getByteStream() != nullptr;
			var$0 = (var$1 || inputSource->getCharacterStream() != nullptr);
		}
		if (var$0) {
			$var($XSDHandler$XSDKey, key, nullptr);
			$var($String, schemaId, nullptr);
			if (referType != $XSDDescription::CONTEXT_PREPARSE) {
				$var($String, var$3, $nc(inputSource)->getSystemId());
				$assign(schemaId, $XMLEntityManager::expandSystemId(var$3, $(schemaSource->getBaseSystemId()), false));
				$assign(key, $new($XSDHandler$XSDKey, schemaId, referType, schemaNamespace));
				if (($assign(schemaElement, $cast($Element, $nc(this->fTraversed)->get(key)))) != nullptr) {
					this->fLastSchemaWasDuplicate = true;
					return schemaElement;
				}
			}
			bool namespacePrefixes = false;
			if (parser != nullptr) {
				try {
					namespacePrefixes = parser->getFeature(XSDHandler::NAMESPACE_PREFIXES);
				} catch ($SAXException& se) {
				}
			} else {
				$assign(parser, $JdkXmlUtils::getXMLReader(this->fOverrideDefaultParser, $nc(this->fSecurityManager)->isSecureProcessing()));
				try {
					$nc(parser)->setFeature(XSDHandler::NAMESPACE_PREFIXES, true);
					namespacePrefixes = true;
					if ($instanceOf($SAXParser, parser)) {
						if (this->fSecurityManager != nullptr) {
							parser->setProperty(XSDHandler::SECURITY_MANAGER, this->fSecurityManager);
						}
					}
				} catch ($SAXException& se) {
				}
				try {
					$init($XMLConstants);
					$nc(parser)->setProperty($XMLConstants::ACCESS_EXTERNAL_DTD, this->fAccessExternalDTD);
				} catch ($SAXNotRecognizedException& exc) {
					$init($XMLConstants);
					$XMLSecurityManager::printWarning($($nc($of(parser))->getClass()->getName()), $XMLConstants::ACCESS_EXTERNAL_DTD, exc);
				}
			}
			bool stringsInternalized = false;
			try {
				stringsInternalized = $nc(parser)->getFeature(XSDHandler::STRING_INTERNING);
			} catch ($SAXException& exc) {
			}
			if (this->fXSContentHandler == nullptr) {
				$set(this, fXSContentHandler, $new($SchemaContentHandler));
			}
			$nc(this->fXSContentHandler)->reset(this->fSchemaParser, this->fSymbolTable, namespacePrefixes, stringsInternalized);
			$nc(parser)->setContentHandler(this->fXSContentHandler);
			parser->setErrorHandler($($nc(this->fErrorReporter)->getSAXErrorHandler()));
			parser->parse(inputSource);
			try {
				parser->setContentHandler(nullptr);
				parser->setErrorHandler(nullptr);
			} catch ($Exception& e) {
			}
			$var($Document, schemaDocument, $nc(this->fXSContentHandler)->getDocument());
			$assign(schemaElement, schemaDocument != nullptr ? $DOMUtil::getRoot(schemaDocument) : ($Element*)nullptr);
			return getSchemaDocument0(key, schemaId, schemaElement);
		} else {
			hasInput = false;
		}
	} catch ($SAXParseException& spe) {
		$throw($($XSDHandler$SAX2XNIUtil::createXMLParseException0(spe)));
	} catch ($SAXException& se) {
		$throw($($XSDHandler$SAX2XNIUtil::createXNIException0(se)));
	} catch ($IOException& ioe) {
		$assign(exception, ioe);
	}
	return getSchemaDocument1(mustResolve, hasInput, schemaSource, referElement, exception);
}

$Element* XSDHandler::getSchemaDocument($String* schemaNamespace, $DOMInputSource* schemaSource, bool mustResolve, int16_t referType, $Element* referElement) {
	$useLocalCurrentObjectStackCache();
	bool hasInput = true;
	$var($IOException, exception, nullptr);
	$var($Element, schemaElement, nullptr);
	$var($Element, schemaRootElement, nullptr);
	$var($Node, node, $nc(schemaSource)->getNode());
	int16_t nodeType = (int16_t)-1;
	if (node != nullptr) {
		nodeType = node->getNodeType();
		if (nodeType == $Node::DOCUMENT_NODE) {
			$assign(schemaRootElement, $DOMUtil::getRoot($cast($Document, node)));
		} else if (nodeType == $Node::ELEMENT_NODE) {
			$assign(schemaRootElement, $cast($Element, node));
		}
	}
	try {
		if (schemaRootElement != nullptr) {
			$var($XSDHandler$XSDKey, key, nullptr);
			$var($String, schemaId, nullptr);
			if (referType != $XSDDescription::CONTEXT_PREPARSE) {
				$var($String, var$0, schemaSource->getSystemId());
				$assign(schemaId, $XMLEntityManager::expandSystemId(var$0, $(schemaSource->getBaseSystemId()), false));
				bool isDocument = (nodeType == $Node::DOCUMENT_NODE);
				if (!isDocument) {
					$var($Node, parent, schemaRootElement->getParentNode());
					if (parent != nullptr) {
						isDocument = (parent->getNodeType() == $Node::DOCUMENT_NODE);
					}
				}
				if (isDocument) {
					$assign(key, $new($XSDHandler$XSDKey, schemaId, referType, schemaNamespace));
					if (($assign(schemaElement, $cast($Element, $nc(this->fTraversed)->get(key)))) != nullptr) {
						this->fLastSchemaWasDuplicate = true;
						return schemaElement;
					}
				}
			}
			$assign(schemaElement, schemaRootElement);
			return getSchemaDocument0(key, schemaId, schemaElement);
		} else {
			hasInput = false;
		}
	} catch ($IOException& ioe) {
		$assign(exception, ioe);
	}
	return getSchemaDocument1(mustResolve, hasInput, schemaSource, referElement, exception);
}

$Element* XSDHandler::getSchemaDocument($String* schemaNamespace, $StAXInputSource* schemaSource, bool mustResolve, int16_t referType, $Element* referElement) {
	$useLocalCurrentObjectStackCache();
	$var($IOException, exception, nullptr);
	$var($Element, schemaElement, nullptr);
	try {
		bool consumeRemainingContent = $nc(schemaSource)->shouldConsumeRemainingContent();
		$var($XMLStreamReader, streamReader, schemaSource->getXMLStreamReader());
		$var($XMLEventReader, eventReader, schemaSource->getXMLEventReader());
		$var($XSDHandler$XSDKey, key, nullptr);
		$var($String, schemaId, nullptr);
		if (referType != $XSDDescription::CONTEXT_PREPARSE) {
			$var($String, var$0, schemaSource->getSystemId());
			$assign(schemaId, $XMLEntityManager::expandSystemId(var$0, $(schemaSource->getBaseSystemId()), false));
			bool isDocument = consumeRemainingContent;
			if (!isDocument) {
				if (streamReader != nullptr) {
					isDocument = (streamReader->getEventType() == $XMLStreamReader::START_DOCUMENT);
				} else {
					isDocument = $nc($($nc(eventReader)->peek()))->isStartDocument();
				}
			}
			if (isDocument) {
				$assign(key, $new($XSDHandler$XSDKey, schemaId, referType, schemaNamespace));
				if (($assign(schemaElement, $cast($Element, $nc(this->fTraversed)->get(key)))) != nullptr) {
					this->fLastSchemaWasDuplicate = true;
					return schemaElement;
				}
			}
		}
		if (this->fStAXSchemaParser == nullptr) {
			$set(this, fStAXSchemaParser, $new($StAXSchemaParser));
		}
		$nc(this->fStAXSchemaParser)->reset(this->fSchemaParser, this->fSymbolTable);
		if (streamReader != nullptr) {
			$nc(this->fStAXSchemaParser)->parse(streamReader);
			if (consumeRemainingContent) {
				while (streamReader->hasNext()) {
					streamReader->next();
				}
			}
		} else {
			$nc(this->fStAXSchemaParser)->parse(eventReader);
			if (consumeRemainingContent) {
				while ($nc(eventReader)->hasNext()) {
					eventReader->nextEvent();
				}
			}
		}
		$var($Document, schemaDocument, $nc(this->fStAXSchemaParser)->getDocument());
		$assign(schemaElement, schemaDocument != nullptr ? $DOMUtil::getRoot(schemaDocument) : ($Element*)nullptr);
		return getSchemaDocument0(key, schemaId, schemaElement);
	} catch ($XMLStreamException& e) {
		$var($Throwable, t, e->getNestedException());
		if ($instanceOf($IOException, t)) {
			$assign(exception, $cast($IOException, t));
		} else {
			$var($StAXLocationWrapper, slw, $new($StAXLocationWrapper));
			slw->setLocation($(e->getLocation()));
			$throwNew($XMLParseException, slw, $(e->getMessage()), e);
		}
	} catch ($IOException& e) {
		$assign(exception, e);
	}
	return getSchemaDocument1(mustResolve, true, schemaSource, referElement, exception);
}

$Element* XSDHandler::getSchemaDocument0($XSDHandler$XSDKey* key, $String* schemaId, $Element* schemaElement) {
	if (key != nullptr) {
		$nc(this->fTraversed)->put(key, schemaElement);
	}
	if (schemaId != nullptr) {
		$nc(this->fDoc2SystemId)->put(schemaElement, schemaId);
	}
	this->fLastSchemaWasDuplicate = false;
	return schemaElement;
}

$Element* XSDHandler::getSchemaDocument1(bool mustResolve, bool hasInput, $XMLInputSource* schemaSource, $Element* referElement, $IOException* ioe) {
	$useLocalCurrentObjectStackCache();
	if (mustResolve) {
		if (hasInput) {
			reportSchemaError("schema_reference.4"_s, $$new($ObjectArray, {$($of($nc(schemaSource)->getSystemId()))}), referElement, ioe);
		} else {
			reportSchemaError("schema_reference.4"_s, $$new($ObjectArray, {schemaSource == nullptr ? $of(""_s) : $($of($nc(schemaSource)->getSystemId()))}), referElement, ioe);
		}
	} else if (hasInput) {
		reportSchemaWarning("schema_reference.4"_s, $$new($ObjectArray, {$($of($nc(schemaSource)->getSystemId()))}), referElement, ioe);
	}
	this->fLastSchemaWasDuplicate = false;
	return nullptr;
}

$Element* XSDHandler::getSchemaDocument($XSInputSource* schemaSource, $XSDDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammarArray, grammars, $nc(schemaSource)->getGrammars());
	int16_t referType = $nc(desc)->getContextType();
	if (grammars != nullptr && grammars->length > 0) {
		$var($List, expandedGrammars, expandGrammars(grammars));
		if (this->fNamespaceGrowth || !existingGrammars(expandedGrammars)) {
			addGrammars(expandedGrammars);
			if (referType == $XSDDescription::CONTEXT_PREPARSE) {
				desc->setTargetNamespace($($nc(grammars->get(0))->getTargetNamespace()));
			}
		}
	} else {
		$var($XSObjectArray, components, schemaSource->getComponents());
		if (components != nullptr && components->length > 0) {
			$var($Map, importDependencies, $new($HashMap));
			$var($List, expandedComponents, expandComponents(components, importDependencies));
			if (this->fNamespaceGrowth || canAddComponents(expandedComponents)) {
				addGlobalComponents(expandedComponents, importDependencies);
				if (referType == $XSDDescription::CONTEXT_PREPARSE) {
					desc->setTargetNamespace($($nc(components->get(0))->getNamespace()));
				}
			}
		}
	}
	return nullptr;
}

$List* XSDHandler::expandGrammars($SchemaGrammarArray* grammars) {
	$useLocalCurrentObjectStackCache();
	$var($List, currGrammars, $new($ArrayList));
	for (int32_t i = 0; i < $nc(grammars)->length; ++i) {
		if (!currGrammars->contains(grammars->get(i))) {
			currGrammars->add(grammars->get(i));
		}
	}
	$var($SchemaGrammar, sg1, nullptr);
	$var($SchemaGrammar, sg2, nullptr);
	$var($List, gs, nullptr);
	for (int32_t i = 0; i < currGrammars->size(); ++i) {
		$assign(sg1, $cast($SchemaGrammar, currGrammars->get(i)));
		$assign(gs, $nc(sg1)->getImportedGrammars());
		if (gs == nullptr) {
			continue;
		}
		for (int32_t j = $nc(gs)->size() - 1; j >= 0; --j) {
			$assign(sg2, $cast($SchemaGrammar, gs->get(j)));
			if (!currGrammars->contains(sg2)) {
				currGrammars->add(sg2);
			}
		}
	}
	return currGrammars;
}

bool XSDHandler::existingGrammars($List* grammars) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(grammars)->size();
	$var($XSDDescription, desc, $new($XSDDescription));
	for (int32_t i = 0; i < length; ++i) {
		$var($SchemaGrammar, sg1, $cast($SchemaGrammar, grammars->get(i)));
		desc->setNamespace($($nc(sg1)->getTargetNamespace()));
		$var($SchemaGrammar, sg2, findGrammar(desc, false));
		if (sg2 != nullptr) {
			return true;
		}
	}
	return false;
}

bool XSDHandler::canAddComponents($List* components) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(components)->size();
	$var($XSDDescription, desc, $new($XSDDescription));
	for (int32_t i = 0; i < size; ++i) {
		$var($XSObject, component, $cast($XSObject, components->get(i)));
		if (!canAddComponent(component, desc)) {
			return false;
		}
	}
	return true;
}

bool XSDHandler::canAddComponent($XSObject* component, $XSDDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$nc(desc)->setNamespace($($nc(component)->getNamespace()));
	$var($SchemaGrammar, sg, findGrammar(desc, false));
	if (sg == nullptr) {
		return true;
	} else if ($nc(sg)->isImmutable()) {
		return false;
	}
	int16_t componentType = $nc(component)->getType();
	$var($String, name, component->getName());
	switch (componentType) {
	case $XSConstants::TYPE_DEFINITION:
		{
			if ($equals($nc(sg)->getGlobalTypeDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::ATTRIBUTE_DECLARATION:
		{
			if ($equals($nc(sg)->getGlobalAttributeDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::ATTRIBUTE_GROUP:
		{
			if ($equals($nc(sg)->getGlobalAttributeDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::ELEMENT_DECLARATION:
		{
			if ($equals($nc(sg)->getGlobalElementDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::MODEL_GROUP_DEFINITION:
		{
			if ($equals($nc(sg)->getGlobalGroupDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::NOTATION_DECLARATION:
		{
			if ($equals($nc(sg)->getGlobalNotationDecl(name), component)) {
				return true;
			}
			break;
		}
	case $XSConstants::IDENTITY_CONSTRAINT:
		{}
	case $XSConstants::ATTRIBUTE_USE:
		{}
	default:
		{
			return true;
		}
	}
	return false;
}

void XSDHandler::addGrammars($List* grammars) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(grammars)->size();
	$var($XSDDescription, desc, $new($XSDDescription));
	for (int32_t i = 0; i < length; ++i) {
		$var($SchemaGrammar, sg1, $cast($SchemaGrammar, grammars->get(i)));
		desc->setNamespace($($nc(sg1)->getTargetNamespace()));
		$var($SchemaGrammar, sg2, findGrammar(desc, this->fNamespaceGrowth));
		if (sg1 != sg2) {
			addGrammarComponents(sg1, sg2);
		}
	}
}

void XSDHandler::addGrammarComponents($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	if (dstGrammar == nullptr) {
		createGrammarFrom(srcGrammar);
		return;
	}
	$var($SchemaGrammar, tmpGrammar, dstGrammar);
	if ($nc(tmpGrammar)->isImmutable()) {
		$assign(tmpGrammar, createGrammarFrom(dstGrammar));
	}
	addNewGrammarLocations(srcGrammar, tmpGrammar);
	addNewImportedGrammars(srcGrammar, tmpGrammar);
	addNewGrammarComponents(srcGrammar, tmpGrammar);
}

$SchemaGrammar* XSDHandler::createGrammarFrom($SchemaGrammar* grammar) {
	$var($SchemaGrammar, newGrammar, $new($SchemaGrammar, grammar));
	$nc(this->fGrammarBucket)->putGrammar(newGrammar);
	updateImportListWith(newGrammar);
	updateImportListFor(newGrammar);
	return newGrammar;
}

void XSDHandler::addNewGrammarLocations($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($StringList, locations, $nc(srcGrammar)->getDocumentLocations());
	int32_t locSize = $nc(locations)->size();
	$var($StringList, locations2, $nc(dstGrammar)->getDocumentLocations());
	for (int32_t i = 0; i < locSize; ++i) {
		$var($String, loc, locations->item(i));
		if (!$nc(locations2)->contains(loc)) {
			dstGrammar->addDocument(nullptr, loc);
		}
	}
}

void XSDHandler::addNewImportedGrammars($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, src, $cast($ArrayList, $nc(srcGrammar)->getImportedGrammars()));
	if (src != nullptr) {
		$var($ArrayList, dst, $cast($ArrayList, $nc(dstGrammar)->getImportedGrammars()));
		if (dst == nullptr) {
			$assign(dst, $new($ArrayList));
			dstGrammar->setImportedGrammars(dst);
		}
		{
			$var($Iterator, i$, src->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($SchemaGrammar, sg, $cast($SchemaGrammar, i$->next()));
				{
					$var($SchemaGrammar, sg1, $nc(this->fGrammarBucket)->getGrammar($($nc(sg)->getTargetNamespace())));
					if (sg1 != nullptr) {
						$assign(sg, sg1);
					}
					if (!containedImportedGrammar(dst, sg)) {
						$nc(dst)->add(sg);
					}
				}
			}
		}
	}
}

void XSDHandler::updateImportList($List* importedSrc, $List* importedDst) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(importedSrc)->size();
	for (int32_t i = 0; i < size; ++i) {
		$var($SchemaGrammar, sg, $cast($SchemaGrammar, importedSrc->get(i)));
		if (!containedImportedGrammar(importedDst, sg)) {
			$nc(importedDst)->add(sg);
		}
	}
}

void XSDHandler::addNewGrammarComponents($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$nc(dstGrammar)->resetComponents();
	addGlobalElementDecls(srcGrammar, dstGrammar);
	addGlobalAttributeDecls(srcGrammar, dstGrammar);
	addGlobalAttributeGroupDecls(srcGrammar, dstGrammar);
	addGlobalGroupDecls(srcGrammar, dstGrammar);
	addGlobalTypeDecls(srcGrammar, dstGrammar);
	addGlobalNotationDecls(srcGrammar, dstGrammar);
}

void XSDHandler::addGlobalElementDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::ELEMENT_DECLARATION));
	int32_t len = $nc(components)->getLength();
	$var($XSElementDecl, srcDecl, nullptr);
	$var($XSElementDecl, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSElementDecl, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalElementDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalElementDecl(srcDecl);
		} else if (dstDecl != srcDecl) {
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::ELEMENT_DECLARATION));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSElementDecl, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalElementDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalElementDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

void XSDHandler::addGlobalAttributeDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::ATTRIBUTE_DECLARATION));
	int32_t len = $nc(components)->getLength();
	$var($XSAttributeDecl, srcDecl, nullptr);
	$var($XSAttributeDecl, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSAttributeDecl, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalAttributeDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalAttributeDecl(srcDecl);
		} else if (dstDecl != srcDecl && !this->fTolerateDuplicates) {
			$var($String, var$0, $nc(srcDecl)->getNamespace());
			reportSharingError(var$0, $(srcDecl->getName()));
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::ATTRIBUTE_DECLARATION));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSAttributeDecl, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalAttributeDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalAttributeDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

void XSDHandler::addGlobalAttributeGroupDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::ATTRIBUTE_GROUP));
	int32_t len = $nc(components)->getLength();
	$var($XSAttributeGroupDecl, srcDecl, nullptr);
	$var($XSAttributeGroupDecl, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSAttributeGroupDecl, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalAttributeGroupDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalAttributeGroupDecl(srcDecl);
		} else if (dstDecl != srcDecl && !this->fTolerateDuplicates) {
			$var($String, var$0, $nc(srcDecl)->getNamespace());
			reportSharingError(var$0, $(srcDecl->getName()));
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::ATTRIBUTE_GROUP));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSAttributeGroupDecl, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalAttributeGroupDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalAttributeGroupDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

void XSDHandler::addGlobalNotationDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::NOTATION_DECLARATION));
	int32_t len = $nc(components)->getLength();
	$var($XSNotationDecl, srcDecl, nullptr);
	$var($XSNotationDecl, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSNotationDecl, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalNotationDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalNotationDecl(srcDecl);
		} else if (dstDecl != srcDecl && !this->fTolerateDuplicates) {
			$var($String, var$0, $nc(srcDecl)->getNamespace());
			reportSharingError(var$0, $(srcDecl->getName()));
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::NOTATION_DECLARATION));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSNotationDecl, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalNotationDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalNotationDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

void XSDHandler::addGlobalGroupDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::MODEL_GROUP_DEFINITION));
	int32_t len = $nc(components)->getLength();
	$var($XSGroupDecl, srcDecl, nullptr);
	$var($XSGroupDecl, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSGroupDecl, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalGroupDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalGroupDecl(srcDecl);
		} else if (srcDecl != dstDecl && !this->fTolerateDuplicates) {
			$var($String, var$0, $nc(srcDecl)->getNamespace());
			reportSharingError(var$0, $(srcDecl->getName()));
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::MODEL_GROUP_DEFINITION));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSGroupDecl, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalGroupDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalGroupDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

void XSDHandler::addGlobalTypeDecls($SchemaGrammar* srcGrammar, $SchemaGrammar* dstGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, components, $nc(srcGrammar)->getComponents($XSConstants::TYPE_DEFINITION));
	int32_t len = $nc(components)->getLength();
	$var($XSTypeDefinition, srcDecl, nullptr);
	$var($XSTypeDefinition, dstDecl, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(srcDecl, $cast($XSTypeDefinition, components->item(i)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalTypeDecl($($nc(srcDecl)->getName())));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalTypeDecl(srcDecl);
		} else if (dstDecl != srcDecl && !this->fTolerateDuplicates) {
			$var($String, var$0, $nc(srcDecl)->getNamespace());
			reportSharingError(var$0, $(srcDecl->getName()));
		}
	}
	$var($ObjectList, componentsExt, srcGrammar->getComponentsExt($XSConstants::TYPE_DEFINITION));
	len = $nc(componentsExt)->getLength();
	for (int32_t i = 0; i < len; i += 2) {
		$var($String, key, $cast($String, componentsExt->item(i)));
		int32_t index = $nc(key)->indexOf((int32_t)u',');
		$var($String, location, key->substring(0, index));
		$var($String, name, key->substring(index + 1, key->length()));
		$assign(srcDecl, $cast($XSTypeDefinition, componentsExt->item(i + 1)));
		$assign(dstDecl, $nc(dstGrammar)->getGlobalTypeDecl(name, location));
		if (dstDecl == nullptr) {
			dstGrammar->addGlobalTypeDecl(srcDecl, location);
		} else if (dstDecl != srcDecl) {
		}
	}
}

$List* XSDHandler::expandComponents($XSObjectArray* components, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	$var($List, newComponents, $new($ArrayList));
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		if (!newComponents->contains(components->get(i))) {
			newComponents->add(components->get(i));
		}
	}
	for (int32_t i = 0; i < newComponents->size(); ++i) {
		$var($XSObject, component, $cast($XSObject, newComponents->get(i)));
		expandRelatedComponents(component, newComponents, dependencies);
	}
	return newComponents;
}

void XSDHandler::expandRelatedComponents($XSObject* component, $List* componentList, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	int16_t componentType = $nc(component)->getType();
	switch (componentType) {
	case $XSConstants::TYPE_DEFINITION:
		{
			expandRelatedTypeComponents($cast($XSTypeDefinition, component), componentList, $(component->getNamespace()), dependencies);
			break;
		}
	case $XSConstants::ATTRIBUTE_DECLARATION:
		{
			expandRelatedAttributeComponents($cast($XSAttributeDeclaration, component), componentList, $(component->getNamespace()), dependencies);
			break;
		}
	case $XSConstants::ATTRIBUTE_GROUP:
		{
			expandRelatedAttributeGroupComponents($cast($XSAttributeGroupDefinition, component), componentList, $(component->getNamespace()), dependencies);
		}
	case $XSConstants::ELEMENT_DECLARATION:
		{
			expandRelatedElementComponents($cast($XSElementDeclaration, component), componentList, $(component->getNamespace()), dependencies);
			break;
		}
	case $XSConstants::MODEL_GROUP_DEFINITION:
		{
			expandRelatedModelGroupDefinitionComponents($cast($XSModelGroupDefinition, component), componentList, $(component->getNamespace()), dependencies);
		}
	case $XSConstants::ATTRIBUTE_USE:
		{}
	case $XSConstants::NOTATION_DECLARATION:
		{}
	case $XSConstants::IDENTITY_CONSTRAINT:
		{}
	default:
		{
			break;
		}
	}
}

void XSDHandler::expandRelatedAttributeComponents($XSAttributeDeclaration* decl, $List* componentList, $String* namespace$, $Map* dependencies) {
	addRelatedType($($nc(decl)->getTypeDefinition()), componentList, namespace$, dependencies);
}

void XSDHandler::expandRelatedElementComponents($XSElementDeclaration* decl, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	addRelatedType($($nc(decl)->getTypeDefinition()), componentList, namespace$, dependencies);
	$var($XSElementDeclaration, subElemDecl, $nc(decl)->getSubstitutionGroupAffiliation());
	if (subElemDecl != nullptr) {
		addRelatedElement(subElemDecl, componentList, namespace$, dependencies);
	}
}

void XSDHandler::expandRelatedTypeComponents($XSTypeDefinition* type, $List* componentList, $String* namespace$, $Map* dependencies) {
	if ($instanceOf($XSComplexTypeDecl, type)) {
		expandRelatedComplexTypeComponents($cast($XSComplexTypeDecl, type), componentList, namespace$, dependencies);
	} else if ($instanceOf($XSSimpleTypeDecl, type)) {
		expandRelatedSimpleTypeComponents($cast($XSSimpleTypeDefinition, type), componentList, namespace$, dependencies);
	}
}

void XSDHandler::expandRelatedModelGroupDefinitionComponents($XSModelGroupDefinition* modelGroupDef, $List* componentList, $String* namespace$, $Map* dependencies) {
	expandRelatedModelGroupComponents($($nc(modelGroupDef)->getModelGroup()), componentList, namespace$, dependencies);
}

void XSDHandler::expandRelatedAttributeGroupComponents($XSAttributeGroupDefinition* attrGroup, $List* componentList, $String* namespace$, $Map* dependencies) {
	expandRelatedAttributeUsesComponents($($nc(attrGroup)->getAttributeUses()), componentList, namespace$, dependencies);
}

void XSDHandler::expandRelatedComplexTypeComponents($XSComplexTypeDecl* type, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	addRelatedType($($nc(type)->getBaseType()), componentList, namespace$, dependencies);
	expandRelatedAttributeUsesComponents($($nc(type)->getAttributeUses()), componentList, namespace$, dependencies);
	$var($XSParticle, particle, $nc(type)->getParticle());
	if (particle != nullptr) {
		expandRelatedParticleComponents(particle, componentList, namespace$, dependencies);
	}
}

void XSDHandler::expandRelatedSimpleTypeComponents($XSSimpleTypeDefinition* type, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	$var($XSTypeDefinition, baseType, $nc(type)->getBaseType());
	if (baseType != nullptr) {
		addRelatedType(baseType, componentList, namespace$, dependencies);
	}
	$var($XSTypeDefinition, itemType, type->getItemType());
	if (itemType != nullptr) {
		addRelatedType(itemType, componentList, namespace$, dependencies);
	}
	$var($XSTypeDefinition, primitiveType, type->getPrimitiveType());
	if (primitiveType != nullptr) {
		addRelatedType(primitiveType, componentList, namespace$, dependencies);
	}
	$var($XSObjectList, memberTypes, type->getMemberTypes());
	if ($nc(memberTypes)->size() > 0) {
		for (int32_t i = 0; i < memberTypes->size(); ++i) {
			addRelatedType($cast($XSTypeDefinition, $(memberTypes->item(i))), componentList, namespace$, dependencies);
		}
	}
}

void XSDHandler::expandRelatedAttributeUsesComponents($XSObjectList* attrUses, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	int32_t attrUseSize = (attrUses == nullptr) ? 0 : $nc(attrUses)->size();
	for (int32_t i = 0; i < attrUseSize; ++i) {
		expandRelatedAttributeUseComponents($cast($XSAttributeUse, $(attrUses->item(i))), componentList, namespace$, dependencies);
	}
}

void XSDHandler::expandRelatedAttributeUseComponents($XSAttributeUse* component, $List* componentList, $String* namespace$, $Map* dependencies) {
	addRelatedAttribute($($nc(component)->getAttrDeclaration()), componentList, namespace$, dependencies);
}

void XSDHandler::expandRelatedParticleComponents($XSParticle* component, $List* componentList, $String* namespace$, $Map* dependencies) {
	$var($XSTerm, term, $nc(component)->getTerm());
	switch ($nc(term)->getType()) {
	case $XSConstants::ELEMENT_DECLARATION:
		{
			addRelatedElement($cast($XSElementDeclaration, term), componentList, namespace$, dependencies);
			break;
		}
	case $XSConstants::MODEL_GROUP:
		{
			expandRelatedModelGroupComponents($cast($XSModelGroup, term), componentList, namespace$, dependencies);
			break;
		}
	default:
		{
			break;
		}
	}
}

void XSDHandler::expandRelatedModelGroupComponents($XSModelGroup* modelGroup, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	$var($XSObjectList, particles, $nc(modelGroup)->getParticles());
	int32_t length = (particles == nullptr) ? 0 : $nc(particles)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		expandRelatedParticleComponents($cast($XSParticle, $(particles->item(i))), componentList, namespace$, dependencies);
	}
}

void XSDHandler::addRelatedType($XSTypeDefinition* type, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(type)->getAnonymous()) {
		$init($SchemaSymbols);
		if (!$nc($SchemaSymbols::URI_SCHEMAFORSCHEMA)->equals($(type->getNamespace()))) {
			if (!$nc(componentList)->contains(type)) {
				$var($List, importedNamespaces, findDependentNamespaces(namespace$, dependencies));
				addNamespaceDependency(namespace$, $(type->getNamespace()), importedNamespaces);
				componentList->add(type);
			}
		}
	} else {
		expandRelatedTypeComponents(type, componentList, namespace$, dependencies);
	}
}

void XSDHandler::addRelatedElement($XSElementDeclaration* decl, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	if ($nc(decl)->getScope() == $XSConstants::SCOPE_GLOBAL) {
		if (!$nc(componentList)->contains(decl)) {
			$var($List, importedNamespaces, findDependentNamespaces(namespace$, dependencies));
			addNamespaceDependency(namespace$, $(decl->getNamespace()), importedNamespaces);
			componentList->add(decl);
		}
	} else {
		expandRelatedElementComponents(decl, componentList, namespace$, dependencies);
	}
}

void XSDHandler::addRelatedAttribute($XSAttributeDeclaration* decl, $List* componentList, $String* namespace$, $Map* dependencies) {
	$useLocalCurrentObjectStackCache();
	if ($nc(decl)->getScope() == $XSConstants::SCOPE_GLOBAL) {
		if (!$nc(componentList)->contains(decl)) {
			$var($List, importedNamespaces, findDependentNamespaces(namespace$, dependencies));
			addNamespaceDependency(namespace$, $(decl->getNamespace()), importedNamespaces);
			componentList->add(decl);
		}
	} else {
		expandRelatedAttributeComponents(decl, componentList, namespace$, dependencies);
	}
}

void XSDHandler::addGlobalComponents($List* components, $Map* importDependencies) {
	$useLocalCurrentObjectStackCache();
	$var($XSDDescription, desc, $new($XSDDescription));
	int32_t size = $nc(components)->size();
	for (int32_t i = 0; i < size; ++i) {
		addGlobalComponent($cast($XSObject, $(components->get(i))), desc);
	}
	updateImportDependencies(importDependencies);
}

void XSDHandler::addGlobalComponent($XSObject* component, $XSDDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespace$, $nc(component)->getNamespace());
	$nc(desc)->setNamespace(namespace$);
	$var($SchemaGrammar, sg, getSchemaGrammar(desc));
	int16_t componentType = component->getType();
	$var($String, name, component->getName());
	switch (componentType) {
	case $XSConstants::TYPE_DEFINITION:
		{
			if (!$nc(($cast($XSTypeDefinition, component)))->getAnonymous()) {
				if ($nc(sg)->getGlobalTypeDecl(name) == nullptr) {
					sg->addGlobalTypeDecl($cast($XSTypeDefinition, component));
				}
				if ($nc(sg)->getGlobalTypeDecl(name, ""_s) == nullptr) {
					sg->addGlobalTypeDecl($cast($XSTypeDefinition, component), ""_s);
				}
			}
			break;
		}
	case $XSConstants::ATTRIBUTE_DECLARATION:
		{
			if ($nc(($cast($XSAttributeDecl, component)))->getScope() == $XSAttributeDecl::SCOPE_GLOBAL) {
				if ($nc(sg)->getGlobalAttributeDecl(name) == nullptr) {
					sg->addGlobalAttributeDecl($cast($XSAttributeDecl, component));
				}
				if ($nc(sg)->getGlobalAttributeDecl(name, ""_s) == nullptr) {
					sg->addGlobalAttributeDecl($cast($XSAttributeDecl, component), ""_s);
				}
			}
			break;
		}
	case $XSConstants::ATTRIBUTE_GROUP:
		{
			if ($nc(sg)->getGlobalAttributeDecl(name) == nullptr) {
				sg->addGlobalAttributeGroupDecl($cast($XSAttributeGroupDecl, component));
			}
			if ($nc(sg)->getGlobalAttributeDecl(name, ""_s) == nullptr) {
				sg->addGlobalAttributeGroupDecl($cast($XSAttributeGroupDecl, component), ""_s);
			}
			break;
		}
	case $XSConstants::ELEMENT_DECLARATION:
		{
			if ($nc(($cast($XSElementDecl, component)))->getScope() == $XSElementDecl::SCOPE_GLOBAL) {
				$nc(sg)->addGlobalElementDeclAll($cast($XSElementDecl, component));
				if (sg->getGlobalElementDecl(name) == nullptr) {
					sg->addGlobalElementDecl($cast($XSElementDecl, component));
				}
				if (sg->getGlobalElementDecl(name, ""_s) == nullptr) {
					sg->addGlobalElementDecl($cast($XSElementDecl, component), ""_s);
				}
			}
			break;
		}
	case $XSConstants::MODEL_GROUP_DEFINITION:
		{
			if ($nc(sg)->getGlobalGroupDecl(name) == nullptr) {
				sg->addGlobalGroupDecl($cast($XSGroupDecl, component));
			}
			if ($nc(sg)->getGlobalGroupDecl(name, ""_s) == nullptr) {
				sg->addGlobalGroupDecl($cast($XSGroupDecl, component), ""_s);
			}
			break;
		}
	case $XSConstants::NOTATION_DECLARATION:
		{
			if ($nc(sg)->getGlobalNotationDecl(name) == nullptr) {
				sg->addGlobalNotationDecl($cast($XSNotationDecl, component));
			}
			if ($nc(sg)->getGlobalNotationDecl(name, ""_s) == nullptr) {
				sg->addGlobalNotationDecl($cast($XSNotationDecl, component), ""_s);
			}
			break;
		}
	case $XSConstants::IDENTITY_CONSTRAINT:
		{}
	case $XSConstants::ATTRIBUTE_USE:
		{}
	default:
		{
			break;
		}
	}
}

void XSDHandler::updateImportDependencies($Map* table) {
	$useLocalCurrentObjectStackCache();
	if (table == nullptr) {
		return;
	}
	$var($String, namespace$, nullptr);
	$var($List, importList, nullptr);
	{
		$var($Iterator, i$, $nc($($nc(table)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$assign(namespace$, $cast($String, $nc(entry)->getKey()));
				$assign(importList, $cast($List, entry->getValue()));
				if ($nc(importList)->size() > 0) {
					expandImportList(namespace$, importList);
				}
			}
		}
	}
}

void XSDHandler::expandImportList($String* namespace$, $List* namespaceList) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, $nc(this->fGrammarBucket)->getGrammar(namespace$));
	if (sg != nullptr) {
		$var($List, isgs, sg->getImportedGrammars());
		if (isgs == nullptr) {
			$assign(isgs, $new($ArrayList));
			addImportList(sg, isgs, namespaceList);
			sg->setImportedGrammars(isgs);
		} else {
			updateImportList(sg, isgs, namespaceList);
		}
	}
}

void XSDHandler::addImportList($SchemaGrammar* sg, $List* importedGrammars, $List* namespaceList) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(namespaceList)->size();
	$var($SchemaGrammar, isg, nullptr);
	for (int32_t i = 0; i < size; ++i) {
		$assign(isg, $nc(this->fGrammarBucket)->getGrammar($cast($String, $(namespaceList->get(i)))));
		if (isg != nullptr) {
			$nc(importedGrammars)->add(isg);
		} else {
		}
	}
}

void XSDHandler::updateImportList($SchemaGrammar* sg, $List* importedGrammars, $List* namespaceList) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(namespaceList)->size();
	$var($SchemaGrammar, isg, nullptr);
	for (int32_t i = 0; i < size; ++i) {
		$assign(isg, $nc(this->fGrammarBucket)->getGrammar($cast($String, $(namespaceList->get(i)))));
		if (isg != nullptr) {
			if (!containedImportedGrammar(importedGrammars, isg)) {
				$nc(importedGrammars)->add(isg);
			}
		} else {
		}
	}
}

bool XSDHandler::containedImportedGrammar($List* importedGrammar, $SchemaGrammar* grammar) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(importedGrammar)->size();
	$var($SchemaGrammar, sg, nullptr);
	for (int32_t i = 0; i < size; ++i) {
		$assign(sg, $cast($SchemaGrammar, importedGrammar->get(i)));
		if ($nc($(null2EmptyString($($nc(sg)->getTargetNamespace()))))->equals($(null2EmptyString($($nc(grammar)->getTargetNamespace()))))) {
			return true;
		}
	}
	return false;
}

$SchemaGrammar* XSDHandler::getSchemaGrammar($XSDDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, sg, findGrammar(desc, this->fNamespaceGrowth));
	if (sg == nullptr) {
		$var($String, var$0, $nc(desc)->getNamespace());
		$assign(sg, $new($SchemaGrammar, var$0, $(desc->makeClone()), this->fSymbolTable));
		$nc(this->fGrammarBucket)->putGrammar(sg);
	} else if ($nc(sg)->isImmutable()) {
		$assign(sg, createGrammarFrom(sg));
	}
	return sg;
}

$List* XSDHandler::findDependentNamespaces($String* namespace$, $Map* table) {
	$useLocalCurrentObjectStackCache();
	$var($String, ns, null2EmptyString(namespace$));
	$var($List, namespaceList, getFromMap(table, ns));
	if (namespaceList == nullptr) {
		$assign(namespaceList, $new($ArrayList));
		$nc(table)->put(ns, namespaceList);
	}
	return namespaceList;
}

void XSDHandler::addNamespaceDependency($String* namespace1, $String* namespace2, $List* list) {
	$useLocalCurrentObjectStackCache();
	$var($String, ns1, null2EmptyString(namespace1));
	$var($String, ns2, null2EmptyString(namespace2));
	if (!$nc(ns1)->equals(ns2)) {
		if (!$nc(list)->contains(ns2)) {
			list->add(ns2);
		}
	}
}

void XSDHandler::reportSharingError($String* namespace$, $String* name) {
	$useLocalCurrentObjectStackCache();
	$var($String, qName, (namespace$ == nullptr) ? $str({","_s, name}) : $str({namespace$, ","_s, name}));
	reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), nullptr);
}

void XSDHandler::createTraversers() {
	$set(this, fAttributeChecker, $new($XSAttributeChecker, this));
	$set(this, fAttributeGroupTraverser, $new($XSDAttributeGroupTraverser, this, this->fAttributeChecker));
	$set(this, fAttributeTraverser, $new($XSDAttributeTraverser, this, this->fAttributeChecker));
	$set(this, fComplexTypeTraverser, $new($XSDComplexTypeTraverser, this, this->fAttributeChecker));
	$set(this, fElementTraverser, $new($XSDElementTraverser, this, this->fAttributeChecker));
	$set(this, fGroupTraverser, $new($XSDGroupTraverser, this, this->fAttributeChecker));
	$set(this, fKeyrefTraverser, $new($XSDKeyrefTraverser, this, this->fAttributeChecker));
	$set(this, fNotationTraverser, $new($XSDNotationTraverser, this, this->fAttributeChecker));
	$set(this, fSimpleTypeTraverser, $new($XSDSimpleTypeTraverser, this, this->fAttributeChecker));
	$set(this, fUniqueOrKeyTraverser, $new($XSDUniqueOrKeyTraverser, this, this->fAttributeChecker));
	$set(this, fWildCardTraverser, $new($XSDWildcardTraverser, this, this->fAttributeChecker));
}

void XSDHandler::prepareForParse() {
	$nc(this->fTraversed)->clear();
	$nc(this->fDoc2SystemId)->clear();
	$nc(this->fHiddenNodes)->clear();
	this->fLastSchemaWasDuplicate = false;
}

void XSDHandler::prepareForTraverse() {
	if (!this->registryEmpty) {
		$nc(this->fUnparsedAttributeRegistry)->clear();
		$nc(this->fUnparsedAttributeGroupRegistry)->clear();
		$nc(this->fUnparsedElementRegistry)->clear();
		$nc(this->fUnparsedGroupRegistry)->clear();
		$nc(this->fUnparsedIdentityConstraintRegistry)->clear();
		$nc(this->fUnparsedNotationRegistry)->clear();
		$nc(this->fUnparsedTypeRegistry)->clear();
		$nc(this->fUnparsedAttributeRegistrySub)->clear();
		$nc(this->fUnparsedAttributeGroupRegistrySub)->clear();
		$nc(this->fUnparsedElementRegistrySub)->clear();
		$nc(this->fUnparsedGroupRegistrySub)->clear();
		$nc(this->fUnparsedIdentityConstraintRegistrySub)->clear();
		$nc(this->fUnparsedNotationRegistrySub)->clear();
		$nc(this->fUnparsedTypeRegistrySub)->clear();
	}
	for (int32_t i = 1; i <= XSDHandler::TYPEDECL_TYPE; ++i) {
		if ($nc(this->fUnparsedRegistriesExt)->get(i) != nullptr) {
			$nc($nc(this->fUnparsedRegistriesExt)->get(i))->clear();
		}
	}
	$nc(this->fDependencyMap)->clear();
	$nc(this->fDoc2XSDocumentMap)->clear();
	if (this->fRedefine2XSDMap != nullptr) {
		$nc(this->fRedefine2XSDMap)->clear();
	}
	if (this->fRedefine2NSSupport != nullptr) {
		$nc(this->fRedefine2NSSupport)->clear();
	}
	$nc(this->fAllTNSs)->clear();
	$nc(this->fImportMap)->clear();
	$set(this, fRoot, nullptr);
	for (int32_t i = 0; i < this->fLocalElemStackPos; ++i) {
		$nc(this->fParticle)->set(i, nullptr);
		$nc(this->fLocalElementDecl)->set(i, nullptr);
		$nc(this->fLocalElementDecl_schema)->set(i, nullptr);
		$nc(this->fLocalElemNamespaceContext)->set(i, nullptr);
	}
	this->fLocalElemStackPos = 0;
	for (int32_t i = 0; i < this->fKeyrefStackPos; ++i) {
		$nc(this->fKeyrefs)->set(i, nullptr);
		$nc(this->fKeyrefElems)->set(i, nullptr);
		$nc(this->fKeyrefNamespaceContext)->set(i, nullptr);
		$nc(this->fKeyrefsMapXSDocumentInfo)->set(i, nullptr);
	}
	this->fKeyrefStackPos = 0;
	if (this->fAttributeChecker == nullptr) {
		createTraversers();
	}
	$var($Locale, locale, $nc(this->fErrorReporter)->getLocale());
	$nc(this->fAttributeChecker)->reset(this->fSymbolTable);
	$nc(this->fAttributeGroupTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fAttributeTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fComplexTypeTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fElementTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fGroupTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fKeyrefTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fNotationTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fSimpleTypeTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fUniqueOrKeyTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fWildCardTraverser)->reset(this->fSymbolTable, this->fValidateAnnotations, locale);
	$nc(this->fRedefinedRestrictedAttributeGroupRegistry)->clear();
	$nc(this->fRedefinedRestrictedGroupRegistry)->clear();
	$nc(this->fGlobalAttrDecls)->clear();
	$nc(this->fGlobalAttrGrpDecls)->clear();
	$nc(this->fGlobalElemDecls)->clear();
	$nc(this->fGlobalGroupDecls)->clear();
	$nc(this->fGlobalNotationDecls)->clear();
	$nc(this->fGlobalIDConstraintDecls)->clear();
	$nc(this->fGlobalTypeDecls)->clear();
}

void XSDHandler::setDeclPool($XSDeclarationPool* declPool) {
	$set(this, fDeclPool, declPool);
}

void XSDHandler::setDVFactory($SchemaDVFactory* dvFactory) {
	$set(this, fDVFactory, dvFactory);
}

$SchemaDVFactory* XSDHandler::getDVFactory() {
	return this->fDVFactory;
}

void XSDHandler::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	$set(this, fSymbolTable, $cast($SymbolTable, $nc(componentManager)->getProperty(XSDHandler::SYMBOL_TABLE)));
	$set(this, fSecurityManager, $cast($XMLSecurityManager, componentManager->getProperty(XSDHandler::SECURITY_MANAGER, nullptr)));
	$set(this, fEntityManager, $cast($XMLEntityManager, componentManager->getProperty(XSDHandler::ENTITY_MANAGER)));
	$var($XMLEntityResolver, er, $cast($XMLEntityResolver, componentManager->getProperty(XSDHandler::ENTITY_RESOLVER)));
	if (er != nullptr) {
		$nc(this->fSchemaParser)->setEntityResolver(er);
	}
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty(XSDHandler::ERROR_REPORTER)));
	$set(this, fErrorHandler, $nc(this->fErrorReporter)->getErrorHandler());
	$set(this, fLocale, $nc(this->fErrorReporter)->getLocale());
	this->fValidateAnnotations = componentManager->getFeature(XSDHandler::VALIDATE_ANNOTATIONS, false);
	this->fHonourAllSchemaLocations = componentManager->getFeature(XSDHandler::HONOUR_ALL_SCHEMALOCATIONS, false);
	this->fNamespaceGrowth = componentManager->getFeature(XSDHandler::NAMESPACE_GROWTH, false);
	this->fTolerateDuplicates = componentManager->getFeature(XSDHandler::TOLERATE_DUPLICATES, false);
	try {
		if (!$equals(this->fErrorHandler, $nc(this->fSchemaParser)->getProperty(XSDHandler::ERROR_HANDLER))) {
			$nc(this->fSchemaParser)->setProperty(XSDHandler::ERROR_HANDLER, (this->fErrorHandler != nullptr) ? $of(this->fErrorHandler) : $of($$new($DefaultErrorHandler)));
			if (this->fAnnotationValidator != nullptr) {
				$nc(this->fAnnotationValidator)->setProperty(XSDHandler::ERROR_HANDLER, (this->fErrorHandler != nullptr) ? $of(this->fErrorHandler) : $of($$new($DefaultErrorHandler)));
			}
		}
		if (!$equals(this->fLocale, $nc(this->fSchemaParser)->getProperty(XSDHandler::LOCALE))) {
			$nc(this->fSchemaParser)->setProperty(XSDHandler::LOCALE, this->fLocale);
			if (this->fAnnotationValidator != nullptr) {
				$nc(this->fAnnotationValidator)->setProperty(XSDHandler::LOCALE, this->fLocale);
			}
		}
	} catch ($XMLConfigurationException& e) {
	}
	try {
		$nc(this->fSchemaParser)->setFeature(XSDHandler::CONTINUE_AFTER_FATAL_ERROR, $nc(this->fErrorReporter)->getFeature(XSDHandler::CONTINUE_AFTER_FATAL_ERROR));
	} catch ($XMLConfigurationException& e) {
	}
	try {
		if (componentManager->getFeature(XSDHandler::ALLOW_JAVA_ENCODINGS, false)) {
			$nc(this->fSchemaParser)->setFeature(XSDHandler::ALLOW_JAVA_ENCODINGS, true);
		}
	} catch ($XMLConfigurationException& e) {
	}
	try {
		if (componentManager->getFeature(XSDHandler::STANDARD_URI_CONFORMANT_FEATURE, false)) {
			$nc(this->fSchemaParser)->setFeature(XSDHandler::STANDARD_URI_CONFORMANT_FEATURE, true);
		}
	} catch ($XMLConfigurationException& e) {
	}
	try {
		$set(this, fGrammarPool, $cast($XMLGrammarPool, componentManager->getProperty(XSDHandler::XMLGRAMMAR_POOL)));
	} catch ($XMLConfigurationException& e) {
		$set(this, fGrammarPool, nullptr);
	}
	try {
		if (componentManager->getFeature(XSDHandler::DISALLOW_DOCTYPE, false)) {
			$nc(this->fSchemaParser)->setFeature(XSDHandler::DISALLOW_DOCTYPE, true);
		}
	} catch ($XMLConfigurationException& e) {
	}
	try {
		if (this->fSecurityManager != nullptr) {
			$nc(this->fSchemaParser)->setProperty(XSDHandler::SECURITY_MANAGER, this->fSecurityManager);
		}
	} catch ($XMLConfigurationException& e) {
	}
	$set(this, fSecurityPropertyMgr, $cast($XMLSecurityPropertyManager, componentManager->getProperty(XSDHandler::XML_SECURITY_PROPERTY_MANAGER)));
	$nc(this->fSchemaParser)->setProperty(XSDHandler::XML_SECURITY_PROPERTY_MANAGER, this->fSecurityPropertyMgr);
	$init($XMLSecurityPropertyManager$Property);
	$set(this, fAccessExternalDTD, $nc(this->fSecurityPropertyMgr)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_DTD));
	$set(this, fAccessExternalSchema, $nc(this->fSecurityPropertyMgr)->getValue($XMLSecurityPropertyManager$Property::ACCESS_EXTERNAL_SCHEMA));
	$init($JdkConstants);
	this->fOverrideDefaultParser = componentManager->getFeature($JdkConstants::OVERRIDE_PARSER);
	$nc(this->fSchemaParser)->setFeature($JdkConstants::OVERRIDE_PARSER, this->fOverrideDefaultParser);
	$nc(this->fEntityManager)->setFeature($JdkConstants::OVERRIDE_PARSER, this->fOverrideDefaultParser);
	$init($XMLConstants);
	this->fUseCatalog = componentManager->getFeature($XMLConstants::USE_CATALOG);
	$nc(this->fSchemaParser)->setFeature($XMLConstants::USE_CATALOG, this->fUseCatalog);
	$nc(this->fEntityManager)->setFeature($XMLConstants::USE_CATALOG, this->fUseCatalog);
	$init($JdkXmlUtils);
	$set(this, fCatalogFile, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_FILES)));
	$set(this, fDefer, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_DEFER)));
	$set(this, fPrefer, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_PREFER)));
	$set(this, fResolve, $cast($String, componentManager->getProperty($JdkXmlUtils::CATALOG_RESOLVE)));
	{
		$var($CatalogFeatures$FeatureArray, arr$, $CatalogFeatures$Feature::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$CatalogFeatures$Feature* f = arr$->get(i$);
			{
				$var($String, var$0, $nc(f)->getPropertyName());
				$nc(this->fSchemaParser)->setProperty(var$0, $(componentManager->getProperty($(f->getPropertyName()))));
				$var($String, var$1, $nc(f)->getPropertyName());
				$nc(this->fEntityManager)->setProperty(var$1, $(componentManager->getProperty($(f->getPropertyName()))));
			}
		}
	}
	$nc(this->fSchemaParser)->setProperty($JdkConstants::CDATA_CHUNK_SIZE, $(componentManager->getProperty($JdkConstants::CDATA_CHUNK_SIZE)));
	$nc(this->fEntityManager)->setProperty($JdkConstants::CDATA_CHUNK_SIZE, $(componentManager->getProperty($JdkConstants::CDATA_CHUNK_SIZE)));
}

void XSDHandler::traverseLocalElements() {
	$useLocalCurrentObjectStackCache();
	$nc(this->fElementTraverser)->fDeferTraversingLocalElements = false;
	for (int32_t i = 0; i < this->fLocalElemStackPos; ++i) {
		$var($Element, currElem, $nc(this->fLocalElementDecl)->get(i));
		$var($XSDocumentInfo, currSchema, $nc(this->fLocalElementDecl_schema)->get(i));
		$var($SchemaGrammar, currGrammar, $nc(this->fGrammarBucket)->getGrammar($nc(currSchema)->fTargetNamespace));
		$nc(this->fElementTraverser)->traverseLocal($nc(this->fParticle)->get(i), currElem, currSchema, currGrammar, $nc(this->fAllContext)->get(i), $nc(this->fParent)->get(i), $nc(this->fLocalElemNamespaceContext)->get(i));
		if ($nc($nc(this->fParticle)->get(i))->fType == $XSParticleDecl::PARTICLE_EMPTY) {
			$var($XSModelGroupImpl, group, nullptr);
			if ($instanceOf($XSComplexTypeDecl, $nc(this->fParent)->get(i))) {
				$var($XSParticle, p, $nc(($cast($XSComplexTypeDecl, $nc(this->fParent)->get(i))))->getParticle());
				if (p != nullptr) {
					$assign(group, $cast($XSModelGroupImpl, p->getTerm()));
				}
			} else {
				$assign(group, $nc(($cast($XSGroupDecl, $nc(this->fParent)->get(i))))->fModelGroup);
			}
			if (group != nullptr) {
				removeParticle(group, $nc(this->fParticle)->get(i));
			}
		}
	}
}

bool XSDHandler::removeParticle($XSModelGroupImpl* group, $XSParticleDecl* particle) {
	$var($XSParticleDecl, member, nullptr);
	for (int32_t i = 0; i < $nc(group)->fParticleCount; ++i) {
		$assign(member, $nc(group->fParticles)->get(i));
		if (member == particle) {
			for (int32_t j = i; j < group->fParticleCount - 1; ++j) {
				$nc(group->fParticles)->set(j, $nc(group->fParticles)->get(j + 1));
			}
			--group->fParticleCount;
			return true;
		}
		if ($nc(member)->fType == $XSParticleDecl::PARTICLE_MODELGROUP) {
			if (removeParticle($cast($XSModelGroupImpl, member->fValue), particle)) {
				return true;
			}
		}
	}
	return false;
}

void XSDHandler::fillInLocalElemInfo($Element* elmDecl, $XSDocumentInfo* schemaDoc, int32_t allContextFlags, $XSObject* parent, $XSParticleDecl* particle) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fParticle)->length == this->fLocalElemStackPos) {
		$var($XSParticleDeclArray, newStackP, $new($XSParticleDeclArray, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fParticle, 0, newStackP, 0, this->fLocalElemStackPos);
		$set(this, fParticle, newStackP);
		$var($ElementArray, newStackE, $new($ElementArray, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fLocalElementDecl, 0, newStackE, 0, this->fLocalElemStackPos);
		$set(this, fLocalElementDecl, newStackE);
		$var($XSDocumentInfoArray, newStackE_schema, $new($XSDocumentInfoArray, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fLocalElementDecl_schema, 0, newStackE_schema, 0, this->fLocalElemStackPos);
		$set(this, fLocalElementDecl_schema, newStackE_schema);
		$var($ints, newStackI, $new($ints, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fAllContext, 0, newStackI, 0, this->fLocalElemStackPos);
		$set(this, fAllContext, newStackI);
		$var($XSObjectArray, newStackC, $new($XSObjectArray, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fParent, 0, newStackC, 0, this->fLocalElemStackPos);
		$set(this, fParent, newStackC);
		$var($StringArray2, newStackN, $new($StringArray2, this->fLocalElemStackPos + XSDHandler::INC_STACK_SIZE));
		$System::arraycopy(this->fLocalElemNamespaceContext, 0, newStackN, 0, this->fLocalElemStackPos);
		$set(this, fLocalElemNamespaceContext, newStackN);
	}
	$nc(this->fParticle)->set(this->fLocalElemStackPos, particle);
	$nc(this->fLocalElementDecl)->set(this->fLocalElemStackPos, elmDecl);
	$nc(this->fLocalElementDecl_schema)->set(this->fLocalElemStackPos, schemaDoc);
	$nc(this->fAllContext)->set(this->fLocalElemStackPos, allContextFlags);
	$nc(this->fParent)->set(this->fLocalElemStackPos, parent);
	$nc(this->fLocalElemNamespaceContext)->set(this->fLocalElemStackPos++, $($nc($nc(schemaDoc)->fNamespaceSupport)->getEffectiveLocalContext()));
}

void XSDHandler::checkForDuplicateNames($String* qName, int32_t declType, $Map* registry, $Map* registry_sub, $Element* currComp, $XSDocumentInfo* currSchema) {
	$useLocalCurrentObjectStackCache();
	$var($Object, objElem, nullptr);
	if (($assign(objElem, $nc(registry)->get(qName))) == nullptr) {
		if (this->fNamespaceGrowth && !this->fTolerateDuplicates) {
			checkForDuplicateNames(qName, declType, currComp);
		}
		registry->put(qName, currComp);
		$nc(registry_sub)->put(qName, currSchema);
	} else {
		$var($Element, collidingElem, $cast($Element, objElem));
		$var($XSDocumentInfo, collidingElemSchema, $cast($XSDocumentInfo, $nc(registry_sub)->get(qName)));
		if (collidingElem == currComp) {
			return;
		}
		$var($Element, elemParent, nullptr);
		$var($XSDocumentInfo, redefinedSchema, nullptr);
		bool collidedWithRedefine = true;
		$init($SchemaSymbols);
		if ($nc($($DOMUtil::getLocalName((($assign(elemParent, $DOMUtil::getParent(collidingElem)))))))->equals($SchemaSymbols::ELT_REDEFINE)) {
			$assign(redefinedSchema, (this->fRedefine2XSDMap != nullptr) ? $cast($XSDocumentInfo, $nc(this->fRedefine2XSDMap)->get(elemParent)) : ($XSDocumentInfo*)nullptr);
		} else {
			if ($nc($($DOMUtil::getLocalName($($DOMUtil::getParent(currComp)))))->equals($SchemaSymbols::ELT_REDEFINE)) {
				$assign(redefinedSchema, collidingElemSchema);
				collidedWithRedefine = false;
			}
		}
		if (redefinedSchema != nullptr) {
			if (collidingElemSchema == currSchema) {
				reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), currComp);
				return;
			}
			$var($String, newName, $str({$($nc(qName)->substring(qName->lastIndexOf((int32_t)u',') + 1)), XSDHandler::REDEF_IDENTIFIER}));
			if (redefinedSchema == currSchema) {
				$nc(currComp)->setAttribute($SchemaSymbols::ATT_NAME, newName);
				if ($nc(currSchema)->fTargetNamespace == nullptr) {
					registry->put($$str({","_s, newName}), currComp);
					registry_sub->put($$str({","_s, newName}), currSchema);
				} else {
					registry->put($$str({currSchema->fTargetNamespace, ","_s, newName}), currComp);
					registry_sub->put($$str({currSchema->fTargetNamespace, ","_s, newName}), currSchema);
				}
				if ($nc(currSchema)->fTargetNamespace == nullptr) {
					checkForDuplicateNames($$str({","_s, newName}), declType, registry, registry_sub, currComp, currSchema);
				} else {
					checkForDuplicateNames($$str({currSchema->fTargetNamespace, ","_s, newName}), declType, registry, registry_sub, currComp, currSchema);
				}
			} else if (collidedWithRedefine) {
				if ($nc(currSchema)->fTargetNamespace == nullptr) {
					checkForDuplicateNames($$str({","_s, newName}), declType, registry, registry_sub, currComp, currSchema);
				} else {
					checkForDuplicateNames($$str({currSchema->fTargetNamespace, ","_s, newName}), declType, registry, registry_sub, currComp, currSchema);
				}
			} else {
				reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), currComp);
			}
		} else if (!this->fTolerateDuplicates) {
			reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), currComp);
		} else if ($nc(this->fUnparsedRegistriesExt)->get(declType) != nullptr) {
			if ($equals($nc($nc(this->fUnparsedRegistriesExt)->get(declType))->get(qName), currSchema)) {
				reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), currComp);
			}
		}
	}
	if (this->fTolerateDuplicates) {
		if ($nc(this->fUnparsedRegistriesExt)->get(declType) == nullptr) {
			$nc(this->fUnparsedRegistriesExt)->set(declType, $$new($HashMap));
		}
		$nc($nc(this->fUnparsedRegistriesExt)->get(declType))->put(qName, currSchema);
	}
}

void XSDHandler::checkForDuplicateNames($String* qName, int32_t declType, $Element* currComp) {
	$useLocalCurrentObjectStackCache();
	int32_t namespaceEnd = $nc(qName)->indexOf((int32_t)u',');
	$var($String, namespace$, qName->substring(0, namespaceEnd));
	$var($SchemaGrammar, grammar, $nc(this->fGrammarBucket)->getGrammar($(emptyString2Null(namespace$))));
	if (grammar != nullptr) {
		$var($Object, obj, getGlobalDeclFromGrammar(grammar, declType, $(qName->substring(namespaceEnd + 1))));
		if (obj != nullptr) {
			reportSchemaError("sch-props-correct.2"_s, $$new($ObjectArray, {$of(qName)}), currComp);
		}
	}
}

void XSDHandler::renameRedefiningComponents($XSDocumentInfo* currSchema, $Element* child, $String* componentType, $String* oldName, $String* newName) {
	$useLocalCurrentObjectStackCache();
	$init($SchemaSymbols);
	if ($nc(componentType)->equals($SchemaSymbols::ELT_SIMPLETYPE)) {
		$var($Element, grandKid, $DOMUtil::getFirstChildElement(child));
		if (grandKid == nullptr) {
			reportSchemaError("src-redefine.5.a.a"_s, nullptr, child);
		} else {
			$var($String, grandKidName, $DOMUtil::getLocalName(grandKid));
			if ($nc(grandKidName)->equals($SchemaSymbols::ELT_ANNOTATION)) {
				$assign(grandKid, $DOMUtil::getNextSiblingElement(grandKid));
			}
			if (grandKid == nullptr) {
				reportSchemaError("src-redefine.5.a.a"_s, nullptr, child);
			} else {
				$assign(grandKidName, $DOMUtil::getLocalName(grandKid));
				if (!$nc(grandKidName)->equals($SchemaSymbols::ELT_RESTRICTION)) {
					reportSchemaError("src-redefine.5.a.b"_s, $$new($ObjectArray, {$of(grandKidName)}), child);
				} else {
					$var($ObjectArray, attrs, $nc(this->fAttributeChecker)->checkAttributes(grandKid, false, currSchema));
					$var($QName, derivedBase, $cast($QName, $nc(attrs)->get($XSAttributeChecker::ATTIDX_BASE)));
					if (derivedBase == nullptr || $nc(derivedBase)->uri != $nc(currSchema)->fTargetNamespace || !$nc($nc(derivedBase)->localpart)->equals(oldName)) {
						reportSchemaError("src-redefine.5.a.c"_s, $$new($ObjectArray, {
							$of(grandKidName),
							$of($$str({($nc(currSchema)->fTargetNamespace == nullptr ? ""_s : $nc(currSchema)->fTargetNamespace), ","_s, oldName}))
						}), child);
					} else if (derivedBase->prefix != nullptr && $nc(derivedBase->prefix)->length() > 0) {
						$nc(grandKid)->setAttribute($SchemaSymbols::ATT_BASE, $$str({derivedBase->prefix, ":"_s, newName}));
					} else {
						$nc(grandKid)->setAttribute($SchemaSymbols::ATT_BASE, newName);
					}
					$nc(this->fAttributeChecker)->returnAttrArray(attrs, currSchema);
				}
			}
		}
	} else {
		if (componentType->equals($SchemaSymbols::ELT_COMPLEXTYPE)) {
			$var($Element, grandKid, $DOMUtil::getFirstChildElement(child));
			if (grandKid == nullptr) {
				reportSchemaError("src-redefine.5.b.a"_s, nullptr, child);
			} else {
				if ($nc($($DOMUtil::getLocalName(grandKid)))->equals($SchemaSymbols::ELT_ANNOTATION)) {
					$assign(grandKid, $DOMUtil::getNextSiblingElement(grandKid));
				}
				if (grandKid == nullptr) {
					reportSchemaError("src-redefine.5.b.a"_s, nullptr, child);
				} else {
					$var($Element, greatGrandKid, $DOMUtil::getFirstChildElement(grandKid));
					if (greatGrandKid == nullptr) {
						reportSchemaError("src-redefine.5.b.b"_s, nullptr, grandKid);
					} else {
						$var($String, greatGrandKidName, $DOMUtil::getLocalName(greatGrandKid));
						if ($nc(greatGrandKidName)->equals($SchemaSymbols::ELT_ANNOTATION)) {
							$assign(greatGrandKid, $DOMUtil::getNextSiblingElement(greatGrandKid));
						}
						if (greatGrandKid == nullptr) {
							reportSchemaError("src-redefine.5.b.b"_s, nullptr, grandKid);
						} else {
							$assign(greatGrandKidName, $DOMUtil::getLocalName(greatGrandKid));
							bool var$0 = !$nc(greatGrandKidName)->equals($SchemaSymbols::ELT_RESTRICTION);
							if (var$0 && !greatGrandKidName->equals($SchemaSymbols::ELT_EXTENSION)) {
								reportSchemaError("src-redefine.5.b.c"_s, $$new($ObjectArray, {$of(greatGrandKidName)}), greatGrandKid);
							} else {
								$var($ObjectArray, attrs, $nc(this->fAttributeChecker)->checkAttributes(greatGrandKid, false, currSchema));
								$var($QName, derivedBase, $cast($QName, $nc(attrs)->get($XSAttributeChecker::ATTIDX_BASE)));
								if (derivedBase == nullptr || $nc(derivedBase)->uri != $nc(currSchema)->fTargetNamespace || !$nc($nc(derivedBase)->localpart)->equals(oldName)) {
									reportSchemaError("src-redefine.5.b.d"_s, $$new($ObjectArray, {
										$of(greatGrandKidName),
										$of($$str({($nc(currSchema)->fTargetNamespace == nullptr ? ""_s : $nc(currSchema)->fTargetNamespace), ","_s, oldName}))
									}), greatGrandKid);
								} else if (derivedBase->prefix != nullptr && $nc(derivedBase->prefix)->length() > 0) {
									$nc(greatGrandKid)->setAttribute($SchemaSymbols::ATT_BASE, $$str({derivedBase->prefix, ":"_s, newName}));
								} else {
									$nc(greatGrandKid)->setAttribute($SchemaSymbols::ATT_BASE, newName);
								}
							}
						}
					}
				}
			}
		} else {
			if (componentType->equals($SchemaSymbols::ELT_ATTRIBUTEGROUP)) {
				$var($String, processedBaseName, ($nc(currSchema)->fTargetNamespace == nullptr) ? $str({","_s, oldName}) : $str({$nc(currSchema)->fTargetNamespace, ","_s, oldName}));
				int32_t attGroupRefsCount = changeRedefineGroup(processedBaseName, componentType, newName, child, currSchema);
				if (attGroupRefsCount > 1) {
					reportSchemaError("src-redefine.7.1"_s, $$new($ObjectArray, {$($of($Integer::valueOf(attGroupRefsCount)))}), child);
				} else if (attGroupRefsCount == 1) {
				} else if (currSchema->fTargetNamespace == nullptr) {
					$nc(this->fRedefinedRestrictedAttributeGroupRegistry)->put(processedBaseName, $$str({","_s, newName}));
				} else {
					$nc(this->fRedefinedRestrictedAttributeGroupRegistry)->put(processedBaseName, $$str({currSchema->fTargetNamespace, ","_s, newName}));
				}
			} else {
				if (componentType->equals($SchemaSymbols::ELT_GROUP)) {
					$var($String, processedBaseName, ($nc(currSchema)->fTargetNamespace == nullptr) ? $str({","_s, oldName}) : $str({$nc(currSchema)->fTargetNamespace, ","_s, oldName}));
					int32_t groupRefsCount = changeRedefineGroup(processedBaseName, componentType, newName, child, currSchema);
					if (groupRefsCount > 1) {
						reportSchemaError("src-redefine.6.1.1"_s, $$new($ObjectArray, {$($of($Integer::valueOf(groupRefsCount)))}), child);
					} else if (groupRefsCount == 1) {
					} else if (currSchema->fTargetNamespace == nullptr) {
						$nc(this->fRedefinedRestrictedGroupRegistry)->put(processedBaseName, $$str({","_s, newName}));
					} else {
						$nc(this->fRedefinedRestrictedGroupRegistry)->put(processedBaseName, $$str({currSchema->fTargetNamespace, ","_s, newName}));
					}
				} else {
					reportSchemaError("Internal-Error"_s, $$new($ObjectArray, {$of("could not handle this particular <redefine>; please submit your schemas and instance document in a bug report!"_s)}), child);
				}
			}
		}
	}
}

$String* XSDHandler::findQName($String* name, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaNamespaceSupport, currNSMap, $nc(schemaDoc)->fNamespaceSupport);
	int32_t colonPtr = $nc(name)->indexOf((int32_t)u':');
	$init($XMLSymbols);
	$var($String, prefix, $XMLSymbols::EMPTY_STRING);
	if (colonPtr > 0) {
		$assign(prefix, name->substring(0, colonPtr));
	}
	$var($String, uri, $nc(currNSMap)->getURI($($nc(this->fSymbolTable)->addSymbol(prefix))));
	$var($String, localpart, (colonPtr == 0) ? name : name->substring(colonPtr + 1));
	if (prefix == $XMLSymbols::EMPTY_STRING && uri == nullptr && schemaDoc->fIsChameleonSchema) {
		$assign(uri, schemaDoc->fTargetNamespace);
	}
	if (uri == nullptr) {
		return $str({","_s, localpart});
	}
	return $str({uri, ","_s, localpart});
}

int32_t XSDHandler::changeRedefineGroup($String* originalQName, $String* elementSought, $String* newName, $Element* curr, $XSDocumentInfo* schemaDoc) {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	{
		$var($Element, child, $DOMUtil::getFirstChildElement(curr));
		for (; child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
			$var($String, name, $DOMUtil::getLocalName(child));
			if (!$nc(name)->equals(elementSought)) {
				result += changeRedefineGroup(originalQName, elementSought, newName, child, schemaDoc);
			} else {
				$init($SchemaSymbols);
				$var($String, ref, $nc(child)->getAttribute($SchemaSymbols::ATT_REF));
				if ($nc(ref)->length() != 0) {
					$var($String, processedRef, findQName(ref, schemaDoc));
					if ($nc(originalQName)->equals(processedRef)) {
						$init($XMLSymbols);
						$var($String, prefix, $XMLSymbols::EMPTY_STRING);
						int32_t colonptr = ref->indexOf(":"_s);
						if (colonptr > 0) {
							$assign(prefix, ref->substring(0, colonptr));
							child->setAttribute($SchemaSymbols::ATT_REF, $$str({prefix, ":"_s, newName}));
						} else {
							child->setAttribute($SchemaSymbols::ATT_REF, newName);
						}
						++result;
						if ($nc(elementSought)->equals($SchemaSymbols::ELT_GROUP)) {
							$var($String, minOccurs, child->getAttribute($SchemaSymbols::ATT_MINOCCURS));
							$var($String, maxOccurs, child->getAttribute($SchemaSymbols::ATT_MAXOCCURS));
							bool var$1 = $nc(maxOccurs)->length() == 0;
							bool var$0 = (var$1 || $nc(maxOccurs)->equals("1"_s));
							if (var$0) {
								bool var$2 = $nc(minOccurs)->length() == 0;
								var$0 = (var$2 || $nc(minOccurs)->equals("1"_s));
							}
							if (!(var$0)) {
								reportSchemaError("src-redefine.6.1.2"_s, $$new($ObjectArray, {$of(ref)}), child);
							}
						}
					}
				}
			}
		}
	}
	return result;
}

$XSDocumentInfo* XSDHandler::findXSDocumentForDecl($XSDocumentInfo* currSchema, $Element* decl, $XSDocumentInfo* decl_Doc) {
	$useLocalCurrentObjectStackCache();
	$var($Object, temp, decl_Doc);
	if (temp == nullptr) {
		return nullptr;
	}
	$var($XSDocumentInfo, declDocInfo, $cast($XSDocumentInfo, temp));
	return declDocInfo;
}

bool XSDHandler::nonAnnotationContent($Element* elem) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Element, child, $DOMUtil::getFirstChildElement(elem));
		for (; child != nullptr; $assign(child, $DOMUtil::getNextSiblingElement(child))) {
			$init($SchemaSymbols);
			if (!($nc($($DOMUtil::getLocalName(child)))->equals($SchemaSymbols::ELT_ANNOTATION))) {
				return true;
			}
		}
	}
	return false;
}

void XSDHandler::setSchemasVisible($XSDocumentInfo* startSchema) {
	$useLocalCurrentObjectStackCache();
	if ($DOMUtil::isHidden($nc(startSchema)->fSchemaElement, this->fHiddenNodes)) {
		$DOMUtil::setVisible($nc(startSchema)->fSchemaElement, this->fHiddenNodes);
		$var($List, dependingSchemas, $cast($List, $nc(this->fDependencyMap)->get(startSchema)));
		for (int32_t i = 0; i < $nc(dependingSchemas)->size(); ++i) {
			setSchemasVisible($cast($XSDocumentInfo, $(dependingSchemas->get(i))));
		}
	}
}

$SimpleLocator* XSDHandler::element2Locator($Element* e) {
	if (!($instanceOf($ElementImpl, e))) {
		return nullptr;
	}
	$var($SimpleLocator, l, $new($SimpleLocator));
	return element2Locator(e, l) ? l : ($SimpleLocator*)nullptr;
}

bool XSDHandler::element2Locator($Element* e, $SimpleLocator* l) {
	$useLocalCurrentObjectStackCache();
	if (l == nullptr) {
		return false;
	}
	if ($instanceOf($ElementImpl, e)) {
		$var($ElementImpl, ele, $cast($ElementImpl, e));
		$var($Document, doc, $nc(ele)->getOwnerDocument());
		$var($String, sid, $cast($String, $nc(this->fDoc2SystemId)->get($($DOMUtil::getRoot(doc)))));
		int32_t line = ele->getLineNumber();
		int32_t column = ele->getColumnNumber();
		$nc(l)->setValues(sid, sid, line, column, ele->getCharacterOffset());
		return true;
	}
	return false;
}

$Element* XSDHandler::getElementFromMap($Map* registry, $String* declKey) {
	if (registry == nullptr) {
		return nullptr;
	}
	return $cast($Element, $nc(registry)->get(declKey));
}

$XSDocumentInfo* XSDHandler::getDocInfoFromMap($Map* registry, $String* declKey) {
	if (registry == nullptr) {
		return nullptr;
	}
	return $cast($XSDocumentInfo, $nc(registry)->get(declKey));
}

$List* XSDHandler::getFromMap($Map* registry, $String* key) {
	if (registry == nullptr) {
		return nullptr;
	}
	return $cast($List, $nc(registry)->get(key));
}

void XSDHandler::reportSchemaFatalError($String* key, $ObjectArray* args, $Element* ele) {
	reportSchemaErr(key, args, ele, $XMLErrorReporter::SEVERITY_FATAL_ERROR, nullptr);
}

void XSDHandler::reportSchemaError($String* key, $ObjectArray* args, $Element* ele) {
	reportSchemaErr(key, args, ele, $XMLErrorReporter::SEVERITY_ERROR, nullptr);
}

void XSDHandler::reportSchemaError($String* key, $ObjectArray* args, $Element* ele, $Exception* exception) {
	reportSchemaErr(key, args, ele, $XMLErrorReporter::SEVERITY_ERROR, exception);
}

void XSDHandler::reportSchemaWarning($String* key, $ObjectArray* args, $Element* ele) {
	reportSchemaErr(key, args, ele, $XMLErrorReporter::SEVERITY_WARNING, nullptr);
}

void XSDHandler::reportSchemaWarning($String* key, $ObjectArray* args, $Element* ele, $Exception* exception) {
	reportSchemaErr(key, args, ele, $XMLErrorReporter::SEVERITY_WARNING, exception);
}

void XSDHandler::reportSchemaErr($String* key, $ObjectArray* args, $Element* ele, int16_t type, $Exception* exception) {
	if (element2Locator(ele, this->xl)) {
		$init($XSMessageFormatter);
		$nc(this->fErrorReporter)->reportError(this->xl, $XSMessageFormatter::SCHEMA_DOMAIN, key, args, type, exception);
	} else {
		$init($XSMessageFormatter);
		$nc(this->fErrorReporter)->reportError($XSMessageFormatter::SCHEMA_DOMAIN, key, args, type, exception);
	}
}

void XSDHandler::setGenerateSyntheticAnnotations(bool state) {
	$nc(this->fSchemaParser)->setFeature(XSDHandler::GENERATE_SYNTHETIC_ANNOTATIONS, state);
}

void clinit$XSDHandler($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$assignStatic(XSDHandler::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XSDHandler::XMLSCHEMA_VALIDATION, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}));
	$assignStatic(XSDHandler::ALLOW_JAVA_ENCODINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::ALLOW_JAVA_ENCODINGS_FEATURE}));
	$assignStatic(XSDHandler::CONTINUE_AFTER_FATAL_ERROR, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::CONTINUE_AFTER_FATAL_ERROR_FEATURE}));
	$assignStatic(XSDHandler::STANDARD_URI_CONFORMANT_FEATURE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::STANDARD_URI_CONFORMANT_FEATURE}));
	$assignStatic(XSDHandler::DISALLOW_DOCTYPE, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::DISALLOW_DOCTYPE_DECL_FEATURE}));
	$assignStatic(XSDHandler::GENERATE_SYNTHETIC_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::GENERATE_SYNTHETIC_ANNOTATIONS_FEATURE}));
	$assignStatic(XSDHandler::VALIDATE_ANNOTATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::VALIDATE_ANNOTATIONS_FEATURE}));
	$assignStatic(XSDHandler::HONOUR_ALL_SCHEMALOCATIONS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::HONOUR_ALL_SCHEMALOCATIONS_FEATURE}));
	$assignStatic(XSDHandler::NAMESPACE_GROWTH, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NAMESPACE_GROWTH_FEATURE}));
	$assignStatic(XSDHandler::TOLERATE_DUPLICATES, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::TOLERATE_DUPLICATES_FEATURE}));
	$assignStatic(XSDHandler::NAMESPACE_PREFIXES, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::NAMESPACE_PREFIXES_FEATURE}));
	$assignStatic(XSDHandler::STRING_INTERNING, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::STRING_INTERNING_FEATURE}));
	$assignStatic(XSDHandler::ERROR_HANDLER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_HANDLER_PROPERTY}));
	$assignStatic(XSDHandler::JAXP_SCHEMA_SOURCE, $str({$Constants::JAXP_PROPERTY_PREFIX, $Constants::SCHEMA_SOURCE}));
	$assignStatic(XSDHandler::ENTITY_RESOLVER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_RESOLVER_PROPERTY}));
	$assignStatic(XSDHandler::ENTITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ENTITY_MANAGER_PROPERTY}));
	$assignStatic(XSDHandler::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XSDHandler::XMLGRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XSDHandler::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XSDHandler::SECURITY_MANAGER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SECURITY_MANAGER_PROPERTY}));
	$assignStatic(XSDHandler::LOCALE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::LOCALE_PROPERTY}));
	$init($JdkConstants);
	$assignStatic(XSDHandler::XML_SECURITY_PROPERTY_MANAGER, $JdkConstants::XML_SECURITY_PROPERTY_MANAGER);
	$assignStatic(XSDHandler::REDEF_IDENTIFIER, "_fn3dktizrknc9pi"_s);
	$assignStatic(XSDHandler::NS_ERROR_CODES, $new($StringArray2, {
		$$new($StringArray, {
			"src-include.2.1"_s,
			"src-include.2.1"_s
		}),
		$$new($StringArray, {
			"src-redefine.3.1"_s,
			"src-redefine.3.1"_s
		}),
		$$new($StringArray, {
			"src-import.3.1"_s,
			"src-import.3.2"_s
		}),
		($StringArray*)nullptr,
		$$new($StringArray, {
			"TargetNamespace.1"_s,
			"TargetNamespace.2"_s
		}),
		$$new($StringArray, {
			"TargetNamespace.1"_s,
			"TargetNamespace.2"_s
		}),
		$$new($StringArray, {
			"TargetNamespace.1"_s,
			"TargetNamespace.2"_s
		}),
		$$new($StringArray, {
			"TargetNamespace.1"_s,
			"TargetNamespace.2"_s
		})
	}));
	$assignStatic(XSDHandler::ELE_ERROR_CODES, $new($StringArray, {
		"src-include.1"_s,
		"src-redefine.2"_s,
		"src-import.2"_s,
		"schema_reference.4"_s,
		"schema_reference.4"_s,
		"schema_reference.4"_s,
		"schema_reference.4"_s,
		"schema_reference.4"_s
	}));
	$assignStatic(XSDHandler::COMP_TYPE, $new($StringArray, {
		($String*)nullptr,
		"attribute declaration"_s,
		"attribute group"_s,
		"element declaration"_s,
		"group"_s,
		"identity constraint"_s,
		"notation"_s,
		"type definition"_s
	}));
	$assignStatic(XSDHandler::CIRCULAR_CODES, $new($StringArray, {
		"Internal-Error"_s,
		"Internal-Error"_s,
		"src-attribute_group.3"_s,
		"e-props-correct.6"_s,
		"mg-props-correct.2"_s,
		"Internal-Error"_s,
		"Internal-Error"_s,
		"st-props-correct.2"_s
	}));
}

XSDHandler::XSDHandler() {
}

$Class* XSDHandler::load$($String* name, bool initialize) {
	$loadClass(XSDHandler, name, initialize, &_XSDHandler_ClassInfo_, clinit$XSDHandler, allocate$XSDHandler);
	return class$;
}

$Class* XSDHandler::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com