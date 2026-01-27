#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMTreeWalker_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMTreeWalker_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMTreeWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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

class DTMTreeWalker : public ::java::lang::Object {
	$class(DTMTreeWalker, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTMTreeWalker();
	void init$();
	void init$(::org::xml::sax::ContentHandler* contentHandler, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm);
	void dispatachChars(int32_t node);
	virtual void endNode(int32_t node);
	virtual ::org::xml::sax::ContentHandler* getcontentHandler();
	virtual void setDTM(::com::sun::org::apache::xml::internal::dtm::DTM* dtm);
	virtual void setcontentHandler(::org::xml::sax::ContentHandler* ch);
	virtual void startNode(int32_t node);
	virtual void traverse(int32_t pos);
	virtual void traverse(int32_t pos, int32_t top);
	::org::xml::sax::ContentHandler* m_contentHandler = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_dtm = nullptr;
	bool nextIsRaw = false;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMTreeWalker_h_