#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>

#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings$MappingRecord.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTraceWriter.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$BoolStack.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$WritertoStringBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/TreeWalker.h>
#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>
#include <com/sun/org/apache/xml/internal/serializer/WriterToASCI.h>
#include <com/sun/org/apache/xml/internal/serializer/WriterToUTF8Buffered.h>
#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/OutputKeys.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef CDATA_CONTINUE
#undef CDATA_DELIMITER_CLOSE
#undef CDATA_DELIMITER_OPEN
#undef CDATA_SECTION_ELEMENTS
#undef COMMENT_BEGIN
#undef COMMENT_END
#undef DEFAULT_MIME_ENCODING
#undef DOCTYPE_PUBLIC
#undef DOCTYPE_SYSTEM
#undef EMPTYSTRING
#undef ENCODING
#undef ER_ENCODING_NOT_SUPPORTED
#undef ER_INVALID_UTF16_SURROGATE
#undef ER_OIERROR
#undef EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS
#undef INDENT
#undef MEDIA_TYPE
#undef METHOD
#undef OMIT_XML_DECLARATION
#undef STANDALONE
#undef S_IS_STANDALONE
#undef S_JDK_PROPERTIES_NS
#undef S_KEY_ENTITIES
#undef S_KEY_INDENT_AMOUNT
#undef S_KEY_LINE_SEPARATOR
#undef S_LINEFEED
#undef VERSION
#undef XMLNS_URI
#undef XMLVERSION10
#undef XMLVERSION11

using $AttributesImplSerializer = ::com::sun::org::apache::xml::internal::serializer::AttributesImplSerializer;
using $CharInfo = ::com::sun::org::apache::xml::internal::serializer::CharInfo;
using $ElemContext = ::com::sun::org::apache::xml::internal::serializer::ElemContext;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $NamespaceMappings$MappingRecord = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings$MappingRecord;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $SerializerTrace = ::com::sun::org::apache::xml::internal::serializer::SerializerTrace;
using $SerializerTraceWriter = ::com::sun::org::apache::xml::internal::serializer::SerializerTraceWriter;
using $ToStream$BoolStack = ::com::sun::org::apache::xml::internal::serializer::ToStream$BoolStack;
using $ToStream$CharacterBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$CharacterBuffer;
using $ToStream$WritertoStringBuffer = ::com::sun::org::apache::xml::internal::serializer::ToStream$WritertoStringBuffer;
using $TreeWalker = ::com::sun::org::apache::xml::internal::serializer::TreeWalker;
using $WriterChain = ::com::sun::org::apache::xml::internal::serializer::WriterChain;
using $WriterToASCI = ::com::sun::org::apache::xml::internal::serializer::WriterToASCI;
using $WriterToUTF8Buffered = ::com::sun::org::apache::xml::internal::serializer::WriterToUTF8Buffered;
using $DOMConstants = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMConstants;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::serializer::utils::WrappedRuntimeException;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $Node = ::org::w3c::dom::Node;
using $Attributes = ::org::xml::sax::Attributes;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToStream_FieldInfo_[] = {
	{"COMMENT_BEGIN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToStream, COMMENT_BEGIN)},
	{"COMMENT_END", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToStream, COMMENT_END)},
	{"m_disableOutputEscapingStates", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$BoolStack;", nullptr, $PROTECTED, $field(ToStream, m_disableOutputEscapingStates)},
	{"m_encodingInfo", "Lcom/sun/org/apache/xml/internal/serializer/EncodingInfo;", nullptr, 0, $field(ToStream, m_encodingInfo)},
	{"m_canConvertMeth", "Ljava/lang/reflect/Method;", nullptr, 0, $field(ToStream, m_canConvertMeth)},
	{"m_triedToGetConverter", "Z", nullptr, 0, $field(ToStream, m_triedToGetConverter)},
	{"m_charToByteConverter", "Ljava/lang/Object;", nullptr, 0, $field(ToStream, m_charToByteConverter)},
	{"m_charactersBuffer", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer;", nullptr, $PROTECTED, $field(ToStream, m_charactersBuffer)},
	{"m_childNodeNumStack", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Integer;>;", $PROTECTED, $field(ToStream, m_childNodeNumStack)},
	{"m_childNodeNum", "I", nullptr, $PROTECTED, $field(ToStream, m_childNodeNum)},
	{"m_preserveSpaces", "Lcom/sun/org/apache/xml/internal/serializer/ToStream$BoolStack;", nullptr, $PROTECTED, $field(ToStream, m_preserveSpaces)},
	{"m_ispreserveSpace", "Z", nullptr, $PROTECTED, $field(ToStream, m_ispreserveSpace)},
	{"m_isprevtext", "Z", nullptr, $PROTECTED, $field(ToStream, m_isprevtext)},
	{"m_maxCharacter", "I", nullptr, $PROTECTED, $field(ToStream, m_maxCharacter)},
	{"m_lineSep", "[C", nullptr, $PROTECTED, $field(ToStream, m_lineSep)},
	{"m_lineSepUse", "Z", nullptr, $PROTECTED, $field(ToStream, m_lineSepUse)},
	{"m_lineSepLen", "I", nullptr, $PROTECTED, $field(ToStream, m_lineSepLen)},
	{"m_charInfo", "Lcom/sun/org/apache/xml/internal/serializer/CharInfo;", nullptr, $PROTECTED, $field(ToStream, m_charInfo)},
	{"m_shouldFlush", "Z", nullptr, 0, $field(ToStream, m_shouldFlush)},
	{"m_spaceBeforeClose", "Z", nullptr, $PROTECTED, $field(ToStream, m_spaceBeforeClose)},
	{"m_startNewLine", "Z", nullptr, 0, $field(ToStream, m_startNewLine)},
	{"m_inDoctype", "Z", nullptr, $PROTECTED, $field(ToStream, m_inDoctype)},
	{"m_isUTF8", "Z", nullptr, 0, $field(ToStream, m_isUTF8)},
	{"m_cdataStartCalled", "Z", nullptr, $PROTECTED, $field(ToStream, m_cdataStartCalled)},
	{"m_expandDTDEntities", "Z", nullptr, $PRIVATE, $field(ToStream, m_expandDTDEntities)},
	{"m_highSurrogate", "C", nullptr, $PRIVATE, $field(ToStream, m_highSurrogate)},
	{"m_escaping", "Z", nullptr, $PRIVATE, $field(ToStream, m_escaping)},
	{"m_outputStream", "Ljava/io/OutputStream;", nullptr, 0, $field(ToStream, m_outputStream)},
	{"m_writer_set_by_user", "Z", nullptr, $PRIVATE, $field(ToStream, m_writer_set_by_user)},
	{}
};

$MethodInfo _ToStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToStream, init$, void)},
	{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(ToStream, init$, void, $ErrorListener*)},
	{"DTDprolog", "()V", nullptr, $PRIVATE, $method(ToStream, DTDprolog, void), "org.xml.sax.SAXException,java.io.IOException"},
	{"accumDefaultEntity", "(Ljava/io/Writer;CI[CIZZ)I", nullptr, $PROTECTED, $virtualMethod(ToStream, accumDefaultEntity, int32_t, $Writer*, char16_t, int32_t, $chars*, int32_t, bool, bool), "java.io.IOException"},
	{"accumDefaultEscape", "(Ljava/io/Writer;CI[CIZZ)I", nullptr, $PROTECTED, $virtualMethod(ToStream, accumDefaultEscape, int32_t, $Writer*, char16_t, int32_t, $chars*, int32_t, bool, bool), "java.io.IOException,org.xml.sax.SAXException"},
	{"addAttributeAlways", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToStream, addAttributeAlways, bool, $String*, $String*, $String*, $String*, $String*, bool)},
	{"addCdataSectionElement", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(ToStream, addCdataSectionElement, void, $String*, $List*)},
	{"addCdataSectionElements", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, addCdataSectionElements, void, $String*)},
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"cdata", "([CII)V", nullptr, $PROTECTED, $virtualMethod(ToStream, cdata, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, characters, void, $String*), "org.xml.sax.SAXException"},
	{"charactersRaw", "([CII)V", nullptr, $PROTECTED, $virtualMethod(ToStream, charactersRaw, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"closeCDATA", "()V", nullptr, $PROTECTED, $virtualMethod(ToStream, closeCDATA, void), "org.xml.sax.SAXException"},
	{"closeStartTag", "()V", nullptr, $PROTECTED, $virtualMethod(ToStream, closeStartTag, void), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"doAddAttributeAlways", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PRIVATE, $method(ToStream, doAddAttributeAlways, bool, $String*, $String*, $String*, $String*, $String*, bool)},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, endDTD, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endNonEscaping", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, endNonEscaping, void), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"ensureAttributesNamespaceIsDeclared", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(ToStream, ensureAttributesNamespaceIsDeclared, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"ensurePrefixIsDeclared", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ToStream, ensurePrefixIsDeclared, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"escapingNotNeeded", "(C)Z", nullptr, $PROTECTED, $virtualMethod(ToStream, escapingNotNeeded, bool, char16_t)},
	{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"firePseudoAttributes", "()V", nullptr, $PROTECTED, $virtualMethod(ToStream, firePseudoAttributes, void)},
	{"flushCharactersBuffer", "(Z)V", nullptr, $PROTECTED | $FINAL, $method(ToStream, flushCharactersBuffer, void, bool), "org.xml.sax.SAXException"},
	{"flushPending", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, flushPending, void), "org.xml.sax.SAXException"},
	{"flushWriter", "()V", nullptr, $PROTECTED | $FINAL, $method(ToStream, flushWriter, void), "org.xml.sax.SAXException"},
	{"getIndent", "()Z", nullptr, $PUBLIC, $virtualMethod(ToStream, getIndent, bool)},
	{"getIndentAmount", "()I", nullptr, $PUBLIC, $virtualMethod(ToStream, getIndentAmount, int32_t)},
	{"getOutputFormat", "()Ljava/util/Properties;", nullptr, $PUBLIC, $virtualMethod(ToStream, getOutputFormat, $Properties*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(ToStream, getOutputStream, $OutputStream*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(ToStream, getWriter, $Writer*)},
	{"handleEscaping", "(Ljava/io/Writer;C[CII)I", nullptr, $PRIVATE, $method(ToStream, handleEscaping, int32_t, $Writer*, char16_t, $chars*, int32_t, int32_t), "java.io.IOException,org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToStream, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"indent", "(I)V", nullptr, $PROTECTED, $virtualMethod(ToStream, indent, void, int32_t), "java.io.IOException"},
	{"indent", "()V", nullptr, $PROTECTED, $virtualMethod(ToStream, indent, void), "java.io.IOException"},
	{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"isCharacterInC0orC1Range", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ToStream, isCharacterInC0orC1Range, bool, char16_t)},
	{"isEscapingDisabled", "()Z", nullptr, $PRIVATE, $method(ToStream, isEscapingDisabled, bool)},
	{"isNELorLSEPCharacter", "(C)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ToStream, isNELorLSEPCharacter, bool, char16_t)},
	{"isUTF16Surrogate", "(C)Z", nullptr, $STATIC | $FINAL, $staticMethod(ToStream, isUTF16Surrogate, bool, char16_t)},
	{"notationDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, notationDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"outputCharacters", "([CII)V", nullptr, $PRIVATE, $method(ToStream, outputCharacters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"outputDocTypeDecl", "(Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(ToStream, outputDocTypeDecl, void, $String*, bool), "org.xml.sax.SAXException"},
	{"outputEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ToStream, outputEntityDecl, void, $String*, $String*), "java.io.IOException"},
	{"outputEntityReference", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ToStream, outputEntityReference, void, $String*), "org.xml.sax.SAXException"},
	{"outputLineSep", "()V", nullptr, $PROTECTED | $FINAL, $method(ToStream, outputLineSep, void), "java.io.IOException"},
	{"printSpace", "(I)V", nullptr, $PRIVATE, $method(ToStream, printSpace, void, int32_t), "java.io.IOException"},
	{"processAttributes", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $virtualMethod(ToStream, processAttributes, void, $Writer*, int32_t), "java.io.IOException,org.xml.sax.SAXException"},
	{"processDirty", "([CIICIZ)I", nullptr, $PRIVATE, $method(ToStream, processDirty, int32_t, $chars*, int32_t, int32_t, char16_t, int32_t, bool), "java.io.IOException,org.xml.sax.SAXException"},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToStream, reset, bool)},
	{"resetToStream", "()V", nullptr, $PRIVATE, $method(ToStream, resetToStream, void)},
	{"serialize", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, serialize, void, $Node*), "java.io.IOException"},
	{"setCdataSectionElements", "(Ljava/lang/String;Ljava/util/Properties;)V", nullptr, $PRIVATE, $method(ToStream, setCdataSectionElements, void, $String*, $Properties*)},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $virtualMethod(ToStream, setCdataSectionElements, void, $List*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setContentHandler, void, $ContentHandler*)},
	{"setDTDEntityExpansion", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setDTDEntityExpansion, void, bool)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setEncoding, void, $String*)},
	{"setEscaping", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ToStream, setEscaping, bool, bool)},
	{"setIndentAmount", "(I)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setIndentAmount, void, int32_t)},
	{"setLineSepUse", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ToStream, setLineSepUse, bool, bool)},
	{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setOutputFormat, void, $Properties*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setOutputStream, void, $OutputStream*)},
	{"setOutputStreamInternal", "(Ljava/io/OutputStream;Z)V", nullptr, $PRIVATE, $method(ToStream, setOutputStreamInternal, void, $OutputStream*, bool)},
	{"setProp", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(ToStream, setProp, void, $String*, $String*, bool)},
	{"setTransformer", "(Ljavax/xml/transform/Transformer;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setTransformer, void, $Transformer*)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, setWriter, void, $Writer*)},
	{"setWriterInternal", "(Ljava/io/Writer;Z)V", nullptr, $PRIVATE, $method(ToStream, setWriterInternal, void, $Writer*, bool)},
	{"shouldFormatOutput", "()Z", nullptr, $PROTECTED, $virtualMethod(ToStream, shouldFormatOutput, bool)},
	{"shouldIndent", "()Z", nullptr, $PROTECTED, $virtualMethod(ToStream, shouldIndent, bool)},
	{"shouldIndentForText", "()Z", nullptr, $PROTECTED, $virtualMethod(ToStream, shouldIndentForText, bool)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, startCDATA, void), "org.xml.sax.SAXException"},
	{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startElement, void, $String*), "org.xml.sax.SAXException"},
	{"startEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startNonEscaping", "()V", nullptr, $PUBLIC, $virtualMethod(ToStream, startNonEscaping, void), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToStream, startPrefixMapping, bool, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"throwIOE", "(CC)V", nullptr, $PRIVATE, $method(ToStream, throwIOE, void, char16_t, char16_t), "java.io.IOException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, unparsedEntityDecl, void, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"writeAttrString", "(Ljava/io/Writer;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToStream, writeAttrString, void, $Writer*, $String*, $String*), "java.io.IOException,org.xml.sax.SAXException"},
	{"writeCharRef", "(Ljava/io/Writer;C)V", nullptr, $PRIVATE, $method(ToStream, writeCharRef, void, $Writer*, char16_t), "java.io.IOException,org.xml.sax.SAXException"},
	{"writeCharRef", "(Ljava/io/Writer;CC)I", nullptr, $PRIVATE, $method(ToStream, writeCharRef, int32_t, $Writer*, char16_t, char16_t), "java.io.IOException,org.xml.sax.SAXException"},
	{"writeNormalizedChars", "([CIIZZ)V", nullptr, 0, $virtualMethod(ToStream, writeNormalizedChars, void, $chars*, int32_t, int32_t, bool, bool), "java.io.IOException,org.xml.sax.SAXException"},
	{"writeUTF16Surrogate", "(C[CII)I", nullptr, $PROTECTED, $virtualMethod(ToStream, writeUTF16Surrogate, int32_t, char16_t, $chars*, int32_t, int32_t), "java.io.IOException,org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _ToStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "CharacterBuffer", $PRIVATE},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$BoolStack", "com.sun.org.apache.xml.internal.serializer.ToStream", "BoolStack", $STATIC | $FINAL},
	{"com.sun.org.apache.xml.internal.serializer.ToStream$WritertoStringBuffer", "com.sun.org.apache.xml.internal.serializer.ToStream", "WritertoStringBuffer", $PRIVATE},
	{}
};

