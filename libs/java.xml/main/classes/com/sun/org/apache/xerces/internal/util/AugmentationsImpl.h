#ifndef _com_sun_org_apache_xerces_internal_util_AugmentationsImpl_h_
#define _com_sun_org_apache_xerces_internal_util_AugmentationsImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.AugmentationsImpl
//$ extends com.sun.org.apache.xerces.internal.xni.Augmentations

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class AugmentationsImpl$AugmentationsItemsContainer;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class AugmentationsImpl : public ::com::sun::org::apache::xerces::internal::xni::Augmentations {
	$class(AugmentationsImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::Augmentations)
public:
	AugmentationsImpl();
	void init$();
	virtual $Object* getItem($String* key) override;
	virtual ::java::util::Enumeration* keys() override;
	virtual $Object* putItem($String* key, Object$* item) override;
	virtual void removeAllItems() override;
	virtual $Object* removeItem($String* key) override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer* fAugmentationsContainer = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_AugmentationsImpl_h_