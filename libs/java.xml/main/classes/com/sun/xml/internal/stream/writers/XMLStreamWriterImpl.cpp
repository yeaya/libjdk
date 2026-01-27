#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <com/sun/xml/internal/stream/writers/UTF8OutputStreamWriter.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$Attribute.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementStack.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementState.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$NamespaceContextImpl.h>
#include <com/sun/xml/internal/stream/writers/XMLWriter.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Random.h>
#include <java/util/Set.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/stream/XMLOutputFactory.h>
#include <javax/xml/stream/XMLStreamConstants.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <javax/xml/transform/stream/StreamResult.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CLOSE_EMPTY_ELEMENT
#undef CLOSE_END_TAG
#undef CLOSE_START_TAG
#undef DEFAULT_ENCODING
#undef DEFAULT_NS_PREFIX
#undef DEFAULT_PREFIX
#undef DEFAULT_XMLDECL
#undef DEFAULT_XML_VERSION
#undef END_CDATA
#undef END_COMMENT
#undef ESCAPE_CHARACTERS
#undef IS_REPAIRING_NAMESPACES
#undef OPEN_END_TAG
#undef OPEN_START_TAG
#undef OUTPUTSTREAM_PROPERTY
#undef SPACE
#undef START_CDATA
#undef START_COMMENT
#undef START_ELEMENT
#undef UTF_8
#undef XMLNS_ATTRIBUTE
#undef XML_NS_PREFIX
#undef XML_NS_URI

