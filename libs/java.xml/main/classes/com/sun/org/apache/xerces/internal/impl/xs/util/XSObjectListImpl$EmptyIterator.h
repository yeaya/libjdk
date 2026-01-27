#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$EmptyIterator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$EmptyIterator_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.XSObjectListImpl$EmptyIterator
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

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

class XSObjectListImpl$EmptyIterator : public ::java::util::ListIterator {
	$class(XSObjectListImpl$EmptyIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	XSObjectListImpl$EmptyIterator();
	void init$();
	virtual void add(::com::sun::org::apache::xerces::internal::xs::XSObject* object);
	virtual void add(Object$* object) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(::com::sun::org::apache::xerces::internal::xs::XSObject* object);
	virtual void set(Object$* object) override;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_XSObjectListImpl$EmptyIterator_h_