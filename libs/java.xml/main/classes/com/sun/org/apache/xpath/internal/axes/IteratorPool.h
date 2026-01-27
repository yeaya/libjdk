#ifndef _com_sun_org_apache_xpath_internal_axes_IteratorPool_h_
#define _com_sun_org_apache_xpath_internal_axes_IteratorPool_h_
//$ class com.sun.org.apache.xpath.internal.axes.IteratorPool
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMIterator;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

class IteratorPool : public ::java::io::Serializable {
	$class(IteratorPool, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	IteratorPool();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* original);
	void freeInstance(::com::sun::org::apache::xml::internal::dtm::DTMIterator* obj);
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* getInstance();
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* getInstanceOrThrow();
	static const int64_t serialVersionUID = (int64_t)0xF99A7508CF8FABEA;
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* m_orig = nullptr;
	::java::util::List* m_freeStack = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_IteratorPool_h_