$ClassInfo _ToStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.ToStream",
	"com.sun.org.apache.xml.internal.serializer.SerializerBase",
	nullptr,
	_ToStream_FieldInfo_,
	_ToStream_MethodInfo_,
	nullptr,
	nullptr,
	_ToStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer,com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$GenericCharacters,com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$3,com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$2,com.sun.org.apache.xml.internal.serializer.ToStream$CharacterBuffer$1,com.sun.org.apache.xml.internal.serializer.ToStream$BoolStack,com.sun.org.apache.xml.internal.serializer.ToStream$WritertoStringBuffer"
};

$Object* allocate$ToStream($Class* clazz) {
	return $of($alloc(ToStream));
}

$String* ToStream::COMMENT_BEGIN = nullptr;
$String* ToStream::COMMENT_END = nullptr;

void ToStream::init$() {
	ToStream::init$(nullptr);
}

void ToStream::init$($ErrorListener* l) {
	$SerializerBase::init$();
	$set(this, m_disableOutputEscapingStates, $new($ToStream$BoolStack));
	$set(this, m_encodingInfo, $new($EncodingInfo, nullptr, nullptr));
	this->m_triedToGetConverter = false;
	$set(this, m_charToByteConverter, nullptr);
	$set(this, m_charactersBuffer, $new($ToStream$CharacterBuffer, this));
	$set(this, m_childNodeNumStack, $new($ArrayList));
	this->m_childNodeNum = 0;
	$set(this, m_preserveSpaces, $new($ToStream$BoolStack));
	this->m_ispreserveSpace = false;
	this->m_isprevtext = false;
	this->m_maxCharacter = $Encodings::getLastPrintable();
	$set(this, m_lineSep, $nc($($System::lineSeparator()))->toCharArray());
	this->m_lineSepUse = true;
	this->m_lineSepLen = $nc(this->m_lineSep)->length;
	this->m_shouldFlush = true;
	this->m_spaceBeforeClose = false;
	this->m_inDoctype = false;
	this->m_isUTF8 = false;
	this->m_cdataStartCalled = false;
	this->m_expandDTDEntities = true;
	this->m_highSurrogate = (char16_t)0;
	this->m_escaping = true;
	$set(this, m_errListener, l);
}

