#include <com/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXBaseWriter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXEventWriter.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/SAX2StAXStreamWriter.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToTextSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ToTextStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToUnknownStream.h>
#include <com/sun/org/apache/xml/internal/serializer/ToXMLSAXHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ToXMLStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <javax/xml/stream/XMLEventWriter.h>
#include <javax/xml/stream/XMLStreamWriter.h>
#include <javax/xml/transform/ErrorListener.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef DOM
#undef SAX
#undef STAX
#undef STREAM

using $SAX2DOM = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2DOM;
using $SAX2StAXBaseWriter = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXBaseWriter;
using $SAX2StAXEventWriter = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXEventWriter;
using $SAX2StAXStreamWriter = ::com::sun::org::apache::xalan::internal::xsltc::trax::SAX2StAXStreamWriter;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $SerializerBase = ::com::sun::org::apache::xml::internal::serializer::SerializerBase;
using $ToHTMLSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToHTMLSAXHandler;
using $ToHTMLStream = ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream;
using $ToSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToSAXHandler;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $ToTextSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToTextSAXHandler;
using $ToTextStream = ::com::sun::org::apache::xml::internal::serializer::ToTextStream;
using $ToUnknownStream = ::com::sun::org::apache::xml::internal::serializer::ToUnknownStream;
using $ToXMLSAXHandler = ::com::sun::org::apache::xml::internal::serializer::ToXMLSAXHandler;
using $ToXMLStream = ::com::sun::org::apache::xml::internal::serializer::ToXMLStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLEventWriter = ::javax::xml::stream::XMLEventWriter;
using $XMLStreamWriter = ::javax::xml::stream::XMLStreamWriter;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Node = ::org::w3c::dom::Node;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

