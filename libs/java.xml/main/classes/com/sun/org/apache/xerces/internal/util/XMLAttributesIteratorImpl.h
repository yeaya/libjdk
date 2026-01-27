#ifndef _com_sun_org_apache_xerces_internal_util_XMLAttributesIteratorImpl_h_
#define _com_sun_org_apache_xerces_internal_util_XMLAttributesIteratorImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLAttributesIteratorImpl
//$ extends com.sun.org.apache.xerces.internal.util.XMLAttributesImpl
//$ implements java.util.Iterator

#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class XMLAttributesImpl$Attribute;
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

class XMLAttributesIteratorImpl : public ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl, public ::java::util::Iterator {
	$class(XMLAttributesIteratorImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl, ::java::util::Iterator)
public:
	XMLAttributesIteratorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	virtual void removeAllAttributes() override;
	virtual $String* toString() override;
	int32_t fCurrent = 0;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl$Attribute* fLastReturnedItem = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLAttributesIteratorImpl_h_