using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ReadOnlyIterator = ::com::sun::xml::internal::stream::util::ReadOnlyIterator;
using $UTF8OutputStreamWriter = ::com::sun::xml::internal::stream::writers::UTF8OutputStreamWriter;
using $XMLStreamWriterImpl$Attribute = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$Attribute;
using $XMLStreamWriterImpl$ElementStack = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementStack;
using $XMLStreamWriterImpl$ElementState = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$ElementState;
using $XMLStreamWriterImpl$NamespaceContextImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl$NamespaceContextImpl;
using $XMLWriter = ::com::sun::xml::internal::stream::writers::XMLWriter;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $XMLOutputFactory = ::javax::xml::stream::XMLOutputFactory;
using $XMLStreamConstants = ::javax::xml::stream::XMLStreamConstants;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;
using $StreamResult = ::javax::xml::transform::stream::StreamResult;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLStreamWriterImpl_FieldInfo_[] = {
	{"START_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, START_COMMENT)},
	{"END_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, END_COMMENT)},
	{"DEFAULT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, DEFAULT_ENCODING)},
	{"DEFAULT_XMLDECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, DEFAULT_XMLDECL)},
	{"DEFAULT_XML_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, DEFAULT_XML_VERSION)},
	{"CLOSE_START_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamWriterImpl, CLOSE_START_TAG)},
	{"OPEN_START_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamWriterImpl, OPEN_START_TAG)},
	{"OPEN_END_TAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, OPEN_END_TAG)},
	{"CLOSE_END_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStreamWriterImpl, CLOSE_END_TAG)},
	{"START_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, START_CDATA)},
	{"END_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, END_CDATA)},
	{"CLOSE_EMPTY_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, CLOSE_EMPTY_ELEMENT)},
	{"SPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, SPACE)},
	{"UTF_8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, UTF_8)},
	{"OUTPUTSTREAM_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLStreamWriterImpl, OUTPUTSTREAM_PROPERTY)},
	{"fEscapeCharacters", "Z", nullptr, 0, $field(XMLStreamWriterImpl, fEscapeCharacters)},
	{"fIsRepairingNamespace", "Z", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fIsRepairingNamespace)},
	{"fWriter", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fWriter)},
	{"fOutputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fOutputStream)},
	{"fAttributeCache", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$Attribute;>;", $PRIVATE, $field(XMLStreamWriterImpl, fAttributeCache)},
	{"fNamespaceDecls", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xni/QName;>;", $PRIVATE, $field(XMLStreamWriterImpl, fNamespaceDecls)},
	{"fNamespaceContext", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$NamespaceContextImpl;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fNamespaceContext)},
	{"fInternalNamespaceContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fInternalNamespaceContext)},
	{"fPrefixGen", "Ljava/util/Random;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fPrefixGen)},
	{"fPropertyManager", "Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fPropertyManager)},
	{"fStartTagOpened", "Z", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fStartTagOpened)},
	{"fReuse", "Z", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fReuse)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fSymbolTable)},
	{"fElementStack", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl$ElementStack;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fElementStack)},
	{"DEFAULT_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XMLStreamWriterImpl, DEFAULT_PREFIX)},
	{"fReadOnlyIterator", "Lcom/sun/xml/internal/stream/util/ReadOnlyIterator;", "Lcom/sun/xml/internal/stream/util/ReadOnlyIterator<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XMLStreamWriterImpl, fReadOnlyIterator)},
	{"fEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, $PRIVATE, $field(XMLStreamWriterImpl, fEncoder)},
	{"fAttrNamespace", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(XMLStreamWriterImpl, fAttrNamespace)},
	{}
};

$MethodInfo _XMLStreamWriterImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, init$, void, $OutputStream*, $PropertyManager*), "java.io.IOException"},
	{"<init>", "(Ljava/io/OutputStream;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, init$, void, $OutputStream*, $String*, $PropertyManager*), "java.io.IOException"},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, init$, void, $Writer*, $PropertyManager*), "java.io.IOException"},
	{"<init>", "(Ljavax/xml/transform/stream/StreamResult;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, init$, void, $StreamResult*, $String*, $PropertyManager*), "java.io.IOException"},
	{"addAttrNamespace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, addAttrNamespace, void, $String*, $String*)},
	{"canReuse", "()Z", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, canReuse, bool)},
	{"checkForNull", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $method(XMLStreamWriterImpl, checkForNull, void, $QName*)},
	{"checkUserNamespaceContext", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, checkUserNamespaceContext, bool, $String*, $String*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, close, void), "javax.xml.stream.XMLStreamException"},
	{"closeStartTag", "()V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, closeStartTag, void), "javax.xml.stream.XMLStreamException"},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, containsKey, bool, Object$*)},
	{"correctPrefix", "(Lcom/sun/org/apache/xerces/internal/xni/QName;I)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, correctPrefix, void, $QName*, int32_t)},
	{"correctPrefix", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $method(XMLStreamWriterImpl, correctPrefix, void, $QName*, $QName*)},
	{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC, $virtualMethod(XMLStreamWriterImpl, entrySet, $Set*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, equals, bool, Object$*)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, flush, void), "javax.xml.stream.XMLStreamException"},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, get, $Object*, Object$*)},
	{"getAttrPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, getAttrPrefix, $String*, $String*)},
	{"getEscapeCharacters", "()Z", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, getEscapeCharacters, bool)},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, getNamespaceContext, $NamespaceContext*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, getPrefix, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, getProperty, $Object*, $String*), "java.lang.IllegalArgumentException"},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, hashCode, int32_t)},
	{"init", "()V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, init, void)},
	{"isDeclared", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, 0, $method(XMLStreamWriterImpl, isDeclared, bool, $QName*)},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, isDefaultNamespace, bool, $String*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, isEmpty, bool)},
	{"openStartTag", "()V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, openStartTag, void), "java.io.IOException"},
	{"removeDuplicateDecls", "()V", nullptr, 0, $method(XMLStreamWriterImpl, removeDuplicateDecls, void)},
	{"repair", "()V", nullptr, $PROTECTED, $method(XMLStreamWriterImpl, repair, void)},
	{"repairNamespaceDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, 0, $method(XMLStreamWriterImpl, repairNamespaceDecl, void, $QName*)},
	{"reset", "()V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, reset, void)},
	{"reset", "(Z)V", nullptr, 0, $method(XMLStreamWriterImpl, reset, void, bool)},
	{"setDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, setDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"setEscapeCharacters", "(Z)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, setEscapeCharacters, void, bool)},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, setNamespaceContext, void, $NamespaceContext*), "javax.xml.stream.XMLStreamException"},
	{"setOutput", "(Ljavax/xml/transform/stream/StreamResult;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLStreamWriterImpl, setOutput, void, $StreamResult*, $String*), "java.io.IOException"},
	{"setOutputUsingStream", "(Ljava/io/OutputStream;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, setOutputUsingStream, void, $OutputStream*, $String*), "java.io.IOException"},
	{"setOutputUsingWriter", "(Ljava/io/Writer;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, setOutputUsingWriter, void, $Writer*), "java.io.IOException"},
	{"setPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, setPrefix, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, size, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, toString, $String*)},
	{"verifyEncoding", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, verifyEncoding, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeAttribute, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeAttribute, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeAttribute, void, $String*, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeAttributeWithPrefix", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writeAttributeWithPrefix, void, $String*, $String*, $String*), "java.io.IOException"},
	{"writeCData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeCData, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharRef", "(I)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writeCharRef, void, int32_t), "java.io.IOException"},
	{"writeCharacters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeCharacters, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeCharacters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeCharacters, void, $chars*, int32_t, int32_t), "javax.xml.stream.XMLStreamException"},
	{"writeComment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeComment, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDTD", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeDTD, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeDefaultNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeDefaultNamespace, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEmptyElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEmptyElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEmptyElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEmptyElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeEndDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEndDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeEndElement", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEndElement, void), "javax.xml.stream.XMLStreamException"},
	{"writeEntityRef", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeEntityRef, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeNamespace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeNamespace, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeProcessingInstruction, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeProcessingInstruction, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartDocument, void), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartDocument, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartDocument, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartDocument", "(Ljava/lang/String;Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartDocument, void, $String*, $String*, bool, bool), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartElement, void, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartElement, void, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeStartElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl, writeStartElement, void, $String*, $String*, $String*), "javax.xml.stream.XMLStreamException"},
	{"writeXMLContent", "([CIIZ)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writeXMLContent, void, $chars*, int32_t, int32_t, bool), "java.io.IOException"},
	{"writeXMLContent", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writeXMLContent, void, $String*), "java.io.IOException"},
	{"writeXMLContent", "(Ljava/lang/String;ZZ)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writeXMLContent, void, $String*, bool, bool), "java.io.IOException"},
	{"writenamespace", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(XMLStreamWriterImpl, writenamespace, void, $String*, $String*), "java.io.IOException"},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "NamespaceContextImpl", 0},
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "Attribute", 0},
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementState", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "ElementState", 0},
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "ElementStack", $PROTECTED},
	{}
};

$ClassInfo _XMLStreamWriterImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl",
	"java.util.AbstractMap",
	"com.sun.xml.internal.stream.writers.XMLStreamWriterBase",
	_XMLStreamWriterImpl_FieldInfo_,
	_XMLStreamWriterImpl_MethodInfo_,
	"Ljava/util/AbstractMap<Ljava/lang/Object;Ljava/lang/Object;>;Lcom/sun/xml/internal/stream/writers/XMLStreamWriterBase;",
	nullptr,
	_XMLStreamWriterImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl,com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$Attribute,com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementState,com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$ElementStack"
};

$Object* allocate$XMLStreamWriterImpl($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl));
}

$Object* XMLStreamWriterImpl::clone() {
	 return this->$AbstractMap::clone();
}

void XMLStreamWriterImpl::finalize() {
	this->$AbstractMap::finalize();
}

$String* XMLStreamWriterImpl::START_COMMENT = nullptr;
$String* XMLStreamWriterImpl::END_COMMENT = nullptr;
$String* XMLStreamWriterImpl::DEFAULT_ENCODING = nullptr;
$String* XMLStreamWriterImpl::DEFAULT_XMLDECL = nullptr;
$String* XMLStreamWriterImpl::DEFAULT_XML_VERSION = nullptr;
$String* XMLStreamWriterImpl::OPEN_END_TAG = nullptr;
$String* XMLStreamWriterImpl::START_CDATA = nullptr;
$String* XMLStreamWriterImpl::END_CDATA = nullptr;
$String* XMLStreamWriterImpl::CLOSE_EMPTY_ELEMENT = nullptr;
$String* XMLStreamWriterImpl::SPACE = nullptr;
$String* XMLStreamWriterImpl::UTF_8 = nullptr;
$String* XMLStreamWriterImpl::OUTPUTSTREAM_PROPERTY = nullptr;

void XMLStreamWriterImpl::init$($OutputStream* outputStream, $PropertyManager* props) {
	XMLStreamWriterImpl::init$(static_cast<$Writer*>($$new($OutputStreamWriter, outputStream)), props);
}

void XMLStreamWriterImpl::init$($OutputStream* outputStream, $String* encoding, $PropertyManager* props) {
	XMLStreamWriterImpl::init$($$new($StreamResult, outputStream), encoding, props);
}

void XMLStreamWriterImpl::init$($Writer* writer, $PropertyManager* props) {
	XMLStreamWriterImpl::init$($$new($StreamResult, writer), ($String*)nullptr, props);
}

void XMLStreamWriterImpl::init$($StreamResult* sr, $String* encoding, $PropertyManager* props) {
	$AbstractMap::init$();
	this->fEscapeCharacters = true;
	this->fIsRepairingNamespace = false;
	$set(this, fOutputStream, nullptr);
	$set(this, fNamespaceContext, nullptr);
	$set(this, fInternalNamespaceContext, nullptr);
	$set(this, fPrefixGen, nullptr);
	$set(this, fPropertyManager, nullptr);
	this->fStartTagOpened = false;
	$set(this, fSymbolTable, $new($SymbolTable));
	$set(this, fElementStack, $new($XMLStreamWriterImpl$ElementStack, this));
	$set(this, DEFAULT_PREFIX, $nc(this->fSymbolTable)->addSymbol(""_s));
	$set(this, fReadOnlyIterator, $new($ReadOnlyIterator));
	$set(this, fEncoder, nullptr);
	$set(this, fAttrNamespace, nullptr);
	setOutput(sr, encoding);
	$set(this, fPropertyManager, props);
	init();
}

void XMLStreamWriterImpl::init() {
	this->fReuse = false;
	$set(this, fNamespaceDecls, $new($ArrayList));
	$set(this, fPrefixGen, $new($Random));
	$set(this, fAttributeCache, $new($ArrayList));
	$set(this, fInternalNamespaceContext, $new($NamespaceSupport));
	$nc(this->fInternalNamespaceContext)->reset();
	$set(this, fNamespaceContext, $new($XMLStreamWriterImpl$NamespaceContextImpl, this));
	$set($nc(this->fNamespaceContext), internalContext, this->fInternalNamespaceContext);
	$init($XMLOutputFactory);
	$var($Boolean, ob, $cast($Boolean, $nc(this->fPropertyManager)->getProperty($XMLOutputFactory::IS_REPAIRING_NAMESPACES)));
	this->fIsRepairingNamespace = $nc(ob)->booleanValue();
	$init($Constants);
	$assign(ob, $cast($Boolean, $nc(this->fPropertyManager)->getProperty($Constants::ESCAPE_CHARACTERS)));
	setEscapeCharacters(ob->booleanValue());
}

void XMLStreamWriterImpl::reset() {
	reset(false);
}

void XMLStreamWriterImpl::reset(bool resetProperties) {
	if (!this->fReuse) {
		$throwNew($IllegalStateException, "close() Must be called before calling reset()"_s);
	}
	this->fReuse = false;
	$nc(this->fNamespaceDecls)->clear();
	$nc(this->fAttributeCache)->clear();
	$nc(this->fElementStack)->clear();
	$nc(this->fInternalNamespaceContext)->reset();
	this->fStartTagOpened = false;
	$set($nc(this->fNamespaceContext), userContext, nullptr);
	if (resetProperties) {
		$init($XMLOutputFactory);
		$var($Boolean, ob, $cast($Boolean, $nc(this->fPropertyManager)->getProperty($XMLOutputFactory::IS_REPAIRING_NAMESPACES)));
		this->fIsRepairingNamespace = $nc(ob)->booleanValue();
		$init($Constants);
		$assign(ob, $cast($Boolean, $nc(this->fPropertyManager)->getProperty($Constants::ESCAPE_CHARACTERS)));
		setEscapeCharacters(ob->booleanValue());
	}
}

void XMLStreamWriterImpl::setOutput($StreamResult* sr, $String* encoding) {
	$useLocalCurrentObjectStackCache();
	if ($nc(sr)->getOutputStream() != nullptr) {
		setOutputUsingStream($(sr->getOutputStream()), encoding);
	} else if (sr->getWriter() != nullptr) {
		setOutputUsingWriter($(sr->getWriter()));
	} else if (sr->getSystemId() != nullptr) {
		setOutputUsingStream($$new($FileOutputStream, $(sr->getSystemId())), encoding);
	}
}

void XMLStreamWriterImpl::setOutputUsingWriter($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	$set(this, fWriter, writer);
	if ($instanceOf($OutputStreamWriter, writer)) {
		$var($String, charset, $nc(($cast($OutputStreamWriter, writer)))->getEncoding());
		if (charset != nullptr && !charset->equalsIgnoreCase("utf-8"_s)) {
			$set(this, fEncoder, $nc($($Charset::forName(charset)))->newEncoder());
		}
	}
}

void XMLStreamWriterImpl::setOutputUsingStream($OutputStream* os, $String* encoding$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, encoding$renamed);
	$set(this, fOutputStream, os);
	if (encoding != nullptr) {
		if (encoding->equalsIgnoreCase("utf-8"_s)) {
			$set(this, fWriter, $new($UTF8OutputStreamWriter, os));
		} else {
			$set(this, fWriter, $new($XMLWriter, $$new($OutputStreamWriter, os, encoding)));
			$set(this, fEncoder, $nc($($Charset::forName(encoding)))->newEncoder());
		}
	} else {
		$assign(encoding, $SecuritySupport::getSystemProperty("file.encoding"_s));
		if (encoding != nullptr && encoding->equalsIgnoreCase("utf-8"_s)) {
			$set(this, fWriter, $new($UTF8OutputStreamWriter, os));
		} else {
			$set(this, fWriter, $new($XMLWriter, $$new($OutputStreamWriter, os)));
		}
	}
}

bool XMLStreamWriterImpl::canReuse() {
	return this->fReuse;
}

void XMLStreamWriterImpl::setEscapeCharacters(bool escape) {
	this->fEscapeCharacters = escape;
}

bool XMLStreamWriterImpl::getEscapeCharacters() {
	return this->fEscapeCharacters;
}

void XMLStreamWriterImpl::close() {
	if (this->fWriter != nullptr) {
		try {
			$nc(this->fWriter)->flush();
		} catch ($IOException& e) {
			$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
		}
	}
	$set(this, fWriter, nullptr);
	$set(this, fOutputStream, nullptr);
	$nc(this->fNamespaceDecls)->clear();
	$nc(this->fAttributeCache)->clear();
	$nc(this->fElementStack)->clear();
	$nc(this->fInternalNamespaceContext)->reset();
	this->fReuse = true;
	this->fStartTagOpened = false;
	$set($nc(this->fNamespaceContext), userContext, nullptr);
}

void XMLStreamWriterImpl::flush() {
	try {
		$nc(this->fWriter)->flush();
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

$NamespaceContext* XMLStreamWriterImpl::getNamespaceContext() {
	return this->fNamespaceContext;
}

$String* XMLStreamWriterImpl::getPrefix($String* uri) {
	return $nc(this->fNamespaceContext)->getPrefix(uri);
}

$Object* XMLStreamWriterImpl::getProperty($String* str) {
	if (str == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!$nc(this->fPropertyManager)->containsProperty(str)) {
		$throwNew($IllegalArgumentException, $$str({"Property \'"_s, str, "\' is not supported"_s}));
	}
	return $of($nc(this->fPropertyManager)->getProperty(str));
}

void XMLStreamWriterImpl::setDefaultNamespace($String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	if (uri != nullptr) {
		$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
	}
	if (this->fIsRepairingNamespace) {
		if (isDefaultNamespace(uri)) {
			return;
		}
		$var($QName, qname, $new($QName));
		qname->setValues(this->DEFAULT_PREFIX, "xmlns"_s, nullptr, uri);
		$nc(this->fNamespaceDecls)->add(qname);
	} else {
		$nc(this->fInternalNamespaceContext)->declarePrefix(this->DEFAULT_PREFIX, uri);
	}
}

void XMLStreamWriterImpl::setNamespaceContext($NamespaceContext* namespaceContext) {
	$set($nc(this->fNamespaceContext), userContext, namespaceContext);
}

void XMLStreamWriterImpl::setPrefix($String* prefix$renamed, $String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, uri$renamed);
	if (prefix == nullptr) {
		$throwNew($XMLStreamException, "Prefix cannot be null"_s);
	}
	if (uri == nullptr) {
		$throwNew($XMLStreamException, "URI cannot be null"_s);
	}
	$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
	$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
	if (this->fIsRepairingNamespace) {
		$var($String, tmpURI, $nc(this->fInternalNamespaceContext)->getURI(prefix));
		if ((tmpURI != nullptr) && (tmpURI == uri)) {
			return;
		}
		if (checkUserNamespaceContext(prefix, uri)) {
			return;
		}
		$var($QName, qname, $new($QName));
		$init($XMLConstants);
		qname->setValues(prefix, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, uri);
		$nc(this->fNamespaceDecls)->add(qname);
		return;
	}
	$nc(this->fInternalNamespaceContext)->declarePrefix(prefix, uri);
}

void XMLStreamWriterImpl::writeAttribute($String* localName, $String* value) {
	try {
		if (!this->fStartTagOpened) {
			$throwNew($XMLStreamException, "Attribute not associated with any element"_s);
		}
		if (this->fIsRepairingNamespace) {
			$var($XMLStreamWriterImpl$Attribute, attr, $new($XMLStreamWriterImpl$Attribute, this, value));
			attr->setValues(nullptr, localName, nullptr, nullptr);
			$nc(this->fAttributeCache)->add(attr);
			return;
		}
		$nc(this->fWriter)->write(" "_s);
		$nc(this->fWriter)->write(localName);
		$nc(this->fWriter)->write("=\""_s);
		writeXMLContent(value, true, true);
		$nc(this->fWriter)->write("\""_s);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeAttribute($String* namespaceURI$renamed, $String* localName, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, namespaceURI$renamed);
	try {
		if (!this->fStartTagOpened) {
			$throwNew($XMLStreamException, "Attribute not associated with any element"_s);
		}
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
		$var($String, prefix, $nc(this->fInternalNamespaceContext)->getPrefix(namespaceURI));
		if (!this->fIsRepairingNamespace) {
			if (prefix == nullptr) {
				$throwNew($XMLStreamException, "Prefix cannot be null"_s);
			}
			writeAttributeWithPrefix(prefix, localName, value);
		} else {
			$var($XMLStreamWriterImpl$Attribute, attr, $new($XMLStreamWriterImpl$Attribute, this, value));
			attr->setValues(nullptr, localName, nullptr, namespaceURI);
			$nc(this->fAttributeCache)->add(attr);
		}
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeAttributeWithPrefix($String* prefix, $String* localName, $String* value) {
	$nc(this->fWriter)->write(XMLStreamWriterImpl::SPACE);
	$init($XMLConstants);
	if ((prefix != nullptr) && (!prefix->equals($XMLConstants::DEFAULT_NS_PREFIX))) {
		$nc(this->fWriter)->write(prefix);
		$nc(this->fWriter)->write(":"_s);
	}
	$nc(this->fWriter)->write(localName);
	$nc(this->fWriter)->write("=\""_s);
	writeXMLContent(value, true, true);
	$nc(this->fWriter)->write("\""_s);
}

void XMLStreamWriterImpl::writeAttribute($String* prefix$renamed, $String* namespaceURI$renamed, $String* localName, $String* value) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, namespaceURI, namespaceURI$renamed);
	try {
		if (!this->fStartTagOpened) {
			$throwNew($XMLStreamException, "Attribute not associated with any element"_s);
		}
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local name cannot be null"_s);
		}
		if (!this->fIsRepairingNamespace) {
			if (prefix == nullptr || $nc(prefix)->isEmpty()) {
				if (!$nc(namespaceURI)->isEmpty()) {
					$throwNew($XMLStreamException, "prefix cannot be null or empty"_s);
				} else {
					writeAttributeWithPrefix(nullptr, localName, value);
					return;
				}
			}
			$init($XMLConstants);
			bool var$0 = !$nc(prefix)->equals($XMLConstants::XML_NS_PREFIX);
			if (var$0 || !$nc(namespaceURI)->equals($XMLConstants::XML_NS_URI)) {
				$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
				$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
				if ($nc(this->fInternalNamespaceContext)->containsPrefixInCurrentContext(prefix)) {
					$var($String, tmpURI, $nc(this->fInternalNamespaceContext)->getURI(prefix));
					if (tmpURI != nullptr && tmpURI != namespaceURI) {
						$throwNew($XMLStreamException, $$str({"Prefix "_s, prefix, " is already bound to "_s, tmpURI, ". Trying to rebind it to "_s, namespaceURI, " is an error."_s}));
					}
				}
				$nc(this->fInternalNamespaceContext)->declarePrefix(prefix, namespaceURI);
			}
			writeAttributeWithPrefix(prefix, localName, value);
		} else {
			if (prefix != nullptr) {
				$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
			}
			$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
			$var($XMLStreamWriterImpl$Attribute, attr, $new($XMLStreamWriterImpl$Attribute, this, value));
			attr->setValues(prefix, localName, nullptr, namespaceURI);
			$nc(this->fAttributeCache)->add(attr);
		}
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeCData($String* cdata) {
	try {
		if (cdata == nullptr) {
			$throwNew($XMLStreamException, "cdata cannot be null"_s);
		}
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		$nc(this->fWriter)->write(XMLStreamWriterImpl::START_CDATA);
		$nc(this->fWriter)->write(cdata);
		$nc(this->fWriter)->write(XMLStreamWriterImpl::END_CDATA);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeCharacters($String* data) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		writeXMLContent(data);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeCharacters($chars* data, int32_t start, int32_t len) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		writeXMLContent(data, start, len, this->fEscapeCharacters);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeComment($String* comment) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		$nc(this->fWriter)->write(XMLStreamWriterImpl::START_COMMENT);
		if (comment != nullptr) {
			$nc(this->fWriter)->write(comment);
		}
		$nc(this->fWriter)->write(XMLStreamWriterImpl::END_COMMENT);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeDTD($String* dtd) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		$nc(this->fWriter)->write(dtd);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeDefaultNamespace($String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURINormalized, nullptr);
	if (namespaceURI == nullptr) {
		$assign(namespaceURINormalized, ""_s);
	} else {
		$assign(namespaceURINormalized, namespaceURI);
	}
	try {
		if (!this->fStartTagOpened) {
			$throwNew($IllegalStateException, "Namespace Attribute not associated with any element"_s);
		}
		if (this->fIsRepairingNamespace) {
			$var($QName, qname, $new($QName));
			$init($XMLConstants);
			qname->setValues($XMLConstants::DEFAULT_NS_PREFIX, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, namespaceURINormalized);
			$nc(this->fNamespaceDecls)->add(qname);
			return;
		}
		$assign(namespaceURINormalized, $nc(this->fSymbolTable)->addSymbol(namespaceURINormalized));
		if ($nc(this->fInternalNamespaceContext)->containsPrefixInCurrentContext(""_s)) {
			$var($String, tmp, $nc(this->fInternalNamespaceContext)->getURI(""_s));
			if (tmp != nullptr && !tmp->equals(namespaceURINormalized)) {
				$throwNew($XMLStreamException, $$str({"xmlns has been already bound to "_s, tmp, ". Rebinding it to "_s, namespaceURINormalized, " is an error"_s}));
			}
		}
		$nc(this->fInternalNamespaceContext)->declarePrefix(""_s, namespaceURINormalized);
		writenamespace(nullptr, namespaceURINormalized);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeEmptyElement($String* localName) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		openStartTag();
		$nc(this->fElementStack)->push(nullptr, localName, nullptr, nullptr, true);
		$nc(this->fInternalNamespaceContext)->pushContext();
		if (!this->fIsRepairingNamespace) {
			$nc(this->fWriter)->write(localName);
		}
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeEmptyElement($String* namespaceURI$renamed, $String* localName) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, namespaceURI$renamed);
	if (namespaceURI == nullptr) {
		$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
	}
	$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
	$var($String, prefix, $nc(this->fNamespaceContext)->getPrefix(namespaceURI));
	writeEmptyElement(prefix, localName, namespaceURI);
}

void XMLStreamWriterImpl::writeEmptyElement($String* prefix$renamed, $String* localName, $String* namespaceURI$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, namespaceURI, namespaceURI$renamed);
	try {
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local Name cannot be null"_s);
		}
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (prefix != nullptr) {
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
		}
		$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		openStartTag();
		$nc(this->fElementStack)->push(prefix, localName, nullptr, namespaceURI, true);
		$nc(this->fInternalNamespaceContext)->pushContext();
		if (!this->fIsRepairingNamespace) {
			if (prefix == nullptr) {
				$throwNew($XMLStreamException, $$str({"NamespaceURI "_s, namespaceURI, " has not been bound to any prefix"_s}));
			}
		} else {
			return;
		}
		$init($XMLConstants);
		if ((prefix != nullptr) && (!prefix->equals($XMLConstants::DEFAULT_NS_PREFIX))) {
			$nc(this->fWriter)->write(prefix);
			$nc(this->fWriter)->write(":"_s);
		}
		$nc(this->fWriter)->write(localName);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeEndDocument() {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		while (!$nc(this->fElementStack)->empty()) {
			$var($XMLStreamWriterImpl$ElementState, elem, $nc(this->fElementStack)->pop());
			$nc(this->fInternalNamespaceContext)->popContext();
			if ($nc(elem)->isEmpty) {
			} else {
				$nc(this->fWriter)->write(XMLStreamWriterImpl::OPEN_END_TAG);
				if ((elem->prefix != nullptr) && !$nc((elem->prefix))->isEmpty()) {
					$nc(this->fWriter)->write(elem->prefix);
					$nc(this->fWriter)->write(":"_s);
				}
				$nc(this->fWriter)->write(elem->localpart);
				$nc(this->fWriter)->write((int32_t)XMLStreamWriterImpl::CLOSE_END_TAG);
			}
		}
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($XMLStreamException, "No more elements to write"_s);
	}
}

void XMLStreamWriterImpl::writeEndElement() {
	$useLocalCurrentObjectStackCache();
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		$var($XMLStreamWriterImpl$ElementState, currentElement, $nc(this->fElementStack)->pop());
		if (currentElement == nullptr) {
			$throwNew($XMLStreamException, "No element was found to write"_s);
		}
		if ($nc(currentElement)->isEmpty) {
			return;
		}
		$nc(this->fWriter)->write(XMLStreamWriterImpl::OPEN_END_TAG);
		if (($nc(currentElement)->prefix != nullptr) && !$nc((currentElement->prefix))->isEmpty()) {
			$nc(this->fWriter)->write(currentElement->prefix);
			$nc(this->fWriter)->write(":"_s);
		}
		$nc(this->fWriter)->write($nc(currentElement)->localpart);
		$nc(this->fWriter)->write((int32_t)XMLStreamWriterImpl::CLOSE_END_TAG);
		$nc(this->fInternalNamespaceContext)->popContext();
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($XMLStreamException, $$str({"No element was found to write: "_s, $(e->toString())}), static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeEntityRef($String* refName) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		$nc(this->fWriter)->write((int32_t)u'&');
		$nc(this->fWriter)->write(refName);
		$nc(this->fWriter)->write((int32_t)u';');
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeNamespace($String* prefix$renamed, $String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, namespaceURINormalized, nullptr);
	if (namespaceURI == nullptr) {
		$assign(namespaceURINormalized, ""_s);
	} else {
		$assign(namespaceURINormalized, namespaceURI);
	}
	try {
		$var($QName, qname, nullptr);
		if (!this->fStartTagOpened) {
			$throwNew($IllegalStateException, $$str({"Invalid state: start tag is not opened at writeNamespace("_s, prefix, ", "_s, namespaceURINormalized, ")"_s}));
		}
		$init($XMLConstants);
		bool var$0 = prefix == nullptr || $nc(prefix)->equals($XMLConstants::DEFAULT_NS_PREFIX);
		if (var$0 || $nc(prefix)->equals($XMLConstants::XMLNS_ATTRIBUTE)) {
			writeDefaultNamespace(namespaceURINormalized);
			return;
		}
		bool var$1 = $nc(prefix)->equals($XMLConstants::XML_NS_PREFIX);
		if (var$1 && $nc(namespaceURINormalized)->equals($XMLConstants::XML_NS_URI)) {
			return;
		}
		$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
		$assign(namespaceURINormalized, $nc(this->fSymbolTable)->addSymbol(namespaceURINormalized));
		if (this->fIsRepairingNamespace) {
			$var($String, tmpURI, $nc(this->fInternalNamespaceContext)->getURI(prefix));
			if ((tmpURI != nullptr) && (tmpURI->equals(namespaceURINormalized))) {
				return;
			}
			$assign(qname, $new($QName));
			qname->setValues(prefix, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, namespaceURINormalized);
			$nc(this->fNamespaceDecls)->add(qname);
			return;
		}
		if ($nc(this->fInternalNamespaceContext)->containsPrefixInCurrentContext(prefix)) {
			$var($String, tmp, $nc(this->fInternalNamespaceContext)->getURI(prefix));
			if (tmp != nullptr && !tmp->equals(namespaceURINormalized)) {
				$throwNew($XMLStreamException, $$str({"prefix "_s, prefix, " has been already bound to "_s, tmp, ". Rebinding it to "_s, namespaceURINormalized, " is an error"_s}));
			}
		}
		$nc(this->fInternalNamespaceContext)->declarePrefix(prefix, namespaceURINormalized);
		writenamespace(prefix, namespaceURINormalized);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writenamespace($String* prefix, $String* namespaceURI) {
	$nc(this->fWriter)->write(" xmlns"_s);
	$init($XMLConstants);
	if ((prefix != nullptr) && (!prefix->equals($XMLConstants::DEFAULT_NS_PREFIX))) {
		$nc(this->fWriter)->write(":"_s);
		$nc(this->fWriter)->write(prefix);
	}
	$nc(this->fWriter)->write("=\""_s);
	writeXMLContent(namespaceURI, true, true);
	$nc(this->fWriter)->write("\""_s);
}

void XMLStreamWriterImpl::writeProcessingInstruction($String* target) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		if (target != nullptr) {
			$nc(this->fWriter)->write("<?"_s);
			$nc(this->fWriter)->write(target);
			$nc(this->fWriter)->write("?>"_s);
			return;
		}
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
	$throwNew($XMLStreamException, "PI target cannot be null"_s);
}

void XMLStreamWriterImpl::writeProcessingInstruction($String* target, $String* data) {
	try {
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		if ((target == nullptr) || (data == nullptr)) {
			$throwNew($XMLStreamException, "PI target cannot be null"_s);
		}
		$nc(this->fWriter)->write("<?"_s);
		$nc(this->fWriter)->write(target);
		$nc(this->fWriter)->write(XMLStreamWriterImpl::SPACE);
		$nc(this->fWriter)->write(data);
		$nc(this->fWriter)->write("?>"_s);
	} catch ($IOException& e) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(e));
	}
}

void XMLStreamWriterImpl::writeStartDocument() {
	writeStartDocument(nullptr, nullptr, false, false);
}

void XMLStreamWriterImpl::writeStartDocument($String* version) {
	writeStartDocument(nullptr, version, false, false);
}

void XMLStreamWriterImpl::writeStartDocument($String* encoding, $String* version) {
	writeStartDocument(encoding, version, false, false);
}

void XMLStreamWriterImpl::writeStartDocument($String* encoding, $String* version, bool standalone, bool standaloneSet) {
	try {
		bool var$0 = (encoding == nullptr || $nc(encoding)->length() == 0);
		if (var$0 && (version == nullptr || $nc(version)->length() == 0) && (!standaloneSet)) {
			$nc(this->fWriter)->write(XMLStreamWriterImpl::DEFAULT_XMLDECL);
			return;
		}
		if (encoding != nullptr && !encoding->isEmpty()) {
			verifyEncoding(encoding);
		}
		$nc(this->fWriter)->write("<?xml version=\""_s);
		if ((version == nullptr) || $nc(version)->isEmpty()) {
			$nc(this->fWriter)->write(XMLStreamWriterImpl::DEFAULT_XML_VERSION);
		} else {
			$nc(this->fWriter)->write(version);
		}
		if (encoding != nullptr && !encoding->isEmpty()) {
			$nc(this->fWriter)->write("\" encoding=\""_s);
			$nc(this->fWriter)->write(encoding);
		}
		if (standaloneSet) {
			$nc(this->fWriter)->write("\" standalone=\""_s);
			if (standalone) {
				$nc(this->fWriter)->write("yes"_s);
			} else {
				$nc(this->fWriter)->write("no"_s);
			}
		}
		$nc(this->fWriter)->write("\"?>"_s);
	} catch ($IOException& ex) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(ex));
	}
}

void XMLStreamWriterImpl::verifyEncoding($String* encoding) {
	$useLocalCurrentObjectStackCache();
	$var($String, streamEncoding, nullptr);
	if ($instanceOf($OutputStreamWriter, this->fWriter)) {
		$assign(streamEncoding, $nc(($cast($OutputStreamWriter, this->fWriter)))->getEncoding());
	} else if ($instanceOf($UTF8OutputStreamWriter, this->fWriter)) {
		$assign(streamEncoding, $nc(($cast($UTF8OutputStreamWriter, this->fWriter)))->getEncoding());
	} else if ($instanceOf($XMLWriter, this->fWriter)) {
		$assign(streamEncoding, $nc(($cast($OutputStreamWriter, $($nc(($cast($XMLWriter, this->fWriter)))->getWriter()))))->getEncoding());
	}
	if (streamEncoding != nullptr && !streamEncoding->equalsIgnoreCase(encoding)) {
		bool foundAlias = false;
		$var($Set, aliases, $nc($($Charset::forName(encoding)))->aliases());
		{
			$var($Iterator, it, $nc(aliases)->iterator());
			for (; !foundAlias && $nc(it)->hasNext();) {
				if (streamEncoding->equalsIgnoreCase($cast($String, $(it->next())))) {
					foundAlias = true;
				}
			}
		}
		if (!foundAlias) {
			$throwNew($XMLStreamException, $$str({"Underlying stream encoding \'"_s, streamEncoding, "\' and input paramter for writeStartDocument() method \'"_s, encoding, "\' do not match."_s}));
		}
	}
}

void XMLStreamWriterImpl::writeStartElement($String* localName) {
	try {
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local Name cannot be null"_s);
		}
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		openStartTag();
		$nc(this->fElementStack)->push(nullptr, localName, nullptr, nullptr, false);
		$nc(this->fInternalNamespaceContext)->pushContext();
		if (this->fIsRepairingNamespace) {
			return;
		}
		$nc(this->fWriter)->write(localName);
	} catch ($IOException& ex) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(ex));
	}
}

void XMLStreamWriterImpl::writeStartElement($String* namespaceURI$renamed, $String* localName) {
	$useLocalCurrentObjectStackCache();
	$var($String, namespaceURI, namespaceURI$renamed);
	if (localName == nullptr) {
		$throwNew($XMLStreamException, "Local Name cannot be null"_s);
	}
	if (namespaceURI == nullptr) {
		$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
	}
	$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
	$var($String, prefix, nullptr);
	if (!this->fIsRepairingNamespace) {
		$assign(prefix, $nc(this->fNamespaceContext)->getPrefix(namespaceURI));
		if (prefix != nullptr) {
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
		}
	}
	writeStartElement(prefix, localName, namespaceURI);
}

void XMLStreamWriterImpl::writeStartElement($String* prefix$renamed, $String* localName, $String* namespaceURI$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, namespaceURI, namespaceURI$renamed);
	try {
		if (localName == nullptr) {
			$throwNew($XMLStreamException, "Local Name cannot be null"_s);
		}
		if (namespaceURI == nullptr) {
			$throwNew($XMLStreamException, "NamespaceURI cannot be null"_s);
		}
		if (!this->fIsRepairingNamespace) {
			if (prefix == nullptr) {
				$throwNew($XMLStreamException, "Prefix cannot be null"_s);
			}
		}
		if (this->fStartTagOpened) {
			closeStartTag();
		}
		openStartTag();
		$assign(namespaceURI, $nc(this->fSymbolTable)->addSymbol(namespaceURI));
		if (prefix != nullptr) {
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
		}
		$nc(this->fElementStack)->push(prefix, localName, nullptr, namespaceURI, false);
		$nc(this->fInternalNamespaceContext)->pushContext();
		$var($String, tmpPrefix, $nc(this->fNamespaceContext)->getPrefix(namespaceURI));
		if ((prefix != nullptr) && ((tmpPrefix == nullptr) || !$nc(prefix)->equals(tmpPrefix))) {
			$nc(this->fInternalNamespaceContext)->declarePrefix(prefix, namespaceURI);
		}
		if (this->fIsRepairingNamespace) {
			if ((prefix == nullptr) || ((tmpPrefix != nullptr) && $nc(prefix)->equals(tmpPrefix))) {
				return;
			}
			$var($QName, qname, $new($QName));
			$init($XMLConstants);
			qname->setValues(prefix, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, namespaceURI);
			$nc(this->fNamespaceDecls)->add(qname);
			return;
		}
		$init($XMLConstants);
		if ((prefix != nullptr) && (prefix != $XMLConstants::DEFAULT_NS_PREFIX)) {
			$nc(this->fWriter)->write(prefix);
			$nc(this->fWriter)->write(":"_s);
		}
		$nc(this->fWriter)->write(localName);
	} catch ($IOException& ex) {
		$throwNew($XMLStreamException, static_cast<$Throwable*>(ex));
	}
}

void XMLStreamWriterImpl::writeCharRef(int32_t codePoint) {
	$nc(this->fWriter)->write("&#x"_s);
	$nc(this->fWriter)->write($($Integer::toHexString(codePoint)));
	$nc(this->fWriter)->write((int32_t)u';');
}

void XMLStreamWriterImpl::writeXMLContent($chars* content, int32_t start, int32_t length, bool escapeChars) {
	if (!escapeChars) {
		$nc(this->fWriter)->write(content, start, length);
		return;
	}
	int32_t startWritePos = start;
	int32_t end = start + length;
	for (int32_t index = start; index < end; ++index) {
		char16_t ch = $nc(content)->get(index);
		if (this->fEncoder != nullptr && !$nc(this->fEncoder)->canEncode(ch)) {
			$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
			if (index != end - 1 && $Character::isSurrogatePair(ch, content->get(index + 1))) {
				writeCharRef($Character::toCodePoint(ch, content->get(index + 1)));
				++index;
			} else {
				writeCharRef(ch);
			}
			startWritePos = index + 1;
			continue;
		}
		switch (ch) {
		case u'<':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&lt;"_s);
				startWritePos = index + 1;
				break;
			}
		case u'&':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&amp;"_s);
				startWritePos = index + 1;
				break;
			}
		case u'>':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&gt;"_s);
				startWritePos = index + 1;
				break;
			}
		}
	}
	$nc(this->fWriter)->write(content, startWritePos, end - startWritePos);
}

void XMLStreamWriterImpl::writeXMLContent($String* content) {
	if ((content != nullptr) && (content->length() > 0)) {
		writeXMLContent(content, this->fEscapeCharacters, false);
	}
}

void XMLStreamWriterImpl::writeXMLContent($String* content, bool escapeChars, bool escapeDoubleQuotes) {
	if (!escapeChars) {
		$nc(this->fWriter)->write(content);
		return;
	}
	int32_t startWritePos = 0;
	int32_t end = $nc(content)->length();
	for (int32_t index = 0; index < end; ++index) {
		char16_t ch = content->charAt(index);
		if (this->fEncoder != nullptr && !$nc(this->fEncoder)->canEncode(ch)) {
			$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
			if (index != end - 1 && $Character::isSurrogatePair(ch, content->charAt(index + 1))) {
				writeCharRef($Character::toCodePoint(ch, content->charAt(index + 1)));
				++index;
			} else {
				writeCharRef(ch);
			}
			startWritePos = index + 1;
			continue;
		}
		switch (ch) {
		case u'<':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&lt;"_s);
				startWritePos = index + 1;
				break;
			}
		case u'&':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&amp;"_s);
				startWritePos = index + 1;
				break;
			}
		case u'>':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				$nc(this->fWriter)->write("&gt;"_s);
				startWritePos = index + 1;
				break;
			}
		case u'\"':
			{
				$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
				if (escapeDoubleQuotes) {
					$nc(this->fWriter)->write("&quot;"_s);
				} else {
					$nc(this->fWriter)->write((int32_t)u'\"');
				}
				startWritePos = index + 1;
				break;
			}
		}
	}
	$nc(this->fWriter)->write(content, startWritePos, end - startWritePos);
}

