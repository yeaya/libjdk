#ifndef _com_sun_org_apache_xerces_internal_util_NamespaceSupport$Prefixes_h_
#define _com_sun_org_apache_xerces_internal_util_NamespaceSupport$Prefixes_h_
//$ class com.sun.org.apache.xerces.internal.util.NamespaceSupport$Prefixes
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

class NamespaceSupport$Prefixes : public ::java::util::Enumeration {
	$class(NamespaceSupport$Prefixes, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	NamespaceSupport$Prefixes();
	void init$(::com::sun::org::apache::xerces::internal::util::NamespaceSupport* this$0, $StringArray* prefixes, int32_t size);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
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

#endif // _com_sun_org_apache_xerces_internal_util_NamespaceSupport$Prefixes_h_