void ToStream::closeCDATA() {
	try {
		$init($SerializerConstants);
		$nc(this->m_writer)->write($SerializerConstants::CDATA_DELIMITER_CLOSE);
		this->m_cdataTagOpen = false;
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::serialize($Node* node) {
	try {
		$var($TreeWalker, walker, $new($TreeWalker, this));
		walker->traverse(node);
	} catch ($SAXException& se) {
		$throwNew($WrappedRuntimeException, se);
	}
}

bool ToStream::isUTF16Surrogate(char16_t c) {
	$init(ToStream);
	return ((int32_t)(c & (uint32_t)0x0000FC00)) == 0x0000D800;
}

void ToStream::flushWriter() {
	$var($Writer, writer, this->m_writer);
	if (nullptr != writer) {
		try {
			if ($instanceOf($WriterToUTF8Buffered, writer)) {
				if (this->m_shouldFlush) {
					$nc(($cast($WriterToUTF8Buffered, writer)))->flush();
				} else {
					$nc(($cast($WriterToUTF8Buffered, writer)))->flushBuffer();
				}
			}
			if ($instanceOf($WriterToASCI, writer)) {
				if (this->m_shouldFlush) {
					writer->flush();
				}
			} else {
				writer->flush();
			}
		} catch ($IOException& ioe) {
			$throwNew($SAXException, static_cast<$Exception*>(ioe));
		}
	}
}

$OutputStream* ToStream::getOutputStream() {
	return this->m_outputStream;
}

void ToStream::elementDecl($String* name, $String* model) {
	if (this->m_inExternalDTD) {
		return;
	}
	try {
		$var($Writer, writer, this->m_writer);
		DTDprolog();
		$nc(writer)->write("<!ELEMENT "_s);
		writer->write(name);
		writer->write((int32_t)u' ');
		writer->write(model);
		writer->write((int32_t)u'>');
		writer->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::internalEntityDecl($String* name, $String* value) {
	if (this->m_inExternalDTD) {
		return;
	}
	try {
		DTDprolog();
		outputEntityDecl(name, value);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::outputEntityDecl($String* name, $String* value) {
	$var($Writer, writer, this->m_writer);
	$nc(writer)->write("<!ENTITY "_s);
	writer->write(name);
	writer->write(" \""_s);
	writer->write(value);
	writer->write("\">"_s);
	writer->write(this->m_lineSep, 0, this->m_lineSepLen);
}

void ToStream::outputLineSep() {
	$nc(this->m_writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
}

void ToStream::setProp($String* name, $String* val$renamed, bool defaultVal) {
	$useLocalCurrentObjectStackCache();
	$var($String, val, val$renamed);
	if (val != nullptr) {
		char16_t first = getFirstCharLocName(name);
		{
			$var($String, newEncoding, nullptr)
			switch (first) {
			case u'c':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::CDATA_SECTION_ELEMENTS)->equals(name)) {
						addCdataSectionElements(val);
					}
					break;
				}
			case u'd':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::DOCTYPE_SYSTEM)->equals(name)) {
						$set(this, m_doctypeSystem, val);
					} else {
						if ($nc($OutputKeys::DOCTYPE_PUBLIC)->equals(name)) {
							$set(this, m_doctypePublic, val);
							if (val->startsWith("-//W3C//DTD XHTML"_s)) {
								this->m_spaceBeforeClose = true;
							}
						}
					}
					break;
				}
			case u'e':
				{
					$assign(newEncoding, val);
					$init($OutputKeys);
					if ($nc($OutputKeys::ENCODING)->equals(name)) {
						$var($String, possible_encoding, $Encodings::getMimeEncoding(val));
						if (possible_encoding != nullptr) {
							$SerializerBase::setProp("mime-name"_s, possible_encoding, defaultVal);
						}
						$var($String, oldExplicitEncoding, getOutputPropertyNonDefault($OutputKeys::ENCODING));
						$var($String, oldDefaultEncoding, getOutputPropertyDefault($OutputKeys::ENCODING));
						bool var$0 = (defaultVal && (oldDefaultEncoding == nullptr || !$nc(oldDefaultEncoding)->equalsIgnoreCase(newEncoding)));
						if (var$0 || (!defaultVal && (oldExplicitEncoding == nullptr || !$nc(oldExplicitEncoding)->equalsIgnoreCase(newEncoding)))) {
							$var($EncodingInfo, encodingInfo, $Encodings::getEncodingInfo(newEncoding));
							if ($nc(encodingInfo)->name == nullptr) {
								$init($Utils);
								$init($MsgKey);
								$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ENCODING_NOT_SUPPORTED, $$new($ObjectArray, {$of(newEncoding)})));
								$var($String, msg2, $str({"Warning: encoding \""_s, newEncoding, "\" not supported, using "_s, $Encodings::DEFAULT_MIME_ENCODING}));
								try {
									if (this->m_errListener != nullptr) {
										$nc(this->m_errListener)->warning($$new($TransformerException, msg, this->m_sourceLocator));
										$nc(this->m_errListener)->warning($$new($TransformerException, msg2, this->m_sourceLocator));
									}
								} catch ($Exception& e) {
								}
								$assign(newEncoding, $Encodings::DEFAULT_MIME_ENCODING);
								$assign(val, $Encodings::DEFAULT_MIME_ENCODING);
								$assign(encodingInfo, $Encodings::getEncodingInfo(newEncoding));
							}
							if (defaultVal == false || oldExplicitEncoding == nullptr) {
								$set(this, m_encodingInfo, encodingInfo);
								if (newEncoding != nullptr) {
									this->m_isUTF8 = newEncoding->equals($Encodings::DEFAULT_MIME_ENCODING);
								}
								$var($OutputStream, os, getOutputStream());
								if (os != nullptr) {
									$var($Writer, w, getWriter());
									$var($String, oldEncoding, getOutputProperty($OutputKeys::ENCODING));
									if ((w == nullptr || !this->m_writer_set_by_user) && !$nc(newEncoding)->equalsIgnoreCase(oldEncoding)) {
										$SerializerBase::setProp(name, val, defaultVal);
										setOutputStreamInternal(os, false);
									}
								}
							}
						}
					}
					break;
				}
			case u'i':
				{
					$init($OutputPropertiesFactory);
					if ($nc($OutputPropertiesFactory::S_KEY_INDENT_AMOUNT)->equals(name)) {
						setIndentAmount($Integer::parseInt(val));
					} else {
						$init($OutputKeys);
						if ($nc($OutputKeys::INDENT)->equals(name)) {
							this->m_doIndent = val->endsWith("yes"_s);
						} else {
							$init($DOMConstants);
							$init($JdkConstants);
							if ($nc(($$str({$DOMConstants::S_JDK_PROPERTIES_NS, $JdkConstants::S_IS_STANDALONE})))->equals(name)) {
								this->m_isStandalone = val->endsWith("yes"_s);
							}
						}
					}
					break;
				}
			case u'l':
				{
					$init($OutputPropertiesFactory);
					if ($nc($OutputPropertiesFactory::S_KEY_LINE_SEPARATOR)->equals(name)) {
						$set(this, m_lineSep, val->toCharArray());
						this->m_lineSepLen = $nc(this->m_lineSep)->length;
					}
					break;
				}
			case u'm':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::MEDIA_TYPE)->equals(name)) {
						$set(this, m_mediatype, val);
					}
					break;
				}
			case u'o':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::OMIT_XML_DECLARATION)->equals(name)) {
						bool b = val->endsWith("yes"_s) ? true : false;
						this->m_shouldNotWriteXMLHeader = b;
					}
					break;
				}
			case u's':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::STANDALONE)->equals(name)) {
						if (defaultVal) {
							setStandaloneInternal(val);
						} else {
							this->m_standaloneWasSpecified = true;
							setStandaloneInternal(val);
						}
					}
					break;
				}
			case u'v':
				{
					$init($OutputKeys);
					if ($nc($OutputKeys::VERSION)->equals(name)) {
						$set(this, m_version, val);
					}
					break;
				}
			default:
				{
					break;
				}
			}
		}
		$SerializerBase::setProp(name, val, defaultVal);
	}
}

void ToStream::setOutputFormat($Properties* format) {
	$useLocalCurrentObjectStackCache();
	bool shouldFlush = this->m_shouldFlush;
	if (format != nullptr) {
		$var($Enumeration, propNames, nullptr);
		$assign(propNames, format->propertyNames());
		while ($nc(propNames)->hasMoreElements()) {
			$var($String, key, $cast($String, propNames->nextElement()));
			$var($String, value, format->getProperty(key));
			$var($String, explicitValue, $cast($String, format->get(key)));
			if (explicitValue == nullptr && value != nullptr) {
				this->setOutputPropertyDefault(key, value);
			}
			if (explicitValue != nullptr) {
				this->setOutputProperty(key, explicitValue);
			}
		}
	}
	$init($OutputPropertiesFactory);
	$var($String, entitiesFileName, $cast($String, $nc(format)->get($OutputPropertiesFactory::S_KEY_ENTITIES)));
	if (nullptr != entitiesFileName) {
		$init($OutputKeys);
		$var($String, method, $cast($String, format->get($OutputKeys::METHOD)));
		$set(this, m_charInfo, $CharInfo::getCharInfo(entitiesFileName, method));
	}
	this->m_shouldFlush = shouldFlush;
}

