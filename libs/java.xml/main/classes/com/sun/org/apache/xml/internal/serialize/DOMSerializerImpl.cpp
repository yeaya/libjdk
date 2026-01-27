#include <com/sun/org/apache/xml/internal/serialize/DOMSerializerImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AbortException.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMNormalizer.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMStringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/util/DOMUtil.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/XML11Serializer.h>
#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/StringWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/lang/Error.h>
#include <java/lang/ThreadDeath.h>
#include <java/lang/VirtualMachineError.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMErrorHandler.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <org/w3c/dom/ls/LSException.h>
#include <org/w3c/dom/ls/LSOutput.h>
#include <org/w3c/dom/ls/LSSerializer.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <jcpp.h>

#undef CDATA
#undef CDATA_SECTION_NODE
#undef COMMENTS
#undef COMMENT_NODE
#undef DISCARDDEFAULT
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef DOMSTRING_SIZE_ERR
#undef DOM_CANONICAL_FORM
#undef DOM_CDATA_SECTIONS
#undef DOM_CHECK_CHAR_NORMALIZATION
#undef DOM_COMMENTS
#undef DOM_DATATYPE_NORMALIZATION
#undef DOM_DISCARD_DEFAULT_CONTENT
#undef DOM_DOMAIN
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#undef DOM_ENTITIES
#undef DOM_ERROR_HANDLER
#undef DOM_FORMAT_PRETTY_PRINT
#undef DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS
#undef DOM_INFOSET
#undef DOM_NAMESPACES
#undef DOM_NAMESPACE_DECLARATIONS
#undef DOM_NORMALIZE_CHARACTERS
#undef DOM_RESOURCE_RESOLVER
#undef DOM_SCHEMA_LOCATION
#undef DOM_SCHEMA_TYPE
#undef DOM_SPLIT_CDATA
#undef DOM_VALIDATE
#undef DOM_VALIDATE_IF_SCHEMA
#undef DOM_WELLFORMED
#undef DOM_XMLDECL
#undef ELEMENT_NODE
#undef ENTITIES
#undef ENTITY_REFERENCE_NODE
#undef FALSE
#undef INFOSET
#undef NAMESPACES
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef NSDECL
#undef PRETTY_PRINT
#undef PROCESSING_INSTRUCTION_NODE
#undef SERIALIZER_DOMAIN
#undef SERIALIZE_ERR
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SPLITCDATA
#undef TEXT_NODE
#undef TRUE
#undef TYPE_MISMATCH_ERR
#undef URI
#undef WELLFORMED
#undef XMLDECL

using $AbortException = ::com::sun::org::apache::xerces::internal::dom::AbortException;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMErrorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl;
using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DOMNormalizer = ::com::sun::org::apache::xerces::internal::dom::DOMNormalizer;
using $DOMStringListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMStringListImpl;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $DOMUtil = ::com::sun::org::apache::xerces::internal::util::DOMUtil;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $XML11Serializer = ::com::sun::org::apache::xml::internal::serialize::XML11Serializer;
using $XMLSerializer = ::com::sun::org::apache::xml::internal::serialize::XMLSerializer;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $StringWriter = ::java::io::StringWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadDeath = ::java::lang::ThreadDeath;
using $VirtualMachineError = ::java::lang::VirtualMachineError;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Attr = ::org::w3c::dom::Attr;
using $Comment = ::org::w3c::dom::Comment;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMErrorHandler = ::org::w3c::dom::DOMErrorHandler;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $Document = ::org::w3c::dom::Document;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;
using $LSException = ::org::w3c::dom::ls::LSException;
using $LSOutput = ::org::w3c::dom::ls::LSOutput;
using $LSSerializer = ::org::w3c::dom::ls::LSSerializer;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _DOMSerializerImpl_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DOMSerializerImpl_FieldInfo_[] = {
	{"serializer", "Lcom/sun/org/apache/xml/internal/serialize/XMLSerializer;", nullptr, $PRIVATE, $field(DOMSerializerImpl, serializer)},
	{"xml11Serializer", "Lcom/sun/org/apache/xml/internal/serialize/XML11Serializer;", nullptr, $PRIVATE, $field(DOMSerializerImpl, xml11Serializer)},
	{"fRecognizedParameters", "Lorg/w3c/dom/DOMStringList;", nullptr, $PRIVATE, $field(DOMSerializerImpl, fRecognizedParameters)},
	{"features", "S", nullptr, $PROTECTED, $field(DOMSerializerImpl, features)},
	{"NAMESPACES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, NAMESPACES)},
	{"WELLFORMED", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, WELLFORMED)},
	{"ENTITIES", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, ENTITIES)},
	{"CDATA", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, CDATA)},
	{"SPLITCDATA", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, SPLITCDATA)},
	{"COMMENTS", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, COMMENTS)},
	{"DISCARDDEFAULT", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, DISCARDDEFAULT)},
	{"INFOSET", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, INFOSET)},
	{"XMLDECL", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, XMLDECL)},
	{"NSDECL", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, NSDECL)},
	{"DOM_ELEMENT_CONTENT_WHITESPACE", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, DOM_ELEMENT_CONTENT_WHITESPACE)},
	{"PRETTY_PRINT", "S", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DOMSerializerImpl, PRETTY_PRINT)},
	{"fErrorHandler", "Lorg/w3c/dom/DOMErrorHandler;", nullptr, $PRIVATE, $field(DOMSerializerImpl, fErrorHandler)},
	{"fError", "Lcom/sun/org/apache/xerces/internal/dom/DOMErrorImpl;", nullptr, $PRIVATE | $FINAL, $field(DOMSerializerImpl, fError)},
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PRIVATE | $FINAL, $field(DOMSerializerImpl, fLocator)},
	{}
};