void XMLStreamWriterImpl::closeStartTag() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($XMLStreamWriterImpl$ElementState, currentElement, $nc(this->fElementStack)->peek());
		if (this->fIsRepairingNamespace) {
			repair();
			correctPrefix(static_cast<$QName*>(currentElement), $XMLStreamConstants::START_ELEMENT);
			$init($XMLConstants);
			if (($nc(currentElement)->prefix != nullptr) && (currentElement->prefix != $XMLConstants::DEFAULT_NS_PREFIX)) {
				$nc(this->fWriter)->write(currentElement->prefix);
				$nc(this->fWriter)->write(":"_s);
			}
			$nc(this->fWriter)->write($nc(currentElement)->localpart);
			int32_t len = $nc(this->fNamespaceDecls)->size();
			$var($QName, qname, nullptr);
			for (int32_t i = 0; i < len; ++i) {
				$assign(qname, $cast($QName, $nc(this->fNamespaceDecls)->get(i)));
				if (qname != nullptr) {
					if ($nc(this->fInternalNamespaceContext)->declarePrefix(qname->prefix, qname->uri)) {
						writenamespace(qname->prefix, qname->uri);
					}
				}
			}
			$nc(this->fNamespaceDecls)->clear();
			$var($XMLStreamWriterImpl$Attribute, attr, nullptr);
			for (int32_t j = 0; j < $nc(this->fAttributeCache)->size(); ++j) {
				$assign(attr, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(j)));
				if (($nc(attr)->prefix != nullptr) && (attr->uri != nullptr)) {
					bool var$0 = !$nc(attr->prefix)->isEmpty();
					if (var$0 && !$nc(attr->uri)->isEmpty()) {
						$var($String, tmp, $nc(this->fInternalNamespaceContext)->getPrefix(attr->uri));
						if ((tmp == nullptr) || (!$nc(tmp)->equals(attr->prefix))) {
							$assign(tmp, getAttrPrefix(attr->uri));
							if (tmp == nullptr) {
								if ($nc(this->fInternalNamespaceContext)->declarePrefix(attr->prefix, attr->uri)) {
									writenamespace(attr->prefix, attr->uri);
								}
							} else {
								writenamespace(attr->prefix, attr->uri);
							}
						}
					}
				}
				writeAttributeWithPrefix($nc(attr)->prefix, attr->localpart, attr->value);
			}
			$set(this, fAttrNamespace, nullptr);
			$nc(this->fAttributeCache)->clear();
		}
		if ($nc(currentElement)->isEmpty) {
			$nc(this->fElementStack)->pop();
			$nc(this->fInternalNamespaceContext)->popContext();
			$nc(this->fWriter)->write(XMLStreamWriterImpl::CLOSE_EMPTY_ELEMENT);
		} else {
			$nc(this->fWriter)->write((int32_t)XMLStreamWriterImpl::CLOSE_START_TAG);
		}
		this->fStartTagOpened = false;
	} catch ($IOException& ex) {
		this->fStartTagOpened = false;
		$throwNew($XMLStreamException, static_cast<$Throwable*>(ex));
	}
}

