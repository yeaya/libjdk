#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDProcessor.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponent.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <java/lang/ClassCastException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef CONDITIONAL_IGNORE
#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_LEAF
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE
#undef DTD_VALIDATOR
#undef DTD_VALIDATOR_PROPERTY
#undef ERROR_REPORTER
#undef ERROR_REPORTER_PROPERTY
#undef FALSE
#undef FEATURE_DEFAULTS
#undef GRAMMAR_POOL
#undef NOTIFY_CHAR_REFS
#undef NOTIFY_CHAR_REFS_FEATURE
#undef PARSER_SETTINGS
#undef PROPERTY_DEFAULTS
#undef RECOGNIZED_FEATURES
#undef RECOGNIZED_PROPERTIES
#undef SAX_FEATURE_PREFIX
#undef SCHEMA_VALIDATION_FEATURE
#undef SEVERITY_ERROR
#undef SEVERITY_WARNING
#undef SYMBOL_TABLE
#undef SYMBOL_TABLE_PROPERTY
#undef TOP_LEVEL_SCOPE
#undef TYPE_CHILDREN
#undef TYPE_EMPTY
#undef TYPE_MIXED
#undef VALIDATION
#undef VALIDATION_FEATURE
#undef WARN_ON_DUPLICATE_ATTDEF
#undef WARN_ON_DUPLICATE_ATTDEF_FEATURE
#undef WARN_ON_UNDECLARED_ELEMDEF
#undef WARN_ON_UNDECLARED_ELEMDEF_FEATURE
#undef XERCES_FEATURE_PREFIX
#undef XERCES_PROPERTY_PREFIX
#undef XMLGRAMMAR_POOL_PROPERTY
#undef XML_DOMAIN
#undef XML_DTD

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $BooleanArray = $Array<::java::lang::Boolean>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $DTDGrammar = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar;
using $DTDGrammarBucket = ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammarBucket;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $XMLDTDValidator = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDValidator;
using $XMLElementDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl;
using $XMLEntityDecl = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLEntityDecl;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLDTDContentModelHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler;
using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLGrammarPool = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool;
using $XMLComponent = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponent;
using $XMLComponentManager = ::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager;
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$FieldInfo _XMLDTDProcessor_FieldInfo_[] = {
	{"TOP_LEVEL_SCOPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLDTDProcessor, TOP_LEVEL_SCOPE)},
	{"VALIDATION", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, VALIDATION)},
	{"NOTIFY_CHAR_REFS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, NOTIFY_CHAR_REFS)},
	{"WARN_ON_DUPLICATE_ATTDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, WARN_ON_DUPLICATE_ATTDEF)},
	{"WARN_ON_UNDECLARED_ELEMDEF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, WARN_ON_UNDECLARED_ELEMDEF)},
	{"PARSER_SETTINGS", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, PARSER_SETTINGS)},
	{"SYMBOL_TABLE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, SYMBOL_TABLE)},
	{"ERROR_REPORTER", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, ERROR_REPORTER)},
	{"GRAMMAR_POOL", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, GRAMMAR_POOL)},
	{"DTD_VALIDATOR", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLDTDProcessor, DTD_VALIDATOR)},
	{"RECOGNIZED_FEATURES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDProcessor, RECOGNIZED_FEATURES)},
	{"FEATURE_DEFAULTS", "[Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDProcessor, FEATURE_DEFAULTS)},
	{"RECOGNIZED_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDProcessor, RECOGNIZED_PROPERTIES)},
	{"PROPERTY_DEFAULTS", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDTDProcessor, PROPERTY_DEFAULTS)},
	{"fValidation", "Z", nullptr, $PROTECTED, $field(XMLDTDProcessor, fValidation)},
	{"fDTDValidation", "Z", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDValidation)},
	{"fWarnDuplicateAttdef", "Z", nullptr, $PROTECTED, $field(XMLDTDProcessor, fWarnDuplicateAttdef)},
	{"fWarnOnUndeclaredElemdef", "Z", nullptr, $PROTECTED, $field(XMLDTDProcessor, fWarnOnUndeclaredElemdef)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fSymbolTable)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fErrorReporter)},
	{"fGrammarBucket", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammarBucket;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fGrammarBucket)},
	{"fValidator", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidator;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fValidator)},
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fGrammarPool)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fLocale)},
	{"fDTDHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDHandler)},
	{"fDTDSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDSource)},
	{"fDTDContentModelHandler", "Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDContentModelHandler)},
	{"fDTDContentModelSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDContentModelSource)},
	{"fDTDGrammar", "Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;", nullptr, $PROTECTED, $field(XMLDTDProcessor, fDTDGrammar)},
	{"fPerformValidation", "Z", nullptr, $PRIVATE, $field(XMLDTDProcessor, fPerformValidation)},
	{"fInDTDIgnore", "Z", nullptr, $PROTECTED, $field(XMLDTDProcessor, fInDTDIgnore)},
	{"fMixed", "Z", nullptr, $PRIVATE, $field(XMLDTDProcessor, fMixed)},
	{"fEntityDecl", "Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;", nullptr, $PRIVATE | $FINAL, $field(XMLDTDProcessor, fEntityDecl)},
	{"fNDataDeclNotations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XMLDTDProcessor, fNDataDeclNotations)},
	{"fDTDElementDeclName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLDTDProcessor, fDTDElementDeclName)},
	{"fMixedElementTypes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XMLDTDProcessor, fMixedElementTypes)},
	{"fDTDElementDecls", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XMLDTDProcessor, fDTDElementDecls)},
	{"fTableOfIDAttributeNames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(XMLDTDProcessor, fTableOfIDAttributeNames)},
	{"fTableOfNOTATIONAttributeNames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(XMLDTDProcessor, fTableOfNOTATIONAttributeNames)},
	{"fNotationEnumVals", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(XMLDTDProcessor, fNotationEnumVals)},
	{}
};

$MethodInfo _XMLDTDProcessor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLDTDProcessor, init$, void)},
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, any, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"checkDeclaredElements", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;)V", nullptr, $PRIVATE, $method(XMLDTDProcessor, checkDeclaredElements, void, $DTDGrammar*)},
	{"checkDeclaredElements", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;IILcom/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec;)V", nullptr, $PRIVATE, $method(XMLDTDProcessor, checkDeclaredElements, void, $DTDGrammar*, int32_t, int32_t, $XMLContentSpec*)},
	{"checkStandaloneEntityRef", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar;Lcom/sun/org/apache/xerces/internal/impl/dtd/XMLEntityDecl;Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(XMLDTDProcessor, checkStandaloneEntityRef, void, $String*, $DTDGrammar*, $XMLEntityDecl*, $XMLErrorReporter*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, element, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, empty, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endContentModel, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getDTDContentModelHandler, $XMLDTDContentModelHandler*)},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getDTDContentModelSource, $XMLDTDContentModelSource*)},
	{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getDTDHandler, $XMLDTDHandler*)},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getDTDSource, $XMLDTDSource*)},
	{"getFeatureDefault", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getFeatureDefault, $Boolean*, $String*)},
	{"getPropertyDefault", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getPropertyDefault, $Object*, $String*)},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, getRecognizedProperties, $StringArray*)},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"isValidName", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XMLDTDProcessor, isValidName, bool, $String*)},
	{"isValidNmtoken", "(Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XMLDTDProcessor, isValidNmtoken, bool, $String*)},
	{"normalizeDefaultAttrValue", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)Z", nullptr, $PRIVATE, $method(XMLDTDProcessor, normalizeDefaultAttrValue, bool, $XMLString*)},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, occurrence, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, pcdata, void, $Augmentations*)},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, reset, void, $XMLComponentManager*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"reset", "()V", nullptr, $PROTECTED, $virtualMethod(XMLDTDProcessor, reset, void)},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, separator, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setDTDContentModelHandler, void, $XMLDTDContentModelHandler*)},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setDTDContentModelSource, void, $XMLDTDContentModelSource*)},
	{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setDTDHandler, void, $XMLDTDHandler*)},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setDTDSource, void, $XMLDTDSource*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startContentModel, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC, $virtualMethod(XMLDTDProcessor, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDTDProcessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDProcessor",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.parser.XMLComponent,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDFilter,com.sun.org.apache.xerces.internal.xni.parser.XMLDTDContentModelFilter",
	_XMLDTDProcessor_FieldInfo_,
	_XMLDTDProcessor_MethodInfo_
};

