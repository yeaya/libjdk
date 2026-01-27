#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_output_TransletOutputHandlerFactory_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_output_TransletOutputHandlerFactory_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.output.TransletOutputHandlerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DOM")
#undef DOM
#pragma push_macro("SAX")
#undef SAX
#pragma push_macro("STAX")
#undef STAX
#pragma push_macro("STREAM")
#undef STREAM

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventWriter;
			class XMLStreamWriter;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								namespace output {

class TransletOutputHandlerFactory : public ::java::lang::Object {
	$class(TransletOutputHandlerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransletOutputHandlerFactory();
	void init$(bool overrideDefaultParser, ::javax::xml::transform::ErrorListener* errListener);
	virtual ::org::w3c::dom::Node* getNode();
	virtual ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* getSerializationHandler();
	virtual ::javax::xml::stream::XMLEventWriter* getXMLEventWriter();
	virtual ::javax::xml::stream::XMLStreamWriter* getXMLStreamWriter();
	static ::com::sun::org::apache::xalan::internal::xsltc::runtime::output::TransletOutputHandlerFactory* newInstance(bool overrideDefaultParser, ::javax::xml::transform::ErrorListener* errListener);
	virtual void setEncoding($String* encoding);
	virtual void setHandler(::org::xml::sax::ContentHandler* handler);
	virtual void setIndentNumber(int32_t value);
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* lex);
	virtual void setNextSibling(::org::w3c::dom::Node* nextSibling);
	virtual void setNode(::org::w3c::dom::Node* node);
	virtual void setOutputMethod($String* method);
	virtual void setOutputStream(::java::io::OutputStream* ostream);
	virtual void setOutputType(int32_t outputType);
	virtual void setWriter(::java::io::Writer* writer);
	virtual void setXMLEventWriter(::javax::xml::stream::XMLEventWriter* eventWriter);
	virtual void setXMLStreamWriter(::javax::xml::stream::XMLStreamWriter* streamWriter);
	static const int32_t STREAM = 0;
	static const int32_t SAX = 1;
	static const int32_t DOM = 2;
	static const int32_t STAX = 3;
	$String* _encoding = nullptr;
	$String* _method = nullptr;
	int32_t _outputType = 0;
	::java::io::OutputStream* _ostream = nullptr;
	::java::io::Writer* _writer = nullptr;
	::org::w3c::dom::Node* _node = nullptr;
	::org::w3c::dom::Node* _nextSibling = nullptr;
	::javax::xml::stream::XMLEventWriter* _xmlStAXEventWriter = nullptr;
	::javax::xml::stream::XMLStreamWriter* _xmlStAXStreamWriter = nullptr;
	int32_t _indentNumber = 0;
	::org::xml::sax::ContentHandler* _handler = nullptr;
	::org::xml::sax::ext::LexicalHandler* _lexHandler = nullptr;
	bool _overrideDefaultParser = false;
	::javax::xml::transform::ErrorListener* _errListener = nullptr;
};

								} // output
							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM")
#pragma pop_macro("SAX")
#pragma pop_macro("STAX")
#pragma pop_macro("STREAM")

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_output_TransletOutputHandlerFactory_h_