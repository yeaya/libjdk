#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_BalancedDTDGrammar_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_BalancedDTDGrammar_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.BalancedDTDGrammar
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.DTDGrammar

#include <com/sun/org/apache/xerces/internal/impl/dtd/DTDGrammar.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class XMLDTDDescription;
								class XMLElementDecl;
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
							class SymbolTable;
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
							class Augmentations;
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

class BalancedDTDGrammar : public ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar {
	$class(BalancedDTDGrammar, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar)
public:
	BalancedDTDGrammar();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDDescription* desc);
	int32_t addContentSpecNodes(int32_t begin, int32_t end);
	virtual void addContentSpecToElement(::com::sun::org::apache::xerces::internal::impl::dtd::XMLElementDecl* elementDecl) override;
	void addToCurrentGroup(int32_t contentSpec);
	virtual void element($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void initializeContentModelStacks();
	virtual void occurrence(int16_t occurrence, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void pcdata(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void separator(int16_t separator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startContentModel($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGroup(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	bool fMixed = false;
	int32_t fDepth = 0;
	$shorts* fOpStack = nullptr;
	$Array<int32_t, 2>* fGroupIndexStack = nullptr;
	$ints* fGroupIndexStackSizes = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_BalancedDTDGrammar_h_