$Object* allocate$XMLDTDProcessor($Class* clazz) {
	return $of($alloc(XMLDTDProcessor));
}

int32_t XMLDTDProcessor::hashCode() {
	 return this->$XMLComponent::hashCode();
}

bool XMLDTDProcessor::equals(Object$* arg0) {
	 return this->$XMLComponent::equals(arg0);
}

$Object* XMLDTDProcessor::clone() {
	 return this->$XMLComponent::clone();
}

$String* XMLDTDProcessor::toString() {
	 return this->$XMLComponent::toString();
}

void XMLDTDProcessor::finalize() {
	this->$XMLComponent::finalize();
}

$String* XMLDTDProcessor::VALIDATION = nullptr;
$String* XMLDTDProcessor::NOTIFY_CHAR_REFS = nullptr;
$String* XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF = nullptr;
$String* XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF = nullptr;
$String* XMLDTDProcessor::PARSER_SETTINGS = nullptr;
$String* XMLDTDProcessor::SYMBOL_TABLE = nullptr;
$String* XMLDTDProcessor::ERROR_REPORTER = nullptr;
$String* XMLDTDProcessor::GRAMMAR_POOL = nullptr;
$String* XMLDTDProcessor::DTD_VALIDATOR = nullptr;
$StringArray* XMLDTDProcessor::RECOGNIZED_FEATURES = nullptr;
$BooleanArray* XMLDTDProcessor::FEATURE_DEFAULTS = nullptr;
$StringArray* XMLDTDProcessor::RECOGNIZED_PROPERTIES = nullptr;
$ObjectArray* XMLDTDProcessor::PROPERTY_DEFAULTS = nullptr;

