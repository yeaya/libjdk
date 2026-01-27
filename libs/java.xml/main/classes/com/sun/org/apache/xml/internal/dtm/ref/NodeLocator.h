#ifndef _com_sun_org_apache_xml_internal_dtm_ref_NodeLocator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_NodeLocator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.NodeLocator
//$ extends javax.xml.transform.SourceLocator

#include <javax/xml/transform/SourceLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class NodeLocator : public ::javax::xml::transform::SourceLocator {
	$class(NodeLocator, $NO_CLASS_INIT, ::javax::xml::transform::SourceLocator)
public:
	NodeLocator();
	void init$($String* publicId, $String* systemId, int32_t lineNumber, int32_t columnNumber);
	virtual int32_t getColumnNumber() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* toString() override;
	$String* m_publicId = nullptr;
	$String* m_systemId = nullptr;
	int32_t m_lineNumber = 0;
	int32_t m_columnNumber = 0;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_NodeLocator_h_