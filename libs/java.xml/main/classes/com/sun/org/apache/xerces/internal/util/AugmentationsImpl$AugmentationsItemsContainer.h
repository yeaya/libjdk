#ifndef _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$AugmentationsItemsContainer_h_
#define _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$AugmentationsItemsContainer_h_
//$ class com.sun.org.apache.xerces.internal.util.AugmentationsImpl$AugmentationsItemsContainer
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class AugmentationsImpl$AugmentationsItemsContainer : public ::java::lang::Object {
	$class(AugmentationsImpl$AugmentationsItemsContainer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AugmentationsImpl$AugmentationsItemsContainer();
	void init$(::com::sun::org::apache::xerces::internal::util::AugmentationsImpl* this$0);
	virtual void clear() {}
	virtual ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl$AugmentationsItemsContainer* expand() {return nullptr;}
	virtual $Object* getItem(Object$* key) {return nullptr;}
	virtual bool isFull() {return false;}
	virtual ::java::util::Enumeration* keys() {return nullptr;}
	virtual $Object* putItem(Object$* key, Object$* item) {return nullptr;}
	virtual $Object* removeItem(Object$* key) {return nullptr;}
	::com::sun::org::apache::xerces::internal::util::AugmentationsImpl* this$0 = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_AugmentationsImpl$AugmentationsItemsContainer_h_