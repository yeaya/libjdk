#ifndef _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$LargeContainer_h_
#define _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$LargeContainer_h_
//$ class com.sun.org.apache.xerces.internal.util.AugmentationsImpl$LargeContainer
//$ extends com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer

#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class AugmentationsImpl;
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
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class AugmentationsImpl$LargeContainer : public ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer {
	$class(AugmentationsImpl$LargeContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer)
public:
	AugmentationsImpl$LargeContainer();
	void init$(::com::sun::org::apache::xerces::internal::util::AugmentationsImpl* this$0);
	virtual void clear() override;
	virtual ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer* expand() override;
	virtual $Object* getItem(Object$* key) override;
	virtual bool isFull() override;
	virtual ::java::util::Enumeration* keys() override;
	virtual $Object* putItem(Object$* key, Object$* item) override;
	virtual $Object* removeItem(Object$* key) override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::util::AugmentationsImpl* this$0 = nullptr;
	::java::util::Map* fAugmentations = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$LargeContainer_h_