void XMLDTDProcessor::init$() {
	$set(this, fEntityDecl, $new($XMLEntityDecl));
	$set(this, fNDataDeclNotations, $new($HashMap));
	$set(this, fDTDElementDeclName, nullptr);
	$set(this, fMixedElementTypes, $new($ArrayList));
	$set(this, fDTDElementDecls, $new($ArrayList));
}

void XMLDTDProcessor::reset($XMLComponentManager* componentManager) {
	$useLocalCurrentObjectStackCache();
	bool parser_settings = $nc(componentManager)->getFeature(XMLDTDProcessor::PARSER_SETTINGS, true);
	if (!parser_settings) {
		reset();
		return;
	}
	this->fValidation = componentManager->getFeature(XMLDTDProcessor::VALIDATION, false);
	$init($Constants);
	this->fDTDValidation = !(componentManager->getFeature($$str({$Constants::XERCES_FEATURE_PREFIX, $Constants::SCHEMA_VALIDATION_FEATURE}), false));
	this->fWarnDuplicateAttdef = componentManager->getFeature(XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF, false);
	this->fWarnOnUndeclaredElemdef = componentManager->getFeature(XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF, false);
	$set(this, fErrorReporter, $cast($XMLErrorReporter, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}))));
	$set(this, fSymbolTable, $cast($SymbolTable, componentManager->getProperty($$str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}))));
	$set(this, fGrammarPool, $cast($XMLGrammarPool, componentManager->getProperty(XMLDTDProcessor::GRAMMAR_POOL, nullptr)));
	try {
		$set(this, fValidator, $cast($XMLDTDValidator, componentManager->getProperty(XMLDTDProcessor::DTD_VALIDATOR, nullptr)));
	} catch ($ClassCastException& e) {
		$set(this, fValidator, nullptr);
	}
	if (this->fValidator != nullptr) {
		$set(this, fGrammarBucket, $nc(this->fValidator)->getGrammarBucket());
	} else {
		$set(this, fGrammarBucket, nullptr);
	}
	reset();
}

void XMLDTDProcessor::reset() {
	$set(this, fDTDGrammar, nullptr);
	this->fInDTDIgnore = false;
	$nc(this->fNDataDeclNotations)->clear();
	if (this->fValidation) {
		if (this->fNotationEnumVals == nullptr) {
			$set(this, fNotationEnumVals, $new($HashMap));
		}
		$nc(this->fNotationEnumVals)->clear();
		$set(this, fTableOfIDAttributeNames, $new($HashMap));
		$set(this, fTableOfNOTATIONAttributeNames, $new($HashMap));
	}
}

$StringArray* XMLDTDProcessor::getRecognizedFeatures() {
	return $cast($StringArray, $nc(XMLDTDProcessor::RECOGNIZED_FEATURES)->clone());
}

void XMLDTDProcessor::setFeature($String* featureId, bool state) {
}

$StringArray* XMLDTDProcessor::getRecognizedProperties() {
	return $cast($StringArray, $nc(XMLDTDProcessor::RECOGNIZED_PROPERTIES)->clone());
}

void XMLDTDProcessor::setProperty($String* propertyId, Object$* value) {
}

$Boolean* XMLDTDProcessor::getFeatureDefault($String* featureId) {
	for (int32_t i = 0; i < $nc(XMLDTDProcessor::RECOGNIZED_FEATURES)->length; ++i) {
		if ($nc($nc(XMLDTDProcessor::RECOGNIZED_FEATURES)->get(i))->equals(featureId)) {
			return $nc(XMLDTDProcessor::FEATURE_DEFAULTS)->get(i);
		}
	}
	return nullptr;
}

$Object* XMLDTDProcessor::getPropertyDefault($String* propertyId) {
	for (int32_t i = 0; i < $nc(XMLDTDProcessor::RECOGNIZED_PROPERTIES)->length; ++i) {
		if ($nc($nc(XMLDTDProcessor::RECOGNIZED_PROPERTIES)->get(i))->equals(propertyId)) {
			return $of($nc(XMLDTDProcessor::PROPERTY_DEFAULTS)->get(i));
		}
	}
	return $of(nullptr);
}

void XMLDTDProcessor::setDTDHandler($XMLDTDHandler* dtdHandler) {
	$set(this, fDTDHandler, dtdHandler);
}

$XMLDTDHandler* XMLDTDProcessor::getDTDHandler() {
	return this->fDTDHandler;
}

