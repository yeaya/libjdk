#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSDeclarationPool_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSDeclarationPool_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSDeclarationPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SHIFT")
#undef CHUNK_SHIFT
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("INITIAL_CHUNK_COUNT")
#undef INITIAL_CHUNK_COUNT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {
									class SchemaDVFactoryImpl;
									class XSSimpleTypeDecl;
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
						namespace impl {
							namespace xs {
								class XSAttributeDecl;
								class XSAttributeUseImpl;
								class XSComplexTypeDecl;
								class XSElementDecl;
								class XSModelGroupImpl;
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

class XSDeclarationPool : public ::java::lang::Object {
	$class(XSDeclarationPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDeclarationPool();
	void init$();
	bool ensureAttrDeclCapacity(int32_t chunk);
	bool ensureAttributeUseCapacity(int32_t chunk);
	bool ensureCTDeclCapacity(int32_t chunk);
	bool ensureElementDeclCapacity(int32_t chunk);
	bool ensureModelGroupCapacity(int32_t chunk);
	bool ensureParticleDeclCapacity(int32_t chunk);
	bool ensureSTDeclCapacity(int32_t chunk);
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl* getAttributeDecl();
	::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl* getAttributeUse();
	::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* getComplexTypeDecl();
	::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl* getElementDecl();
	::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl* getModelGroup();
	::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* getParticleDecl();
	::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* getSimpleTypeDecl();
	void reset();
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl, 2>* array, int32_t newsize);
	static $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl, 2>* resize($Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl, 2>* array, int32_t newsize);
	void setDVFactory(::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDVFactoryImpl* dvFactory);
	static const int32_t CHUNK_SHIFT = 8;
	static const int32_t CHUNK_SIZE = 256; // 1 << CHUNK_SHIFT
	static const int32_t CHUNK_MASK = 255; // CHUNK_SIZE - 1
	static const int32_t INITIAL_CHUNK_COUNT = 4; // (1 << (10 - CHUNK_SHIFT))
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl, 2>* fElementDecl = nullptr;
	int32_t fElementDeclIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl, 2>* fParticleDecl = nullptr;
	int32_t fParticleDeclIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl, 2>* fModelGroup = nullptr;
	int32_t fModelGroupIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl, 2>* fAttrDecl = nullptr;
	int32_t fAttrDeclIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl, 2>* fCTDecl = nullptr;
	int32_t fCTDeclIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl, 2>* fSTDecl = nullptr;
	int32_t fSTDeclIndex = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl, 2>* fAttributeUse = nullptr;
	int32_t fAttributeUseIndex = 0;
	::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDVFactoryImpl* dvFactory = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SHIFT")
#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("INITIAL_CHUNK_COUNT")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSDeclarationPool_h_