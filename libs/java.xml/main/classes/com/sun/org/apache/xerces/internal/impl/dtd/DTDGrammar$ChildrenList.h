#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar$ChildrenList_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar$ChildrenList_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar$ChildrenList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class QName;
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
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class DTDGrammar$ChildrenList : public ::java::lang::Object {
	$class(DTDGrammar$ChildrenList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTDGrammar$ChildrenList();
	void init$();
	int32_t length = 0;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* qname = nullptr;
	$ints* type = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_DTDGrammar$ChildrenList_h_