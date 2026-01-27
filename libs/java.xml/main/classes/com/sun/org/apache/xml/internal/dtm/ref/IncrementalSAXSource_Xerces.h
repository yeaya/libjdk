#ifndef _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Xerces_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Xerces_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Xerces
//$ extends com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource

#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {
							class SAXParser;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DTDHandler;
			class InputSource;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class IncrementalSAXSource_Xerces : public ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource {
	$class(IncrementalSAXSource_Xerces, 0, ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource)
public:
	IncrementalSAXSource_Xerces();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::parsers::SAXParser* parser);
	static void _main($StringArray* args);
	static ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* createIncrementalSAXSource();
	static ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* createIncrementalSAXSource(::com::sun::org::apache::xerces::internal::parsers::SAXParser* parser);
	virtual $Object* deliverMoreNodes(bool parsemore) override;
	bool parseSome();
	bool parseSomeSetup(::org::xml::sax::InputSource* source);
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) override;
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* handler) override;
	virtual void startParse(::org::xml::sax::InputSource* source) override;
	::java::lang::reflect::Method* fParseSomeSetup = nullptr;
	::java::lang::reflect::Method* fParseSome = nullptr;
	$Object* fPullParserConfig = nullptr;
	::java::lang::reflect::Method* fConfigSetInput = nullptr;
	::java::lang::reflect::Method* fConfigParse = nullptr;
	::java::lang::reflect::Method* fSetInputSource = nullptr;
	::java::lang::reflect::Constructor* fConfigInputSourceCtor = nullptr;
	::java::lang::reflect::Method* fConfigSetByteStream = nullptr;
	::java::lang::reflect::Method* fConfigSetCharStream = nullptr;
	::java::lang::reflect::Method* fConfigSetEncoding = nullptr;
	::java::lang::reflect::Method* fReset = nullptr;
	::com::sun::org::apache::xerces::internal::parsers::SAXParser* fIncrementalParser = nullptr;
	bool fParseInProgress = false;
	static $ObjectArray* noparms;
	static $ObjectArray* parmsfalse;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Xerces_h_