$MethodInfo _DOMSerializerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMSerializerImpl, init$, void)},
	{"_getInputEncoding", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOMSerializerImpl, _getInputEncoding, $String*, $Node*)},
	{"_getXmlEncoding", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOMSerializerImpl, _getXmlEncoding, $String*, $Node*)},
	{"_getXmlVersion", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PRIVATE, $method(DOMSerializerImpl, _getXmlVersion, $String*, $Node*)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, canSetParameter, bool, $String*, Object$*)},
	{"copySettings", "(Lcom/sun/org/apache/xml/internal/serialize/XMLSerializer;Lcom/sun/org/apache/xml/internal/serialize/XMLSerializer;)V", nullptr, $PRIVATE, $method(DOMSerializerImpl, copySettings, void, $XMLSerializer*, $XMLSerializer*)},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, getDomConfig, $DOMConfiguration*)},
	{"getFilter", "()Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, getFilter, $LSSerializerFilter*)},
	{"getNewLine", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, getNewLine, $String*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, getParameterNames, $DOMStringList*)},
	{"initSerializer", "(Lcom/sun/org/apache/xml/internal/serialize/XMLSerializer;)V", nullptr, $PRIVATE, $method(DOMSerializerImpl, initSerializer, void, $XMLSerializer*)},
	{"prepareForSerialization", "(Lcom/sun/org/apache/xml/internal/serialize/XMLSerializer;Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(DOMSerializerImpl, prepareForSerialization, void, $XMLSerializer*, $Node*)},
	{"setFilter", "(Lorg/w3c/dom/ls/LSSerializerFilter;)V", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, setFilter, void, $LSSerializerFilter*)},
	{"setNewLine", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, setNewLine, void, $String*)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Lorg/w3c/dom/Node;ZZ)V", nullptr, $PRIVATE, $method(DOMSerializerImpl, verify, void, $Node*, bool, bool)},
	{"write", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/ls/LSOutput;)Z", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, write, bool, $Node*, $LSOutput*), "org.w3c.dom.ls.LSException"},
	{"writeToString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, writeToString, $String*, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"writeToURI", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(DOMSerializerImpl, writeToURI, bool, $Node*, $String*), "org.w3c.dom.ls.LSException"},
	{}
};

$ClassInfo _DOMSerializerImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.DOMSerializerImpl",
	"java.lang.Object",
	"org.w3c.dom.ls.LSSerializer,org.w3c.dom.DOMConfiguration",
	_DOMSerializerImpl_FieldInfo_,
	_DOMSerializerImpl_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DOMSerializerImpl_Annotations_
};

$Object* allocate$DOMSerializerImpl($Class* clazz) {
	return $of($alloc(DOMSerializerImpl));
}

int32_t DOMSerializerImpl::hashCode() {
	 return this->$LSSerializer::hashCode();
}

bool DOMSerializerImpl::equals(Object$* arg0) {
	 return this->$LSSerializer::equals(arg0);
}

$Object* DOMSerializerImpl::clone() {
	 return this->$LSSerializer::clone();
}

$String* DOMSerializerImpl::toString() {
	 return this->$LSSerializer::toString();
}

void DOMSerializerImpl::finalize() {
	this->$LSSerializer::finalize();
}

void DOMSerializerImpl::init$() {
	this->features = (int16_t)0;
	$set(this, fErrorHandler, nullptr);
	$set(this, fError, $new($DOMErrorImpl));
	$set(this, fLocator, $new($DOMLocatorImpl));
	this->features |= DOMSerializerImpl::NAMESPACES;
	this->features |= DOMSerializerImpl::ENTITIES;
	this->features |= DOMSerializerImpl::COMMENTS;
	this->features |= DOMSerializerImpl::CDATA;
	this->features |= DOMSerializerImpl::SPLITCDATA;
	this->features |= DOMSerializerImpl::WELLFORMED;
	this->features |= DOMSerializerImpl::NSDECL;
	this->features |= DOMSerializerImpl::DOM_ELEMENT_CONTENT_WHITESPACE;
	this->features |= DOMSerializerImpl::DISCARDDEFAULT;
	this->features |= DOMSerializerImpl::XMLDECL;
	$set(this, serializer, $new($XMLSerializer));
	initSerializer(this->serializer);
}

$DOMConfiguration* DOMSerializerImpl::getDomConfig() {
	return this;
}

