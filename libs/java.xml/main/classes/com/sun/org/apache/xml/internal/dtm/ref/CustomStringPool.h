#ifndef _com_sun_org_apache_xml_internal_dtm_ref_CustomStringPool_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_CustomStringPool_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.CustomStringPool
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMStringPool

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMStringPool.h>

#pragma push_macro("NULL")
#undef NULL

namespace java {
	namespace util {
		class Map;
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

class CustomStringPool : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool {
	$class(CustomStringPool, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool)
public:
	CustomStringPool();
	void init$();
	virtual $String* indexToString(int32_t i) override;
	virtual void removeAllElements() override;
	virtual int32_t stringToIndex($String* s) override;
	::java::util::Map* m_stringToInt = nullptr;
	static const int32_t NULL = (-1);
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NULL")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_CustomStringPool_h_