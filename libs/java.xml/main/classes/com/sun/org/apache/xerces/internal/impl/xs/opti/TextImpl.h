#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_TextImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_TextImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.TextImpl
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultText

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultText.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {
									class SchemaDOM;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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
								namespace opti {

class TextImpl : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText {
	$class(TextImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText)
public:
	TextImpl();
	void init$(::java::lang::StringBuffer* str, ::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM* sDOM, int32_t row, int32_t col);
	virtual $String* getData() override;
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $String* substringData(int32_t offset, int32_t count) override;
	$String* fData = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM* fSchemaDOM = nullptr;
	int32_t fRow = 0;
	int32_t fCol = 0;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_TextImpl_h_