void XMLStreamWriterImpl::openStartTag() {
	this->fStartTagOpened = true;
	$nc(this->fWriter)->write((int32_t)XMLStreamWriterImpl::OPEN_START_TAG);
}

void XMLStreamWriterImpl::correctPrefix($QName* attr, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$var($String, tmpPrefix, nullptr);
	$var($String, prefix, nullptr);
	$var($String, uri, nullptr);
	$assign(prefix, $nc(attr)->prefix);
	$assign(uri, attr->uri);
	bool isSpecialCaseURI = false;
	$init($XMLConstants);
	if (prefix == nullptr || $nc(prefix)->equals($XMLConstants::DEFAULT_NS_PREFIX)) {
		if (uri == nullptr) {
			return;
		}
		bool var$0 = $nc($XMLConstants::DEFAULT_NS_PREFIX)->equals(prefix);
		if (var$0 && $nc(uri)->equals($XMLConstants::DEFAULT_NS_PREFIX)) {
			return;
		}
		$assign(uri, $nc(this->fSymbolTable)->addSymbol(uri));
		$var($QName, decl, nullptr);
		for (int32_t i = 0; i < $nc(this->fNamespaceDecls)->size(); ++i) {
			$assign(decl, $cast($QName, $nc(this->fNamespaceDecls)->get(i)));
			if ((decl != nullptr) && ($nc(decl->uri)->equals(attr->uri))) {
				$set(attr, prefix, decl->prefix);
				return;
			}
		}
		$assign(tmpPrefix, $nc(this->fNamespaceContext)->getPrefix(uri));
		if ($nc($XMLConstants::DEFAULT_NS_PREFIX)->equals(tmpPrefix)) {
			if (type == $XMLStreamConstants::START_ELEMENT) {
				return;
			} else if (type == $XMLStreamConstants::ATTRIBUTE) {
				$assign(tmpPrefix, getAttrPrefix(uri));
				isSpecialCaseURI = true;
			}
		}
		if (tmpPrefix == nullptr) {
			$var($StringBuilder, genPrefix, $new($StringBuilder, "zdef"_s));
			for (int32_t i = 0; i < 1; ++i) {
				genPrefix->append($nc(this->fPrefixGen)->nextInt());
			}
			$assign(prefix, genPrefix->toString());
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol(prefix));
		} else {
			$assign(prefix, $nc(this->fSymbolTable)->addSymbol(tmpPrefix));
		}
		if (tmpPrefix == nullptr) {
			if (isSpecialCaseURI) {
				addAttrNamespace(prefix, uri);
			} else {
				$var($QName, qname, $new($QName));
				qname->setValues(prefix, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, uri);
				$nc(this->fNamespaceDecls)->add(qname);
				$nc(this->fInternalNamespaceContext)->declarePrefix($($nc(this->fSymbolTable)->addSymbol(prefix)), uri);
			}
		}
	}
	$set(attr, prefix, prefix);
}