void DOMSerializerImpl::setParameter($String* name, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Boolean, value)) {
		bool state = $nc(($cast($Boolean, value)))->booleanValue();
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_INFOSET)) {
			if (state) {
				this->features &= (uint16_t)~DOMSerializerImpl::ENTITIES;
				this->features &= (uint16_t)~DOMSerializerImpl::CDATA;
				this->features |= DOMSerializerImpl::NAMESPACES;
				this->features |= DOMSerializerImpl::NSDECL;
				this->features |= DOMSerializerImpl::WELLFORMED;
				this->features |= DOMSerializerImpl::COMMENTS;
			}
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_XMLDECL)) {
				this->features = (int16_t)(state ? this->features | DOMSerializerImpl::XMLDECL : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::XMLDECL));
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
					this->features = (int16_t)(state ? this->features | DOMSerializerImpl::NAMESPACES : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::NAMESPACES));
					$nc(this->serializer)->fNamespaces = state;
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA)) {
						this->features = (int16_t)(state ? this->features | DOMSerializerImpl::SPLITCDATA : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::SPLITCDATA));
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_DISCARD_DEFAULT_CONTENT)) {
							this->features = (int16_t)(state ? this->features | DOMSerializerImpl::DISCARDDEFAULT : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::DISCARDDEFAULT));
						} else {
							if (name->equalsIgnoreCase($Constants::DOM_WELLFORMED)) {
								this->features = (int16_t)(state ? this->features | DOMSerializerImpl::WELLFORMED : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::WELLFORMED));
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
									this->features = (int16_t)(state ? this->features | DOMSerializerImpl::ENTITIES : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::ENTITIES));
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
										this->features = (int16_t)(state ? this->features | DOMSerializerImpl::CDATA : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::CDATA));
									} else {
										if (name->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
											this->features = (int16_t)(state ? this->features | DOMSerializerImpl::COMMENTS : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::COMMENTS));
										} else {
											if (name->equalsIgnoreCase($Constants::DOM_FORMAT_PRETTY_PRINT)) {
												this->features = (int16_t)(state ? this->features | DOMSerializerImpl::PRETTY_PRINT : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::PRETTY_PRINT));
											} else {
												bool var$7 = name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
												bool var$6 = var$7 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
												bool var$5 = var$6 || name->equalsIgnoreCase($Constants::DOM_VALIDATE);
												bool var$4 = var$5 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
												if (var$4 || name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
													if (state) {
														$init($DOMMessageFormatter);
														$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
														$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
													}
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
														this->features = (int16_t)(state ? this->features | DOMSerializerImpl::NSDECL : (int32_t)(this->features & (uint32_t)~DOMSerializerImpl::NSDECL));
														$nc(this->serializer)->fNamespacePrefixes = state;
													} else {
														bool var$9 = name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
														if (var$9 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
															if (!state) {
																$init($DOMMessageFormatter);
																$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
																$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
															}
														} else {
															$init($DOMMessageFormatter);
															$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
															$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
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
			}
		}
	} else {
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
			if (value == nullptr || $instanceOf($DOMErrorHandler, value)) {
				$set(this, fErrorHandler, $cast($DOMErrorHandler, value));
			} else {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "TYPE_MISMATCH_ERR"_s, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::TYPE_MISMATCH_ERR, msg);
			}
		} else {
			bool var$15 = name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER);
			bool var$14 = var$15 || name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION);
			bool var$13 = var$14 || name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE);
			if (var$13 || name->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS) && value != nullptr) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
			} else {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
				$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
			}
		}
	}
}

bool DOMSerializerImpl::canSetParameter($String* name, Object$* state) {
	if (state == nullptr) {
		return true;
	}
	if ($instanceOf($Boolean, state)) {
		bool value = $nc(($cast($Boolean, state)))->booleanValue();
		$init($Constants);
		bool var$9 = $nc(name)->equalsIgnoreCase($Constants::DOM_NAMESPACES);
		bool var$8 = var$9 || $nc(name)->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA);
		bool var$7 = var$8 || $nc(name)->equalsIgnoreCase($Constants::DOM_DISCARD_DEFAULT_CONTENT);
		bool var$6 = var$7 || $nc(name)->equalsIgnoreCase($Constants::DOM_XMLDECL);
		bool var$5 = var$6 || $nc(name)->equalsIgnoreCase($Constants::DOM_WELLFORMED);
		bool var$4 = var$5 || $nc(name)->equalsIgnoreCase($Constants::DOM_INFOSET);
		bool var$3 = var$4 || $nc(name)->equalsIgnoreCase($Constants::DOM_ENTITIES);
		bool var$2 = var$3 || $nc(name)->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS);
		bool var$1 = var$2 || $nc(name)->equalsIgnoreCase($Constants::DOM_COMMENTS);
		bool var$0 = var$1 || $nc(name)->equalsIgnoreCase($Constants::DOM_FORMAT_PRETTY_PRINT);
		if (var$0 || $nc(name)->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
			return true;
		} else {
			bool var$17 = name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
			bool var$16 = var$17 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
			bool var$15 = var$16 || name->equalsIgnoreCase($Constants::DOM_VALIDATE);
			bool var$14 = var$15 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
			if (var$14 || name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
				return !value;
			} else {
				bool var$19 = name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
				if (var$19 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
					return value;
				}
			}
		}
	} else {
		$init($Constants);
		if ($nc(name)->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER) && state == nullptr || $instanceOf($DOMErrorHandler, state)) {
			return true;
		}
	}
	return false;
}

