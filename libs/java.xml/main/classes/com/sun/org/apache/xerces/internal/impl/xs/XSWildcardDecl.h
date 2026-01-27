#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSWildcardDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSWildcardDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSWildcardDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSWildcard

#include <com/sun/org/apache/xerces/internal/xs/XSWildcard.h>
#include <java/lang/Array.h>

#pragma push_macro("ABSENT")
#undef ABSENT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class StringList;
							class XSAnnotation;
							class XSNamespaceItem;
							class XSObjectList;
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

class XSWildcardDecl : public ::com::sun::org::apache::xerces::internal::xs::XSWildcard {
	$class(XSWildcardDecl, 0, ::com::sun::org::apache::xerces::internal::xs::XSWildcard)
public:
	XSWildcardDecl();
	void init$();
	virtual bool allowNamespace($String* namespace$);
	bool areSame(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard);
	virtual bool elementInSet($String* ele, $StringArray* set);
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getConstraintType() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::StringList* getNsConstraintList() override;
	virtual int16_t getProcessContents() override;
	virtual $String* getProcessContentsAsString();
	virtual int16_t getType() override;
	virtual $StringArray* intersect2sets($StringArray* one, $StringArray* theOther);
	virtual bool isSubsetOf(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* superWildcard);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* performIntersectionWith(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard, int16_t processContents);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* performUnionWith(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* wildcard, int16_t processContents);
	virtual bool subset2sets($StringArray* subSet, $StringArray* superSet);
	virtual $String* toString() override;
	virtual $StringArray* union2sets($StringArray* one, $StringArray* theOther);
	virtual bool weakerProcessContents(::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl* superWildcard);
	static $String* ABSENT;
	int16_t fType = 0;
	int16_t fProcessContents = 0;
	$StringArray* fNamespaceList = nullptr;
	::com::sun::org::apache::xerces::internal::xs::XSObjectList* fAnnotations = nullptr;
	$String* fDescription = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ABSENT")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSWildcardDecl_h_