void XMLDTDProcessor::setDTDContentModelHandler($XMLDTDContentModelHandler* dtdContentModelHandler) {
	$set(this, fDTDContentModelHandler, dtdContentModelHandler);
}

$XMLDTDContentModelHandler* XMLDTDProcessor::getDTDContentModelHandler() {
	return this->fDTDContentModelHandler;
}

void XMLDTDProcessor::startExternalSubset($XMLResourceIdentifier* identifier, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startExternalSubset(identifier, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startExternalSubset(identifier, augs);
	}
}

void XMLDTDProcessor::endExternalSubset($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endExternalSubset(augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endExternalSubset(augs);
	}
}

void XMLDTDProcessor::checkStandaloneEntityRef($String* name, $DTDGrammar* grammar, $XMLEntityDecl* tempEntityDecl, $XMLErrorReporter* errorReporter) {
	$init(XMLDTDProcessor);
	int32_t entIndex = $nc(grammar)->getEntityDeclIndex(name);
	if (entIndex > -1) {
		grammar->getEntityDecl(entIndex, tempEntityDecl);
		if ($nc(tempEntityDecl)->inExternal) {
			$init($XMLMessageFormatter);
			$nc(errorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_REFERENCE_TO_EXTERNALLY_DECLARED_ENTITY_WHEN_STANDALONE"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
	}
}

void XMLDTDProcessor::comment($XMLString* text, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->comment(text, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->comment(text, augs);
	}
}

void XMLDTDProcessor::processingInstruction($String* target, $XMLString* data, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->processingInstruction(target, data, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->processingInstruction(target, data, augs);
	}
}

void XMLDTDProcessor::startDTD($XMLLocator* locator, $Augmentations* augs) {
	$nc(this->fNDataDeclNotations)->clear();
	$nc(this->fDTDElementDecls)->clear();
	if (!$nc($($nc(this->fGrammarBucket)->getActiveGrammar()))->isImmutable()) {
		$set(this, fDTDGrammar, $nc(this->fGrammarBucket)->getActiveGrammar());
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startDTD(locator, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startDTD(locator, augs);
	}
}

void XMLDTDProcessor::ignoredCharacters($XMLString* text, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->ignoredCharacters(text, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->ignoredCharacters(text, augs);
	}
}

void XMLDTDProcessor::textDecl($String* version, $String* encoding, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->textDecl(version, encoding, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->textDecl(version, encoding, augs);
	}
}

void XMLDTDProcessor::startParameterEntity($String* name, $XMLResourceIdentifier* identifier, $String* encoding, $Augmentations* augs) {
	if (this->fPerformValidation && this->fDTDGrammar != nullptr && $nc(this->fGrammarBucket)->getStandalone()) {
		checkStandaloneEntityRef(name, this->fDTDGrammar, this->fEntityDecl, this->fErrorReporter);
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startParameterEntity(name, identifier, encoding, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startParameterEntity(name, identifier, encoding, augs);
	}
}

void XMLDTDProcessor::endParameterEntity($String* name, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endParameterEntity(name, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endParameterEntity(name, augs);
	}
}

void XMLDTDProcessor::elementDecl($String* name, $String* contentModel, $Augmentations* augs) {
	if (this->fValidation) {
		if ($nc(this->fDTDElementDecls)->contains(name)) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ELEMENT_ALREADY_DECLARED"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
		} else {
			$nc(this->fDTDElementDecls)->add(name);
		}
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->elementDecl(name, contentModel, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->elementDecl(name, contentModel, augs);
	}
}

void XMLDTDProcessor::startAttlist($String* elementName, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startAttlist(elementName, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startAttlist(elementName, augs);
	}
}

void XMLDTDProcessor::attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, $XMLString* defaultValue, $XMLString* nonNormalizedDefaultValue, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	$init($XMLSymbols);
	if (type != $XMLSymbols::fCDATASymbol && defaultValue != nullptr) {
		normalizeDefaultAttrValue(defaultValue);
	}
	if (this->fValidation) {
		bool duplicateAttributeDef = false;
		$var($DTDGrammar, grammar, this->fDTDGrammar != nullptr ? this->fDTDGrammar : $nc(this->fGrammarBucket)->getActiveGrammar());
		int32_t elementIndex = $nc(grammar)->getElementDeclIndex(elementName);
		if (grammar->getAttributeDeclIndex(elementIndex, attributeName) != -1) {
			duplicateAttributeDef = true;
			if (this->fWarnDuplicateAttdef) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_DUPLICATE_ATTRIBUTE_DEFINITION"_s, $$new($ObjectArray, {
					$of(elementName),
					$of(attributeName)
				}), $XMLErrorReporter::SEVERITY_WARNING);
			}
		}
		if (type == $XMLSymbols::fIDSymbol) {
			if (defaultValue != nullptr && defaultValue->length != 0) {
				if (defaultType == nullptr || !(defaultType == $XMLSymbols::fIMPLIEDSymbol || defaultType == $XMLSymbols::fREQUIREDSymbol)) {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "IDDefaultTypeInvalid"_s, $$new($ObjectArray, {$of(attributeName)}), $XMLErrorReporter::SEVERITY_ERROR);
				}
			}
			if (!$nc(this->fTableOfIDAttributeNames)->containsKey(elementName)) {
				$nc(this->fTableOfIDAttributeNames)->put(elementName, attributeName);
			} else if (!duplicateAttributeDef) {
				$var($String, previousIDAttributeName, $cast($String, $nc(this->fTableOfIDAttributeNames)->get(elementName)));
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_MORE_THAN_ONE_ID_ATTRIBUTE"_s, $$new($ObjectArray, {
					$of(elementName),
					$of(previousIDAttributeName),
					$of(attributeName)
				}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if (type == $XMLSymbols::fNOTATIONSymbol) {
			for (int32_t i = 0; i < $nc(enumeration)->length; ++i) {
				$nc(this->fNotationEnumVals)->put(enumeration->get(i), attributeName);
			}
			if ($nc(this->fTableOfNOTATIONAttributeNames)->containsKey(elementName) == false) {
				$nc(this->fTableOfNOTATIONAttributeNames)->put(elementName, attributeName);
			} else if (!duplicateAttributeDef) {
				$var($String, previousNOTATIONAttributeName, $cast($String, $nc(this->fTableOfNOTATIONAttributeNames)->get(elementName)));
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_MORE_THAN_ONE_NOTATION_ATTRIBUTE"_s, $$new($ObjectArray, {
					$of(elementName),
					$of(previousNOTATIONAttributeName),
					$of(attributeName)
				}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
		if (type == $XMLSymbols::fENUMERATIONSymbol || type == $XMLSymbols::fNOTATIONSymbol) {
			bool outer$break = false;
			for (int32_t i = 0; i < $nc(enumeration)->length; ++i) {
				for (int32_t j = i + 1; j < enumeration->length; ++j) {
					if ($nc(enumeration->get(i))->equals(enumeration->get(j))) {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, type == $XMLSymbols::fENUMERATIONSymbol ? "MSG_DISTINCT_TOKENS_IN_ENUMERATION"_s : "MSG_DISTINCT_NOTATION_IN_ENUMERATION"_s, $$new($ObjectArray, {
							$of(elementName),
							$of(enumeration->get(i)),
							$of(attributeName)
						}), $XMLErrorReporter::SEVERITY_ERROR);
						outer$break = true;
						break;
					}
				}
				if (outer$break) {
					break;
				}
			}
		}
		bool ok = true;
		if (defaultValue != nullptr && (defaultType == nullptr || (defaultType != nullptr && defaultType == $XMLSymbols::fFIXEDSymbol))) {
			$var($String, value, $nc(defaultValue)->toString());
			if (type == $XMLSymbols::fNMTOKENSSymbol || type == $XMLSymbols::fENTITIESSymbol || type == $XMLSymbols::fIDREFSSymbol) {
				$var($StringTokenizer, tokenizer, $new($StringTokenizer, value, " "_s));
				if (tokenizer->hasMoreTokens()) {
					while (true) {
						$var($String, nmtoken, tokenizer->nextToken());
						if (type == $XMLSymbols::fNMTOKENSSymbol) {
							if (!isValidNmtoken(nmtoken)) {
								ok = false;
								break;
							}
						} else {
							if (type == $XMLSymbols::fENTITIESSymbol || type == $XMLSymbols::fIDREFSSymbol) {
								if (!isValidName(nmtoken)) {
									ok = false;
									break;
								}
							}
						}
						if (!tokenizer->hasMoreTokens()) {
							break;
						}
					}
				}
			} else {
				if (type == $XMLSymbols::fENTITYSymbol || type == $XMLSymbols::fIDSymbol || type == $XMLSymbols::fIDREFSymbol || type == $XMLSymbols::fNOTATIONSymbol) {
					if (!isValidName(value)) {
						ok = false;
					}
				} else {
					if (type == $XMLSymbols::fNMTOKENSymbol || type == $XMLSymbols::fENUMERATIONSymbol) {
						if (!isValidNmtoken(value)) {
							ok = false;
						}
					}
				}
				if (type == $XMLSymbols::fNOTATIONSymbol || type == $XMLSymbols::fENUMERATIONSymbol) {
					ok = false;
					for (int32_t i = 0; i < $nc(enumeration)->length; ++i) {
						if (defaultValue->equals(enumeration->get(i))) {
							ok = true;
						}
					}
				}
			}
			if (!ok) {
				$init($XMLMessageFormatter);
				$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_ATT_DEFAULT_INVALID"_s, $$new($ObjectArray, {
					$of(attributeName),
					$of(value)
				}), $XMLErrorReporter::SEVERITY_ERROR);
			}
		}
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->attributeDecl(elementName, attributeName, type, enumeration, defaultType, defaultValue, nonNormalizedDefaultValue, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->attributeDecl(elementName, attributeName, type, enumeration, defaultType, defaultValue, nonNormalizedDefaultValue, augs);
	}
}

