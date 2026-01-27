#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeGroupDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeGroupDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSAttributeGroupDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSAttributeGroupDefinition

#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <java/lang/Array.h>

#pragma push_macro("INITIAL_SIZE")
#undef INITIAL_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSAttributeUseImpl;
								class XSWildcardDecl;
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
							class XSAnnotation;
							class XSAttributeUse;
							class XSNamespaceItem;
							class XSObjectList;
							class XSWildcard;
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

class XSAttributeGroupDecl : public ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition {
	$class(XSAttributeGroupDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition)
public:
	XSAttributeGroupDecl();
	void init$();
	virtual $String* addAttributeUse(::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* attrUse);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse* getAttributeUse($String* namespace$, $String* name);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAttributeUse* getAttributeUseNoProhibited($String* namespace$, $String* name);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAttributeUses() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSWildcard* getAttributeWildcard() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getType() override;
	virtual void removeProhibitedAttrs();
	virtual void replaceAttributeUse(::com::sun::org::apache::xerces::internal::xs::XSAttributeUse* oldUse, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* newUse);
	virtual void reset();
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl>* oldArray, int32_t newSize);
	virtual void setNamespaceItem(::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* namespaceItem);
	virtual $ObjectArray* validRestrictionOf($String* typeName, ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl* baseGroup);
	$String* fName = nullptr;
	$String* fTargetNamespace = nullptr;
	int32_t fAttrUseNum = 0;
	static const int32_t INITIAL_SIZE = 5;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl>* fAttributeUses = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* fAttributeWC = nullptr;
	$String* fIDAttrName = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl* fAttrUses = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* fNamespaceItem = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INITIAL_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSAttributeGroupDecl_h_