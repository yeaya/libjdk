#ifndef _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM
//$ extends com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator

#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEBUG_VALIDATE_CONTENT")
#undef DEBUG_VALIDATE_CONTENT
#pragma push_macro("XSDFACM")
#undef XSDFACM

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
						namespace impl {
							namespace xs {
								class SubstitutionGroupHandler;
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
									class XSCMLeaf;
									class XSDFACM$Occurence;
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
namespace java {
	namespace util {
		class List;
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

class XSDFACM : public ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator {
	$class(XSDFACM, 0, ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator)
public:
	XSDFACM();
	void init$(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* syntaxTree, int32_t leafCount);
	void buildDFA(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* syntaxTree);
	void calcFollowList(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur);
	virtual ::java::util::List* checkMinMaxBounds() override;
	virtual bool checkUniqueParticleAttribution(::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	void dumpTree(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur, int32_t level);
	virtual bool endContentModel($ints* state) override;
	virtual $Object* findMatchingDecl(::com::sun::org::apache::xerces::internal::xni::QName* curElem, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler);
	virtual $Object* findMatchingDecl(::com::sun::org::apache::xerces::internal::xni::QName* curElem, $ints* state, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler, int32_t elemIndex);
	virtual $String* getTermName(int32_t termId) override;
	virtual bool isCompactedForUPA() override;
	virtual bool isFinalState(int32_t state);
	$ints* makeDefStateList();
	virtual $ints* occurenceInfo($ints* state) override;
	virtual $Object* oneTransition(::com::sun::org::apache::xerces::internal::xni::QName* curElem, $ints* state, ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler* subGroupHandler) override;
	void postTreeBuildInit(::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* nodeCur);
	virtual $ints* startContentModel() override;
	virtual ::java::util::List* whatCanGoHere($ints* state) override;
	static const bool DEBUG = false;
	static const bool DEBUG_VALIDATE_CONTENT = false;
	$ObjectArray* fElemMap = nullptr;
	$ints* fElemMapType = nullptr;
	$ints* fElemMapId = nullptr;
	int32_t fElemMapSize = 0;
	$booleans* fFinalStateFlags = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet>* fFollowList = nullptr;
	::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode* fHeadNode = nullptr;
	int32_t fLeafCount = 0;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf>* fLeafList = nullptr;
	$ints* fLeafListType = nullptr;
	$Array<int32_t, 2>* fTransTable = nullptr;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM$Occurence>* fCountingStates = nullptr;
	int32_t fTransTableSize = 0;
	bool fIsCompactedForUPA = false;
	$ints* fElemMapCounter = nullptr;
	$ints* fElemMapCounterLowerBound = nullptr;
	$ints* fElemMapCounterUpperBound = nullptr;
	static int64_t time;
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

#pragma pop_macro("DEBUG")
#pragma pop_macro("DEBUG_VALIDATE_CONTENT")
#pragma pop_macro("XSDFACM")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_models_XSDFACM_h_