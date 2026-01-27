#ifndef _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.SubstitutionGroupHandler
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_GROUP")
#undef EMPTY_GROUP
#pragma push_macro("EMPTY_VECTOR")
#undef EMPTY_VECTOR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SubstitutionGroupHandler$OneSubGroup;
								class XSElementDecl;
								class XSElementDeclHelper;
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
						namespace xs {
							class XSTypeDefinition;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class SubstitutionGroupHandler : public ::java::lang::Object {
	$class(SubstitutionGroupHandler, 0, ::java::lang::Object)
public:
	SubstitutionGroupHandler();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper* elementDeclHelper);
	virtual void addSubstitutionGroup($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* elements);
	bool getDBMethods(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typed, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* typeb, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup* methods);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getMatchingElemDecl(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* exemplar);
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup>* getSubGroupB(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup* methods);
	virtual $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* getSubstitutionGroup(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element);
	virtual bool inSubstitutionGroup(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* exemplar);
	virtual void reset();
	virtual bool substitutionGroupOK(::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* element, ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* exemplar, int16_t blockingConstraint);
	bool typeDerivationOK(::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* derived, ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition* base, int16_t blockingConstraint);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>* EMPTY_GROUP;
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDeclHelper* fXSElementDeclHelper = nullptr;
	::java::util::Map* fSubGroupsB = nullptr;
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler$OneSubGroup>* EMPTY_VECTOR;
	::java::util::Map* fSubGroups = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_GROUP")
#pragma pop_macro("EMPTY_VECTOR")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_SubstitutionGroupHandler_h_