$Properties* ToStream::getOutputFormat() {
	$useLocalCurrentObjectStackCache();
	$var($Properties, def, $new($Properties));
	{
		$var($Set, s, getOutputPropDefaultKeys());
		{
			$var($Iterator, i$, $nc(s)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					$var($String, val, getOutputPropertyDefault(key));
					def->put(key, val);
				}
			}
		}
	}
	$var($Properties, props, $new($Properties, def));
	{
		$var($Set, s, getOutputPropKeys());
		{
			$var($Iterator, i$, $nc(s)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					$var($String, val, getOutputPropertyNonDefault(key));
					if (val != nullptr) {
						props->put(key, val);
					}
				}
			}
		}
	}
	return props;
}

void ToStream::setWriter($Writer* writer) {
	setWriterInternal(writer, true);
}

void ToStream::setWriterInternal($Writer* writer, bool setByUser) {
	this->m_writer_set_by_user = setByUser;
	$set(this, m_writer, writer);
	if (this->m_tracer != nullptr) {
		bool noTracerYet = true;
		$var($Writer, w2, this->m_writer);
		while ($instanceOf($WriterChain, w2)) {
			if ($instanceOf($SerializerTraceWriter, w2)) {
				noTracerYet = false;
				break;
			}
			$assign(w2, $nc(($cast($WriterChain, w2)))->getWriter());
		}
		if (noTracerYet) {
			$set(this, m_writer, $new($SerializerTraceWriter, this->m_writer, this->m_tracer));
		}
	}
}

bool ToStream::setLineSepUse(bool use_sytem_line_break) {
	bool oldValue = this->m_lineSepUse;
	this->m_lineSepUse = use_sytem_line_break;
	return oldValue;
}

void ToStream::setOutputStream($OutputStream* output) {
	setOutputStreamInternal(output, true);
}

void ToStream::setOutputStreamInternal($OutputStream* output, bool setByUser) {
	$useLocalCurrentObjectStackCache();
	$set(this, m_outputStream, output);
	$init($OutputKeys);
	$var($String, encoding, getOutputProperty($OutputKeys::ENCODING));
	$init($Encodings);
	if ($nc($Encodings::DEFAULT_MIME_ENCODING)->equalsIgnoreCase(encoding)) {
		try {
			setWriterInternal($$new($WriterToUTF8Buffered, output), false);
		} catch ($UnsupportedEncodingException& e) {
			e->printStackTrace();
		}
	} else {
		bool var$3 = "WINDOWS-1250"_s->equals(encoding);
		bool var$2 = var$3 || "US-ASCII"_s->equals(encoding);
		if (var$2 || "ASCII"_s->equals(encoding)) {
			setWriterInternal($$new($WriterToASCI, output), false);
		} else if (encoding != nullptr) {
			$var($Writer, osw, nullptr);
			try {
				$assign(osw, $Encodings::getWriter(output, encoding));
			} catch ($UnsupportedEncodingException& uee) {
				$assign(osw, nullptr);
			}
			if (osw == nullptr) {
				$nc($System::out)->println($$str({"Warning: encoding \""_s, encoding, "\" not supported, using "_s, $Encodings::DEFAULT_MIME_ENCODING}));
				$assign(encoding, $Encodings::DEFAULT_MIME_ENCODING);
				setEncoding(encoding);
				try {
					$assign(osw, $Encodings::getWriter(output, encoding));
				} catch ($UnsupportedEncodingException& e) {
					e->printStackTrace();
				}
			}
			setWriterInternal(osw, false);
		} else {
			$var($Writer, osw, $new($OutputStreamWriter, output));
			setWriterInternal(osw, false);
		}
	}
}

bool ToStream::setEscaping(bool escape) {
	bool temp = this->m_escaping;
	this->m_escaping = escape;
	return temp;
}

void ToStream::indent(int32_t depth) {
	if (this->m_startNewLine) {
		outputLineSep();
	}
	printSpace(depth * this->m_indentAmount);
}

void ToStream::indent() {
	indent($nc(this->m_elemContext)->m_currentElemDepth);
}

void ToStream::printSpace(int32_t n) {
	$var($Writer, writer, this->m_writer);
	for (int32_t i = 0; i < n; ++i) {
		$nc(writer)->write((int32_t)u' ');
	}
}