$FieldInfo _TransletOutputHandlerFactory_FieldInfo_[] = {
	{"STREAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransletOutputHandlerFactory, STREAM)},
	{"SAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransletOutputHandlerFactory, SAX)},
	{"DOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransletOutputHandlerFactory, DOM)},
	{"STAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TransletOutputHandlerFactory, STAX)},
	{"_encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _encoding)},
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _method)},
	{"_outputType", "I", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _outputType)},
	{"_ostream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _ostream)},
	{"_writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _writer)},
	{"_node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _node)},
	{"_nextSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _nextSibling)},
	{"_xmlStAXEventWriter", "Ljavax/xml/stream/XMLEventWriter;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _xmlStAXEventWriter)},
	{"_xmlStAXStreamWriter", "Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _xmlStAXStreamWriter)},
	{"_indentNumber", "I", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _indentNumber)},
	{"_handler", "Lorg/xml/sax/ContentHandler;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _handler)},
	{"_lexHandler", "Lorg/xml/sax/ext/LexicalHandler;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _lexHandler)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _overrideDefaultParser)},
	{"_errListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(TransletOutputHandlerFactory, _errListener)},
	{}
};

$MethodInfo _TransletOutputHandlerFactory_MethodInfo_[] = {
	{"<init>", "(ZLjavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(TransletOutputHandlerFactory, init$, void, bool, $ErrorListener*)},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, getNode, $Node*)},
	{"getSerializationHandler", "()Lcom/sun/org/apache/xml/internal/serializer/SerializationHandler;", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, getSerializationHandler, $SerializationHandler*), "java.io.IOException,javax.xml.parsers.ParserConfigurationException"},
	{"getXMLEventWriter", "()Ljavax/xml/stream/XMLEventWriter;", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, getXMLEventWriter, $XMLEventWriter*)},
	{"getXMLStreamWriter", "()Ljavax/xml/stream/XMLStreamWriter;", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, getXMLStreamWriter, $XMLStreamWriter*)},
	{"newInstance", "(ZLjavax/xml/transform/ErrorListener;)Lcom/sun/org/apache/xalan/internal/xsltc/runtime/output/TransletOutputHandlerFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(TransletOutputHandlerFactory, newInstance, TransletOutputHandlerFactory*, bool, $ErrorListener*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setEncoding, void, $String*)},
	{"setHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setHandler, void, $ContentHandler*)},
	{"setIndentNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setIndentNumber, void, int32_t)},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setLexicalHandler, void, $LexicalHandler*)},
	{"setNextSibling", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setNextSibling, void, $Node*)},
	{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setNode, void, $Node*)},
	{"setOutputMethod", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setOutputMethod, void, $String*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setOutputStream, void, $OutputStream*)},
	{"setOutputType", "(I)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setOutputType, void, int32_t)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setWriter, void, $Writer*)},
	{"setXMLEventWriter", "(Ljavax/xml/stream/XMLEventWriter;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setXMLEventWriter, void, $XMLEventWriter*)},
	{"setXMLStreamWriter", "(Ljavax/xml/stream/XMLStreamWriter;)V", nullptr, $PUBLIC, $virtualMethod(TransletOutputHandlerFactory, setXMLStreamWriter, void, $XMLStreamWriter*)},
	{}
};

$ClassInfo _TransletOutputHandlerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.output.TransletOutputHandlerFactory",
	"java.lang.Object",
	nullptr,
	_TransletOutputHandlerFactory_FieldInfo_,
	_TransletOutputHandlerFactory_MethodInfo_
};

$Object* allocate$TransletOutputHandlerFactory($Class* clazz) {
	return $of($alloc(TransletOutputHandlerFactory));
}

TransletOutputHandlerFactory* TransletOutputHandlerFactory::newInstance(bool overrideDefaultParser, $ErrorListener* errListener) {
	return $new(TransletOutputHandlerFactory, overrideDefaultParser, errListener);
}

void TransletOutputHandlerFactory::init$(bool overrideDefaultParser, $ErrorListener* errListener) {
	$set(this, _encoding, "utf-8"_s);
	$set(this, _method, nullptr);
	this->_outputType = TransletOutputHandlerFactory::STREAM;
	$set(this, _ostream, $System::out);
	$set(this, _writer, nullptr);
	$set(this, _node, nullptr);
	$set(this, _nextSibling, nullptr);
	$set(this, _xmlStAXEventWriter, nullptr);
	$set(this, _xmlStAXStreamWriter, nullptr);
	this->_indentNumber = -1;
	$set(this, _handler, nullptr);
	$set(this, _lexHandler, nullptr);
	this->_overrideDefaultParser = overrideDefaultParser;
	$set(this, _errListener, errListener);
}

void TransletOutputHandlerFactory::setOutputType(int32_t outputType) {
	this->_outputType = outputType;
}

void TransletOutputHandlerFactory::setEncoding($String* encoding) {
	if (encoding != nullptr) {
		$set(this, _encoding, encoding);
	}
}

void TransletOutputHandlerFactory::setOutputMethod($String* method) {
	$set(this, _method, method);
}

void TransletOutputHandlerFactory::setOutputStream($OutputStream* ostream) {
	$set(this, _ostream, ostream);
}

void TransletOutputHandlerFactory::setWriter($Writer* writer) {
	$set(this, _writer, writer);
}

void TransletOutputHandlerFactory::setHandler($ContentHandler* handler) {
	$set(this, _handler, handler);
}

void TransletOutputHandlerFactory::setLexicalHandler($LexicalHandler* lex) {
	$set(this, _lexHandler, lex);
}

void TransletOutputHandlerFactory::setNode($Node* node) {
	$set(this, _node, node);
}

$Node* TransletOutputHandlerFactory::getNode() {
	return ($instanceOf($SAX2DOM, this->_handler)) ? $nc(($cast($SAX2DOM, this->_handler)))->getDOM() : ($Node*)nullptr;
}

void TransletOutputHandlerFactory::setNextSibling($Node* nextSibling) {
	$set(this, _nextSibling, nextSibling);
}

$XMLEventWriter* TransletOutputHandlerFactory::getXMLEventWriter() {
	return ($instanceOf($SAX2StAXEventWriter, this->_handler)) ? $nc(($cast($SAX2StAXEventWriter, this->_handler)))->getEventWriter() : ($XMLEventWriter*)nullptr;
}

void TransletOutputHandlerFactory::setXMLEventWriter($XMLEventWriter* eventWriter) {
	$set(this, _xmlStAXEventWriter, eventWriter);
}

$XMLStreamWriter* TransletOutputHandlerFactory::getXMLStreamWriter() {
	return ($instanceOf($SAX2StAXStreamWriter, this->_handler)) ? $nc(($cast($SAX2StAXStreamWriter, this->_handler)))->getStreamWriter() : ($XMLStreamWriter*)nullptr;
}

void TransletOutputHandlerFactory::setXMLStreamWriter($XMLStreamWriter* streamWriter) {
	$set(this, _xmlStAXStreamWriter, streamWriter);
}

void TransletOutputHandlerFactory::setIndentNumber(int32_t value) {
	this->_indentNumber = value;
}

$SerializationHandler* TransletOutputHandlerFactory::getSerializationHandler() {
	$var($SerializationHandler, result, nullptr);
	switch (this->_outputType) {
	case TransletOutputHandlerFactory::STREAM:
		{
			if (this->_method == nullptr) {
				$assign(result, $new($ToUnknownStream, this->_errListener));
			} else if ($nc(this->_method)->equalsIgnoreCase("xml"_s)) {
				$assign(result, $new($ToXMLStream, this->_errListener));
			} else if ($nc(this->_method)->equalsIgnoreCase("html"_s)) {
				$assign(result, $new($ToHTMLStream, this->_errListener));
			} else if ($nc(this->_method)->equalsIgnoreCase("text"_s)) {
				$assign(result, $new($ToTextStream, this->_errListener));
			}
			if (result != nullptr && this->_indentNumber >= 0) {
				result->setIndentAmount(this->_indentNumber);
			}
			$nc(result)->setEncoding(this->_encoding);
			if (this->_writer != nullptr) {
				$nc(result)->setWriter(this->_writer);
			} else {
				$nc(result)->setOutputStream(this->_ostream);
			}
			return result;
		}
	case TransletOutputHandlerFactory::DOM:
		{
			$set(this, _handler, (this->_node != nullptr) ? static_cast<$ContentHandler*>($new($SAX2DOM, this->_node, this->_nextSibling, this->_overrideDefaultParser)) : static_cast<$ContentHandler*>($new($SAX2DOM, this->_overrideDefaultParser)));
			$set(this, _lexHandler, $cast($LexicalHandler, this->_handler));
		}
	case TransletOutputHandlerFactory::STAX:
		{
			if (this->_xmlStAXEventWriter != nullptr) {
				$set(this, _handler, $new($SAX2StAXEventWriter, this->_xmlStAXEventWriter));
			} else if (this->_xmlStAXStreamWriter != nullptr) {
				$set(this, _handler, $new($SAX2StAXStreamWriter, this->_xmlStAXStreamWriter));
			}
			$set(this, _lexHandler, $cast($LexicalHandler, this->_handler));
		}
	case TransletOutputHandlerFactory::SAX:
		{
			if (this->_method == nullptr) {
				$set(this, _method, "xml"_s);
			}
			if ($nc(this->_method)->equalsIgnoreCase("xml"_s)) {
				if (this->_lexHandler == nullptr) {
					$assign(result, $new($ToXMLSAXHandler, this->_handler, this->_encoding));
				} else {
					$assign(result, $new($ToXMLSAXHandler, this->_handler, this->_lexHandler, this->_encoding));
				}
			} else if ($nc(this->_method)->equalsIgnoreCase("html"_s)) {
				if (this->_lexHandler == nullptr) {
					$assign(result, $new($ToHTMLSAXHandler, this->_handler, this->_encoding));
				} else {
					$assign(result, $new($ToHTMLSAXHandler, this->_handler, this->_lexHandler, this->_encoding));
				}
			} else if ($nc(this->_method)->equalsIgnoreCase("text"_s)) {
				if (this->_lexHandler == nullptr) {
					$assign(result, $new($ToTextSAXHandler, this->_handler, this->_encoding));
				} else {
					$assign(result, $new($ToTextSAXHandler, this->_handler, this->_lexHandler, this->_encoding));
				}
			}
			return result;
		}
	}
	return nullptr;
}

TransletOutputHandlerFactory::TransletOutputHandlerFactory() {
}

$Class* TransletOutputHandlerFactory::load$($String* name, bool initialize) {
	$loadClass(TransletOutputHandlerFactory, name, initialize, &_TransletOutputHandlerFactory_ClassInfo_, allocate$TransletOutputHandlerFactory);
	return class$;
}

$Class* TransletOutputHandlerFactory::class$ = nullptr;

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com