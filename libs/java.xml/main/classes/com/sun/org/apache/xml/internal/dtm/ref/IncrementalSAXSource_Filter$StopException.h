#ifndef _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter$StopException_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter$StopException_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Filter$StopException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								class IncrementalSAXSource_Filter;
							}
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class IncrementalSAXSource_Filter$StopException : public ::java::lang::RuntimeException {
	$class(IncrementalSAXSource_Filter$StopException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IncrementalSAXSource_Filter$StopException();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter* this$0);
	::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xF0541CEE6E3EB2B4;
	IncrementalSAXSource_Filter$StopException(const IncrementalSAXSource_Filter$StopException& e);
	virtual void throw$() override;
	inline IncrementalSAXSource_Filter$StopException* operator ->() {
		return (IncrementalSAXSource_Filter$StopException*)throwing$;
	}
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_Filter$StopException_h_