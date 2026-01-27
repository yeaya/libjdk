#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$SingletonIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$SingletonIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
								class DTMDefaultBaseIterators;
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

class DTMDefaultBaseIterators$SingletonIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(DTMDefaultBaseIterators$SingletonIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	DTMDefaultBaseIterators$SingletonIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0);
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0, int32_t node);
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0, int32_t node, bool constant);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators* this$0 = nullptr;
	bool _isConstant = false;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBaseIterators$SingletonIterator_h_