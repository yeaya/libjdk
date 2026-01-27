#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSParticleDecl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSParticleDecl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSParticleDecl
//$ extends com.sun.org.apache.xerces.internal.xs.XSParticle

#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>

#pragma push_macro("PARTICLE_ELEMENT")
#undef PARTICLE_ELEMENT
#pragma push_macro("PARTICLE_EMPTY")
#undef PARTICLE_EMPTY
#pragma push_macro("PARTICLE_MODELGROUP")
#undef PARTICLE_MODELGROUP
#pragma push_macro("PARTICLE_ONE_OR_MORE")
#undef PARTICLE_ONE_OR_MORE
#pragma push_macro("PARTICLE_WILDCARD")
#undef PARTICLE_WILDCARD
#pragma push_macro("PARTICLE_ZERO_OR_MORE")
#undef PARTICLE_ZERO_OR_MORE
#pragma push_macro("PARTICLE_ZERO_OR_ONE")
#undef PARTICLE_ZERO_OR_ONE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSNamespaceItem;
							class XSObjectList;
							class XSTerm;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XSParticleDecl : public ::com::sun::org::apache::xerces::internal::xs::XSParticle {
	$class(XSParticleDecl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSParticle)
public:
	XSParticleDecl();
	void init$();
	virtual void appendParticle(::java::lang::StringBuffer* buffer);
	virtual bool emptiable();
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObjectList* getAnnotations() override;
	virtual int32_t getMaxOccurs() override;
	virtual bool getMaxOccursUnbounded() override;
	virtual int32_t getMinOccurs() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSTerm* getTerm() override;
	virtual int16_t getType() override;
	virtual bool isEmpty();
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* makeClone();
	virtual int32_t maxEffectiveTotalRange();
	virtual int32_t minEffectiveTotalRange();
	virtual void reset();
	virtual $String* toString() override;
	static const int16_t PARTICLE_EMPTY = 0;
	static const int16_t PARTICLE_ELEMENT = 1;
	static const int16_t PARTICLE_WILDCARD = 2;
	static const int16_t PARTICLE_MODELGROUP = 3;
	static const int16_t PARTICLE_ZERO_OR_MORE = 4;
	static const int16_t PARTICLE_ZERO_OR_ONE = 5;
	static const int16_t PARTICLE_ONE_OR_MORE = 6;
	int16_t fType = 0;
	::com::sun::org::apache::xerces::internal::xs::XSTerm* fValue = nullptr;
	int32_t fMinOccurs = 0;
	int32_t fMaxOccurs = 0;
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

#pragma pop_macro("PARTICLE_ELEMENT")
#pragma pop_macro("PARTICLE_EMPTY")
#pragma pop_macro("PARTICLE_MODELGROUP")
#pragma pop_macro("PARTICLE_ONE_OR_MORE")
#pragma pop_macro("PARTICLE_WILDCARD")
#pragma pop_macro("PARTICLE_ZERO_OR_MORE")
#pragma pop_macro("PARTICLE_ZERO_OR_ONE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSParticleDecl_h_