$DOMStringList* DOMSerializerImpl::getParameterNames() {
	if (this->fRecognizedParameters == nullptr) {
		$var($List, parameters, $new($ArrayList));
		$init($Constants);
		parameters->add($Constants::DOM_NAMESPACES);
		parameters->add($Constants::DOM_SPLIT_CDATA);
		parameters->add($Constants::DOM_DISCARD_DEFAULT_CONTENT);
		parameters->add($Constants::DOM_XMLDECL);
		parameters->add($Constants::DOM_CANONICAL_FORM);
		parameters->add($Constants::DOM_VALIDATE_IF_SCHEMA);
		parameters->add($Constants::DOM_VALIDATE);
		parameters->add($Constants::DOM_CHECK_CHAR_NORMALIZATION);
		parameters->add($Constants::DOM_DATATYPE_NORMALIZATION);
		parameters->add($Constants::DOM_FORMAT_PRETTY_PRINT);
		parameters->add($Constants::DOM_WELLFORMED);
		parameters->add($Constants::DOM_INFOSET);
		parameters->add($Constants::DOM_NAMESPACE_DECLARATIONS);
		parameters->add($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
		parameters->add($Constants::DOM_ENTITIES);
		parameters->add($Constants::DOM_CDATA_SECTIONS);
		parameters->add($Constants::DOM_COMMENTS);
		parameters->add($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS);
		parameters->add($Constants::DOM_ERROR_HANDLER);
		$set(this, fRecognizedParameters, $new($DOMStringListImpl, parameters));
	}
	return this->fRecognizedParameters;
}

$Object* DOMSerializerImpl::getParameter($String* name) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($nc(name)->equalsIgnoreCase($Constants::DOM_NORMALIZE_CHARACTERS)) {
		return $of(nullptr);
	} else {
		if (name->equalsIgnoreCase($Constants::DOM_COMMENTS)) {
			$init($Boolean);
			return $of((((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::COMMENTS)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
		} else {
			if (name->equalsIgnoreCase($Constants::DOM_NAMESPACES)) {
				$init($Boolean);
				return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NAMESPACES)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
			} else {
				if (name->equalsIgnoreCase($Constants::DOM_XMLDECL)) {
					$init($Boolean);
					return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::XMLDECL)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
				} else {
					if (name->equalsIgnoreCase($Constants::DOM_CDATA_SECTIONS)) {
						$init($Boolean);
						return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::CDATA)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
					} else {
						if (name->equalsIgnoreCase($Constants::DOM_ENTITIES)) {
							$init($Boolean);
							return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::ENTITIES)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
						} else {
							if (name->equalsIgnoreCase($Constants::DOM_SPLIT_CDATA)) {
								$init($Boolean);
								return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::SPLITCDATA)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
							} else {
								if (name->equalsIgnoreCase($Constants::DOM_WELLFORMED)) {
									$init($Boolean);
									return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::WELLFORMED)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
								} else {
									if (name->equalsIgnoreCase($Constants::DOM_NAMESPACE_DECLARATIONS)) {
										$init($Boolean);
										return $of(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NSDECL)) != 0 ? $Boolean::TRUE : $Boolean::FALSE);
									} else {
										bool var$1 = name->equalsIgnoreCase($Constants::DOM_ELEMENT_CONTENT_WHITESPACE);
										if (var$1 || name->equalsIgnoreCase($Constants::DOM_IGNORE_UNKNOWN_CHARACTER_DENORMALIZATIONS)) {
											$init($Boolean);
											return $of($Boolean::TRUE);
										} else {
											if (name->equalsIgnoreCase($Constants::DOM_DISCARD_DEFAULT_CONTENT)) {
												$init($Boolean);
												return $of((((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::DISCARDDEFAULT)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
											} else {
												if (name->equalsIgnoreCase($Constants::DOM_FORMAT_PRETTY_PRINT)) {
													$init($Boolean);
													return $of((((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::PRETTY_PRINT)) != 0) ? $Boolean::TRUE : $Boolean::FALSE);
												} else {
													if (name->equalsIgnoreCase($Constants::DOM_INFOSET)) {
														if (((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::ENTITIES)) == 0 && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::CDATA)) == 0 && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NAMESPACES)) != 0 && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NSDECL)) != 0 && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::WELLFORMED)) != 0 && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::COMMENTS)) != 0) {
															$init($Boolean);
															return $of($Boolean::TRUE);
														}
														$init($Boolean);
														return $of($Boolean::FALSE);
													} else {
														bool var$11 = name->equalsIgnoreCase($Constants::DOM_CANONICAL_FORM);
														bool var$10 = var$11 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
														bool var$9 = var$10 || name->equalsIgnoreCase($Constants::DOM_CHECK_CHAR_NORMALIZATION);
														bool var$8 = var$9 || name->equalsIgnoreCase($Constants::DOM_VALIDATE);
														bool var$7 = var$8 || name->equalsIgnoreCase($Constants::DOM_VALIDATE_IF_SCHEMA);
														if (var$7 || name->equalsIgnoreCase($Constants::DOM_DATATYPE_NORMALIZATION)) {
															$init($Boolean);
															return $of($Boolean::FALSE);
														} else {
															if (name->equalsIgnoreCase($Constants::DOM_ERROR_HANDLER)) {
																return $of(this->fErrorHandler);
															} else {
																bool var$15 = name->equalsIgnoreCase($Constants::DOM_RESOURCE_RESOLVER);
																bool var$14 = var$15 || name->equalsIgnoreCase($Constants::DOM_SCHEMA_LOCATION);
																if (var$14 || name->equalsIgnoreCase($Constants::DOM_SCHEMA_TYPE)) {
																	$init($DOMMessageFormatter);
																	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$of(name)})));
																	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
																} else {
																	$init($DOMMessageFormatter);
																	$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_FOUND"_s, $$new($ObjectArray, {$of(name)})));
																	$throwNew($DOMException, $DOMException::NOT_FOUND_ERR, msg);
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
					}
				}
			}
		}
	}
}

