#ifndef _com_sun_org_apache_xpath_internal_axes_NodeSequence$IteratorCache_h_
#define _com_sun_org_apache_xpath_internal_axes_NodeSequence$IteratorCache_h_
//$ class com.sun.org.apache.xpath.internal.axes.NodeSequence$IteratorCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class NodeVector;
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
				namespace xpath {
					namespace internal {
						namespace axes {

class NodeSequence$IteratorCache : public ::java::lang::Object {
	$class(NodeSequence$IteratorCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NodeSequence$IteratorCache();
	void init$();
	::com::sun::org::apache::xml::internal::utils::NodeVector* getVector();
	void increaseUseCount();
	bool isComplete();
	void setCacheComplete(bool b);
	void setVector(::com::sun::org::apache::xml::internal::utils::NodeVector* nv);
	int32_t useCount();
	::com::sun::org::apache::xml::internal::utils::NodeVector* m_vec2 = nullptr;
	bool m_isComplete2 = false;
	int32_t m_useCount2 = 0;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_NodeSequence$IteratorCache_h_