$String* XMLStreamWriterImpl::getAttrPrefix($String* uri) {
	if (this->fAttrNamespace != nullptr) {
		return $cast($String, $nc(this->fAttrNamespace)->get(uri));
	}
	return nullptr;
}

void XMLStreamWriterImpl::addAttrNamespace($String* prefix, $String* uri) {
	if (this->fAttrNamespace == nullptr) {
		$set(this, fAttrNamespace, $new($HashMap));
	}
	$nc(this->fAttrNamespace)->put(prefix, uri);
}

bool XMLStreamWriterImpl::isDefaultNamespace($String* uri) {
	$var($String, defaultNamespace, $nc(this->fInternalNamespaceContext)->getURI(this->DEFAULT_PREFIX));
	return $Objects::equals(uri, defaultNamespace);
}

bool XMLStreamWriterImpl::checkUserNamespaceContext($String* prefix, $String* uri) {
	if ($nc(this->fNamespaceContext)->userContext != nullptr) {
		$var($String, tmpURI, $nc($nc(this->fNamespaceContext)->userContext)->getNamespaceURI(prefix));
		if ((tmpURI != nullptr) && tmpURI->equals(uri)) {
			return true;
		}
	}
	return false;
}

void XMLStreamWriterImpl::repair() {
	$useLocalCurrentObjectStackCache();
	$var($XMLStreamWriterImpl$Attribute, attr, nullptr);
	$var($XMLStreamWriterImpl$Attribute, attr2, nullptr);
	$var($XMLStreamWriterImpl$ElementState, currentElement, $nc(this->fElementStack)->peek());
	removeDuplicateDecls();
	for (int32_t i = 0; i < $nc(this->fAttributeCache)->size(); ++i) {
		$assign(attr, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(i)));
		bool var$0 = ($nc(attr)->prefix != nullptr && !$nc(attr->prefix)->isEmpty());
		if (var$0 || ($nc(attr)->uri != nullptr && !$nc(attr->uri)->isEmpty())) {
			correctPrefix(static_cast<$QName*>(currentElement), static_cast<$QName*>(attr));
		}
	}
	if (!isDeclared(currentElement)) {
		if (($nc(currentElement)->prefix != nullptr) && (currentElement->uri != nullptr)) {
			bool var$1 = (!$nc(currentElement->prefix)->isEmpty());
			if (var$1 && (!$nc(currentElement->uri)->isEmpty())) {
				$nc(this->fNamespaceDecls)->add(currentElement);
			}
		}
	}
	for (int32_t i = 0; i < $nc(this->fAttributeCache)->size(); ++i) {
		$assign(attr, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(i)));
		for (int32_t j = i + 1; j < $nc(this->fAttributeCache)->size(); ++j) {
			$assign(attr2, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(j)));
			bool var$2 = !""_s->equals($nc(attr)->prefix);
			if (var$2 && !""_s->equals($nc(attr2)->prefix)) {
				correctPrefix(static_cast<$QName*>(attr), static_cast<$QName*>(attr2));
			}
		}
	}
	repairNamespaceDecl(currentElement);
	int32_t i = 0;
	for (i = 0; i < $nc(this->fAttributeCache)->size(); ++i) {
		$assign(attr, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(i)));
		bool var$3 = $nc(attr)->prefix != nullptr && $nc(attr->prefix)->isEmpty() && attr->uri != nullptr;
		if (var$3 && $nc(attr->uri)->isEmpty()) {
			repairNamespaceDecl(attr);
		}
	}
	$var($QName, qname, nullptr);
	for (i = 0; i < $nc(this->fNamespaceDecls)->size(); ++i) {
		$assign(qname, $cast($QName, $nc(this->fNamespaceDecls)->get(i)));
		if (qname != nullptr) {
			$nc(this->fInternalNamespaceContext)->declarePrefix(qname->prefix, qname->uri);
		}
	}
	for (i = 0; i < $nc(this->fAttributeCache)->size(); ++i) {
		$assign(attr, $cast($XMLStreamWriterImpl$Attribute, $nc(this->fAttributeCache)->get(i)));
		correctPrefix(static_cast<$QName*>(attr), $XMLStreamConstants::ATTRIBUTE);
	}
}

