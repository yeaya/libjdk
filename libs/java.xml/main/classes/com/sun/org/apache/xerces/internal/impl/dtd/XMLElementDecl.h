#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLElementDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLElementDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLElementDecl
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE_ANY")
#undef TYPE_ANY
#pragma push_macro("TYPE_CHILDREN")
#undef TYPE_CHILDREN
#pragma push_macro("TYPE_EMPTY")
#undef TYPE_EMPTY
#pragma push_macro("TYPE_MIXED")
#undef TYPE_MIXED
#pragma push_macro("TYPE_SIMPLE")
#undef TYPE_SIMPLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class XMLSimpleType;
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
						namespace impl {
							namespace dtd {
								namespace models {
									class ContentModelValidator;
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
						namespace xni {
							class QName;
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
							namespace dtd {

class XMLElementDecl : public ::java::lang::Object {
	$class(XMLElementDecl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLElementDecl();
	void init$();
	virtual void clear();
	virtual void setValues(::com::sun::org::apache::xerces::internal::xni::QName* name, int32_t scope, int16_t type, ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator* contentModelValidator, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType* simpleType);
	static const int16_t TYPE_ANY = 0;
	static const int16_t TYPE_EMPTY = 1;
	static const int16_t TYPE_MIXED = 2;
	static const int16_t TYPE_CHILDREN = 3;
	static const int16_t TYPE_SIMPLE = 4;
	::com::sun::org::apache::xerces::internal::xni::QName* name = nullptr;
	int32_t scope = 0;
	int16_t type = 0;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator* contentModelValidator = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLSimpleType* simpleType = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("TYPE_ANY")
#pragma pop_macro("TYPE_CHILDREN")
#pragma pop_macro("TYPE_EMPTY")
#pragma pop_macro("TYPE_MIXED")
#pragma pop_macro("TYPE_SIMPLE")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLElementDecl_h_