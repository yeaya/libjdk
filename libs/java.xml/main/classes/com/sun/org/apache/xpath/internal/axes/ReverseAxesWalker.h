#ifndef _com_sun_org_apache_xpath_internal_axes_ReverseAxesWalker_h_
#define _com_sun_org_apache_xpath_internal_axes_ReverseAxesWalker_h_
//$ class com.sun.org.apache.xpath.internal.axes.ReverseAxesWalker
//$ extends com.sun.org.apache.xpath.internal.axes.AxesWalker

#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
						class XPathContext;
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
							class LocPathIterator;
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

class ReverseAxesWalker : public ::com::sun::org::apache::xpath::internal::axes::AxesWalker {
	$class(ReverseAxesWalker, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::AxesWalker)
public:
	ReverseAxesWalker();
	using ::com::sun::org::apache::xpath::internal::axes::AxesWalker::getProximityPosition;
	using ::com::sun::org::apache::xpath::internal::axes::AxesWalker::execute;
	void init$(::com::sun::org::apache::xpath::internal::axes::LocPathIterator* locPathIterator, int32_t axis);
	virtual void countProximityPosition(int32_t i) override;
	virtual void detach() override;
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getNextNode() override;
	virtual int32_t getProximityPosition(int32_t predicateIndex) override;
	virtual bool isDocOrdered() override;
	virtual bool isReverseAxes() override;
	virtual void setRoot(int32_t root) override;
	static const int64_t serialVersionUID = (int64_t)0x27829A5F21E481AD;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* m_iterator = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_ReverseAxesWalker_h_