void XMLStreamWriterImpl::correctPrefix($QName* attr1, $QName* attr2) {
	$useLocalCurrentObjectStackCache();
	$var($String, tmpPrefix, nullptr);
	$var($QName, decl, nullptr);
	checkForNull(attr1);
	checkForNull(attr2);
	bool var$0 = $nc($nc(attr1)->prefix)->equals($nc(attr2)->prefix);
	if (var$0 && !($nc(attr1->uri)->equals($nc(attr2)->uri))) {
		$assign(tmpPrefix, $nc(this->fNamespaceContext)->getPrefix($nc(attr2)->uri));
		if (tmpPrefix != nullptr) {
			$set($nc(attr2), prefix, $nc(this->fSymbolTable)->addSymbol(tmpPrefix));
		} else {
			for (int32_t n = 0; n < $nc(this->fNamespaceDecls)->size(); ++n) {
				$assign(decl, $cast($QName, $nc(this->fNamespaceDecls)->get(n)));
				if (decl != nullptr && ($nc(decl->uri)->equals($nc(attr2)->uri))) {
					$set($nc(attr2), prefix, decl->prefix);
					return;
				}
			}
			$var($StringBuilder, genPrefix, $new($StringBuilder, "zdef"_s));
			for (int32_t k = 0; k < 1; ++k) {
				genPrefix->append($nc(this->fPrefixGen)->nextInt());
			}
			$assign(tmpPrefix, genPrefix->toString());
			$assign(tmpPrefix, $nc(this->fSymbolTable)->addSymbol(tmpPrefix));
			$set($nc(attr2), prefix, tmpPrefix);
			$var($QName, qname, $new($QName));
			$init($XMLConstants);
			qname->setValues(tmpPrefix, $XMLConstants::XMLNS_ATTRIBUTE, nullptr, attr2->uri);
			$nc(this->fNamespaceDecls)->add(qname);
		}
	}
}

