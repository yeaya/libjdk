#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSModelGroupImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSModelGroupImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSModelGroupImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSModelGroup

#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <java/lang/Array.h>

#pragma push_macro("MODELGROUP_ALL")
#undef MODELGROUP_ALL
#pragma push_macro("MODELGROUP_CHOICE")
#undef MODELGROUP_CHOICE
#pragma push_macro("MODELGROUP_SEQUENCE")
#undef MODELGROUP_SEQUENCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class XSParticleDecl;
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

class XSModelGroupImpl : public ::com::sun::org::apache::xerces::internal::xs::XSModelGroup {
	$class(XSModelGroupImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSModelGroup)
public:
	XSModelGroupImpl();
	void init$();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSAnnotation* getAnnotation() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int16_t getCompositor() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getParticles() override;
	virtual int16_t getType() override;
	virtual bool isEmpty();
	virtual int32_t maxEffectiveTotalRange();
	int32_t maxEffectiveTotalRangeAllSeq();
	int32_t maxEffectiveTotalRangeChoice();
	virtual int32_t minEffectiveTotalRange();
	int32_t minEffectiveTotalRangeAllSeq();
	int32_t minEffectiveTotalRangeChoice();
	virtual void reset();
	virtual $String* toString() override;
	static const int16_t MODELGROUP_CHOICE = 101;
	static const int16_t MODELGROUP_SEQUENCE = 102;
	static const int16_t MODELGROUP_ALL = 103;
	int16_t fCompositor = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>* fParticles = nullptr;
	int32_t fParticleCount = 0;
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

#pragma pop_macro("MODELGROUP_ALL")
#pragma pop_macro("MODELGROUP_CHOICE")
#pragma pop_macro("MODELGROUP_SEQUENCE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSModelGroupImpl_h_