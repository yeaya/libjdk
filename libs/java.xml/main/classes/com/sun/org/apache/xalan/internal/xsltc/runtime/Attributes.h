#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_Attributes_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_Attributes_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.Attributes
//$ extends org.xml.sax.AttributeList

#include <org/xml/sax/AttributeList.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
						}
					}
				}
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

class Attributes : public ::org::xml::sax::AttributeList {
	$class(Attributes, $NO_CLASS_INIT, ::org::xml::sax::AttributeList)
public:
	Attributes();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, int32_t element);
	virtual int32_t getLength() override;
	virtual $String* getName(int32_t i) override;
	virtual $String* getType(int32_t i) override;
	virtual $String* getType($String* name) override;
	virtual $String* getValue(int32_t i) override;
	virtual $String* getValue($String* name) override;
	int32_t _element = 0;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _document = nullptr;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_Attributes_h_