void XMLStreamWriterImpl::checkForNull($QName* attr) {
	if ($nc(attr)->prefix == nullptr) {
		$init($XMLConstants);
		$set(attr, prefix, $XMLConstants::DEFAULT_NS_PREFIX);
	}
	if ($nc(attr)->uri == nullptr) {
		$init($XMLConstants);
		$set(attr, uri, $XMLConstants::DEFAULT_NS_PREFIX);
	}
}

void XMLStreamWriterImpl::removeDuplicateDecls() {
	$useLocalCurrentObjectStackCache();
	$var($QName, decl1, nullptr);
	$var($QName, decl2, nullptr);
	for (int32_t i = 0; i < $nc(this->fNamespaceDecls)->size(); ++i) {
		$assign(decl1, $cast($QName, $nc(this->fNamespaceDecls)->get(i)));
		if (decl1 != nullptr) {
			for (int32_t j = i + 1; j < $nc(this->fNamespaceDecls)->size(); ++j) {
				$assign(decl2, $cast($QName, $nc(this->fNamespaceDecls)->get(j)));
				bool var$0 = decl2 != nullptr && $nc(decl1->prefix)->equals(decl2->prefix);
				if (var$0 && $nc(decl1->uri)->equals(decl2->uri)) {
					$nc(this->fNamespaceDecls)->remove(j);
				}
			}
		}
	}
}

