#ifndef _com_sun_org_apache_xerces_internal_impl_dv_xs_BaseSchemaDVFactory_h_
#define _com_sun_org_apache_xerces_internal_impl_dv_xs_BaseSchemaDVFactory_h_
//$ class com.sun.org.apache.xerces.internal.impl.dv.xs.BaseSchemaDVFactory
//$ extends com.sun.org.apache.xerces.internal.impl.dv.SchemaDVFactory

#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>
#include <java/lang/Array.h>

#pragma push_macro("URI_SCHEMAFORSCHEMA")
#undef URI_SCHEMAFORSCHEMA

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								class XSSimpleType;
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
							namespace dv {
								namespace xs {
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
								class XSDeclarationPool;
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
						namespace util {
							class SymbolHash;
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
							namespace dv {
								namespace xs {

class BaseSchemaDVFactory : public ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory {
	$class(BaseSchemaDVFactory, 0, ::com::sun::org::apache::xerces::internal::impl::dv::SchemaDVFactory)
public:
	BaseSchemaDVFactory();
	void init$();
	static void createBuiltInTypes(::com::sun::org::apache::xerces::internal::util::SymbolHash* builtInTypes, ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* baseAtomicType);
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeList($String* name, $String* targetNamespace, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* itemType, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeRestriction($String* name, $String* targetNamespace, int16_t finalSet, ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* base, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType* createTypeUnion($String* name, $String* targetNamespace, int16_t finalSet, $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>* memberTypes, ::com::sun::org::apache::xerces::internal::xs::XSObjectList* annotations) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl* newXSSimpleTypeDecl();
	virtual void setDeclPool(::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* declPool);
	static $String* URI_SCHEMAFORSCHEMA;
	::com::sun::org::apache::xerces::internal::impl::xs::XSDeclarationPool* fDeclPool = nullptr;
};

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("URI_SCHEMAFORSCHEMA")

#endif // _com_sun_org_apache_xerces_internal_impl_dv_xs_BaseSchemaDVFactory_h_