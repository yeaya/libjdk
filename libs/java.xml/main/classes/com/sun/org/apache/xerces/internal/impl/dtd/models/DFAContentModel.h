#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_models_DFAContentModel_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_models_DFAContentModel_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.models.DFAContentModel
//$ extends com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG_VALIDATE_CONTENT")
#undef DEBUG_VALIDATE_CONTENT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {
									class CMLeaf;
									class CMNode;
									class CMStateSet;
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
						namespace impl {
							namespace dtd {
								namespace models {

class DFAContentModel : public ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator {
	$class(DFAContentModel, 0, ::com::sun::org::apache::xerces::internal::impl::dtd::models::ContentModelValidator)
public:
	DFAContentModel();
	void init$(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* syntaxTree, int32_t leafCount, bool mixed);
	void buildDFA(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* syntaxTree);
	void calcFollowList(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur);
	void dumpTree(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur, int32_t level);
	$ints* makeDefStateList();
	int32_t postTreeBuildInit(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur, int32_t curIndex);
	virtual int32_t validate($Array<::com::sun::org::apache::xerces::internal::xni::QName>* children, int32_t offset, int32_t length) override;
	static $String* fEpsilonString;
	static $String* fEOCString;
	static const bool DEBUG_VALIDATE_CONTENT = false;
	$Array<::com::sun::org::apache::xerces::internal::xni::QName>* fElemMap = nullptr;
	$ints* fElemMapType = nullptr;
	int32_t fElemMapSize = 0;
	bool fMixed = false;
	int32_t fEOCPos = 0;
	$booleans* fFinalStateFlags = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet>* fFollowList = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* fHeadNode = nullptr;
	int32_t fLeafCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf>* fLeafList = nullptr;
	$ints* fLeafListType = nullptr;
	$Array<int32_t, 2>* fTransTable = nullptr;
	int32_t fTransTableSize = 0;
	bool fEmptyContentIsValid = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fQName = nullptr;
};

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG_VALIDATE_CONTENT")

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_models_DFAContentModel_h_