void XMLDTDProcessor::endAttlist($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endAttlist(augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endAttlist(augs);
	}
}

void XMLDTDProcessor::internalEntityDecl($String* name, $XMLString* text, $XMLString* nonNormalizedText, $Augmentations* augs) {
	$var($DTDGrammar, grammar, this->fDTDGrammar != nullptr ? this->fDTDGrammar : $nc(this->fGrammarBucket)->getActiveGrammar());
	int32_t index = $nc(grammar)->getEntityDeclIndex(name);
	if (index == -1) {
		if (this->fDTDGrammar != nullptr) {
			$nc(this->fDTDGrammar)->internalEntityDecl(name, text, nonNormalizedText, augs);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->internalEntityDecl(name, text, nonNormalizedText, augs);
		}
	}
}

void XMLDTDProcessor::externalEntityDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$var($DTDGrammar, grammar, this->fDTDGrammar != nullptr ? this->fDTDGrammar : $nc(this->fGrammarBucket)->getActiveGrammar());
	int32_t index = $nc(grammar)->getEntityDeclIndex(name);
	if (index == -1) {
		if (this->fDTDGrammar != nullptr) {
			$nc(this->fDTDGrammar)->externalEntityDecl(name, identifier, augs);
		}
		if (this->fDTDHandler != nullptr) {
			$nc(this->fDTDHandler)->externalEntityDecl(name, identifier, augs);
		}
	}
}

