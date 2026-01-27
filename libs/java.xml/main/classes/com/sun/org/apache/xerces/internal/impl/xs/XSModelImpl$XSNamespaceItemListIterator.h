#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl$XSNamespaceItemListIterator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl$XSNamespaceItemListIterator_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSModelImpl$XSNamespaceItemListIterator
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
								class XSModelImpl;
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
							class XSNamespaceItem;
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

class XSModelImpl$XSNamespaceItemListIterator : public ::java::util::ListIterator {
	$class(XSModelImpl$XSNamespaceItemListIterator, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	XSModelImpl$XSNamespaceItemListIterator();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl* this$0, int32_t index);
	void add(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* o);
	virtual void add(Object$* o) override;
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	void set(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* o);
	virtual void set(Object$* o) override;
	::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl* this$0 = nullptr;
	int32_t index = 0;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSModelImpl$XSNamespaceItemListIterator_h_