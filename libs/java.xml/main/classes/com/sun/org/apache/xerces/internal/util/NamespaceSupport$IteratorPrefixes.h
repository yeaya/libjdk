#ifndef _com_sun_org_apache_xerces_internal_util_NamespaceSupport$IteratorPrefixes_h_
#define _com_sun_org_apache_xerces_internal_util_NamespaceSupport$IteratorPrefixes_h_
//$ class com.sun.org.apache.xerces.internal.util.NamespaceSupport$IteratorPrefixes
//$ extends java.util.Iterator

#include <java/lang/Array.h>
#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
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

class NamespaceSupport$IteratorPrefixes : public ::java::util::Iterator {
	$class(NamespaceSupport$IteratorPrefixes, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	NamespaceSupport$IteratorPrefixes();
	void init$(::com::sun::org::apache::xerces::internal::util::NamespaceSupport* this$0, $StringArray* prefixes, int32_t size);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* this$0 = nullptr;
	$StringArray* prefixes = nullptr;
	int32_t counter = 0;
	int32_t size = 0;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_NamespaceSupport$IteratorPrefixes_h_