$String* DOMSerializerImpl::writeToString($Node* wnode) {
	$useLocalCurrentObjectStackCache();
	$var($XMLSerializer, ser, nullptr);
	$var($String, ver, _getXmlVersion(wnode));
	if (ver != nullptr && ver->equals("1.1"_s)) {
		if (this->xml11Serializer == nullptr) {
			$set(this, xml11Serializer, $new($XML11Serializer));
			initSerializer(this->xml11Serializer);
		}
		copySettings(this->serializer, this->xml11Serializer);
		$assign(ser, this->xml11Serializer);
	} else {
		$assign(ser, this->serializer);
	}
	$var($StringWriter, destination, $new($StringWriter));
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				prepareForSerialization(ser, wnode);
				$nc($nc(ser)->_format)->setEncoding("UTF-16"_s);
				ser->setOutputCharStream(destination);
				if ($nc(wnode)->getNodeType() == $Node::DOCUMENT_NODE) {
					ser->serialize($cast($Document, wnode));
				} else if (wnode->getNodeType() == $Node::DOCUMENT_FRAGMENT_NODE) {
					ser->serialize($cast($DocumentFragment, wnode));
				} else if (wnode->getNodeType() == $Node::ELEMENT_NODE) {
					ser->serialize($cast($Element, wnode));
				} else {
					bool var$10 = wnode->getNodeType() == $Node::TEXT_NODE;
					bool var$9 = var$10 || wnode->getNodeType() == $Node::COMMENT_NODE;
					bool var$8 = var$9 || wnode->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
					bool var$7 = var$8 || wnode->getNodeType() == $Node::CDATA_SECTION_NODE;
					if (var$7 || wnode->getNodeType() == $Node::PROCESSING_INSTRUCTION_NODE) {
						ser->serialize(wnode);
					} else {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "unable-to-serialize-node"_s, nullptr));
						if (ser->fDOMErrorHandler != nullptr) {
							$var($DOMErrorImpl, error, $new($DOMErrorImpl));
							$set(error, fType, "unable-to-serialize-node"_s);
							$set(error, fMessage, msg);
							error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
							$nc(ser->fDOMErrorHandler)->handleError(error);
						}
						$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
					}
				}
			} catch ($LSException& lse) {
				$throw(lse);
			} catch ($AbortException& e) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			} catch ($RuntimeException& e) {
				$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::SERIALIZE_ERR, e)))->fillInStackTrace())));
			} catch ($IOException& ioe) {
				$init($DOMMessageFormatter);
				$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "STRING_TOO_LONG"_s, $$new($ObjectArray, {$($of(ioe->getMessage()))})));
				$throwNew($DOMException, $DOMException::DOMSTRING_SIZE_ERR, msg);
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} $finally: {
			$nc(ser)->clearDocumentState();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return destination->toString();
}

void DOMSerializerImpl::setNewLine($String* newLine) {
	$nc($nc(this->serializer)->_format)->setLineSeparator(newLine);
}

$String* DOMSerializerImpl::getNewLine() {
	return $nc($nc(this->serializer)->_format)->getLineSeparator();
}

$LSSerializerFilter* DOMSerializerImpl::getFilter() {
	return $nc(this->serializer)->fDOMFilter;
}

void DOMSerializerImpl::setFilter($LSSerializerFilter* filter) {
	$set($nc(this->serializer), fDOMFilter, filter);
}

void DOMSerializerImpl::initSerializer($XMLSerializer* ser) {
	$set($nc(ser), fNSBinder, $new($NamespaceSupport));
	$set(ser, fLocalNSBinder, $new($NamespaceSupport));
	$set(ser, fSymbolTable, $new($SymbolTable));
}

void DOMSerializerImpl::copySettings($XMLSerializer* src, $XMLSerializer* dest) {
	$useLocalCurrentObjectStackCache();
	$set($nc(dest), fDOMErrorHandler, this->fErrorHandler);
	$nc(dest->_format)->setEncoding($($nc($nc(src)->_format)->getEncoding()));
	$nc(dest->_format)->setLineSeparator($($nc($nc(src)->_format)->getLineSeparator()));
	$set(dest, fDOMFilter, $nc(src)->fDOMFilter);
}

