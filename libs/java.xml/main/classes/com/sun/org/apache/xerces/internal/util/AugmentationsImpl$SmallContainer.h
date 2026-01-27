#ifndef _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer_h_
#define _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer_h_
//$ class com.sun.org.apache.xerces.internal.util.AugmentationsImpl$SmallContainer
//$ extends com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer

#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl$AugmentationsItemsContainer.h>
#include <java/lang/Array.h>

#pragma push_macro("SIZE_LIMIT")
#undef SIZE_LIMIT

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
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class AugmentationsImpl$SmallContainer : public ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer {
	$class(AugmentationsImpl$SmallContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer)
public:
	AugmentationsImpl$SmallContainer();
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
	static const int32_t SIZE_LIMIT = 10;
	$ObjectArray* fAugmentations = nullptr;
	int32_t fNumEntries = 0;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SIZE_LIMIT")

#endif // _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$SmallContainer_h_