#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_CMBuilder_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_CMBuilder_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.CMBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {
									class CMNode;
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
								class XSComplexTypeDecl;
								class XSDeclarationPool;
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
								namespace models {
									class CMNodeFactory;
									class XSCMValidator;
									class XSEmptyCM;
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
								namespace models {

class CMBuilder : public ::java::lang::Object {
	$class(CMBuilder, 0, ::java::lang::Object)
public:
	CMBuilder();
	void init$(::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory* nodeFactory);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* buildCompactSyntaxTree(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* buildCompactSyntaxTree2(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, int32_t minOccurs, int32_t maxOccurs);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* buildSyntaxTree(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, bool forUPA, bool optimize);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* copyNode(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* node);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* createAllCM(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* createDFACM(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle, bool forUPA);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* expandContentModel(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* node, int32_t minOccurs, int32_t maxOccurs, bool optimize);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator* getContentModel(::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl* typeDecl, bool forUPA);
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* multiNodes(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* node, int32_t num, bool copyFirst);
	virtual void setDeclPool(::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* declPool);
	bool useRepeatingLeafNodes(::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl* particle);
	::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* fDeclPool = nullptr;
	static ::com::sun::org::apache::xerces::internal::impl::xs::models::XSEmptyCM* fEmptyCM;
	int32_t fLeafCount = 0;
	int32_t fParticleCount = 0;
	::com::sun::org::apache::xerces::internal::impl::xs::models::CMNodeFactory* fNodeFactory = nullptr;
};

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_CMBuilder_h_