void XMLDTDProcessor::unparsedEntityDecl($String* name, $XMLResourceIdentifier* identifier, $String* notation, $Augmentations* augs) {
	if (this->fValidation) {
		$nc(this->fNDataDeclNotations)->put(name, notation);
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->unparsedEntityDecl(name, identifier, notation, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->unparsedEntityDecl(name, identifier, notation, augs);
	}
}

void XMLDTDProcessor::notationDecl($String* name, $XMLResourceIdentifier* identifier, $Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fValidation) {
		$var($DTDGrammar, grammar, this->fDTDGrammar != nullptr ? this->fDTDGrammar : $nc(this->fGrammarBucket)->getActiveGrammar());
		if ($nc(grammar)->getNotationDeclIndex(name) != -1) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "UniqueNotationName"_s, $$new($ObjectArray, {$of(name)}), $XMLErrorReporter::SEVERITY_ERROR);
		}
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->notationDecl(name, identifier, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->notationDecl(name, identifier, augs);
	}
}

void XMLDTDProcessor::startConditional(int16_t type, $Augmentations* augs) {
	this->fInDTDIgnore = type == $XMLDTDHandler::CONDITIONAL_IGNORE;
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startConditional(type, augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->startConditional(type, augs);
	}
}

void XMLDTDProcessor::endConditional($Augmentations* augs) {
	this->fInDTDIgnore = false;
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endConditional(augs);
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endConditional(augs);
	}
}

void XMLDTDProcessor::endDTD($Augmentations* augs) {
	$useLocalCurrentObjectStackCache();
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endDTD(augs);
		if (this->fGrammarPool != nullptr) {
			$init($XMLGrammarDescription);
			$nc(this->fGrammarPool)->cacheGrammars($XMLGrammarDescription::XML_DTD, $$new($GrammarArray, {static_cast<$Grammar*>(this->fDTDGrammar)}));
		}
	}
	if (this->fValidation) {
		$var($DTDGrammar, grammar, this->fDTDGrammar != nullptr ? this->fDTDGrammar : $nc(this->fGrammarBucket)->getActiveGrammar());
		{
			$var($Iterator, i$, $nc($($nc(this->fNDataDeclNotations)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, notation, $cast($String, $nc(entry)->getValue()));
					if ($nc(grammar)->getNotationDeclIndex(notation) == -1) {
						$var($String, entity, $cast($String, entry->getKey()));
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_NOTATION_NOT_DECLARED_FOR_UNPARSED_ENTITYDECL"_s, $$new($ObjectArray, {
							$of(entity),
							$of(notation)
						}), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(this->fNotationEnumVals)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, notation, $cast($String, $nc(entry)->getKey()));
					if ($nc(grammar)->getNotationDeclIndex(notation) == -1) {
						$var($String, attributeName, $cast($String, entry->getValue()));
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "MSG_NOTATION_NOT_DECLARED_FOR_NOTATIONTYPE_ATTRIBUTE"_s, $$new($ObjectArray, {
							$of(attributeName),
							$of(notation)
						}), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc($($nc(this->fTableOfNOTATIONAttributeNames)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($String, elementName, $cast($String, $nc(entry)->getKey()));
					int32_t elementIndex = $nc(grammar)->getElementDeclIndex(elementName);
					if (grammar->getContentSpecType(elementIndex) == $XMLElementDecl::TYPE_EMPTY) {
						$var($String, attributeName, $cast($String, entry->getValue()));
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "NoNotationOnEmptyElement"_s, $$new($ObjectArray, {
							$of(elementName),
							$of(attributeName)
						}), $XMLErrorReporter::SEVERITY_ERROR);
					}
				}
			}
		}
		$set(this, fTableOfIDAttributeNames, nullptr);
		$set(this, fTableOfNOTATIONAttributeNames, nullptr);
		if (this->fWarnOnUndeclaredElemdef) {
			checkDeclaredElements(grammar);
		}
	}
	if (this->fDTDHandler != nullptr) {
		$nc(this->fDTDHandler)->endDTD(augs);
	}
}

