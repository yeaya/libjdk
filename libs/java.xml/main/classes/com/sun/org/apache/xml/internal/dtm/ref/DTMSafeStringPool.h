#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMSafeStringPool_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMSafeStringPool_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMSafeStringPool
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMSafeStringPool : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool {
	$class(DTMSafeStringPool, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool)
public:
	DTMSafeStringPool();
	void init$();
	static void _main($StringArray* args);
	virtual $String* indexToString(int32_t i) override;
	virtual void removeAllElements() override;
	virtual int32_t stringToIndex($String* s) override;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMSafeStringPool_h_