bool DOMSerializerImpl::write($Node* node, $LSOutput* destination) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return false;
	}
	$var($XMLSerializer, ser, nullptr);
	$var($String, ver, _getXmlVersion(node));
	if (ver != nullptr && ver->equals("1.1"_s)) {
		if (this->xml11Serializer == nullptr) {
			$set(this, xml11Serializer, $new($XML11Serializer));
			initSerializer(this->xml11Serializer);
		}
		copySettings(this->serializer, this->xml11Serializer);
		$assign(ser, this->xml11Serializer);
	} else {
		$assign(ser, this->serializer);
	}
	$var($String, encoding, nullptr);
	if (($assign(encoding, $nc(destination)->getEncoding())) == nullptr) {
		$assign(encoding, _getInputEncoding(node));
		if (encoding == nullptr) {
			$assign(encoding, _getXmlEncoding(node));
			if (encoding == nullptr) {
				$assign(encoding, "UTF-8"_s);
			}
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				prepareForSerialization(ser, node);
				$nc($nc(ser)->_format)->setEncoding(encoding);
				$var($OutputStream, outputStream, $nc(destination)->getByteStream());
				$var($Writer, writer, destination->getCharacterStream());
				$var($String, uri, destination->getSystemId());
				if (writer == nullptr) {
					if (outputStream == nullptr) {
						if (uri == nullptr) {
							$init($DOMMessageFormatter);
							$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "no-output-specified"_s, nullptr));
							if (ser->fDOMErrorHandler != nullptr) {
								$var($DOMErrorImpl, error, $new($DOMErrorImpl));
								$set(error, fType, "no-output-specified"_s);
								$set(error, fMessage, msg);
								error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
								$nc(ser->fDOMErrorHandler)->handleError(error);
							}
							$throwNew($LSException, $LSException::SERIALIZE_ERR, msg);
						} else {
							ser->setOutputByteStream($($XMLEntityManager::createOutputStream(uri)));
						}
					} else {
						ser->setOutputByteStream(outputStream);
					}
				} else {
					ser->setOutputCharStream(writer);
				}
				if ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) {
					ser->serialize($cast($Document, node));
				} else if (node->getNodeType() == $Node::DOCUMENT_FRAGMENT_NODE) {
					ser->serialize($cast($DocumentFragment, node));
				} else if (node->getNodeType() == $Node::ELEMENT_NODE) {
					ser->serialize($cast($Element, node));
				} else {
					bool var$10 = node->getNodeType() == $Node::TEXT_NODE;
					bool var$9 = var$10 || node->getNodeType() == $Node::COMMENT_NODE;
					bool var$8 = var$9 || node->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
					bool var$7 = var$8 || node->getNodeType() == $Node::CDATA_SECTION_NODE;
					if (var$7 || node->getNodeType() == $Node::PROCESSING_INSTRUCTION_NODE) {
						ser->serialize(node);
					} else {
						var$2 = false;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($UnsupportedEncodingException& ue) {
				if ($nc(ser)->fDOMErrorHandler != nullptr) {
					$var($DOMErrorImpl, error, $new($DOMErrorImpl));
					$set(error, fException, ue);
					$set(error, fType, "unsupported-encoding"_s);
					$set(error, fMessage, ue->getMessage());
					error->fSeverity = $DOMError::SEVERITY_FATAL_ERROR;
					$nc(ser->fDOMErrorHandler)->handleError(error);
				}
				$init($DOMMessageFormatter);
				$throwNew($LSException, $LSException::SERIALIZE_ERR, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "unsupported-encoding"_s, nullptr)));
			} catch ($LSException& lse) {
				$throw(lse);
			} catch ($AbortException& e) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($RuntimeException& e) {
				$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::SERIALIZE_ERR, e)))->fillInStackTrace())));
			} catch ($Exception& e) {
				if ($nc(ser)->fDOMErrorHandler != nullptr) {
					$var($DOMErrorImpl, error, $new($DOMErrorImpl));
					$set(error, fException, e);
					$set(error, fMessage, e->getMessage());
					error->fSeverity = $DOMError::SEVERITY_ERROR;
					$nc(ser->fDOMErrorHandler)->handleError(error);
				}
				$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::SERIALIZE_ERR, e)))->fillInStackTrace())));
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} $finally: {
			$nc(ser)->clearDocumentState();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

bool DOMSerializerImpl::writeToURI($Node* node, $String* URI) {
	$useLocalCurrentObjectStackCache();
	if (node == nullptr) {
		return false;
	}
	$var($XMLSerializer, ser, nullptr);
	$var($String, ver, _getXmlVersion(node));
	if (ver != nullptr && ver->equals("1.1"_s)) {
		if (this->xml11Serializer == nullptr) {
			$set(this, xml11Serializer, $new($XML11Serializer));
			initSerializer(this->xml11Serializer);
		}
		copySettings(this->serializer, this->xml11Serializer);
		$assign(ser, this->xml11Serializer);
	} else {
		$assign(ser, this->serializer);
	}
	$var($String, encoding, _getInputEncoding(node));
	if (encoding == nullptr) {
		$assign(encoding, _getXmlEncoding(node));
		if (encoding == nullptr) {
			$assign(encoding, "UTF-8"_s);
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			try {
				prepareForSerialization(ser, node);
				$nc($nc(ser)->_format)->setEncoding(encoding);
				ser->setOutputByteStream($($XMLEntityManager::createOutputStream(URI)));
				if ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) {
					ser->serialize($cast($Document, node));
				} else if (node->getNodeType() == $Node::DOCUMENT_FRAGMENT_NODE) {
					ser->serialize($cast($DocumentFragment, node));
				} else if (node->getNodeType() == $Node::ELEMENT_NODE) {
					ser->serialize($cast($Element, node));
				} else {
					bool var$10 = node->getNodeType() == $Node::TEXT_NODE;
					bool var$9 = var$10 || node->getNodeType() == $Node::COMMENT_NODE;
					bool var$8 = var$9 || node->getNodeType() == $Node::ENTITY_REFERENCE_NODE;
					bool var$7 = var$8 || node->getNodeType() == $Node::CDATA_SECTION_NODE;
					if (var$7 || node->getNodeType() == $Node::PROCESSING_INSTRUCTION_NODE) {
						ser->serialize(node);
					} else {
						var$2 = false;
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($LSException& lse) {
				$throw(lse);
			} catch ($AbortException& e) {
				var$2 = false;
				return$1 = true;
				goto $finally;
			} catch ($RuntimeException& e) {
				$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::SERIALIZE_ERR, e)))->fillInStackTrace())));
			} catch ($Exception& e) {
				if ($nc(ser)->fDOMErrorHandler != nullptr) {
					$var($DOMErrorImpl, error, $new($DOMErrorImpl));
					$set(error, fException, e);
					$set(error, fMessage, e->getMessage());
					error->fSeverity = $DOMError::SEVERITY_ERROR;
					$nc(ser->fDOMErrorHandler)->handleError(error);
				}
				$throw($cast($LSException, $($nc($($DOMUtil::createLSException($LSException::SERIALIZE_ERR, e)))->fillInStackTrace())));
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} $finally: {
			$nc(ser)->clearDocumentState();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return true;
}