void ToStream::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
	if (this->m_inExternalDTD) {
		return;
	}
	try {
		$var($Writer, writer, this->m_writer);
		DTDprolog();
		$nc(writer)->write("<!ATTLIST "_s);
		writer->write(eName);
		writer->write((int32_t)u' ');
		writer->write(aName);
		writer->write((int32_t)u' ');
		writer->write(type);
		if (valueDefault != nullptr) {
			writer->write((int32_t)u' ');
			writer->write(valueDefault);
		}
		writer->write((int32_t)u'>');
		writer->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

$Writer* ToStream::getWriter() {
	return this->m_writer;
}

void ToStream::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
	try {
		DTDprolog();
		$nc(this->m_writer)->write("<!ENTITY "_s);
		$nc(this->m_writer)->write(name);
		if (publicId != nullptr) {
			$nc(this->m_writer)->write(" PUBLIC \""_s);
			$nc(this->m_writer)->write(publicId);
		} else {
			$nc(this->m_writer)->write(" SYSTEM \""_s);
			$nc(this->m_writer)->write(systemId);
		}
		$nc(this->m_writer)->write("\" >"_s);
		$nc(this->m_writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

bool ToStream::escapingNotNeeded(char16_t ch) {
	bool ret = false;
	if (ch < 127) {
		if (ch >= 32 || (10 == ch || 13 == ch || 9 == ch)) {
			ret = true;
		} else {
			ret = false;
		}
	} else {
		ret = $nc(this->m_encodingInfo)->isInEncoding(ch);
	}
	return ret;
}

int32_t ToStream::writeUTF16Surrogate(char16_t c, $chars* ch, int32_t i, int32_t end) {
	$useLocalCurrentObjectStackCache();
	int32_t status = -1;
	if (i + 1 >= end) {
		this->m_highSurrogate = c;
		return status;
	}
	char16_t high = 0;
	char16_t low = 0;
	if (this->m_highSurrogate == 0) {
		high = c;
		low = $nc(ch)->get(i + 1);
		status = 0;
	} else {
		high = this->m_highSurrogate;
		low = c;
		this->m_highSurrogate = (char16_t)0;
	}
	if (!$Encodings::isLowUTF16Surrogate(low)) {
		throwIOE(high, low);
	}
	$var($Writer, writer, this->m_writer);
	if ($nc(this->m_encodingInfo)->isInEncoding(high, low)) {
		$nc(writer)->write($$new($chars, {
			high,
			low
		}), 0, 2);
	} else {
		$var($String, encoding, getEncoding());
		if (encoding != nullptr) {
			status = writeCharRef(writer, high, low);
		} else {
			$nc(writer)->write($$new($chars, {
				high,
				low
			}), 0, 2);
		}
	}
	return status;
}

int32_t ToStream::accumDefaultEntity($Writer* writer, char16_t ch, int32_t i, $chars* chars, int32_t len, bool fromTextNode, bool escLF) {
	if (!escLF && $CharInfo::S_LINEFEED == ch) {
		$nc(writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} else {
		bool var$1 = (fromTextNode && $nc(this->m_charInfo)->isSpecialTextChar(ch));
		if (var$1 || (!fromTextNode && $nc(this->m_charInfo)->isSpecialAttrChar(ch))) {
			$var($String, outputStringForChar, $nc(this->m_charInfo)->getOutputStringForChar(ch));
			if (nullptr != outputStringForChar) {
				$nc(writer)->write(outputStringForChar);
			} else {
				return i;
			}
		} else {
			return i;
		}
	}
	return i + 1;
}

void ToStream::writeNormalizedChars($chars* ch, int32_t start, int32_t length, bool isCData, bool useSystemLineSeparator) {
	$var($Writer, writer, this->m_writer);
	int32_t end = start + length;
	for (int32_t i = start; i < end; ++i) {
		char16_t c = $nc(ch)->get(i);
		if ($CharInfo::S_LINEFEED == c && useSystemLineSeparator) {
			$nc(writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
		} else if (isCData && (!escapingNotNeeded(c))) {
			i = handleEscaping(writer, c, ch, i, end);
		} else if (isCData && ((i < (end - 2)) && (u']' == c) && (u']' == ch->get(i + 1)) && (u'>' == ch->get(i + 2)))) {
			$init($SerializerConstants);
			$nc(writer)->write($SerializerConstants::CDATA_CONTINUE);
			i += 2;
		} else if (escapingNotNeeded(c)) {
			if (isCData && !this->m_cdataTagOpen) {
				$init($SerializerConstants);
				$nc(writer)->write($SerializerConstants::CDATA_DELIMITER_OPEN);
				this->m_cdataTagOpen = true;
			}
			$nc(writer)->write((int32_t)c);
		} else {
			i = handleEscaping(writer, c, ch, i, end);
		}
	}
}

int32_t ToStream::handleEscaping($Writer* writer, char16_t c, $chars* ch, int32_t i, int32_t end) {
	bool var$0 = $Encodings::isHighUTF16Surrogate(c);
	if (var$0 || $Encodings::isLowUTF16Surrogate(c)) {
		if (writeUTF16Surrogate(c, ch, i, end) >= 0) {
			if ($Encodings::isHighUTF16Surrogate(c)) {
				++i;
			}
		}
	} else {
		writeCharRef(writer, c);
	}
	return i;
}

void ToStream::endNonEscaping() {
	$nc(this->m_disableOutputEscapingStates)->pop();
}

void ToStream::startNonEscaping() {
	$nc(this->m_disableOutputEscapingStates)->push(true);
}

void ToStream::cdata($chars* ch, int32_t start, int32_t length) {
	try {
		int32_t old_start = start;
		if ($nc(this->m_elemContext)->m_startTagOpen) {
			closeStartTag();
			$nc(this->m_elemContext)->m_startTagOpen = false;
		}
		if (!this->m_cdataTagOpen && shouldIndentForText()) {
			indent();
		}
		bool writeCDataBrackets = ((length >= 1) && escapingNotNeeded($nc(ch)->get(start)));
		if (writeCDataBrackets && !this->m_cdataTagOpen) {
			$init($SerializerConstants);
			$nc(this->m_writer)->write($SerializerConstants::CDATA_DELIMITER_OPEN);
			this->m_cdataTagOpen = true;
		}
		if (isEscapingDisabled()) {
			charactersRaw(ch, start, length);
		} else {
			writeNormalizedChars(ch, start, length, true, this->m_lineSepUse);
		}
		if (writeCDataBrackets) {
			if ($nc(ch)->get(start + length - 1) == u']') {
				closeCDATA();
			}
		}
		this->m_isprevtext = true;
		if (this->m_tracer != nullptr) {
			$SerializerBase::fireCDATAEvent(ch, old_start, length);
		}
	} catch ($IOException& ioe) {
		$init($Utils);
		$init($MsgKey);
		$throwNew($SAXException, $($nc($Utils::messages)->createMessage($MsgKey::ER_OIERROR, nullptr)), ioe);
	}
}

bool ToStream::isEscapingDisabled() {
	return $nc(this->m_disableOutputEscapingStates)->peekOrFalse();
}

void ToStream::charactersRaw($chars* ch, int32_t start, int32_t length) {
	if (isInEntityRef()) {
		return;
	}
	try {
		if ($nc(this->m_elemContext)->m_startTagOpen) {
			closeStartTag();
			$nc(this->m_elemContext)->m_startTagOpen = false;
		}
		$nc(this->m_writer)->write(ch, start, length);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::characters($chars* chars, int32_t start, int32_t length) {
	if (length == 0 || (isInEntityRef() && !this->m_expandDTDEntities)) {
		return;
	}
	bool shouldNotFormat = !shouldFormatOutput();
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	} else if (this->m_needToCallStartDocument) {
		startDocumentInternal();
	}
	if (this->m_cdataStartCalled || $nc(this->m_elemContext)->m_isCdataSection) {
		cdata(chars, start, length);
		return;
	}
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	if ($nc(this->m_disableOutputEscapingStates)->peekOrFalse() || (!this->m_escaping)) {
		if (shouldNotFormat) {
			charactersRaw(chars, start, length);
			this->m_isprevtext = true;
		} else {
			$nc(this->m_charactersBuffer)->addRawText(chars, start, length);
		}
		if (this->m_tracer != nullptr) {
			$SerializerBase::fireCharEvent(chars, start, length);
		}
		return;
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
	if (shouldNotFormat) {
		outputCharacters(chars, start, length);
	} else {
		$nc(this->m_charactersBuffer)->addText(chars, start, length);
	}
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireCharEvent(chars, start, length);
	}
}

bool ToStream::shouldFormatOutput() {
	return this->m_doIndent && !this->m_ispreserveSpace;
}

bool ToStream::getIndent() {
	return shouldFormatOutput();
}

void ToStream::outputCharacters($chars* chars, int32_t start, int32_t length) {
	try {
		int32_t i = 0;
		char16_t ch1 = 0;
		int32_t startClean = 0;
		int32_t end = start + length;
		int32_t lastDirty = start - 1;
		{
			i = start;
			for (;; ++i) {
				bool var$0 = (i < end);
				if (var$0) {
					bool var$3 = (ch1 = $nc(chars)->get(i)) == 32;
					bool var$2 = var$3 || (ch1 == 10 && this->m_lineSepUse);
					bool var$1 = var$2 || ch1 == 13;
					var$0 = (var$1 || ch1 == 9);
				}
				if (!(var$0)) {
					break;
				}
				{
					if (!$nc(this->m_charInfo)->isTextASCIIClean(ch1)) {
						lastDirty = processDirty(chars, end, i, ch1, lastDirty, true);
						i = lastDirty;
					}
				}
			}
		}
		$init($SerializerConstants);
		bool isXML10 = $nc($SerializerConstants::XMLVERSION10)->equals($(getVersion()));
		for (; i < end; ++i) {
			{
				char16_t ch2 = 0;
				while (true) {
					bool var$4 = i < end && ((ch2 = $nc(chars)->get(i)) < 127);
					if (!(var$4 && $nc(this->m_charInfo)->isTextASCIIClean(ch2))) {
						break;
					}
					{
						++i;
					}
				}
				if (i == end) {
					break;
				}
			}
			char16_t ch = $nc(chars)->get(i);
			bool var$6 = !isCharacterInC0orC1Range(ch);
			bool var$5 = var$6 && (isXML10 || !isNELorLSEPCharacter(ch));
			if (var$5) {
				bool var$7 = escapingNotNeeded(ch);
				var$5 = (var$7 && (!$nc(this->m_charInfo)->isSpecialTextChar(ch)));
			}
			if (var$5 || (u'\"' == ch)) {
			} else {
				lastDirty = processDirty(chars, end, i, ch, lastDirty, true);
				i = lastDirty;
			}
		}
		startClean = lastDirty + 1;
		if (i > startClean) {
			int32_t lengthClean = i - startClean;
			$nc(this->m_writer)->write(chars, startClean, lengthClean);
		}
		this->m_isprevtext = true;
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::flushCharactersBuffer(bool isText) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				bool var$2 = shouldFormatOutput();
				if (var$2 && $nc(this->m_charactersBuffer)->isAnyCharactersBuffered()) {
					if ($nc(this->m_elemContext)->m_isCdataSection) {
						$var($chars, chars, $nc(this->m_charactersBuffer)->toChars());
						cdata(chars, 0, $nc(chars)->length);
						return$1 = true;
						goto $finally;
					}
					if (!isText) {
						++this->m_childNodeNum;
					}
					bool skipBeginningNewlines = false;
					if (shouldIndentForText()) {
						indent();
						this->m_startNewLine = true;
						skipBeginningNewlines = true;
					}
					$nc(this->m_charactersBuffer)->flush(skipBeginningNewlines);
				}
			} catch ($IOException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->m_charactersBuffer)->clear();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool ToStream::shouldIndentForText() {
	return (shouldIndent() && this->m_childNodeNum > 1);
}

bool ToStream::isCharacterInC0orC1Range(char16_t ch) {
	$init(ToStream);
	if (ch == 9 || ch == 10 || ch == 13) {
		return false;
	} else {
		return (ch >= 127 && ch <= 159) || (ch >= 1 && ch <= 31);
	}
}

bool ToStream::isNELorLSEPCharacter(char16_t ch) {
	$init(ToStream);
	return (ch == 133 || ch == 8232);
}

int32_t ToStream::processDirty($chars* chars, int32_t end, int32_t i, char16_t ch, int32_t lastDirty, bool fromTextNode) {
	int32_t startClean = lastDirty + 1;
	if (i > startClean) {
		int32_t lengthClean = i - startClean;
		$nc(this->m_writer)->write(chars, startClean, lengthClean);
	}
	if ($CharInfo::S_LINEFEED == ch && fromTextNode) {
		$nc(this->m_writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} else {
		startClean = accumDefaultEscape(this->m_writer, ch, i, chars, end, fromTextNode, false);
		i = startClean - 1;
	}
	return i;
}

void ToStream::characters($String* s) {
	if (isInEntityRef() && !this->m_expandDTDEntities) {
		return;
	}
	int32_t length = $nc(s)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	s->getChars(0, length, this->m_charsBuff, 0);
	characters(this->m_charsBuff, 0, length);
}

int32_t ToStream::accumDefaultEscape($Writer* writer, char16_t ch, int32_t i, $chars* chars, int32_t len, bool fromTextNode, bool escLF) {
	int32_t pos = accumDefaultEntity(writer, ch, i, chars, len, fromTextNode, escLF);
	if (i == pos) {
		if (this->m_highSurrogate != 0) {
			if (!($Encodings::isLowUTF16Surrogate(ch))) {
				throwIOE(this->m_highSurrogate, ch);
			}
			writeCharRef(writer, this->m_highSurrogate, ch);
			this->m_highSurrogate = (char16_t)0;
			return ++pos;
		}
		if ($Encodings::isHighUTF16Surrogate(ch)) {
			if (i + 1 >= len) {
				this->m_highSurrogate = ch;
				++pos;
			} else {
				char16_t next = $nc(chars)->get(++i);
				if (!($Encodings::isLowUTF16Surrogate(next))) {
					throwIOE(ch, next);
				}
				writeCharRef(writer, ch, next);
				pos += 2;
			}
		} else {
			bool var$0 = isCharacterInC0orC1Range(ch);
			if (!var$0) {
				$init($SerializerConstants);
				bool var$1 = $nc($SerializerConstants::XMLVERSION11)->equals($(getVersion()));
				var$0 = (var$1 && isNELorLSEPCharacter(ch));
			}
			if (var$0) {
				writeCharRef(writer, ch);
			} else {
				bool var$4 = !escapingNotNeeded(ch);
				if (!var$4) {
					bool var$5 = (fromTextNode && $nc(this->m_charInfo)->isSpecialTextChar(ch));
					var$4 = (var$5 || (!fromTextNode && $nc(this->m_charInfo)->isSpecialAttrChar(ch)));
				}
				if ((var$4) && $nc(this->m_elemContext)->m_currentElemDepth > 0) {
					writeCharRef(writer, ch);
				} else {
					$nc(writer)->write((int32_t)ch);
				}
			}
			++pos;
		}
	}
	return pos;
}

void ToStream::writeCharRef($Writer* writer, char16_t c) {
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	$nc(writer)->write("&#"_s);
	writer->write($($Integer::toString(c)));
	writer->write((int32_t)u';');
}

int32_t ToStream::writeCharRef($Writer* writer, char16_t high, char16_t low) {
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	int32_t codePoint = $Encodings::toCodePoint(high, low);
	$nc(writer)->write("&#"_s);
	writer->write($($Integer::toString(codePoint)));
	writer->write((int32_t)u';');
	return codePoint;
}

void ToStream::throwIOE(char16_t ch, char16_t next) {
	$useLocalCurrentObjectStackCache();
	$init($Utils);
	$init($MsgKey);
	$var($String, var$0, $$str({$($Integer::toHexString(ch)), " "_s}));
	$throwNew($IOException, $($nc($Utils::messages)->createMessage($MsgKey::ER_INVALID_UTF16_SURROGATE, $$new($ObjectArray, {$of(($$concat(var$0, $($Integer::toHexString(next)))))}))));
}

void ToStream::startElement($String* namespaceURI, $String* localName, $String* name, $Attributes* atts) {
	$useLocalCurrentObjectStackCache();
	if (isInEntityRef()) {
		return;
	}
	if (this->m_doIndent) {
		++this->m_childNodeNum;
		flushCharactersBuffer(false);
	}
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	} else if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	try {
		if ((true == this->m_needToOutputDocTypeDecl) && (nullptr != getDoctypeSystem())) {
			outputDocTypeDecl(name, true);
		}
		this->m_needToOutputDocTypeDecl = false;
		if ($nc(this->m_elemContext)->m_startTagOpen) {
			closeStartTag();
			$nc(this->m_elemContext)->m_startTagOpen = false;
		}
		if (namespaceURI != nullptr) {
			ensurePrefixIsDeclared(namespaceURI, name);
		}
		if (shouldIndent() && this->m_startNewLine) {
			indent();
		}
		this->m_startNewLine = true;
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write((int32_t)u'<');
		writer->write(name);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	if (this->m_doIndent) {
		this->m_ispreserveSpace = $nc(this->m_preserveSpaces)->peekOrFalse();
		$nc(this->m_preserveSpaces)->push(this->m_ispreserveSpace);
		$nc(this->m_childNodeNumStack)->add($($Integer::valueOf(this->m_childNodeNum)));
		this->m_childNodeNum = 0;
	}
	if (atts != nullptr) {
		addAttributes(atts);
	}
	$set(this, m_elemContext, $nc(this->m_elemContext)->push(namespaceURI, localName, name));
	this->m_isprevtext = false;
	if (this->m_tracer != nullptr) {
		firePseudoAttributes();
	}
}

void ToStream::startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) {
	startElement(elementNamespaceURI, elementLocalName, elementName, nullptr);
}

void ToStream::startElement($String* elementName) {
	startElement(nullptr, nullptr, elementName, nullptr);
}

void ToStream::outputDocTypeDecl($String* name, bool closeDecl) {
	$useLocalCurrentObjectStackCache();
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	try {
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write("<!DOCTYPE "_s);
		writer->write(name);
		$var($String, doctypePublic, getDoctypePublic());
		if (nullptr != doctypePublic) {
			writer->write(" PUBLIC \""_s);
			writer->write(doctypePublic);
			writer->write((int32_t)u'\"');
		}
		$var($String, doctypeSystem, getDoctypeSystem());
		if (nullptr != doctypeSystem) {
			char16_t quote = $JdkXmlUtils::getQuoteChar(doctypeSystem);
			if (nullptr == doctypePublic) {
				writer->write(" SYSTEM"_s);
			}
			writer->write(" "_s);
			writer->write((int32_t)quote);
			writer->write(doctypeSystem);
			writer->write((int32_t)quote);
			if (closeDecl) {
				writer->write(">"_s);
				writer->write(this->m_lineSep, 0, this->m_lineSepLen);
				closeDecl = false;
			}
		}
		bool dothis = false;
		if (dothis) {
			if (closeDecl) {
				writer->write((int32_t)u'>');
				writer->write(this->m_lineSep, 0, this->m_lineSepLen);
			}
		}
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::processAttributes($Writer* writer, int32_t nAttrs) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, getEncoding());
	for (int32_t i = 0; i < nAttrs; ++i) {
		$var($String, name, $nc(this->m_attributes)->getQName(i));
		$var($String, value, $nc(this->m_attributes)->getValue(i));
		$nc(writer)->write((int32_t)u' ');
		writer->write(name);
		writer->write("=\""_s);
		writeAttrString(writer, value, encoding);
		writer->write((int32_t)u'\"');
	}
}

void ToStream::writeAttrString($Writer* writer, $String* string, $String* encoding) {
	int32_t len = $nc(string)->length();
	if (len > $nc(this->m_attrBuff)->length) {
		$set(this, m_attrBuff, $new($chars, len * 2 + 1));
	}
	string->getChars(0, len, this->m_attrBuff, 0);
	$var($chars, stringChars, this->m_attrBuff);
	for (int32_t i = 0; i < len;) {
		char16_t ch = $nc(stringChars)->get(i);
		bool var$0 = escapingNotNeeded(ch);
		if (var$0 && (!$nc(this->m_charInfo)->isSpecialAttrChar(ch))) {
			$nc(writer)->write((int32_t)ch);
			++i;
		} else {
			i = accumDefaultEscape(writer, ch, i, stringChars, len, false, true);
		}
	}
}

void ToStream::endElement($String* namespaceURI, $String* localName, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (isInEntityRef()) {
		return;
	}
	if (this->m_doIndent) {
		flushCharactersBuffer(false);
	}
	$nc(this->m_prefixMap)->popNamespaces($nc(this->m_elemContext)->m_currentElemDepth, nullptr);
	try {
		$var($Writer, writer, this->m_writer);
		if ($nc(this->m_elemContext)->m_startTagOpen) {
			if (this->m_tracer != nullptr) {
				$SerializerBase::fireStartElem($nc(this->m_elemContext)->m_elementName);
			}
			int32_t nAttrs = $nc(this->m_attributes)->getLength();
			if (nAttrs > 0) {
				processAttributes(this->m_writer, nAttrs);
				$nc(this->m_attributes)->clear();
			}
			if (this->m_spaceBeforeClose) {
				$nc(writer)->write(" />"_s);
			} else {
				$nc(writer)->write("/>"_s);
			}
		} else {
			if (this->m_cdataTagOpen) {
				closeCDATA();
			}
			if (shouldIndent() && (this->m_childNodeNum > 1 || !this->m_isprevtext)) {
				indent($nc(this->m_elemContext)->m_currentElemDepth - 1);
			}
			$nc(writer)->write((int32_t)u'<');
			writer->write((int32_t)u'/');
			writer->write(name);
			writer->write((int32_t)u'>');
		}
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	if (this->m_doIndent) {
		this->m_ispreserveSpace = $nc(this->m_preserveSpaces)->popAndTop();
		this->m_childNodeNum = $nc(($cast($Integer, $($nc(this->m_childNodeNumStack)->remove($nc(this->m_childNodeNumStack)->size() - 1)))))->intValue();
		this->m_isprevtext = false;
	}
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireEndElem(name);
	}
	$set(this, m_elemContext, $nc(this->m_elemContext)->m_prev);
}

void ToStream::endElement($String* name) {
	endElement(nullptr, nullptr, name);
}

void ToStream::startPrefixMapping($String* prefix, $String* uri) {
	startPrefixMapping(prefix, uri, true);
}

bool ToStream::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	bool pushed = false;
	int32_t pushDepth = 0;
	if (shouldFlush) {
		flushPending();
		pushDepth = $nc(this->m_elemContext)->m_currentElemDepth + 1;
	} else {
		pushDepth = $nc(this->m_elemContext)->m_currentElemDepth;
	}
	pushed = $nc(this->m_prefixMap)->pushNamespace(prefix, uri, pushDepth);
	if (pushed) {
		$var($String, name, nullptr);
		$init($SerializerConstants);
		if ($nc($SerializerConstants::EMPTYSTRING)->equals(prefix)) {
			$assign(name, "xmlns"_s);
			addAttributeAlways($SerializerConstants::XMLNS_URI, name, name, "CDATA"_s, uri, false);
		} else {
			if (!$nc($SerializerConstants::EMPTYSTRING)->equals(uri)) {
				$assign(name, $str({"xmlns:"_s, prefix}));
				addAttributeAlways($SerializerConstants::XMLNS_URI, prefix, name, "CDATA"_s, uri, false);
			}
		}
	}
	return pushed;
}

void ToStream::comment($chars* ch, int32_t start, int32_t length) {
	int32_t start_old = start;
	if (isInEntityRef()) {
		return;
	}
	if (this->m_doIndent) {
		++this->m_childNodeNum;
		flushCharactersBuffer(false);
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	} else if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	try {
		if (shouldIndent() && this->m_isStandalone) {
			indent();
		}
		int32_t limit = start + length;
		bool wasDash = false;
		if (this->m_cdataTagOpen) {
			closeCDATA();
		}
		if (shouldIndent() && !this->m_isStandalone) {
			indent();
		}
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write(ToStream::COMMENT_BEGIN);
		for (int32_t i = start; i < limit; ++i) {
			if (wasDash && $nc(ch)->get(i) == u'-') {
				writer->write(ch, start, i - start);
				writer->write(" -"_s);
				start = i + 1;
			}
			wasDash = ($nc(ch)->get(i) == u'-');
		}
		if (length > 0) {
			int32_t remainingChars = (limit - start);
			if (remainingChars > 0) {
				writer->write(ch, start, remainingChars);
			}
			if ($nc(ch)->get(limit - 1) == u'-') {
				writer->write((int32_t)u' ');
			}
		}
		writer->write(ToStream::COMMENT_END);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	this->m_startNewLine = true;
	if (this->m_tracer != nullptr) {
		$SerializerBase::fireCommentEvent(ch, start_old, length);
	}
}

void ToStream::endCDATA() {
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	this->m_cdataStartCalled = false;
}

void ToStream::endDTD() {
	try {
		if (this->m_needToCallStartDocument) {
			return;
		}
		if (this->m_needToOutputDocTypeDecl) {
			outputDocTypeDecl($nc(this->m_elemContext)->m_elementName, false);
			this->m_needToOutputDocTypeDecl = false;
		}
		$var($Writer, writer, this->m_writer);
		if (!this->m_inDoctype) {
			$nc(writer)->write("]>"_s);
		} else {
			$nc(writer)->write((int32_t)u'>');
		}
		$nc(writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
}

void ToStream::endPrefixMapping($String* prefix) {
}

void ToStream::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	if (0 == length) {
		return;
	}
	characters(ch, start, length);
}

void ToStream::skippedEntity($String* name) {
}

void ToStream::startCDATA() {
	if (this->m_doIndent) {
		flushCharactersBuffer(true);
	}
	this->m_cdataStartCalled = true;
}

void ToStream::startEntity($String* name) {
	if ($nc(name)->equals("[dtd]"_s)) {
		this->m_inExternalDTD = true;
	}
	if (!this->m_expandDTDEntities && !this->m_inExternalDTD) {
		if (!isInEntityRef()) {
			if (shouldFormatOutput()) {
				$nc(this->m_charactersBuffer)->addEntityReference(name);
			} else {
				outputEntityReference(name);
			}
		}
		++this->m_inEntityRef;
	}
}

void ToStream::outputEntityReference($String* name) {
	$useLocalCurrentObjectStackCache();
	startNonEscaping();
	characters($$str({"&"_s, name, $$str(u';')}));
	endNonEscaping();
	this->m_isprevtext = true;
}

void ToStream::closeStartTag() {
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		try {
			if (this->m_tracer != nullptr) {
				$SerializerBase::fireStartElem($nc(this->m_elemContext)->m_elementName);
			}
			int32_t nAttrs = $nc(this->m_attributes)->getLength();
			if (nAttrs > 0) {
				processAttributes(this->m_writer, nAttrs);
				$nc(this->m_attributes)->clear();
			}
			$nc(this->m_writer)->write((int32_t)u'>');
		} catch ($IOException& e) {
			$throwNew($SAXException, static_cast<$Exception*>(e));
		}
		if (this->m_StringOfCDATASections != nullptr) {
			$nc(this->m_elemContext)->m_isCdataSection = isCdataSection();
		}
	}
}

void ToStream::startDTD($String* name, $String* publicId, $String* systemId) {
	setDoctypeSystem(systemId);
	setDoctypePublic(publicId);
	$set($nc(this->m_elemContext), m_elementName, name);
	this->m_inDoctype = true;
}

int32_t ToStream::getIndentAmount() {
	return this->m_indentAmount;
}

void ToStream::setIndentAmount(int32_t m_indentAmount) {
	this->m_indentAmount = m_indentAmount;
}

bool ToStream::shouldIndent() {
	return shouldFormatOutput() && ($nc(this->m_elemContext)->m_currentElemDepth > 0 || this->m_isStandalone);
}

void ToStream::setCdataSectionElements($String* key, $Properties* props) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(props)->getProperty(key));
	if (nullptr != s) {
		$var($List, al, $new($ArrayList));
		int32_t l = s->length();
		bool inCurly = false;
		$var($StringBuilder, buf, $new($StringBuilder));
		for (int32_t i = 0; i < l; ++i) {
			char16_t c = s->charAt(i);
			if ($Character::isWhitespace(c)) {
				if (!inCurly) {
					if (buf->length() > 0) {
						addCdataSectionElement($(buf->toString()), al);
						buf->setLength(0);
					}
					continue;
				}
			} else if (u'{' == c) {
				inCurly = true;
			} else if (u'}' == c) {
				inCurly = false;
			}
			buf->append(c);
		}
		if (buf->length() > 0) {
			addCdataSectionElement($(buf->toString()), al);
			buf->setLength(0);
		}
		setCdataSectionElements(al);
	}
}

void ToStream::addCdataSectionElement($String* URI_and_localName, $List* al) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, URI_and_localName, "{}"_s, false));
	$var($String, s1, tokenizer->nextToken());
	$var($String, s2, tokenizer->hasMoreTokens() ? tokenizer->nextToken() : ($String*)nullptr);
	if (nullptr == s2) {
		$nc(al)->add(nullptr);
		al->add(s1);
	} else {
		$nc(al)->add(s1);
		al->add(s2);
	}
}

void ToStream::setCdataSectionElements($List* URI_and_localNames) {
	$useLocalCurrentObjectStackCache();
	if (URI_and_localNames != nullptr) {
		int32_t len = URI_and_localNames->size() - 1;
		if (len > 0) {
			$var($StringBuilder, sb, $new($StringBuilder));
			for (int32_t i = 0; i < len; i += 2) {
				if (i != 0) {
					sb->append(u' ');
				}
				$var($String, uri, $cast($String, URI_and_localNames->get(i)));
				$var($String, localName, $cast($String, URI_and_localNames->get(i + 1)));
				if (uri != nullptr) {
					sb->append(u'{');
					sb->append(uri);
					sb->append(u'}');
				}
				sb->append(localName);
			}
			$set(this, m_StringOfCDATASections, sb->toString());
		}
	}
	initCdataElems(this->m_StringOfCDATASections);
}

$String* ToStream::ensureAttributesNamespaceIsDeclared($String* ns, $String* localName, $String* rawName) {
	$useLocalCurrentObjectStackCache();
	if (ns != nullptr && ns->length() > 0) {
		int32_t index = 0;
		$var($String, prefixFromRawName, (index = $nc(rawName)->indexOf(":"_s)) < 0 ? ""_s : $nc(rawName)->substring(0, index));
		if (index > 0) {
			$var($String, uri, $nc(this->m_prefixMap)->lookupNamespace(prefixFromRawName));
			if (uri != nullptr && uri->equals(ns)) {
				return nullptr;
			} else {
				this->startPrefixMapping(prefixFromRawName, ns, false);
				this->addAttribute("http://www.w3.org/2000/xmlns/"_s, prefixFromRawName, $$str({"xmlns:"_s, prefixFromRawName}), "CDATA"_s, ns, false);
				return prefixFromRawName;
			}
		} else {
			$var($String, prefix, $nc(this->m_prefixMap)->lookupPrefix(ns));
			if (prefix == nullptr) {
				$assign(prefix, $nc(this->m_prefixMap)->generateNextPrefix());
				this->startPrefixMapping(prefix, ns, false);
				this->addAttribute("http://www.w3.org/2000/xmlns/"_s, prefix, $$str({"xmlns:"_s, prefix}), "CDATA"_s, ns, false);
			}
			return prefix;
		}
	}
	return nullptr;
}

void ToStream::ensurePrefixIsDeclared($String* ns, $String* rawName) {
	$useLocalCurrentObjectStackCache();
	if (ns != nullptr && ns->length() > 0) {
		int32_t index = 0;
		bool no_prefix = ((index = $nc(rawName)->indexOf(":"_s)) < 0);
		$var($String, prefix, (no_prefix) ? ""_s : rawName->substring(0, index));
		if (nullptr != prefix) {
			$var($String, foundURI, $nc(this->m_prefixMap)->lookupNamespace(prefix));
			if ((nullptr == foundURI) || !$nc(foundURI)->equals(ns)) {
				this->startPrefixMapping(prefix, ns);
				this->addAttributeAlways("http://www.w3.org/2000/xmlns/"_s, no_prefix ? "xmlns"_s : prefix, no_prefix ? "xmlns"_s : ($$str({"xmlns:"_s, prefix})), "CDATA"_s, ns, false);
			}
		}
	}
}

void ToStream::flushPending() {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
	if (this->m_cdataTagOpen) {
		closeCDATA();
		this->m_cdataTagOpen = false;
	}
}

void ToStream::setContentHandler($ContentHandler* ch) {
}

bool ToStream::addAttributeAlways($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool xslAttribute) {
	if (!$nc(this->m_charactersBuffer)->isAnyCharactersBuffered()) {
		return doAddAttributeAlways(uri, localName, rawName, type, value, xslAttribute);
	} else {
		return $nc(this->m_attributes)->getIndex(rawName) < 0;
	}
}

bool ToStream::doAddAttributeAlways($String* uri, $String* localName, $String* rawName$renamed, $String* type, $String* value, bool xslAttribute) {
	$useLocalCurrentObjectStackCache();
	$var($String, rawName, rawName$renamed);
	bool was_added = false;
	int32_t index = 0;
	index = $nc(this->m_attributes)->getIndex(rawName);
	if (index >= 0) {
		$var($String, old_value, nullptr);
		if (this->m_tracer != nullptr) {
			$assign(old_value, $nc(this->m_attributes)->getValue(index));
			if ($nc(value)->equals(old_value)) {
				$assign(old_value, nullptr);
			}
		}
		$nc(this->m_attributes)->setValue(index, value);
		was_added = false;
		if (old_value != nullptr) {
			firePseudoAttributes();
		}
	} else {
		if (xslAttribute) {
			int32_t colonIndex = $nc(rawName)->indexOf((int32_t)u':');
			if (colonIndex > 0) {
				$var($String, prefix, rawName->substring(0, colonIndex));
				$var($NamespaceMappings$MappingRecord, existing_mapping, $nc(this->m_prefixMap)->getMappingFromPrefix(prefix));
				if (existing_mapping != nullptr && existing_mapping->m_declarationDepth == $nc(this->m_elemContext)->m_currentElemDepth && !$nc(existing_mapping->m_uri)->equals(uri)) {
					$assign(prefix, $nc(this->m_prefixMap)->lookupPrefix(uri));
					if (prefix == nullptr) {
						$assign(prefix, $nc(this->m_prefixMap)->generateNextPrefix());
					}
					$assign(rawName, $str({prefix, $$str(u':'), localName}));
				}
			}
			try {
				$var($String, prefixUsed, ensureAttributesNamespaceIsDeclared(uri, localName, rawName));
			} catch ($SAXException& e) {
				e->printStackTrace();
			}
		}
		$nc(this->m_attributes)->addAttribute(uri, localName, rawName, type, value);
		was_added = true;
		if (this->m_tracer != nullptr) {
			firePseudoAttributes();
		}
	}
	if (this->m_doIndent && $nc(rawName)->equals("xml:space"_s)) {
		if ($nc(value)->equals("preserve"_s)) {
			this->m_ispreserveSpace = true;
			if ($nc(this->m_preserveSpaces)->size() > 0) {
				$nc(this->m_preserveSpaces)->setTop(this->m_ispreserveSpace);
			}
		} else if (value->equals("default"_s)) {
			this->m_ispreserveSpace = false;
			if ($nc(this->m_preserveSpaces)->size() > 0) {
				$nc(this->m_preserveSpaces)->setTop(this->m_ispreserveSpace);
			}
		}
	}
	return was_added;
}

void ToStream::firePseudoAttributes() {
	$useLocalCurrentObjectStackCache();
	if (this->m_tracer != nullptr) {
		try {
			$nc(this->m_writer)->flush();
			$var($StringBuffer, sb, $new($StringBuffer));
			int32_t nAttrs = $nc(this->m_attributes)->getLength();
			if (nAttrs > 0) {
				$var($Writer, writer, $new($ToStream$WritertoStringBuffer, this, sb));
				processAttributes(writer, nAttrs);
			}
			sb->append(u'>');
			$var($chars, ch, $nc($(sb->toString()))->toCharArray());
			$nc(this->m_tracer)->fireGenerateEvent($SerializerTrace::EVENTTYPE_OUTPUT_PSEUDO_CHARACTERS, ch, 0, ch->length);
		} catch ($IOException& ioe) {
		} catch ($SAXException& se) {
		}
	}
}

void ToStream::setTransformer($Transformer* transformer) {
	$SerializerBase::setTransformer(transformer);
	if (this->m_tracer != nullptr && !($instanceOf($SerializerTraceWriter, this->m_writer))) {
		$set(this, m_writer, $new($SerializerTraceWriter, this->m_writer, this->m_tracer));
	}
}

bool ToStream::reset() {
	bool wasReset = false;
	if ($SerializerBase::reset()) {
		resetToStream();
		wasReset = true;
	}
	return wasReset;
}

void ToStream::resetToStream() {
	this->m_cdataStartCalled = false;
	$nc(this->m_disableOutputEscapingStates)->clear();
	this->m_escaping = true;
	this->m_inDoctype = false;
	this->m_ispreserveSpace = false;
	$nc(this->m_preserveSpaces)->clear();
	this->m_childNodeNum = 0;
	$nc(this->m_childNodeNumStack)->clear();
	$nc(this->m_charactersBuffer)->clear();
	this->m_isprevtext = false;
	this->m_isUTF8 = false;
	this->m_shouldFlush = true;
	this->m_spaceBeforeClose = false;
	this->m_startNewLine = false;
	this->m_lineSepUse = true;
	this->m_expandDTDEntities = true;
}

void ToStream::setEncoding($String* encoding) {
	$init($OutputKeys);
	setOutputProperty($OutputKeys::ENCODING, encoding);
}

void ToStream::notationDecl($String* name, $String* pubID, $String* sysID) {
	try {
		DTDprolog();
		$nc(this->m_writer)->write("<!NOTATION "_s);
		$nc(this->m_writer)->write(name);
		if (pubID != nullptr) {
			$nc(this->m_writer)->write(" PUBLIC \""_s);
			$nc(this->m_writer)->write(pubID);
		} else {
			$nc(this->m_writer)->write(" SYSTEM \""_s);
			$nc(this->m_writer)->write(sysID);
		}
		$nc(this->m_writer)->write("\" >"_s);
		$nc(this->m_writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void ToStream::unparsedEntityDecl($String* name, $String* pubID, $String* sysID, $String* notationName) {
	try {
		DTDprolog();
		$nc(this->m_writer)->write("<!ENTITY "_s);
		$nc(this->m_writer)->write(name);
		if (pubID != nullptr) {
			$nc(this->m_writer)->write(" PUBLIC \""_s);
			$nc(this->m_writer)->write(pubID);
		} else {
			$nc(this->m_writer)->write(" SYSTEM \""_s);
			$nc(this->m_writer)->write(sysID);
		}
		$nc(this->m_writer)->write("\" NDATA "_s);
		$nc(this->m_writer)->write(notationName);
		$nc(this->m_writer)->write(" >"_s);
		$nc(this->m_writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
	} catch ($IOException& e) {
		e->printStackTrace();
	}
}

void ToStream::DTDprolog() {
	$var($Writer, writer, this->m_writer);
	if (this->m_needToOutputDocTypeDecl) {
		outputDocTypeDecl($nc(this->m_elemContext)->m_elementName, false);
		this->m_needToOutputDocTypeDecl = false;
	}
	if (this->m_inDoctype) {
		$nc(writer)->write(" ["_s);
		writer->write(this->m_lineSep, 0, this->m_lineSepLen);
		this->m_inDoctype = false;
	}
}

void ToStream::setDTDEntityExpansion(bool expand) {
	this->m_expandDTDEntities = expand;
}

void ToStream::addCdataSectionElements($String* URI_and_localNames) {
	if (URI_and_localNames != nullptr) {
		initCdataElems(URI_and_localNames);
	}
	if (this->m_StringOfCDATASections == nullptr) {
		$set(this, m_StringOfCDATASections, URI_and_localNames);
	} else {
		$plusAssignField(this, m_StringOfCDATASections, ($$str({" "_s, URI_and_localNames})));
	}
}

ToStream::ToStream() {
}

void clinit$ToStream($Class* class$) {
	$assignStatic(ToStream::COMMENT_BEGIN, "<!--"_s);
	$assignStatic(ToStream::COMMENT_END, "-->"_s);
}

$Class* ToStream::load$($String* name, bool initialize) {
	$loadClass(ToStream, name, initialize, &_ToStream_ClassInfo_, clinit$ToStream, allocate$ToStream);
	return class$;
}

$Class* ToStream::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com