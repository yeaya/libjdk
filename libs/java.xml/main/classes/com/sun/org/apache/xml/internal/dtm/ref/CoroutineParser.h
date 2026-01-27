#ifndef _com_sun_org_apache_xml_internal_dtm_ref_CoroutineParser_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_CoroutineParser_h_
//$ interface com.sun.org.apache.xml.internal.dtm.ref.CoroutineParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class CoroutineManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class InputSource;
			class XMLReader;
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

class CoroutineParser : public ::java::lang::Object {
	$interface(CoroutineParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* doMore(bool parsemore, int32_t appCoroutine) {return nullptr;}
	virtual $Object* doParse(::org::xml::sax::InputSource* source, int32_t appCoroutine) {return nullptr;}
	virtual void doTerminate(int32_t appCoroutine) {}
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* getCoroutineManager() {return nullptr;}
	virtual int32_t getParserCoroutineID() {return 0;}
	virtual void init(::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager* co, int32_t appCoroutineID, ::org::xml::sax::XMLReader* parser) {}
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) {}
	virtual void setLexHandler(::org::xml::sax::ext::LexicalHandler* handler) {}
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_CoroutineParser_h_