void DOMSerializerImpl::prepareForSerialization($XMLSerializer* ser, $Node* node$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	$beforeCallerSensitive();
	$nc(ser)->reset();
	ser->features = this->features;
	$set(ser, fDOMErrorHandler, this->fErrorHandler);
	ser->fNamespaces = ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NAMESPACES)) != 0;
	ser->fNamespacePrefixes = ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NSDECL)) != 0;
	$nc(ser->_format)->setIndenting(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::PRETTY_PRINT)) != 0);
	$nc(ser->_format)->setOmitComments(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::COMMENTS)) == 0);
	$nc(ser->_format)->setOmitXMLDeclaration(((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::XMLDECL)) == 0);
	if (((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::WELLFORMED)) != 0) {
		$var($Node, next, nullptr);
		$var($Node, root, nullptr);
		$assign(root, node);
		$var($Method, versionChanged, nullptr);
		bool verifyNames = true;
		$var($Document, document, ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, node) : $nc(node)->getOwnerDocument());
		try {
			$assign(versionChanged, $nc($of(document))->getClass()->getMethod("isXMLVersionChanged()"_s, $$new($ClassArray, 0)));
			if (versionChanged != nullptr) {
				verifyNames = $nc(($cast($Boolean, $(versionChanged->invoke(document, ($ObjectArray*)nullptr)))))->booleanValue();
			}
		} catch ($Exception& e) {
		}
		if (node->getFirstChild() != nullptr) {
			while (node != nullptr) {
				verify(node, verifyNames, false);
				$assign(next, node->getFirstChild());
				while (next == nullptr) {
					$assign(next, $nc(node)->getNextSibling());
					if (next == nullptr) {
						$assign(node, node->getParentNode());
						if (root == node) {
							$assign(next, nullptr);
							break;
						}
						$assign(next, $nc(node)->getNextSibling());
					}
				}
				$assign(node, next);
			}
		} else {
			verify(node, verifyNames, false);
		}
	}
}

