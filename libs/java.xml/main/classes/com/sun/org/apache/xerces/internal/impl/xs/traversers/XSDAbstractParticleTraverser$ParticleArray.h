#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser$ParticleArray_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser$ParticleArray_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDAbstractParticleTraverser$ParticleArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
						namespace impl {
							namespace xs {
								namespace traversers {

class XSDAbstractParticleTraverser$ParticleArray : public ::java::lang::Object {
	$class(XSDAbstractParticleTraverser$ParticleArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDAbstractParticleTraverser$ParticleArray();
	void init$();
	virtual void addParticle(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	virtual int32_t getParticleCount();
	virtual $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>* popContext();
	virtual void pushContext();
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>* fParticles = nullptr;
	$ints* fPos = nullptr;
	int32_t fContextCount = 0;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDAbstractParticleTraverser$ParticleArray_h_