void XMLStreamWriterImpl::repairNamespaceDecl($QName* attr) {
	$useLocalCurrentObjectStackCache();
	$var($QName, decl, nullptr);
	$var($String, tmpURI, nullptr);
	for (int32_t j = 0; j < $nc(this->fNamespaceDecls)->size(); ++j) {
		$assign(decl, $cast($QName, $nc(this->fNamespaceDecls)->get(j)));
		if (decl != nullptr) {
			bool var$0 = ($nc(attr)->prefix != nullptr);
			if (var$0) {
				bool var$1 = $nc(attr->prefix)->equals(decl->prefix);
				var$0 = (var$1 && !($nc(attr->uri)->equals(decl->uri)));
			}
			if (var$0) {
				$assign(tmpURI, $nc(this->fNamespaceContext)->getNamespaceURI(attr->prefix));
				if (tmpURI != nullptr) {
					if (tmpURI->equals(attr->uri)) {
						$nc(this->fNamespaceDecls)->set(j, nullptr);
					} else {
						$set(decl, uri, attr->uri);
					}
				}
			}
		}
	}
}

bool XMLStreamWriterImpl::isDeclared($QName* attr) {
	$var($QName, decl, nullptr);
	for (int32_t n = 0; n < $nc(this->fNamespaceDecls)->size(); ++n) {
		$assign(decl, $cast($QName, $nc(this->fNamespaceDecls)->get(n)));
		bool var$0 = ($nc(attr)->prefix != nullptr);
		if (var$0) {
			bool var$1 = ($nc(attr->prefix)->equals($nc(decl)->prefix));
			var$0 = (var$1 && ($nc($nc(decl)->uri)->equals(attr->uri)));
		}
		if (var$0) {
			return true;
		}
	}
	if ($nc(attr)->uri != nullptr) {
		if ($nc(this->fNamespaceContext)->getPrefix(attr->uri) != nullptr) {
			return true;
		}
	}
	return false;
}

int32_t XMLStreamWriterImpl::size() {
	return 1;
}

bool XMLStreamWriterImpl::isEmpty() {
	return false;
}

bool XMLStreamWriterImpl::containsKey(Object$* key) {
	return $nc($of(key))->equals(XMLStreamWriterImpl::OUTPUTSTREAM_PROPERTY);
}

$Object* XMLStreamWriterImpl::get(Object$* key) {
	if ($nc($of(key))->equals(XMLStreamWriterImpl::OUTPUTSTREAM_PROPERTY)) {
		return $of(this->fOutputStream);
	}
	return $of(nullptr);
}

$Set* XMLStreamWriterImpl::entrySet() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* XMLStreamWriterImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($of(this)->getClass()->getName()), "@"_s}));
	return $concat(var$0, $($Integer::toHexString(hashCode())));
}

int32_t XMLStreamWriterImpl::hashCode() {
	return $nc($of(this->fElementStack))->hashCode();
}

bool XMLStreamWriterImpl::equals(Object$* obj) {
	return ($equals(this, obj));
}

XMLStreamWriterImpl::XMLStreamWriterImpl() {
}

void clinit$XMLStreamWriterImpl($Class* class$) {
	$assignStatic(XMLStreamWriterImpl::START_COMMENT, "<!--"_s);
	$assignStatic(XMLStreamWriterImpl::END_COMMENT, "-->"_s);
	$assignStatic(XMLStreamWriterImpl::DEFAULT_ENCODING, " encoding=\"utf-8\""_s);
	$assignStatic(XMLStreamWriterImpl::DEFAULT_XMLDECL, "<?xml version=\"1.0\" ?>"_s);
	$assignStatic(XMLStreamWriterImpl::DEFAULT_XML_VERSION, "1.0"_s);
	$assignStatic(XMLStreamWriterImpl::OPEN_END_TAG, "</"_s);
	$assignStatic(XMLStreamWriterImpl::START_CDATA, "<![CDATA["_s);
	$assignStatic(XMLStreamWriterImpl::END_CDATA, "]]>"_s);
	$assignStatic(XMLStreamWriterImpl::CLOSE_EMPTY_ELEMENT, "/>"_s);
	$assignStatic(XMLStreamWriterImpl::SPACE, " "_s);
	$assignStatic(XMLStreamWriterImpl::UTF_8, "UTF-8"_s);
	$assignStatic(XMLStreamWriterImpl::OUTPUTSTREAM_PROPERTY, "sjsxp-outputstream"_s);
}

$Class* XMLStreamWriterImpl::load$($String* name, bool initialize) {
	$loadClass(XMLStreamWriterImpl, name, initialize, &_XMLStreamWriterImpl_ClassInfo_, clinit$XMLStreamWriterImpl, allocate$XMLStreamWriterImpl);
	return class$;
}

$Class* XMLStreamWriterImpl::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com