void DOMSerializerImpl::verify($Node* node, bool verifyNames, bool xml11Version) {
	$useLocalCurrentObjectStackCache();
	int32_t type = $nc(node)->getNodeType();
	$set($nc(this->fLocator), fRelatedNode, node);
	bool wellformed = false;
	switch (type) {
	case $Node::DOCUMENT_NODE:
		{
			{
				break;
			}
		}
	case $Node::DOCUMENT_TYPE_NODE:
		{
			{
				break;
			}
		}
	case $Node::ELEMENT_NODE:
		{
			{
				if (verifyNames) {
					if (((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::NAMESPACES)) != 0) {
						$var($String, var$0, node->getPrefix());
						wellformed = $CoreDocumentImpl::isValidQName(var$0, $(node->getLocalName()), xml11Version);
					} else {
						wellformed = $CoreDocumentImpl::isXMLName($(node->getNodeName()), xml11Version);
					}
					if (!wellformed) {
						if (this->fErrorHandler != nullptr) {
							$init($DOMMessageFormatter);
							$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
								$of("Element"_s),
								$($of(node->getNodeName()))
							})));
							$DOMNormalizer::reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_FATAL_ERROR, "wf-invalid-character-in-node-name"_s);
						}
					}
				}
				$var($NamedNodeMap, attributes, (node->hasAttributes()) ? node->getAttributes() : ($NamedNodeMap*)nullptr);
				if (attributes != nullptr) {
					for (int32_t i = 0; i < attributes->getLength(); ++i) {
						$var($Attr, attr, $cast($Attr, attributes->item(i)));
						$set($nc(this->fLocator), fRelatedNode, attr);
						$DOMNormalizer::isAttrValueWF(this->fErrorHandler, this->fError, this->fLocator, attributes, attr, $($nc(attr)->getValue()), xml11Version);
						if (verifyNames) {
							wellformed = $CoreDocumentImpl::isXMLName($($nc(attr)->getNodeName()), xml11Version);
							if (!wellformed) {
								$init($DOMMessageFormatter);
								$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
									$of("Attr"_s),
									$($of(node->getNodeName()))
								})));
								$DOMNormalizer::reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_FATAL_ERROR, "wf-invalid-character-in-node-name"_s);
							}
						}
					}
				}
				break;
			}
		}
	case $Node::COMMENT_NODE:
		{
			{
				if (((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::COMMENTS)) != 0) {
					$DOMNormalizer::isCommentWF(this->fErrorHandler, this->fError, this->fLocator, $($nc(($cast($Comment, node)))->getData()), xml11Version);
				}
				break;
			}
		}
	case $Node::ENTITY_REFERENCE_NODE:
		{
			{
				if (verifyNames && ((int32_t)(this->features & (uint32_t)(int32_t)DOMSerializerImpl::ENTITIES)) != 0) {
					$CoreDocumentImpl::isXMLName($(node->getNodeName()), xml11Version);
				}
				break;
			}
		}
	case $Node::CDATA_SECTION_NODE:
		{
			{
				$DOMNormalizer::isXMLCharWF(this->fErrorHandler, this->fError, this->fLocator, $(node->getNodeValue()), xml11Version);
				break;
			}
		}
	case $Node::TEXT_NODE:
		{
			{
				$DOMNormalizer::isXMLCharWF(this->fErrorHandler, this->fError, this->fLocator, $(node->getNodeValue()), xml11Version);
				break;
			}
		}
	case $Node::PROCESSING_INSTRUCTION_NODE:
		{
			{
				$var($ProcessingInstruction, pinode, $cast($ProcessingInstruction, node));
				$var($String, target, pinode->getTarget());
				if (verifyNames) {
					if (xml11Version) {
						wellformed = $XML11Char::isXML11ValidName(target);
					} else {
						wellformed = $XMLChar::isValidName(target);
					}
					if (!wellformed) {
						$init($DOMMessageFormatter);
						$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "wf-invalid-character-in-node-name"_s, $$new($ObjectArray, {
							$of("Element"_s),
							$($of(node->getNodeName()))
						})));
						$DOMNormalizer::reportDOMError(this->fErrorHandler, this->fError, this->fLocator, msg, $DOMError::SEVERITY_FATAL_ERROR, "wf-invalid-character-in-node-name"_s);
					}
				}
				$DOMNormalizer::isXMLCharWF(this->fErrorHandler, this->fError, this->fLocator, $(pinode->getData()), xml11Version);
				break;
			}
		}
	}
	$set($nc(this->fLocator), fRelatedNode, nullptr);
}

$String* DOMSerializerImpl::_getXmlVersion($Node* node) {
	$var($Document, doc, ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, node) : $nc(node)->getOwnerDocument());
	if (doc != nullptr) {
		try {
			return doc->getXmlVersion();
		} catch ($VirtualMachineError& vme) {
			$throw(vme);
		} catch ($ThreadDeath& vme) {
			$throw(vme);
		} catch ($Throwable& t) {
		}
	}
	return nullptr;
}

$String* DOMSerializerImpl::_getInputEncoding($Node* node) {
	$var($Document, doc, ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, node) : $nc(node)->getOwnerDocument());
	if (doc != nullptr) {
		try {
			return doc->getInputEncoding();
		} catch ($VirtualMachineError& vme) {
			$throw(vme);
		} catch ($ThreadDeath& vme) {
			$throw(vme);
		} catch ($Throwable& t) {
		}
	}
	return nullptr;
}

$String* DOMSerializerImpl::_getXmlEncoding($Node* node) {
	$var($Document, doc, ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) ? $cast($Document, node) : $nc(node)->getOwnerDocument());
	if (doc != nullptr) {
		try {
			return doc->getXmlEncoding();
		} catch ($VirtualMachineError& vme) {
			$throw(vme);
		} catch ($ThreadDeath& vme) {
			$throw(vme);
		} catch ($Throwable& t) {
		}
	}
	return nullptr;
}

DOMSerializerImpl::DOMSerializerImpl() {
}

$Class* DOMSerializerImpl::load$($String* name, bool initialize) {
	$loadClass(DOMSerializerImpl, name, initialize, &_DOMSerializerImpl_ClassInfo_, allocate$DOMSerializerImpl);
	return class$;
}

$Class* DOMSerializerImpl::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com