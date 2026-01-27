#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$XSObjectListIterator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$XSObjectListIterator_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$XSObjectListIterator
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {
									class XSObjectListImpl;
								}
							}
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
						namespace xs {
							class XSObject;
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
						namespace impl {
							namespace xs {
								namespace util {

class XSObjectListImpl$XSObjectListIterator : public ::java::util::ListIterator {
	$class(XSObjectListImpl$XSObjectListIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	XSObjectListImpl$XSObjectListIterator();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* this$0, int32_t index);
	void add(::com::sun::org::apache::xerces::internal::xs::XSObject* o);
	virtual void add(Object$* o) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	void set(::com::sun::org::apache::xerces::internal::xs::XSObject* o);
	virtual void set(Object$* o) override;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* this$0 = nullptr;
	int32_t index = 0;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$XSObjectListIterator_h_