#ifndef _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration_h_
#define _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration_h_
//$ class com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class AugmentationsImpl$SmallContainer;
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
						namespace util {

class AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration : public ::java::util::Enumeration {
	$class(AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration();
	void init$(::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$SmallContainer* this$1);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$SmallContainer* this$1 = nullptr;
	$ObjectArray* enumArray = nullptr;
	int32_t next = 0;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer$SmallContainerKeyEnumeration_h_