void XMLDTDProcessor::setDTDSource($XMLDTDSource* source) {
	$set(this, fDTDSource, source);
}

$XMLDTDSource* XMLDTDProcessor::getDTDSource() {
	return this->fDTDSource;
}

void XMLDTDProcessor::setDTDContentModelSource($XMLDTDContentModelSource* source) {
	$set(this, fDTDContentModelSource, source);
}

$XMLDTDContentModelSource* XMLDTDProcessor::getDTDContentModelSource() {
	return this->fDTDContentModelSource;
}

void XMLDTDProcessor::startContentModel($String* elementName, $Augmentations* augs) {
	if (this->fValidation) {
		$set(this, fDTDElementDeclName, elementName);
		$nc(this->fMixedElementTypes)->clear();
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startContentModel(elementName, augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->startContentModel(elementName, augs);
	}
}

void XMLDTDProcessor::any($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->any(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->any(augs);
	}
}

void XMLDTDProcessor::empty($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->empty(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->empty(augs);
	}
}

void XMLDTDProcessor::startGroup($Augmentations* augs) {
	this->fMixed = false;
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->startGroup(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->startGroup(augs);
	}
}

void XMLDTDProcessor::pcdata($Augmentations* augs) {
	this->fMixed = true;
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->pcdata(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->pcdata(augs);
	}
}

void XMLDTDProcessor::element($String* elementName, $Augmentations* augs) {
	if (this->fMixed && this->fValidation) {
		if ($nc(this->fMixedElementTypes)->contains(elementName)) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "DuplicateTypeInMixedContent"_s, $$new($ObjectArray, {
				$of(this->fDTDElementDeclName),
				$of(elementName)
			}), $XMLErrorReporter::SEVERITY_ERROR);
		} else {
			$nc(this->fMixedElementTypes)->add(elementName);
		}
	}
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->element(elementName, augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->element(elementName, augs);
	}
}

void XMLDTDProcessor::separator(int16_t separator, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->separator(separator, augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->separator(separator, augs);
	}
}

void XMLDTDProcessor::occurrence(int16_t occurrence, $Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->occurrence(occurrence, augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->occurrence(occurrence, augs);
	}
}

void XMLDTDProcessor::endGroup($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endGroup(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->endGroup(augs);
	}
}

void XMLDTDProcessor::endContentModel($Augmentations* augs) {
	if (this->fDTDGrammar != nullptr) {
		$nc(this->fDTDGrammar)->endContentModel(augs);
	}
	if (this->fDTDContentModelHandler != nullptr) {
		$nc(this->fDTDContentModelHandler)->endContentModel(augs);
	}
}

bool XMLDTDProcessor::normalizeDefaultAttrValue($XMLString* value) {
	bool skipSpace = true;
	int32_t current = $nc(value)->offset;
	int32_t end = value->offset + value->length;
	for (int32_t i = value->offset; i < end; ++i) {
		if ($nc(value->ch)->get(i) == u' ') {
			if (!skipSpace) {
				$nc(value->ch)->set(current++, u' ');
				skipSpace = true;
			} else {
			}
		} else {
			if (current != i) {
				$nc(value->ch)->set(current, $nc(value->ch)->get(i));
			}
			++current;
			skipSpace = false;
		}
	}
	if (current != end) {
		if (skipSpace) {
			--current;
		}
		value->length = current - value->offset;
		return true;
	}
	return false;
}

bool XMLDTDProcessor::isValidNmtoken($String* nmtoken) {
	return $XMLChar::isValidNmtoken(nmtoken);
}

bool XMLDTDProcessor::isValidName($String* name) {
	return $XMLChar::isValidName(name);
}

void XMLDTDProcessor::checkDeclaredElements($DTDGrammar* grammar) {
	int32_t elementIndex = $nc(grammar)->getFirstElementDeclIndex();
	$var($XMLContentSpec, contentSpec, $new($XMLContentSpec));
	while (elementIndex >= 0) {
		int32_t type = grammar->getContentSpecType(elementIndex);
		if (type == $XMLElementDecl::TYPE_CHILDREN || type == $XMLElementDecl::TYPE_MIXED) {
			checkDeclaredElements(grammar, elementIndex, grammar->getContentSpecIndex(elementIndex), contentSpec);
		}
		elementIndex = grammar->getNextElementDeclIndex(elementIndex);
	}
}

void XMLDTDProcessor::checkDeclaredElements($DTDGrammar* grammar, int32_t elementIndex, int32_t contentSpecIndex, $XMLContentSpec* contentSpec) {
	$useLocalCurrentObjectStackCache();
	$nc(grammar)->getContentSpec(contentSpecIndex, contentSpec);
	if ($nc(contentSpec)->type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
		$var($String, value, $cast($String, contentSpec->value));
		if (value != nullptr && grammar->getElementDeclIndex(value) == -1) {
			$init($XMLMessageFormatter);
			$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "UndeclaredElementInContentSpec"_s, $$new($ObjectArray, {
				$of($nc($(grammar->getElementDeclName(elementIndex)))->rawname),
				$of(value)
			}), $XMLErrorReporter::SEVERITY_WARNING);
		}
	} else if ((contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) || (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
		int32_t leftNode = $nc(($cast($ints, contentSpec->value)))->get(0);
		int32_t rightNode = $nc(($cast($ints, contentSpec->otherValue)))->get(0);
		checkDeclaredElements(grammar, elementIndex, leftNode, contentSpec);
		checkDeclaredElements(grammar, elementIndex, rightNode, contentSpec);
	} else if (contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE || contentSpec->type == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE) {
		int32_t leftNode = $nc(($cast($ints, contentSpec->value)))->get(0);
		checkDeclaredElements(grammar, elementIndex, leftNode, contentSpec);
	}
}

void clinit$XMLDTDProcessor($Class* class$) {
	$init($Constants);
	$assignStatic(XMLDTDProcessor::VALIDATION, $str({$Constants::SAX_FEATURE_PREFIX, $Constants::VALIDATION_FEATURE}));
	$assignStatic(XMLDTDProcessor::NOTIFY_CHAR_REFS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::NOTIFY_CHAR_REFS_FEATURE}));
	$assignStatic(XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_DUPLICATE_ATTDEF_FEATURE}));
	$assignStatic(XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::WARN_ON_UNDECLARED_ELEMDEF_FEATURE}));
	$assignStatic(XMLDTDProcessor::PARSER_SETTINGS, $str({$Constants::XERCES_FEATURE_PREFIX, $Constants::PARSER_SETTINGS}));
	$assignStatic(XMLDTDProcessor::SYMBOL_TABLE, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::SYMBOL_TABLE_PROPERTY}));
	$assignStatic(XMLDTDProcessor::ERROR_REPORTER, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::ERROR_REPORTER_PROPERTY}));
	$assignStatic(XMLDTDProcessor::GRAMMAR_POOL, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::XMLGRAMMAR_POOL_PROPERTY}));
	$assignStatic(XMLDTDProcessor::DTD_VALIDATOR, $str({$Constants::XERCES_PROPERTY_PREFIX, $Constants::DTD_VALIDATOR_PROPERTY}));
	$assignStatic(XMLDTDProcessor::RECOGNIZED_FEATURES, $new($StringArray, {
		XMLDTDProcessor::VALIDATION,
		XMLDTDProcessor::WARN_ON_DUPLICATE_ATTDEF,
		XMLDTDProcessor::WARN_ON_UNDECLARED_ELEMDEF,
		XMLDTDProcessor::NOTIFY_CHAR_REFS
	}));
	$init($Boolean);
	$assignStatic(XMLDTDProcessor::FEATURE_DEFAULTS, $new($BooleanArray, {
		($Boolean*)nullptr,
		$Boolean::FALSE,
		$Boolean::FALSE,
		($Boolean*)nullptr
	}));
	$assignStatic(XMLDTDProcessor::RECOGNIZED_PROPERTIES, $new($StringArray, {
		XMLDTDProcessor::SYMBOL_TABLE,
		XMLDTDProcessor::ERROR_REPORTER,
		XMLDTDProcessor::GRAMMAR_POOL,
		XMLDTDProcessor::DTD_VALIDATOR
	}));
	$assignStatic(XMLDTDProcessor::PROPERTY_DEFAULTS, $new($ObjectArray, {
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr,
		($Object*)nullptr
	}));
}

XMLDTDProcessor::XMLDTDProcessor() {
}

$Class* XMLDTDProcessor::load$($String* name, bool initialize) {
	$loadClass(XMLDTDProcessor, name, initialize, &_XMLDTDProcessor_ClassInfo_, clinit$XMLDTDProcessor, allocate$XMLDTDProcessor);
	return class$;
}

$Class* XMLDTDProcessor::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com